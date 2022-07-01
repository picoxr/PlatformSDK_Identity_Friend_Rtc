// Copyright © 2015-2020 Pico Technology Co., Ltd. All Rights Reserved.
#include "PXR_HandTracking.h"
#include "PXR_EventManager.h"
#include "Components/SkeletalMeshComponent.h"
#include "Rendering/SkeletalMeshLODRenderData.h"
#include "Rendering/SkeletalMeshRenderData.h"
#include "Rendering/SkeletalMeshLODModel.h"
#include "PXR_HMDFunctionLibrary.h"
#if PLATFORM_ANDROID
#include "PxrApi.h"
#endif

bool FPicoXRHandTracking::HandTrackingEnabled = false;
FPicoControllerPair FPicoXRHandTracking::ControllerPairs = FPicoControllerPair();
#if PLATFORM_ANDROID
bool FPicoXRHandTracking::GetHandState(const EPicoXRHandType DeviceHand,PxrHandState& HandState)
{
	int SdkVersion = 0;
	Pxr_GetConfigInt(PXR_API_VERSION, &SdkVersion);
	if (SdkVersion  >= 0x2000300)
	{
		bool bSuccessd=false;
		if(DeviceHand != EPicoXRHandType::None)
		{
			PxrHandState handState;
			PxrHandType handType = (PxrHandType)((int32)DeviceHand - 1);
			bSuccessd=Pxr_GetHandTrackingHandState(handType,(int16)EHandPoseType::Local, &handState)==0;
			HandState=handState;
			return bSuccessd;
		}
	}
	return false;
}
#endif

FQuat FPicoXRHandTracking::GetBoneRotation(const EPicoXRHandType DeviceHand, const EBone BoneId)
{
	FQuat Rotation = FQuat::Identity;
	if (BoneId <= EBone::Invalid && BoneId >= EBone::Bone_Max)
	{
		return Rotation;
	}
	int32 ID = (int32)BoneId;
	if (DeviceHand != EPicoXRHandType::None)
	{
		EControllerHand Hand = DeviceHand == EPicoXRHandType::HandLeft ? EControllerHand::Left : EControllerHand::Right;
		const FPicoHandControllerState& HandState = ControllerPairs.HandControllerStates[(int32)Hand];
		Rotation = HandState.BonePose[ID].GetRotation();
		return Rotation;
	}

	return Rotation;
}

FVector FPicoXRHandTracking::GetBoneLocation(const EPicoXRHandType DeviceHand, const EBone BoneId)
{
	FVector Location = FVector::ZeroVector;
	if (BoneId <= EBone::Invalid && BoneId >= EBone::Bone_Max)
	{
		return Location;
	}
	int32 ID = (int32)BoneId;
	if (DeviceHand != EPicoXRHandType::None)
	{
		EControllerHand Hand = DeviceHand == EPicoXRHandType::HandLeft ? EControllerHand::Left : EControllerHand::Right;
		const FPicoHandControllerState& HandState = ControllerPairs.HandControllerStates[(int32)Hand];
		Location = HandState.BonePose[ID].GetLocation();
		return Location;
	}

	return Location;
}

float FPicoXRHandTracking::GetHandScale(const EPicoXRHandType DeviceHand)
{
	if (DeviceHand != EPicoXRHandType::None)
	{
		EControllerHand Hand = DeviceHand == EPicoXRHandType::HandLeft ? EControllerHand::Left : EControllerHand::Right;
		const FPicoHandControllerState& HandState = ControllerPairs.HandControllerStates[(int32)Hand];
		return HandState.HandScale;
	}

	return 1.0f;
}

EPicoXRHandTrackingConfidence FPicoXRHandTracking::GetTrackingConfidence(const EPicoXRHandType DeviceHand)
{
	if (DeviceHand != EPicoXRHandType::None)
	{
		EControllerHand Hand = DeviceHand == EPicoXRHandType::HandLeft ? EControllerHand::Left : EControllerHand::Right;
		const FPicoHandControllerState& HandState = ControllerPairs.HandControllerStates[(int32)Hand];
		return HandState.HandConfidence;
	}
	return EPicoXRHandTrackingConfidence::Low;
}

FTransform FPicoXRHandTracking::GetPointerPose(const EPicoXRHandType DeviceHand)
{
	if (DeviceHand != EPicoXRHandType::None)
	{
		EControllerHand Hand = DeviceHand == EPicoXRHandType::HandLeft ? EControllerHand::Left : EControllerHand::Right;
		const FPicoHandControllerState& HandState = ControllerPairs.HandControllerStates[(int32)Hand];
		return HandState.PointerPose;
	}
	return FTransform::Identity;
}

bool FPicoXRHandTracking::IsHandTracked(const EPicoXRHandType DeviceHand)
{
	if (DeviceHand != EPicoXRHandType::None)
	{
		EControllerHand Hand = DeviceHand == EPicoXRHandType::HandLeft ? EControllerHand::Left : EControllerHand::Right;
		const FPicoHandControllerState& HandState = ControllerPairs.HandControllerStates[(int32)Hand];
		return ((HandState.Status & StaticCast<int32>(EHandStatus::HandTracked)) != 0);
	}
	return false;
}

bool FPicoXRHandTracking::IsInputStateValid(const EPicoXRHandType DeviceHand)
{
	if (DeviceHand != EPicoXRHandType::None)
	{
		EControllerHand Hand = DeviceHand == EPicoXRHandType::HandLeft ? EControllerHand::Left : EControllerHand::Right;
		const FPicoHandControllerState& HandState = ControllerPairs.HandControllerStates[(int32)Hand];
		return ((HandState.Status & StaticCast<int32>(EHandStatus::InputStateValid)) != 0);
	}
	return false;
}

bool FPicoXRHandTracking::IsRayValid(const EPicoXRHandType DeviceHand)
{
	if (DeviceHand != EPicoXRHandType::None)
	{
		EControllerHand Hand = DeviceHand == EPicoXRHandType::HandLeft ? EControllerHand::Left : EControllerHand::Right;
		const FPicoHandControllerState& HandState = ControllerPairs.HandControllerStates[(int32)Hand];
		return ((HandState.Status & StaticCast<int32>(EHandStatus::RayValid)) != 0);
	}
	return false;
}

bool FPicoXRHandTracking::IsSystemGestureInProgress(const EPicoXRHandType DeviceHand)
{
	if (DeviceHand != EPicoXRHandType::None)
	{
		EControllerHand Hand = DeviceHand == EPicoXRHandType::HandLeft ? EControllerHand::Left : EControllerHand::Right;
		const FPicoHandControllerState& HandState = ControllerPairs.HandControllerStates[(int32)Hand];
		return ((HandState.Status & StaticCast<int32>(EHandStatus::SystemGestureInProgress)) != 0);
	}
	return false;
}

bool FPicoXRHandTracking::IsDominantHand(const EPicoXRHandType DeviceHand)
{
	if (DeviceHand != EPicoXRHandType::None)
	{
		EControllerHand Hand = DeviceHand == EPicoXRHandType::HandLeft ? EControllerHand::Left : EControllerHand::Right;
		const FPicoHandControllerState& HandState = ControllerPairs.HandControllerStates[(int32)Hand];
		return ((HandState.Status & StaticCast<int32>(EHandStatus::DominantHand)) != 0);
	}
	return false;
}

bool FPicoXRHandTracking::IsMenuPressed(const EPicoXRHandType DeviceHand)
{
	if (DeviceHand != EPicoXRHandType::None)
	{
		EControllerHand Hand = DeviceHand == EPicoXRHandType::HandLeft ? EControllerHand::Left : EControllerHand::Right;
		const FPicoHandControllerState& HandState = ControllerPairs.HandControllerStates[(int32)Hand];
		return ((HandState.Status & StaticCast<int32>(EHandStatus::MenuPressed)) != 0);
	}
	return false;
}

float FPicoXRHandTracking::GetClickStrength(const EPicoXRHandType DeviceHand)
{
	if (DeviceHand != EPicoXRHandType::None)
	{
		EControllerHand Hand = DeviceHand == EPicoXRHandType::HandLeft ? EControllerHand::Left : EControllerHand::Right;
		const FPicoHandControllerState& HandState = ControllerPairs.HandControllerStates[(int32)Hand];
		return HandState.ClickStrength;
	}

	return 0.0f;
}

bool FPicoXRHandTracking::GetFingerIsPinching(const EPicoXRHandType DeviceHand, EHandFinger Finger)
{
	if (DeviceHand != EPicoXRHandType::None)
	{
		EControllerHand Hand = DeviceHand == EPicoXRHandType::HandLeft ? EControllerHand::Left : EControllerHand::Right;
		const FPicoHandControllerState& HandState = ControllerPairs.HandControllerStates[(int32)Hand];
		return ((HandState.Pinches & (1 << static_cast<int32>(Finger))) != 0);
	}
	return false;
}

float FPicoXRHandTracking::GetFingerPinchStrength(const EPicoXRHandType DeviceHand, EHandFinger Finger)
{
	if (DeviceHand != EPicoXRHandType::None)
	{
		EControllerHand Hand = DeviceHand == EPicoXRHandType::HandLeft ? EControllerHand::Left : EControllerHand::Right;
		const FPicoHandControllerState& HandState = ControllerPairs.HandControllerStates[(int32)Hand];
		return HandState.PinchStrength[static_cast<int32>(Finger)];
	}

	return 0.0f;
}

EPicoXRHandTrackingConfidence FPicoXRHandTracking::GetFingerConfidence(const EPicoXRHandType DeviceHand, EHandFinger Finger)
{
	if (DeviceHand != EPicoXRHandType::None)
	{
		EControllerHand Hand = DeviceHand == EPicoXRHandType::HandLeft ? EControllerHand::Left : EControllerHand::Right;
		const FPicoHandControllerState& HandState = ControllerPairs.HandControllerStates[(int32)Hand];
		return HandState.FingerConfidence[static_cast<int32>(Finger)];
	}
	return EPicoXRHandTrackingConfidence::Low;
}

bool FPicoXRHandTracking::IsSystemHandTrackingEnabled()
{
	bool State = false;
#if PLATFORM_ANDROID
	int SdkVersion = 0;
	Pxr_GetConfigInt(PXR_API_VERSION, &SdkVersion);
	if (SdkVersion  >= 0x2000300)
	{
		Pxr_GetHandTrackingEnabled(&State);
	}
#endif
	return State;
}

bool FPicoXRHandTracking::IsHandDominant(const EPicoXRHandType DeviceHand)
{
	if (DeviceHand != EPicoXRHandType::None)
	{
		EControllerHand Hand = DeviceHand == EPicoXRHandType::HandLeft ? EControllerHand::Left : EControllerHand::Right;
		const FPicoHandControllerState& HandState = ControllerPairs.HandControllerStates[(int32)Hand];
		return HandState.Status != 0;
	}
	return false;
}
#if PLATFORM_ANDROID
PxrHandBoneIndex FPicoXRHandTracking::ToPxrBone(EBone Bone)
{
	if (Bone > EBone::Bone_Max)
		return PxrHandBone_Invalid;

	return (PxrHandBoneIndex)Bone;
}
#endif
FString FPicoXRHandTracking::GetBoneName(uint8 Bone)
{
	UEnum* BoneEnum = FindObject<UEnum>(ANY_PACKAGE, TEXT("EBone"), true);
	if (BoneEnum)
	{
		return BoneEnum->GetDisplayNameTextByValue(Bone).ToString();
	}

	return FString("Invalid");
}
#if PLATFORM_ANDROID
EPicoXRHandTrackingConfidence FPicoXRHandTracking::ToETrackingConfidence(PxrTrackingConfidence Confidence)
{
	EPicoXRHandTrackingConfidence TrackingConfidence = EPicoXRHandTrackingConfidence::Low;
	switch (Confidence)
	{
	case PxrTrackingConfidence_LOW:
		TrackingConfidence = EPicoXRHandTrackingConfidence::Low;
		break;
	case PxrTrackingConfidence_HIGH:
		TrackingConfidence = EPicoXRHandTrackingConfidence::High;
		break;
	}
	return TrackingConfidence;
}
#endif
FTransform FPicoXRHandTracking::PxrRelativeTransformToAbsoluteTransform(const EPicoXRHandType DeviceHand,const FTransform& In_RelativeTransform)
{
	FTransform Transform_Res;
	const FMatrix Matrix_Src = FScaleRotationTranslationMatrix(FVector::OneVector, In_RelativeTransform.GetRotation().Rotator(), In_RelativeTransform.GetLocation());
	FMatrix Matrix_Left,Matrix_Right;
	if (DeviceHand !=EPicoXRHandType::None)
	{
		Matrix_Left.M[0][0]=1.0;
		Matrix_Left.M[1][1]=1.0;
		Matrix_Left.M[2][2]=-1.0;
		Matrix_Left.M[3][3]=1.0;
	}
	if (DeviceHand ==EPicoXRHandType::HandLeft)
	{
		Matrix_Right.M[0][2]=1.0;
		Matrix_Right.M[1][0]=-1.0;
		Matrix_Right.M[2][1]=1.0;
		Matrix_Right.M[3][3]=1.0;
	}
	if (DeviceHand ==EPicoXRHandType::HandRight)
	{
		Matrix_Right.M[0][2]=1.0;
		Matrix_Right.M[1][0]=1.0;
		Matrix_Right.M[2][1]=1.0;
		Matrix_Right.M[3][3]=1.0;
	}

	const FMatrix Matrix_Res=Matrix_Left*Matrix_Src*Matrix_Right;
	const FVector Location=Matrix_Res.GetColumn(3);
	const FQuat Rotator=FQuat(Matrix_Res.Rotator());
	Transform_Res.SetLocation(Location);
	Transform_Res.SetRotation(In_RelativeTransform.GetRotation());
	
	return Transform_Res;
}
#if PLATFORM_ANDROID
FVector FPicoXRHandTracking::PxrBoneVectorToFVector(PxrVector3f pxrVector, float WorldToMeters)
{
	return FVector(-pxrVector.z, pxrVector.x, pxrVector.y) * WorldToMeters;
}
FQuat FPicoXRHandTracking::PxrRootQuatToFQuat(PxrQuaternionf pxrQuat)
{
	return FQuat(pxrQuat.z,-pxrQuat.x,-pxrQuat.y,pxrQuat.w);
}
FQuat FPicoXRHandTracking::PxrBoneQuatToFQuat(const EPicoXRHandType DeviceHand,PxrQuaternionf pxrQuat)
{
	if(DeviceHand==EPicoXRHandType::HandLeft)
	{
		return FQuat(pxrQuat.y,-pxrQuat.z,pxrQuat.x,-pxrQuat.w);
	}
	else if(DeviceHand==EPicoXRHandType::HandRight)
	{
		return FQuat(-pxrQuat.y,pxrQuat.z,pxrQuat.x,-pxrQuat.w);
	}

	return FQuat(pxrQuat.x, pxrQuat.y, pxrQuat.z, pxrQuat.w);
}
#endif
EPicoXRActiveInputDevice FPicoXRHandTracking::GetActiveInputDevice()
{
#if PLATFORM_ANDROID
	int SdkVersion = 0;
	Pxr_GetConfigInt(PXR_API_VERSION, &SdkVersion);
	if (SdkVersion  >= 0x2000300)
	{
	PxrActiveInputDeviceType type ;
	Pxr_GetActiveInputDeviceType(&type);
	return (EPicoXRActiveInputDevice)type;
	}
#endif
	return EPicoXRActiveInputDevice::NoneActive;
}

FTransform FPicoXRHandTracking::GetHandRootPose(const EPicoXRHandType DeviceHand)
{
	if (DeviceHand != EPicoXRHandType::None)
	{
		EControllerHand Hand = DeviceHand == EPicoXRHandType::HandLeft ? EControllerHand::Left : EControllerHand::Right;
		const FPicoHandControllerState& HandState = ControllerPairs.HandControllerStates[(int32)Hand];
		return HandState.RootPose;
	}
	return FTransform::Identity;
}

void FPicoXRHandTracking::SetAppHandTrackingEnabled(bool Enabled)
{
#if PLATFORM_ANDROID
	int SdkVersion = 0;
	Pxr_GetConfigInt(PXR_API_VERSION, &SdkVersion);
	if (SdkVersion  >= 0x2000300)
	{
		Pxr_SetAppHandTrackingEnabled(Enabled);
	}
#endif
}

void FPicoXRHandTracking::OnResume()
{
	SetAppHandTrackingEnabled(true);
}

void FPicoXRHandTracking::OnPause()
{
	SetAppHandTrackingEnabled(false);
}

void FPicoXRHandTracking::HandTrackingEnabledCallBackFunction(const int32 Status)
{
	HandTrackingEnabled = Status == 1;
	SetAppHandTrackingEnabled(HandTrackingEnabled);
}

bool FPicoXRHandTracking::GetHandSkeletalMesh(USkeletalMesh* HandSkeletalMesh, const EPicoXRHandType SkeletonType, const EPicoXRHandType MeshType, const float WorldToMeters)
{
#if ENGINE_MINOR_VERSION >26
#if PLATFORM_ANDROID
	int SdkVersion = 0;
	Pxr_GetConfigInt(PXR_API_VERSION, &SdkVersion);
	if (SdkVersion  >= 0x2000300)
	{
		if(HandSkeletalMesh)
		{
			PxrHandMesh* pxrMesh = new PxrHandMesh();
			PxrSkeleton* pxrSkeleton = new PxrSkeleton();
			TArray<FSkeletalMaterial> NewMaterialArray;
		
			PxrSkeletonType skeletonType = (PxrSkeletonType)((int32)SkeletonType - 1);
			PxrMeshType meshType = (PxrMeshType)((int32)MeshType - 1);
			int skeResult = Pxr_GetHandTrackingSkeleton(skeletonType, pxrSkeleton);
			int meshResult = Pxr_GetHandTrackingMesh(meshType, pxrMesh);
			if(skeResult != 0 || meshResult != 0)
			{
				delete pxrMesh;
				delete pxrSkeleton;
				return false;
			}

			FSkeletalMeshLODRenderData* LodRenderData = new FSkeletalMeshLODRenderData();
			HandSkeletalMesh->AllocateResourceForRendering();
			HandSkeletalMesh->GetResourceForRendering()->LODRenderData.Add(LodRenderData);

			// Set default LOD Info
			FSkeletalMeshLODInfo& LodInfo = HandSkeletalMesh->AddLODInfo();
			LodInfo.ScreenSize = 0.3f;
			LodInfo.LODHysteresis = 0.2f;
			LodInfo.BuildSettings.bUseFullPrecisionUVs = true;

			InitializeHandSkeleton(HandSkeletalMesh,SkeletonType, pxrSkeleton, WorldToMeters);

			// Add default material as backup
			LodInfo.LODMaterialMap.Add(0);
			UMaterialInterface* DefaultMaterial = UMaterial::GetDefaultMaterial(MD_Surface);
			NewMaterialArray.Add(DefaultMaterial);
			HandSkeletalMesh->SetMaterials(NewMaterialArray);
			HandSkeletalMesh->GetMaterials()[0].UVChannelData.bInitialized = true;

			// Set skeletal mesh properties
			HandSkeletalMesh->SetHasVertexColors(true);
			HandSkeletalMesh->SetHasBeenSimplified(false);
			HandSkeletalMesh->SetEnablePerPolyCollision(false);

			InitializeHandMesh(HandSkeletalMesh, pxrMesh, WorldToMeters);

			// Create Skeleton object and merge all bones
			USkeleton* Skeleton=NewObject<USkeleton>();
			HandSkeletalMesh->SetSkeleton(Skeleton);
			HandSkeletalMesh->GetSkeleton()->MergeAllBonesToBoneTree(HandSkeletalMesh);
			HandSkeletalMesh->PostLoad();

			delete pxrMesh;
			delete pxrSkeleton;

			return true;
		}
	}
#endif
#endif
	return false;
}
#if PLATFORM_ANDROID
void FPicoXRHandTracking::InitializeHandMesh(USkeletalMesh* SkeletalMesh, const PxrHandMesh* pxrMesh, const float WorldToMeters)
{
#if ENGINE_MINOR_VERSION >26
	FSkeletalMeshLODRenderData* LodRenderData = &SkeletalMesh->GetResourceForRendering()->LODRenderData[0];

	// Initialize Mesh Section
	LodRenderData->RenderSections.SetNumUninitialized(1);
	new(&LodRenderData->RenderSections[0]) FSkelMeshRenderSection();
	auto& MeshSection = LodRenderData->RenderSections[0];

	// Initialize render section properties
	MeshSection.MaterialIndex = 0;
	MeshSection.BaseIndex = 0;
	MeshSection.NumTriangles = pxrMesh->NumIndices / 3;
	MeshSection.BaseVertexIndex = 0;
	MeshSection.MaxBoneInfluences = 4;
	MeshSection.NumVertices = pxrMesh->NumVertices;
	MeshSection.bCastShadow = true;
	MeshSection.bDisabled = false;
	MeshSection.bRecomputeTangent = false;

	// Initialize Vertex Buffers
	LodRenderData->StaticVertexBuffers.PositionVertexBuffer.Init(pxrMesh->NumVertices);
	LodRenderData->StaticVertexBuffers.StaticMeshVertexBuffer.Init(pxrMesh->NumVertices, 1);
	LodRenderData->StaticVertexBuffers.ColorVertexBuffer.Init(pxrMesh->NumVertices);

	// Initialize Skin Weights
	TArray<FSkinWeightInfo> InWeights;
	InWeights.AddUninitialized(pxrMesh->NumVertices);

	float MaxDistSq = MIN_flt;
	TMap<int32, TArray<int32>> OverlappingVertices;
	for (int32_t VertexIndex = 0; VertexIndex < pxrMesh->NumVertices; VertexIndex++)
	{
		// Initialize vertex data
		FModelVertex ModelVertex;

		// Update Model Vertex
		PxrVector3f VertexPosition = pxrMesh->VertexPositions[VertexIndex];
		PxrVector3f Normal = pxrMesh->VertexNormals[VertexIndex];
		ModelVertex.Position = FVector(VertexPosition.x, VertexPosition.z, VertexPosition.y) * WorldToMeters;
		ModelVertex.TangentZ = FVector(Normal.x, Normal.z, Normal.y);
		ModelVertex.TangentX = FVector(1.0f, 0.0f, 0.0f);
		ModelVertex.TexCoord = FVector2D(pxrMesh->VertexUV0[VertexIndex].x, pxrMesh->VertexUV0[VertexIndex].y);

		// Add Model Vertex data to vertex buffer
		LodRenderData->StaticVertexBuffers.PositionVertexBuffer.VertexPosition(VertexIndex) = ModelVertex.Position;
		LodRenderData->StaticVertexBuffers.StaticMeshVertexBuffer.SetVertexTangents(VertexIndex, ModelVertex.TangentX, ModelVertex.GetTangentY(), ModelVertex.TangentZ);
		LodRenderData->StaticVertexBuffers.StaticMeshVertexBuffer.SetVertexUV(VertexIndex, 0, ModelVertex.TexCoord);

		// Update the Bounds
		float VertexDistSq = ModelVertex.Position.SizeSquared();
		if (VertexDistSq > MaxDistSq)
			MaxDistSq = VertexDistSq;

		// Set vertex blend weights and indices
		TArray<int32> Vertices;
		PxrVector4f BlendWeights = pxrMesh->BlendWeights[VertexIndex];
		PxrVector4s BlendIndices = pxrMesh->BlendIndices[VertexIndex];

		InWeights[VertexIndex].InfluenceWeights[0] = 255.f * BlendWeights.x;
		InWeights[VertexIndex].InfluenceBones[0] = BlendIndices.x;
		Vertices.Add(BlendIndices.x);
		InWeights[VertexIndex].InfluenceWeights[1] = 255.f * BlendWeights.y;
		InWeights[VertexIndex].InfluenceBones[1] = BlendIndices.y;
		Vertices.Add(BlendIndices.y);
		InWeights[VertexIndex].InfluenceWeights[2] = 255.f * BlendWeights.z;
		InWeights[VertexIndex].InfluenceBones[2] = BlendIndices.z;
		Vertices.Add(BlendIndices.z);
		InWeights[VertexIndex].InfluenceWeights[3] = 255.f * BlendWeights.w;
		InWeights[VertexIndex].InfluenceBones[3] = BlendIndices.w;
		Vertices.Add(BlendIndices.w);

		OverlappingVertices.Add(VertexIndex, Vertices);
	}
#if ENGINE_MINOR_VERSION >26
	// Update bone map for mesh section
	for (uint32 BoneIndex = 0; BoneIndex < (uint32)SkeletalMesh->GetRefSkeleton().GetNum(); BoneIndex++)
	{
		MeshSection.BoneMap.Add(BoneIndex);
	}
#else
	for (uint32 BoneIndex = 0; BoneIndex < (uint32)SkeletalMesh->RefSkeleton().GetNum(); BoneIndex++)
	{
		MeshSection.BoneMap.Add(BoneIndex);
	}
#endif
	

	// Finalize Bounds
	float MaxDist = FMath::Sqrt(MaxDistSq);
	FBoxSphereBounds Bounds;
	Bounds.Origin = FVector::ZeroVector;
	Bounds.BoxExtent = FVector(MaxDist);
	Bounds.SphereRadius = MaxDist;
	SkeletalMesh->SetImportedBounds(Bounds);

	// Assign skin weights to vertex buffer
	LodRenderData->SkinWeightVertexBuffer = InWeights;
	MeshSection.DuplicatedVerticesBuffer.Init(pxrMesh->NumVertices, OverlappingVertices);

	// Set index buffer
	LodRenderData->MultiSizeIndexContainer.CreateIndexBuffer(sizeof(uint16_t));
	for (int32_t Index = 0; Index < pxrMesh->NumIndices; Index++)
	{
		LodRenderData->MultiSizeIndexContainer.GetIndexBuffer()->AddItem(pxrMesh->Indices[Index]);
	}
#endif
}
#endif
#if PLATFORM_ANDROID
void FPicoXRHandTracking::InitializeHandSkeleton(USkeletalMesh* SkeletalMesh,const EPicoXRHandType SkeletonType, const PxrSkeleton* pxrSkeleton , const float WorldToMeters)
{
#if ENGINE_MINOR_VERSION >26
#if ENGINE_MINOR_VERSION >26
	SkeletalMesh->GetRefSkeleton().Empty(pxrSkeleton->NumBones);
#else
	SkeletalMesh->RefSkeleton().Empty(pxrSkeleton->NumBones);
#endif
	

	FSkeletalMeshLODRenderData* LodRenderData = &SkeletalMesh->GetResourceForRendering()->LODRenderData[0];
	SkeletalMesh->SetHasBeenSimplified(false);
	SkeletalMesh->SetHasVertexColors(true);

	for (int32 BoneIndex = 0; BoneIndex <  pxrSkeleton->NumBones; BoneIndex++)
	{
		LodRenderData->ActiveBoneIndices.Add(BoneIndex);
		LodRenderData->RequiredBones.Add(BoneIndex);

		FString BoneString = GetBoneName(BoneIndex);
		FName BoneName = FName(*BoneString);

		FTransform Transform = FTransform::Identity;
		FVector BonePosition = PxrBoneVectorToFVector(pxrSkeleton->Bones[BoneIndex].Bones.position, WorldToMeters);
		FQuat BoneRotation = BoneIndex == 0 ? FQuat(-1.0f, 0.0f, 0.0f, 1.0f) : PxrBoneQuatToFQuat(SkeletonType,pxrSkeleton->Bones[BoneIndex].Bones.orientation);
		Transform.SetLocation(BonePosition);
		Transform.SetRotation(BoneRotation);
#if ENGINE_MINOR_VERSION >26
		FReferenceSkeletonModifier Modifier = FReferenceSkeletonModifier(SkeletalMesh->GetRefSkeleton(), nullptr);
#else
		FReferenceSkeletonModifier Modifier = FReferenceSkeletonModifier(SkeletalMesh->RefSkeleton(), nullptr);
#endif
		
		int32 ParentIndex = -1;
		if (BoneIndex > 0)
		{
			if (pxrSkeleton->Bones[BoneIndex].ParentBoneIndices == PxrHandBoneIndex::PxrHandBone_Invalid)
			{
				ParentIndex = 0;
			}
			else
			{
				ParentIndex = pxrSkeleton->Bones[BoneIndex].ParentBoneIndices;
			}
		}
		Modifier.Add(FMeshBoneInfo(BoneName, BoneString, ParentIndex), Transform);
	}
	
	SkeletalMesh->CalculateInvRefMatrices();
#endif
}
#endif

TArray<FPicoXRCapsuleCollider> FPicoXRHandTracking::InitializeHandPhysics(const EPicoXRHandType SkeletonType, USkinnedMeshComponent* HandComponent, const float WorldToMeters)
{
	TArray<FPicoXRCapsuleCollider> CollisionCapsules;
#if ENGINE_MINOR_VERSION >26
#if PLATFORM_ANDROID
	PxrSkeleton* pxrSkeleton = new PxrSkeleton();
	
	TArray<UPrimitiveComponent*> IgnoreCapsules;
	CollisionCapsules.AddDefaulted(pxrSkeleton->NumBoneCapsules);
	for (int32 CapsuleIndex = 0; CapsuleIndex < pxrSkeleton->NumBoneCapsules; CapsuleIndex++)
	{
		PxrBoneCapsule pxrBoneCapsule = pxrSkeleton->Capsules[CapsuleIndex];

		UCapsuleComponent* Capsule = NewObject<UCapsuleComponent>(HandComponent);

		FVector CapsulePointZero = PxrBoneVectorToFVector(pxrBoneCapsule.StartPoint, WorldToMeters);
		FVector CapsulePointOne = PxrBoneVectorToFVector(pxrBoneCapsule.EndPoint, WorldToMeters);
		FVector Delta = (CapsulePointOne - CapsulePointZero);
#if ENGINE_MINOR_VERSION >26
		FName BoneName = HandComponent->SkeletalMesh->GetRefSkeleton().GetBoneName(pxrBoneCapsule.BoneIndex);
#else
		FName BoneName = HandComponent->SkeletalMesh->RefSkeleton().GetBoneName(pxrBoneCapsule.BoneIndex);
#endif

		float CapsuleHeight = Delta.Size();
		float CapsuleRadius = pxrBoneCapsule.Radius * WorldToMeters;

		Capsule->SetCapsuleRadius(CapsuleRadius);
		Capsule->SetCapsuleHalfHeight(Delta.Size() / 2 + CapsuleRadius);
		Capsule->SetupAttachment(HandComponent, BoneName);
		Capsule->SetCollisionProfileName(HandComponent->GetCollisionProfileName());
		Capsule->RegisterComponentWithWorld(HandComponent->GetWorld());
		Capsule->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
		FRotator CapsuleRotation = FQuat::FindBetweenVectors(FVector::RightVector, Delta).Rotator() + FRotator(0, 0, 90);;

		Capsule->SetRelativeRotation(CapsuleRotation);
		Capsule->SetRelativeLocation(CapsulePointZero + (Delta / 2));

		CollisionCapsules[CapsuleIndex].Capsule = Capsule;
		CollisionCapsules[CapsuleIndex].BoneId = (EBone)pxrBoneCapsule.BoneIndex;

		IgnoreCapsules.Add(Capsule);
	}
	

	for (int32 CapsuleIndex = 0; CapsuleIndex < CollisionCapsules.Num(); CapsuleIndex++)
	{
		CollisionCapsules[CapsuleIndex].Capsule->MoveIgnoreComponents = IgnoreCapsules;
	}
#endif
#endif
	return CollisionCapsules;
}
