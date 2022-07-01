// Copyright © 2015-2020 Pico Technology Co., Ltd. All Rights Reserved.
#pragma once
#include "Math/Quat.h"
#include "Components/CapsuleComponent.h"
#include "PXR_InputFunctionLibrary.h"

#if PLATFORM_ANDROID
#include "PxrInput.h"
#endif
class USkeletalMesh;

enum class EHandFingerPinch
{
	Thumb = (1 << static_cast<int32>(EHandFinger::Thumb)),
	Index = (1 << static_cast<int32>(EHandFinger::Index)),
	Middle = (1 << static_cast<int32>(EHandFinger::Middle)),
	Ring = (1 << static_cast<int32>(EHandFinger::Ring)),
	Pinky = (1 <<static_cast<int32>(EHandFinger::Pinky)),
};

enum class EHandStatus:uint16
{
	HandTracked = (1 << 0),
	InputStateValid = (1 << 1),
	RayValid = (1<<2),
	SystemGestureInProgress = (1 << 6),
	DominantHand = (1 << 7),
	MenuPressed = (1 << 8)
};
//-------------------------------------------------------------------------------------------------
// FPicoHandControllerState - Input state for an Pico Hands
//-------------------------------------------------------------------------------------------------
#define PicoXRHandBoneIndex_Max 24
#define PicoXRHandFingerPinch_Max 5
#define PicoXRHandFinger_Max 5

struct FPicoHandControllerState
{
	int32 Status;
	FTransform RootPose;
	FTransform BonePose[static_cast<int32>(EBone::Bone_Max)];
	int32 Pinches;
	float PinchStrength[PicoXRHandFingerPinch_Max];
	FTransform PointerPose;
	float HandScale;
	float ClickStrength;
	EPicoXRHandTrackingConfidence HandConfidence;
	EPicoXRHandTrackingConfidence FingerConfidence[PicoXRHandFinger_Max];
	double RequestedTimeStamp;
	double SampleTimeStamp;

	FPicoHandControllerState(const EControllerHand Hand)
	{
		Status = 0;
		RootPose = FTransform::Identity;
		for (int32 i = 0; i < static_cast<int32>(EBone::Bone_Max); i++)
		{
			BonePose[i] = FTransform::Identity;
		}
		Pinches = 0;

		for (int32 i = 0; i < PicoXRHandFingerPinch_Max; i++)
		{
			PinchStrength[i] = 0.0f;
		}
		PointerPose = FTransform::Identity;

		HandScale = 1.0f;
		ClickStrength=0.0f;
		HandConfidence = EPicoXRHandTrackingConfidence::Low;

		for (int32 i = 0; i < PicoXRHandFinger_Max; i++)
		{
			FingerConfidence[i] = EPicoXRHandTrackingConfidence::Low;
		}

		RequestedTimeStamp = 0.0f;
		SampleTimeStamp = 0.0f;
	}

	FPicoHandControllerState()
	{
	}
};

struct FPicoControllerPair
{
	/** The Unreal controller index assigned to this pair */
	int32 UnrealControllerIndex;

	FPicoHandControllerState HandControllerStates[2];

	FPicoControllerPair()
		: UnrealControllerIndex(INDEX_NONE),
		  HandControllerStates()
	{
		HandControllerStates[(int32)EControllerHand::Left] = FPicoHandControllerState(EControllerHand::Left);
		HandControllerStates[(int32)EControllerHand::Right] = FPicoHandControllerState(EControllerHand::Right);
	}
};


class FPicoXRHandTracking
{
public:
	// PicoXR Hand Tracking
#if PLATFORM_ANDROID
	static bool GetHandState(const EPicoXRHandType DeviceHand,PxrHandState& HandState);
#endif

	static FQuat GetBoneRotation(const EPicoXRHandType DeviceHand, const EBone BoneId);
	static FVector GetBoneLocation(const EPicoXRHandType DeviceHand, const EBone BoneId);
	static float GetHandScale(const EPicoXRHandType DeviceHand);
	static EPicoXRHandTrackingConfidence GetTrackingConfidence(const EPicoXRHandType DeviceHand);
	static FTransform GetPointerPose(const EPicoXRHandType DeviceHand);
	static bool IsHandTracked(const EPicoXRHandType DeviceHand);
	static bool IsInputStateValid(const EPicoXRHandType DeviceHand);
	static bool IsRayValid(const EPicoXRHandType DeviceHand);
	static bool IsSystemGestureInProgress(const EPicoXRHandType DeviceHand);
	static bool IsDominantHand(const EPicoXRHandType DeviceHand);
	static bool IsMenuPressed(const EPicoXRHandType DeviceHand);
	static float GetClickStrength(const EPicoXRHandType DeviceHand);
	static bool GetFingerIsPinching(const EPicoXRHandType DeviceHand,EHandFinger Finger);
	static float GetFingerPinchStrength(const EPicoXRHandType DeviceHand,EHandFinger Finger);
	static EPicoXRHandTrackingConfidence GetFingerConfidence(const EPicoXRHandType DeviceHand,EHandFinger Finger);
	static bool GetHandSkeletalMesh(USkeletalMesh* HandSkeletalMesh, const EPicoXRHandType SkeletonType, const EPicoXRHandType MeshType, const float WorldToMeters = 100.f);
	static TArray<FPicoXRCapsuleCollider> InitializeHandPhysics(const EPicoXRHandType SkeletonType, USkinnedMeshComponent* HandComponent, const float WorldToMeters = 100.f);
#if PLATFORM_ANDROID
	static EPicoXRHandTrackingConfidence ToETrackingConfidence(PxrTrackingConfidence Confidence);
#endif

	static bool IsSystemHandTrackingEnabled();
	static bool IsHandDominant(const EPicoXRHandType DeviceHand);
	static EPicoXRActiveInputDevice GetActiveInputDevice();
	static FTransform GetHandRootPose(const EPicoXRHandType DeviceHand);

	static void SetAppHandTrackingEnabled(bool Enabled);
	// Helper functions
#if PLATFORM_ANDROID
	static PxrHandBoneIndex ToPxrBone(EBone Bone);
#endif

	static FString GetBoneName(uint8 Bone);

	// Converters for converting from picoxr bone space (should match up with picoxr avatar)
#if PLATFORM_ANDROID
	static FVector PxrBoneVectorToFVector(PxrVector3f pxrVector, float WorldToMeters);
	static FQuat PxrBoneQuatToFQuat(const EPicoXRHandType DeviceHand, PxrQuaternionf pxrQuat);
	static FQuat PxrRootQuatToFQuat(PxrQuaternionf pxrQuat);
#endif
	static void OnResume();
	static void OnPause();

	static void HandTrackingEnabledCallBackFunction(const int32 Status);
	static FTransform PxrRelativeTransformToAbsoluteTransform(const EPicoXRHandType DeviceHand,const FTransform& In_RelativeTransform);
public:
	static bool HandTrackingEnabled;
	/** List of the connected pairs of controllers, with state for each controller device */
	static FPicoControllerPair ControllerPairs;
private:
	
	static const FQuat HandRootFixupRotation;
	// Initializers for runtime hand assets
#if PLATFORM_ANDROID
	static void InitializeHandMesh(USkeletalMesh* SkeletalMesh, const PxrHandMesh* pxrMesh, const float WorldToMeters);
	static void InitializeHandSkeleton(USkeletalMesh* SkeletalMesh,const EPicoXRHandType SkeletonType, const PxrSkeleton* pxrSkeleton, const float WorldToMeters);
#endif
};
