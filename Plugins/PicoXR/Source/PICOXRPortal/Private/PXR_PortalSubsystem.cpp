// Copyright PICO Technology Co., Ltd. All rights reserved.
// This plugin incorporates portions of the Unreal® Engine. Unreal® is a trademark or registered trademark of Epic Games, Inc. in the United States of America and elsewhere.
// Copyright Epic Games, Inc. All Rights Reserved.

#include "PXR_PortalSubsystem.h"


#include "EditorUtilitySubsystem.h"
#include "PXR_PortalFunctionLibrary.h"
#include "PXR_SceneCapturesGenerator.h"
#include "PXR_SpatialAnchorActor.h"
#include "PXR_SpatialMeshActor.h"
#include "PXR_PICOXRPawn.h"

//Components
#include "PXR_HandComponent.h"
#include "PXR_EyeTrackingComponent.h"
#include "PXR_FaceTrackingComponent.h"
#include "Engine/RendererSettings.h"

template<typename VerificationObject>
void UPXR_PortalSubsystem::RegisterObject()
{
	VerificationObject* Obj=NewObject<VerificationObject>();

	if (Obj->IsVerificationFixed())
	{
		FixedVerificationObjects.Emplace(Obj);
	}
	else
	{
		RequiredVerificationObjects.Emplace(Obj);
	}
}

void UPXR_PortalSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);
	GetMutableDefault<UEditorUtilitySubsystem>()->StartupObjects.Add(FString(TEXT("/PICOXR/Blueprint/UI/EUB_MenuEntry.EUB_MenuEntry")));

	FixedVerificationObjects.Empty();
	RequiredVerificationObjects.Empty();
	RegisterObject<USetMSAAObject>();
	RegisterObject<UEnableMultiviewObject>();
	
	RegisterObject<UEnableVulkanObject>();
	RegisterObject<UHalfPrecisionFloatObject>();
	RegisterObject<UDisableAmbientOcclusionObject>();
	RegisterObject<UDisableOpenXRPluginObject>();
	RegisterObject<USetAndroidSDKMinimumObject>();
	RegisterObject<USetAndroidSDKTargetObject>();
	RegisterObject<USetArm64CPUObject>();
	RegisterObject<UDisableTouchInterfaceObject>();

#ifndef PICO_CUSTOM_ENGINE
	RegisterObject<UEnableMobileHDRObject>();
	RegisterObject<UDisableMovableSpotlightShadowsObject>();
#endif

	const URendererSettings* Settings = GetDefault<URendererSettings>();
	if (Settings->bMobilePostProcessing)
	{
		UPICOXRPortalFunctionLibrary::AddAppLogByType(EPICOXRAppLogType::MobileHDR);
	}
	if (Settings->MobileShadingPath == EMobileShadingPath::Deferred)
	{
		UPICOXRPortalFunctionLibrary::AddAppLogByType(EPICOXRAppLogType::DeferredShading);
	}
	if (Settings->MobileShadingPath == EMobileShadingPath::Forward)
	{
		UPICOXRPortalFunctionLibrary::AddAppLogByType(EPICOXRAppLogType::ForwardShading);
	}
	if (Settings->bMobileAllowMovableSpotlightShadows)
	{
		UPICOXRPortalFunctionLibrary::AddAppLogByType(EPICOXRAppLogType::MovableSpotlight);
	}
	if (Settings->MobileAntiAliasing == EMobileAntiAliasingMethod::Type::MSAA)
	{
		UPICOXRPortalFunctionLibrary::AddAppLogByType(EPICOXRAppLogType::MSAA);
	}
	else if (Settings->MobileAntiAliasing == EMobileAntiAliasingMethod::Type::FXAA)
	{
		UPICOXRPortalFunctionLibrary::AddAppLogByType(EPICOXRAppLogType::FXAA);
	}
	else if (Settings->MobileAntiAliasing == EMobileAntiAliasingMethod::Type::TemporalAA)
	{
		UPICOXRPortalFunctionLibrary::AddAppLogByType(EPICOXRAppLogType::TAA);
	}
#ifdef PICO_CUSTOM_ENGINE
	else if (Settings->bMobileSupportSpaceWarp)
	{
		UPICOXRPortalFunctionLibrary::AddAppLogByType(EPICOXRAppLogType::ApplicationSpaceWarp);
	}
#endif

	// Check Engine Version
	FString UnrealMajorVersion = FString::FromInt(ENGINE_MAJOR_VERSION);
	FString UnrealMinorVersion = FString::FromInt(ENGINE_MINOR_VERSION);
	FString UnrealPatchVersion = FString::FromInt(ENGINE_PATCH_VERSION);
	FString EngineVersion = UnrealMajorVersion + "." + UnrealMinorVersion + "." + UnrealPatchVersion;
	FString SDKVersion=UPICOXRPortalFunctionLibrary::GetPICOSDKVersionString();

	UPICOXRPortalFunctionLibrary::AddAppLogByType(EPICOXRAppLogType::EngineVersion,EngineVersion);
	UPICOXRPortalFunctionLibrary::AddAppLogByType(EPICOXRAppLogType::SDKVersion,SDKVersion);
	UPICOXRPortalFunctionLibrary::AddAppLogByType(EPICOXRAppLogType::SDKType);
	UPICOXRPortalFunctionLibrary::AddAppLogByType(EPICOXRAppLogType::EngineType);
}

void UPXR_PortalSubsystem::Deinitialize()
{
	Super::Deinitialize();

	UWorld* World = GWorld;
	if (World&&OnActorSpawnedHandle.IsValid())
	{
		World->RemoveOnActorSpawnedHandler(OnActorSpawnedHandle);
	}
}

bool UPXR_PortalSubsystem::Refresh(bool& bOutNeedRestartEditor)
{
	UWorld* World = GWorld;
	if (World&&!OnActorSpawnedHandle.IsValid())
	{
		OnActorSpawnedHandle = World->AddOnActorSpawnedHandler(FOnActorSpawned::FDelegate::CreateUObject(this, &UPXR_PortalSubsystem::HandleOnActorSpawned));
	}
	
	bool bHasChanged = false;
	
	auto MoveObjectBetweenArrays = [&](TArray<UVerificationObject*>& sourceArray, TArray<UVerificationObject*>& targetArray, bool (*condition)(UVerificationObject*))
	{
		for (auto It = sourceArray.CreateIterator(); It; ++It)
		{
			UVerificationObject* Object = *It;
			if (condition(Object))
			{
				bOutNeedRestartEditor=Object->RequiresEditorRestart();
				
				targetArray.Add(Object);
				It.RemoveCurrent();
				bHasChanged = true;
				break;
			}
		}
	};
	
	// RequiredVerificationObjects To FixedVerificationObjects
	MoveObjectBetweenArrays(RequiredVerificationObjects, FixedVerificationObjects, [](UVerificationObject* Obj) { return Obj->IsVerificationFixed(); });
	
	//FixedVerificationObjects To RequiredVerificationObjects
	MoveObjectBetweenArrays(FixedVerificationObjects, RequiredVerificationObjects, [](UVerificationObject* Obj) { return!Obj->IsVerificationFixed(); });
	
	return bHasChanged;
}

void UPXR_PortalSubsystem::HandleOnActorSpawned(AActor* Actor)
{
	if (Actor&&Actor->GetClass()->IsChildOf(APICOXRSceneCapturesGenerator::StaticClass()))
	{
		UPICOXRPortalFunctionLibrary::AddAppLogByType(EPICOXRAppLogType::SceneCapturesGenerator);
	}
	else if (Actor&&Actor->GetClass()->IsChildOf(APICOXRSpatialMeshActor::StaticClass()))
	{
		UPICOXRPortalFunctionLibrary::AddAppLogByType(EPICOXRAppLogType::SpatialMeshActor);
	}
	else if (Actor&&Actor->GetClass()->IsChildOf(APICOXRSpatialAnchorActor::StaticClass()))
	{
		UPICOXRPortalFunctionLibrary::AddAppLogByType(EPICOXRAppLogType::SpatialAnchorActor);
	}
	else if (Actor&&Actor->GetClass()->IsChildOf(APICOXRSpatialAnchorActor::StaticClass()))
	{
		UPICOXRPortalFunctionLibrary::AddAppLogByType(EPICOXRAppLogType::SpatialAnchorActor);
	}
	else if (Actor&&Actor->GetClass()->IsChildOf(APXR_PICOXRPawn::StaticClass()))
	{
		UPICOXRPortalFunctionLibrary::AddAppLogByType(EPICOXRAppLogType::PICOXRPawn);
	}
	
	for (auto Component : Actor->GetComponents())
	{
		if (Component&&Component->GetClass()->IsChildOf(UPICOXRHandComponent::StaticClass()))
		{
			UPICOXRPortalFunctionLibrary::AddAppLogByType(EPICOXRAppLogType::HandTrackingComponent);
		}
		else if (Component&&Component->GetClass()->IsChildOf(UPXR_EyeTrackingComponent::StaticClass()))
		{
			UPICOXRPortalFunctionLibrary::AddAppLogByType(EPICOXRAppLogType::EyeTrackingComponent);
		}
		else if (Component&&Component->GetClass()->IsChildOf(UPXR_FaceTrackingComponent::StaticClass()))
		{
			UPICOXRPortalFunctionLibrary::AddAppLogByType(EPICOXRAppLogType::FaceTrackingComponent);
		}
	}
	
}

