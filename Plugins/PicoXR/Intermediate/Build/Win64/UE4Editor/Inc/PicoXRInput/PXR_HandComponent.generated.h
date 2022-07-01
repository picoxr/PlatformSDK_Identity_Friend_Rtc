// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PICOXRINPUT_PXR_HandComponent_generated_h
#error "PXR_HandComponent.generated.h already included, missing '#pragma once' in PXR_HandComponent.h"
#endif
#define PICOXRINPUT_PXR_HandComponent_generated_h

#define UE4PlatformSample_IdentifyFriendEtc_Plugins_PicoXR_Source_PicoXRInput_Public_PXR_HandComponent_h_30_SPARSE_DATA
#define UE4PlatformSample_IdentifyFriendEtc_Plugins_PicoXR_Source_PicoXRInput_Public_PXR_HandComponent_h_30_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execStageCallBackFunction);


#define UE4PlatformSample_IdentifyFriendEtc_Plugins_PicoXR_Source_PicoXRInput_Public_PXR_HandComponent_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execStageCallBackFunction);


#define UE4PlatformSample_IdentifyFriendEtc_Plugins_PicoXR_Source_PicoXRInput_Public_PXR_HandComponent_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPicoXRHandComponent(); \
	friend struct Z_Construct_UClass_UPicoXRHandComponent_Statics; \
public: \
	DECLARE_CLASS(UPicoXRHandComponent, UPoseableMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PicoXRInput"), NO_API) \
	DECLARE_SERIALIZER(UPicoXRHandComponent)


#define UE4PlatformSample_IdentifyFriendEtc_Plugins_PicoXR_Source_PicoXRInput_Public_PXR_HandComponent_h_30_INCLASS \
private: \
	static void StaticRegisterNativesUPicoXRHandComponent(); \
	friend struct Z_Construct_UClass_UPicoXRHandComponent_Statics; \
public: \
	DECLARE_CLASS(UPicoXRHandComponent, UPoseableMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PicoXRInput"), NO_API) \
	DECLARE_SERIALIZER(UPicoXRHandComponent)


#define UE4PlatformSample_IdentifyFriendEtc_Plugins_PicoXR_Source_PicoXRInput_Public_PXR_HandComponent_h_30_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPicoXRHandComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPicoXRHandComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPicoXRHandComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPicoXRHandComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPicoXRHandComponent(UPicoXRHandComponent&&); \
	NO_API UPicoXRHandComponent(const UPicoXRHandComponent&); \
public:


#define UE4PlatformSample_IdentifyFriendEtc_Plugins_PicoXR_Source_PicoXRInput_Public_PXR_HandComponent_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPicoXRHandComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPicoXRHandComponent(UPicoXRHandComponent&&); \
	NO_API UPicoXRHandComponent(const UPicoXRHandComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPicoXRHandComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPicoXRHandComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPicoXRHandComponent)


#define UE4PlatformSample_IdentifyFriendEtc_Plugins_PicoXR_Source_PicoXRInput_Public_PXR_HandComponent_h_30_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Animation2DActor() { return STRUCT_OFFSET(UPicoXRHandComponent, Animation2DActor); } \
	FORCEINLINE static uint32 __PPO__CurrentCameraManager() { return STRUCT_OFFSET(UPicoXRHandComponent, CurrentCameraManager); } \
	FORCEINLINE static uint32 __PPO__RuntimeSkeletalMesh() { return STRUCT_OFFSET(UPicoXRHandComponent, RuntimeSkeletalMesh); } \
	FORCEINLINE static uint32 __PPO__CachedBaseMaterial() { return STRUCT_OFFSET(UPicoXRHandComponent, CachedBaseMaterial); } \
	FORCEINLINE static uint32 __PPO__HandTrackingStage() { return STRUCT_OFFSET(UPicoXRHandComponent, HandTrackingStage); }


#define UE4PlatformSample_IdentifyFriendEtc_Plugins_PicoXR_Source_PicoXRInput_Public_PXR_HandComponent_h_27_PROLOG
#define UE4PlatformSample_IdentifyFriendEtc_Plugins_PicoXR_Source_PicoXRInput_Public_PXR_HandComponent_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE4PlatformSample_IdentifyFriendEtc_Plugins_PicoXR_Source_PicoXRInput_Public_PXR_HandComponent_h_30_PRIVATE_PROPERTY_OFFSET \
	UE4PlatformSample_IdentifyFriendEtc_Plugins_PicoXR_Source_PicoXRInput_Public_PXR_HandComponent_h_30_SPARSE_DATA \
	UE4PlatformSample_IdentifyFriendEtc_Plugins_PicoXR_Source_PicoXRInput_Public_PXR_HandComponent_h_30_RPC_WRAPPERS \
	UE4PlatformSample_IdentifyFriendEtc_Plugins_PicoXR_Source_PicoXRInput_Public_PXR_HandComponent_h_30_INCLASS \
	UE4PlatformSample_IdentifyFriendEtc_Plugins_PicoXR_Source_PicoXRInput_Public_PXR_HandComponent_h_30_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UE4PlatformSample_IdentifyFriendEtc_Plugins_PicoXR_Source_PicoXRInput_Public_PXR_HandComponent_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE4PlatformSample_IdentifyFriendEtc_Plugins_PicoXR_Source_PicoXRInput_Public_PXR_HandComponent_h_30_PRIVATE_PROPERTY_OFFSET \
	UE4PlatformSample_IdentifyFriendEtc_Plugins_PicoXR_Source_PicoXRInput_Public_PXR_HandComponent_h_30_SPARSE_DATA \
	UE4PlatformSample_IdentifyFriendEtc_Plugins_PicoXR_Source_PicoXRInput_Public_PXR_HandComponent_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	UE4PlatformSample_IdentifyFriendEtc_Plugins_PicoXR_Source_PicoXRInput_Public_PXR_HandComponent_h_30_INCLASS_NO_PURE_DECLS \
	UE4PlatformSample_IdentifyFriendEtc_Plugins_PicoXR_Source_PicoXRInput_Public_PXR_HandComponent_h_30_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class PicoXRHandComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PICOXRINPUT_API UClass* StaticClass<class UPicoXRHandComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UE4PlatformSample_IdentifyFriendEtc_Plugins_PicoXR_Source_PicoXRInput_Public_PXR_HandComponent_h


#define FOREACH_ENUM_ESYSTEMGESTUREBEHAVIOR(op) \
	op(ESystemGestureBehavior::None) \
	op(ESystemGestureBehavior::SwapMaterial) 

enum class ESystemGestureBehavior : uint8;
template<> PICOXRINPUT_API UEnum* StaticEnum<ESystemGestureBehavior>();

#define FOREACH_ENUM_ECONFIDENCEBEHAVIOR(op) \
	op(EConfidenceBehavior::None) \
	op(EConfidenceBehavior::HideActor) 

enum class EConfidenceBehavior : uint8;
template<> PICOXRINPUT_API UEnum* StaticEnum<EConfidenceBehavior>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
