// Copyright © 2015-2020 Pico Technology Co., Ltd. All Rights Reserved.
#pragma once
#include "CoreMinimal.h"
#include "Components/PoseableMeshComponent.h"
#include "PXR_InputFunctionLibrary.h"
#include "PXR_Hand2DAnimationActor.h"
#include "PXR_HandComponent.generated.h"

class APlayerCameraManager;

UENUM(BlueprintType)
enum class EConfidenceBehavior : uint8
{
	None,
	HideActor
};

UENUM(BlueprintType)
enum class ESystemGestureBehavior : uint8
{
	None,
	SwapMaterial
};

static const FQuat LeftRootFixupOrientation = FQuat(0.0f, FMath::Sin(-PI/4), 0.0f, FMath::Cos(PI/4));
static const FQuat RightRootFixupOrientation = FQuat(0.0f, FMath::Sin(PI/4), 0.0f, FMath::Cos(PI/4));
UCLASS(Blueprintable, ClassGroup = (PicoXRComponent), meta = (BlueprintSpawnableComponent))
class PICOXRINPUT_API UPicoXRHandComponent : public UPoseableMeshComponent
{
	GENERATED_UCLASS_BODY()
public:
	virtual void BeginPlay() override;

	virtual void TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	/** The hand skeleton that will be loaded */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "HandProperties")
	EPicoXRHandType SkeletonType;

	/** The hand mesh that will be applied to the skeleton */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "HandProperties")
	EPicoXRHandType MeshType;

	/** Behavior for when hand tracking loses high confidence tracking */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "HandProperties")
	EConfidenceBehavior ConfidenceBehavior = EConfidenceBehavior::HideActor;

	/** Behavior for when the system gesture is active */
	//UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "HandProperties")
	ESystemGestureBehavior SystemGestureBehavior = ESystemGestureBehavior::SwapMaterial;

	/** Material that gets applied to the hands when the system gesture is active */
	//UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "HandProperties")
	class UMaterialInterface* SystemGestureMaterial;

	/** Whether or not to initialize physics capsules on the skeletal mesh */
	//UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "HandProperties")
	bool bInitializePhysics;

	/** Whether or not the hand scale should update based on values from the runtime to match the users hand scale */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "HandProperties")
	bool bUpdateHandScale;

	/** Material override for the runtime skeletal mesh */
	//UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "HandProperties")
	UPROPERTY()
	class UMaterialInterface* MaterialOverride;

	/** Bone mapping for custom hand skeletal meshes */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CustomSkeletalMesh")
	TMap<EBone, FName> BoneNameMappings;

	/** List of capsule colliders created for the skeletal mesh */
	UPROPERTY(BlueprintReadOnly, Category = "HandProperties")
	TArray<FPicoXRCapsuleCollider> CollisionCapsules;

	/** Whether or not the runtime skeletal mesh has been loaded and initialized */
	//UPROPERTY(BlueprintReadOnly, Category = "HandProperties")
	bool bSkeletalMeshInitialized = false;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "HandProperties")
	TSubclassOf<APXR_HandUIAnimation2DActor> Animation2DClass;

	bool Set2DAnimationVisibility(bool bNewVisibility);
protected:
	virtual void SystemGesturePressed();
	virtual void SystemGestureReleased();


	static FName FbxBoneNameFromBoneId(EPicoXRHandType In_SkeletonType, EBone In_BoneId);


private:
	UPROPERTY()
	APXR_HandUIAnimation2DActor* Animation2DActor;
	UPROPERTY()
	APlayerCameraManager* CurrentCameraManager;
	/** Whether or not this component has authority within the frame */
	bool bHasAuthority;

	/** Whether or not a custom hand mesh is being used */
	bool bCustomHandMesh = false;

	/** Whether or not the physics capsules have been initialized */
	bool bInitializedPhysics = false;
	UPROPERTY()
	USkeletalMesh* RuntimeSkeletalMesh;
	UPROPERTY()
	UMaterialInterface* CachedBaseMaterial;

	void InitializeSkeletalMesh();

	FVector GetHomeWorldLocation(EPicoXRHandType In_SkeletonType);

	void UpdateBonePose();
	void UpdateHandTransform();
	UPROPERTY()
	FHandTrackingStage HandTrackingStage;
	UFUNCTION()
	void StageCallBackFunction(int32 TrackingStage, int32 TrackingStageProcess);
	
	const static TArray<FString> FBXHandSidePrefix;
	const static FString FBXHandBonePrefix;

	const static TArray<FString> FBXHandBoneNames;

	int32 WorldToMeters;
	EHandStage CurrentStage;
};
