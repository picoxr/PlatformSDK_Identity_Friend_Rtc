// Copyright © 2015-2020 Pico Technology Co., Ltd. All Rights Reserved.

#include "PXR_HandComponent.h"

#include <GameFramework/PlayerController.h>

#include "PXR_EventManager.h"
#include "PXR_HandTracking.h"
#include "PXR_InputFunctionLibrary.h"
#include "PXR_InputState.h"
#include "Engine/SkeletalMesh.h"
#include "Components/InputComponent.h"
#include "Materials/MaterialInterface.h"
#include "PXR_HMDFunctionLibrary.h"
#include "Camera/PlayerCameraManager.h"
#if PLATFORM_ANDROID
#include "PxrInput.h"
#endif


const FString UPicoXRHandComponent::FBXHandBonePrefix = "p_";
const TArray<FString> UPicoXRHandComponent::FBXHandBoneNames =
{
	"wrist",
	"forearm_stub",
	"thumb0",
	"thumb1",
	"thumb2",
	"thumb3",
	"index1",
	"index2",
	"index3",
	"middle1",
	"middle2",
	"middle3",
	"ring1",
	"ring2",
	"ring3",
	"pinky0",
	"pinky1",
	"pinky2",
	"pinky3",
	"Hand_ThumbTip",
	"Hand_IndexTip",
	"Hand_MiddleTip",
	"Hand_RingTip",
	"Hand_PinkyTip"
};
const TArray<FString> UPicoXRHandComponent::FBXHandSidePrefix = {"l_", "r_"};

UPicoXRHandComponent::UPicoXRHandComponent(const FObjectInitializer& ObjectInitializer) :
	Super(ObjectInitializer),
	SkeletonType(EPicoXRHandType::None),
	MeshType(EPicoXRHandType::None),
	SystemGestureMaterial(nullptr),
	bInitializePhysics(false),
	bUpdateHandScale(false),
	MaterialOverride(nullptr)
{
	PrimaryComponentTick.bCanEverTick = true;
	PrimaryComponentTick.bStartWithTickEnabled = true;
	PrimaryComponentTick.TickGroup = TG_PrePhysics;

	bHasAuthority = false;
	bAutoActivate = true;

	RuntimeSkeletalMesh = nullptr;
	CachedBaseMaterial = nullptr;

	bAutoActivate = true;
	bWantsInitializeComponent = true;
	HandTrackingStage = FHandTrackingStage();
	WorldToMeters = GetWorld() ? GetWorld()->GetWorldSettings()->WorldToMeters : 100.0f;
	for (uint8 BoneIndex = 0; BoneIndex < static_cast<uint8>(EBone::Hand_End); BoneIndex++)
	{
		BoneNameMappings.Add(static_cast<EBone>(BoneIndex), TEXT(""));
	}
}

void UPicoXRHandComponent::BeginPlay()
{
	Super::BeginPlay();
	// Use custom mesh if a skeletal mesh is already set, else try to load the runtime mesh
	if (SkeletalMesh)
	{
		bCustomHandMesh = true;
		bSkeletalMeshInitialized = true;

		for (uint8 BoneIndex = 0; BoneIndex < static_cast<uint8>(EBone::Hand_End); BoneIndex++)
		{
			const EBone Index = static_cast<EBone>(BoneIndex);

			if (BoneNameMappings.Contains(Index))
			{
				BoneNameMappings[Index] = FbxBoneNameFromBoneId(SkeletonType, Index);
			}
		}
	}
	else
	{
		RuntimeSkeletalMesh = NewObject<USkeletalMesh>(this, TEXT("PicoXRHandMesh"));
		InitializeSkeletalMesh();
	}
	//used to Calculate Reset Animation Location
	if (GetWorld()->GetFirstPlayerController()->PlayerCameraManager!=nullptr)
	{
		CurrentCameraManager = GetWorld()->GetFirstPlayerController()->PlayerCameraManager;
	}
	
	UPicoXRHMDFunctionLibrary::PXR_GetEventManager()->HandMenuPressedDelegate.AddDynamic(this, &UPicoXRHandComponent::StageCallBackFunction);
	
	if (Animation2DClass != nullptr)
	{
		Animation2DActor = GetWorld()->SpawnActor<APXR_HandUIAnimation2DActor>(Animation2DClass, FVector(), FRotator());

		if(Animation2DActor!=nullptr&&this->GetOwner()!=nullptr)
		{
			Animation2DActor->AttachToActor(this->GetOwner(), FAttachmentTransformRules::KeepRelativeTransform);
			Animation2DActor->SetActorTickEnabled(false);
		}
	}
}

void UPicoXRHandComponent::InitializeSkeletalMesh()
{
	if (RuntimeSkeletalMesh)
	{
		if (FPicoXRHandTracking::GetHandSkeletalMesh(RuntimeSkeletalMesh, SkeletonType, MeshType))
		{
			SetSkeletalMesh(RuntimeSkeletalMesh);
			if (MaterialOverride)
			{
				SetMaterial(0, MaterialOverride);
			}
			CachedBaseMaterial = GetMaterial(0);
			bSkeletalMeshInitialized = true;

			if (bInitializePhysics)
			{
				CollisionCapsules = FPicoXRHandTracking::InitializeHandPhysics(SkeletonType, this);
			}
		}
	}
}

FVector UPicoXRHandComponent::GetHomeWorldLocation(EPicoXRHandType In_SkeletonType)
{
	FVector HomeLocation=FVector();
	if (In_SkeletonType != EPicoXRHandType::None)
	{
		return  HomeLocation= (FPicoXRHandTracking::GetBoneLocation(In_SkeletonType,static_cast<EBone>(19))
			+FPicoXRHandTracking::GetBoneLocation(In_SkeletonType,static_cast<EBone>(20)))*0.5f;
	}
	
	return  HomeLocation;
}

void UPicoXRHandComponent::TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (IsInGameThread())
	{
		const AActor* MyOwner = GetOwner();
		bHasAuthority = MyOwner->HasLocalNetOwner();
		bHasAuthority = true;
	}

	if (bHasAuthority)
	{
		bool bHidden = false;
		if (UPicoXRInputFunctionLibrary::IsHandTrackingEnabled())
		{
			if (ConfidenceBehavior == EConfidenceBehavior::HideActor)
			{
				const EPicoXRHandTrackingConfidence TrackingConfidence = UPicoXRInputFunctionLibrary::GetTrackingConfidence(SkeletonType);
				bHidden |= TrackingConfidence != EPicoXRHandTrackingConfidence::High;
			}

			if (bUpdateHandScale)
			{
				const float NewScale = UPicoXRInputFunctionLibrary::GetHandScale(SkeletonType);
				SetRelativeScale3D(FVector(NewScale));
			}

			if (SkeletalMesh)
			{
				UpdateBonePose();
				UpdateHandTransform();
			}

			//System Gesture Position
			FTransform PointTransform = UPicoXRInputFunctionLibrary::GetPointerPose(SkeletonType);
			if (Animation2DActor != nullptr)
			{
				switch (Animation2DActor->GetCurrentLoadingType())
				{
				case ELoadingType::HomeGestureLoading:
					{
						FVector HomePosition=GetHomeWorldLocation(SkeletonType);
						Animation2DActor->SetActorRelativeLocation(HomePosition);
					}
					break;
				case ELoadingType::ResetGestureLoading:
					{
						if (CurrentCameraManager!= nullptr)
						{
							FVector CameraLocation=CurrentCameraManager->GetCameraLocation();
							CameraLocation+=CurrentCameraManager->GetActorForwardVector()*40.f;
							Animation2DActor->SetActorLocation(CameraLocation);
						}
					
					}
					break;
				}
				
			}
		}
		else
		{
			bHidden = true;
		}

		if (bHidden != bHiddenInGame)
		{
			SetHiddenInGame(bHidden);
			for (int32 i = 0; i < CollisionCapsules.Num(); i++)
			{
				CollisionCapsules[i].Capsule->SetCollisionEnabled(bHidden ? ECollisionEnabled::NoCollision : ECollisionEnabled::QueryAndPhysics);
			}
		}
	}
}

void UPicoXRHandComponent::UpdateBonePose()
{
	if (bCustomHandMesh)
	{
		for (auto& BoneElem : BoneNameMappings)
		{
			if (BoneElem.Key == EBone::Wrist_Root)
			{
				//Todo:for now do not rotate the bone root node
			}
			else
			{
#if ENGINE_MINOR_VERSION >26
				const int32 BoneIndex = SkeletalMesh->GetRefSkeleton().FindBoneIndex(BoneElem.Value);
#else
				const int32 BoneIndex = SkeletalMesh->RefSkeleton.FindBoneIndex(BoneElem.Value);
#endif
			

				if (BoneIndex >= 0)
				{
					FQuat BoneRotation = UPicoXRInputFunctionLibrary::GetBoneRotation(SkeletonType, static_cast<EBone>(BoneElem.Key));
					BoneSpaceTransforms[BoneIndex].SetRotation(BoneRotation);
				}
			}
		}
	}
	else
	{
#if ENGINE_MINOR_VERSION >26
		for (uint32 BoneIndex = 1; BoneIndex < static_cast<uint32>(SkeletalMesh->GetRefSkeleton().GetNum()); BoneIndex++)
		{
			FQuat BoneRotation = UPicoXRInputFunctionLibrary::GetBoneRotation(SkeletonType, static_cast<EBone>(BoneIndex));
			BoneSpaceTransforms[BoneIndex].SetRotation(BoneRotation);
		}
#else
		for (uint32 BoneIndex = 1; BoneIndex < static_cast<uint32>(SkeletalMesh->RefSkeleton.GetNum()); BoneIndex++)
		{
			FQuat BoneRotation = UPicoXRInputFunctionLibrary::GetBoneRotation(SkeletonType, static_cast<EBone>(BoneIndex));
			BoneSpaceTransforms[BoneIndex].SetRotation(BoneRotation);
		}
#endif
		
	}
	MarkRefreshTransformDirty();
}

void UPicoXRHandComponent::UpdateHandTransform()
{
	const FTransform HandPose = FPicoXRHandTracking::GetHandRootPose(SkeletonType);

	////Fixed up difference of Axis with algorithm
	if (this->SkeletonType == EPicoXRHandType::HandLeft)
	{
		const FQuat CalibratedOrientation = HandPose.GetRotation() * LeftRootFixupOrientation;
		this->SetRelativeLocationAndRotation(HandPose.GetLocation(), CalibratedOrientation.Rotator());
	}
	else if (this->SkeletonType == EPicoXRHandType::HandRight)
	{
		const FQuat CalibratedOrientation = HandPose.GetRotation() * RightRootFixupOrientation;
		this->SetRelativeLocationAndRotation(HandPose.GetLocation(), CalibratedOrientation.Rotator());
	}
}

void UPicoXRHandComponent::StageCallBackFunction(int32 TrackingStage, int32 TrackingStageProcess)
{
	CurrentStage = static_cast<EHandStage>(TrackingStage);
	if (FPicoXRHandTracking::GetActiveInputDevice() == EPicoXRActiveInputDevice::HandTrackingActive
		&& Animation2DActor != nullptr)
	{
		if (SkeletonType == EPicoXRHandType::HandLeft)
		{
			switch (CurrentStage)
			{
			case EHandStage::None: break;
			case EHandStage::LeftHandHomeStart:
				{
					Animation2DActor->SetActorHiddenInGame(false);
					Animation2DActor->SetActorTickEnabled(true);
					Animation2DActor->ActiveLoadingAnimation(ELoadingType::HomeGestureLoading, TrackingStageProcess);
				}
				break;
			case EHandStage::LeftHandHomeEnd:
				{
					Animation2DActor->SetActorHiddenInGame(true);
				}
				break;
			case EHandStage::LeftHandHomeStop:
				{
					Animation2DActor->SetActorHiddenInGame(true);
					Animation2DActor->SetActorTickEnabled(false);
				}
				break;
			case EHandStage::LeftHandResetStart:
				{
					Animation2DActor->SetActorHiddenInGame(false);
					Animation2DActor->SetActorTickEnabled(true);
					Animation2DActor->ActiveLoadingAnimation(ELoadingType::ResetGestureLoading, TrackingStageProcess);
				}
				break;
			case EHandStage::LeftHandResetEnd:
				{
					Animation2DActor->SetActorHiddenInGame(true);
				}
				break;
			case EHandStage::LeftHandResetStop:
				{
					Animation2DActor->SetActorHiddenInGame(true);
					Animation2DActor->SetActorTickEnabled(false);
				}
				break;
			default: ;
			}
		}
		else if (SkeletonType == EPicoXRHandType::HandRight)
		{
			switch (CurrentStage)
			{
			case EHandStage::None: break;
			case EHandStage::RightHandHomeStart:
				{
					Animation2DActor->SetActorHiddenInGame(false);
					Animation2DActor->SetActorTickEnabled(true);
					Animation2DActor->ActiveLoadingAnimation(ELoadingType::HomeGestureLoading, TrackingStageProcess);
				}
				break;
			case EHandStage::RightHandHomeEnd:
				{
					Animation2DActor->SetActorHiddenInGame(true);
				}
				break;
			case EHandStage::RightHandHomeStop:
				{
					Animation2DActor->SetActorHiddenInGame(true);
					Animation2DActor->SetActorTickEnabled(false);
				}
				break;
			case EHandStage::RightHandResetStart:
				{
					Animation2DActor->SetActorHiddenInGame(false);
					Animation2DActor->SetActorTickEnabled(true);
					Animation2DActor->ActiveLoadingAnimation(ELoadingType::ResetGestureLoading, TrackingStageProcess);
				}
				break;
			case EHandStage::RightHandResetEnd:
				{
					Animation2DActor->SetActorHiddenInGame(true);
				}
				break;
			case EHandStage::RightHandResetStop:
				{
					Animation2DActor->SetActorHiddenInGame(true);
					Animation2DActor->SetActorTickEnabled(false);
				}
				break;
			default: ;
			}
		}
	}
}

bool UPicoXRHandComponent::Set2DAnimationVisibility(bool bNewVisibility)
{
	if (Animation2DActor != nullptr)
	{
		bool bNewHidden = bNewVisibility ? false : true;
		Animation2DActor->SetActorHiddenInGame(bNewHidden);
		return true;
	}
	return false;
}

void UPicoXRHandComponent::SystemGesturePressed()
{
	if (SystemGestureBehavior == ESystemGestureBehavior::SwapMaterial)
	{
		if (SystemGestureMaterial)
		{
			SetMaterial(0, SystemGestureMaterial);
		}
	}
}

void UPicoXRHandComponent::SystemGestureReleased()
{
	if (SystemGestureBehavior == ESystemGestureBehavior::SwapMaterial)
	{
		if (CachedBaseMaterial)
		{
			SetMaterial(0, CachedBaseMaterial);
		}
	}
}

FName UPicoXRHandComponent::FbxBoneNameFromBoneId(EPicoXRHandType In_SkeletonType, EBone In_BoneId)
{
	const FString BoneName = FBXHandBonePrefix + FBXHandSidePrefix[static_cast<int32>(In_SkeletonType) - 1] + FBXHandBoneNames[static_cast<int32>
		(In_BoneId)];
	return FName(*BoneName);
}
