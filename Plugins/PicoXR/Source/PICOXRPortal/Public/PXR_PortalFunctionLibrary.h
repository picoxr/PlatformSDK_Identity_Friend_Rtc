// Copyright® PICO Technology Co., Ltd. All rights reserved.
// This plugin incorporates portions of the Unreal® Engine. Unreal® is a trademark or registered trademark of Epic Games, Inc. in the United States of America and elsewhere.
// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "PXR_VerificationObject.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PXR_PortalFunctionLibrary.generated.h"

UENUM(BlueprintType)
enum class EPICOXRAppLogType : uint8
{
	None,
	//Version
	EngineVersion,
	SDKVersion,
	SDKType,
	EngineType,
	
	PICOXRPortalStartUp,
	ProjectVerificationStartUp,
	PICOSettingsStartUp,
	//Download
	PICODeveloperCenter,
	PICOEmulator,
	//Samples
	GetStartedSample,
	PlatformSample,
	SpatialAudioSample,
	MRSample,
	HandTrackingSample,
	ControllerInteraction,
	BodyTracking,
	//About
	PICODeveloperWebsite,
	DownloadFromPICO_Official,
	DownloadFromUnreal_Fab,
	DownloadPICOForkOfUnrealEngine,
	//Actor
	SpatialMeshActor,
	SpatialAnchorActor,
	SceneCapturesGenerator,
	PICOXRPawn,
	//Components
	HandTrackingComponent,
	EyeTrackingComponent,
	FaceTrackingComponent,
	//Settings
	DeferredShading,
	ForwardShading,
	MobileHDR,
	LateLatching,
	MovableSpotlight,
	ApplicationSpaceWarp,
	ToneMapping,
	FXAA,
	TAA,
	MSAA,
};

/**
 * 
 */
UCLASS()
class PICOXRPORTAL_API UPICOXRPortalFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "PXR|Portal")
	static void StartUpdatePortalTick();
	
	UFUNCTION(BlueprintCallable, Category = "PXR|Portal")
	static bool IsShowPortalOnEditorStart();

	UFUNCTION(BlueprintCallable, Category = "PXR|Portal")
	static bool IsBehaviorDataCollectionEnabled();

	UFUNCTION(BlueprintCallable, Category = "PXR|Portal")
	static void SetShowPortalOnEditorStart(bool bShowPortalOnEditorStart);

	UFUNCTION(BlueprintCallable, Category = "PXR|Portal")
	static void SetBehaviorDataCollectionEnabled(bool bEnableBehaviorDataCollection);

	UFUNCTION(BlueprintCallable, Category = "PXR|Portal")
	static void LaunchPICOSettings();

	UFUNCTION(BlueprintPure, Category = "PXR|Portal")
	static FString GetPICOSDKVersionString();

	// AppLog
	UFUNCTION(BlueprintCallable, Category = "PXR|Portal")
	static void AddAppLogByType(EPICOXRAppLogType AppLogType,const FString& AppLogString = "");
	
	UFUNCTION(BlueprintPure, Category = "PXR|Verificaton")
	static TArray<UVerificationObject*> GetFixedVerificationObjects();

	UFUNCTION(BlueprintPure, Category = "PXR|Verificaton")
	static TArray<UVerificationObject*> GetRequiredVerificationObjects();
	
	UFUNCTION(BlueprintCallable, Category = "PXR|Verificaton")
	static class UPICOXRVerificatonEventManager* PXR_GetVerificationEventManager();

	static bool HasVerificationNeedRestart();

	static void SetVerificationNeedRestart(bool bRestart);

	UFUNCTION(BlueprintCallable, Category = "PXR|Verificaton")
	static void FixAllVerifications();
	
	UFUNCTION(BlueprintPure, Category = "PXR|Verification")
	static bool IsXRPluginVerified();

	UFUNCTION(BlueprintCallable, Category = "PXR|Verification")
	static void FixXRPluginConfig();

	UFUNCTION(BlueprintPure, Category = "PXR|Verification")
	static bool IsVulkanVerified();

	UFUNCTION(BlueprintCallable, Category = "PXR|Verification")
	static void FixVulkanConfig();
	
	UFUNCTION(BlueprintPure, Category = "PXR|Verification")
	static bool IsMultiviewVerified();

	UFUNCTION(BlueprintCallable, Category = "PXR|Verification")
	static void FixMultiviewConfig();
	
	UFUNCTION(BlueprintPure, Category = "PXR|Verification")
	static bool IsAndroidSDKVersionVerified();

	UFUNCTION(BlueprintCallable, Category = "PXR|Verification")
	static void FixAndroidSDKVersionConfig();
private:
	static bool bShowRestartEditorButton;

	// AppLog
	static FString XRPortal;
	static FString XRToolKit;
	static FString XRSettings;
	static FString XREngineVersion;
	static FString XRSDKVersion;
	static FString SDKType;
	static FString EngineType;
	static FString PICOXRSDK;
	static FString OpenXRSDK;
	static FString OfficialEngine;
	static FString PICOCustomEngine;

	// AppLog events
	static FString XRPortalStartUp;
	static FString ProjectVerificationStartUp;
	static FString XRPICOSettingsStartUp;
	static FString PICODeveloperCenter;
	static FString PICOEmulator;
	static FString GetStartedSample;
	static FString PlatformSample;
	static FString SpatialAudioSample;
	static FString MRSample;
	static FString HandTrackingSample;
	static FString ControllerInteraction;
	static FString BodyTracking;
	static FString PICODeveloperWebsite;
	static FString DownloadFromPICO_Official;
	static FString DownloadFromUnreal_Fab;
	static FString DownloadPICOForkOfUnrealEngine;
	
	static FString SpatialMeshActor;
	static FString SpatialAnchorActor;
	static FString SceneCapturesGenerator;
	static FString PICOXRPawn;
	static FString HandTrackingComponent;
	static FString EyeTrackingComponent;
	static FString FaceTrackingComponent;
	
	static FString MobileHDR;
	static FString DeferredShading;
	static FString ForwardShading;
	static FString LateLatching;
	static FString MovableSpotlight;
	static FString ApplicationSpaceWarp;
	static FString ToneMapping;
	static FString FXAA;
	static FString TAA;
	static FString MSAA;
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FPXRVerificatonUpdatedDelegate);

UCLASS()
class UPICOXRVerificatonEventManager : public UObject
{
	GENERATED_BODY()
public:
	
	static UPICOXRVerificatonEventManager* GetInstance();
	
	UPROPERTY(BlueprintAssignable)
	FPXRVerificatonUpdatedDelegate VerificatonUpdatedDelegate;
};