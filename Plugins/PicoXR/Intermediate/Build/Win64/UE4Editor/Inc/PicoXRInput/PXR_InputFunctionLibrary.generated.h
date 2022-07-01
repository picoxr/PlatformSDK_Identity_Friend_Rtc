// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EPxrControllerKeyMap : uint8;
enum class EPicoXRHandType : uint8;
enum class EHandFinger : uint8;
enum class EPicoXRHandTrackingConfidence : uint8;
enum class EPicoXRActiveInputDevice : uint8;
enum class EBone : uint8;
struct FTransform;
struct FQuat;
class USoundWave;
enum class EControllerHand : uint8;
struct FVector;
struct FRotator;
enum class EPicoXRControllerType : uint8;
enum class EPicoXRHandedness : uint8;
enum class EPicoXRArmModelJoint : uint8;
enum class EPicoXRGazeBehavior : uint8;
enum class EPicoXRControllerDeviceType : uint8;
#ifdef PICOXRINPUT_PXR_InputFunctionLibrary_generated_h
#error "PXR_InputFunctionLibrary.generated.h already included, missing '#pragma once' in PXR_InputFunctionLibrary.h"
#endif
#define PICOXRINPUT_PXR_InputFunctionLibrary_generated_h

#define UE4PlatformSample_IdentifyFriendEtc_Plugins_PicoXR_Source_PicoXRInput_Public_PXR_InputFunctionLibrary_h_198_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAudioClipData_Statics; \
	PICOXRINPUT_API static class UScriptStruct* StaticStruct();


template<> PICOXRINPUT_API UScriptStruct* StaticStruct<struct FAudioClipData>();

#define UE4PlatformSample_IdentifyFriendEtc_Plugins_PicoXR_Source_PicoXRInput_Public_PXR_InputFunctionLibrary_h_187_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPicoXRCapsuleCollider_Statics; \
	static class UScriptStruct* StaticStruct();


template<> PICOXRINPUT_API UScriptStruct* StaticStruct<struct FPicoXRCapsuleCollider>();

#define UE4PlatformSample_IdentifyFriendEtc_Plugins_PicoXR_Source_PicoXRInput_Public_PXR_InputFunctionLibrary_h_177_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHandTrackingStage_Statics; \
	static class UScriptStruct* StaticStruct();


template<> PICOXRINPUT_API UScriptStruct* StaticStruct<struct FHandTrackingStage>();

#define UE4PlatformSample_IdentifyFriendEtc_Plugins_PicoXR_Source_PicoXRInput_Public_PXR_InputFunctionLibrary_h_216_SPARSE_DATA
#define UE4PlatformSample_IdentifyFriendEtc_Plugins_PicoXR_Source_PicoXRInput_Public_PXR_InputFunctionLibrary_h_216_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPXR_SetControllerEnableKey); \
	DECLARE_FUNCTION(execGetFingerConfidence); \
	DECLARE_FUNCTION(execGetFingerPinchStrength); \
	DECLARE_FUNCTION(execGetFingerIsPinching); \
	DECLARE_FUNCTION(execGetActiveInputDevice); \
	DECLARE_FUNCTION(execGetBoneName); \
	DECLARE_FUNCTION(execIsHandTrackingEnabled); \
	DECLARE_FUNCTION(execGetDominantHand); \
	DECLARE_FUNCTION(execGetClickStrength); \
	DECLARE_FUNCTION(execGetHandScale); \
	DECLARE_FUNCTION(execGetTrackingConfidence); \
	DECLARE_FUNCTION(execIsMenuPressed); \
	DECLARE_FUNCTION(execIsDominantHand); \
	DECLARE_FUNCTION(execIsSystemGestureInProgress); \
	DECLARE_FUNCTION(execIsRayValid); \
	DECLARE_FUNCTION(execIsInputStateValid); \
	DECLARE_FUNCTION(execIsHandTracked); \
	DECLARE_FUNCTION(execGetPointerPose); \
	DECLARE_FUNCTION(execGetBoneRotation); \
	DECLARE_FUNCTION(execPXR_StartVibrateBySharem); \
	DECLARE_FUNCTION(execPXR_SetControllerVibrationEvent); \
	DECLARE_FUNCTION(execPXR_StopControllerVCMotor); \
	DECLARE_FUNCTION(execPXR_SetControllerAmp); \
	DECLARE_FUNCTION(execPXR_StartControllerVCMotor); \
	DECLARE_FUNCTION(execPXR_GetControllerPredictedLocationAndRotation); \
	DECLARE_FUNCTION(execPXR_SetControllerOriginOffset); \
	DECLARE_FUNCTION(execPXR_GetControllerEnableHomekey); \
	DECLARE_FUNCTION(execPXR_GetHandedness); \
	DECLARE_FUNCTION(execPXR_GetControllerArmModelParam); \
	DECLARE_FUNCTION(execPXR_SetControllerArmModelParam); \
	DECLARE_FUNCTION(execPXR_GetControllerDeviceType); \
	DECLARE_FUNCTION(execPXR_VibrateController); \
	DECLARE_FUNCTION(execPXR_GetControllerLinearVelocity); \
	DECLARE_FUNCTION(execPXR_GetControllerAcceleration); \
	DECLARE_FUNCTION(execPXR_GetControllerAngularVelocity); \
	DECLARE_FUNCTION(execPXR_SetMainControllerHandle); \
	DECLARE_FUNCTION(execPXR_GetMainControllerHandle); \
	DECLARE_FUNCTION(execPXR_GetControllerConnectionState); \
	DECLARE_FUNCTION(execPXR_GetControllerPower);


#define UE4PlatformSample_IdentifyFriendEtc_Plugins_PicoXR_Source_PicoXRInput_Public_PXR_InputFunctionLibrary_h_216_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPXR_SetControllerEnableKey); \
	DECLARE_FUNCTION(execGetFingerConfidence); \
	DECLARE_FUNCTION(execGetFingerPinchStrength); \
	DECLARE_FUNCTION(execGetFingerIsPinching); \
	DECLARE_FUNCTION(execGetActiveInputDevice); \
	DECLARE_FUNCTION(execGetBoneName); \
	DECLARE_FUNCTION(execIsHandTrackingEnabled); \
	DECLARE_FUNCTION(execGetDominantHand); \
	DECLARE_FUNCTION(execGetClickStrength); \
	DECLARE_FUNCTION(execGetHandScale); \
	DECLARE_FUNCTION(execGetTrackingConfidence); \
	DECLARE_FUNCTION(execIsMenuPressed); \
	DECLARE_FUNCTION(execIsDominantHand); \
	DECLARE_FUNCTION(execIsSystemGestureInProgress); \
	DECLARE_FUNCTION(execIsRayValid); \
	DECLARE_FUNCTION(execIsInputStateValid); \
	DECLARE_FUNCTION(execIsHandTracked); \
	DECLARE_FUNCTION(execGetPointerPose); \
	DECLARE_FUNCTION(execGetBoneRotation); \
	DECLARE_FUNCTION(execPXR_StartVibrateBySharem); \
	DECLARE_FUNCTION(execPXR_SetControllerVibrationEvent); \
	DECLARE_FUNCTION(execPXR_StopControllerVCMotor); \
	DECLARE_FUNCTION(execPXR_SetControllerAmp); \
	DECLARE_FUNCTION(execPXR_StartControllerVCMotor); \
	DECLARE_FUNCTION(execPXR_GetControllerPredictedLocationAndRotation); \
	DECLARE_FUNCTION(execPXR_SetControllerOriginOffset); \
	DECLARE_FUNCTION(execPXR_GetControllerEnableHomekey); \
	DECLARE_FUNCTION(execPXR_GetHandedness); \
	DECLARE_FUNCTION(execPXR_GetControllerArmModelParam); \
	DECLARE_FUNCTION(execPXR_SetControllerArmModelParam); \
	DECLARE_FUNCTION(execPXR_GetControllerDeviceType); \
	DECLARE_FUNCTION(execPXR_VibrateController); \
	DECLARE_FUNCTION(execPXR_GetControllerLinearVelocity); \
	DECLARE_FUNCTION(execPXR_GetControllerAcceleration); \
	DECLARE_FUNCTION(execPXR_GetControllerAngularVelocity); \
	DECLARE_FUNCTION(execPXR_SetMainControllerHandle); \
	DECLARE_FUNCTION(execPXR_GetMainControllerHandle); \
	DECLARE_FUNCTION(execPXR_GetControllerConnectionState); \
	DECLARE_FUNCTION(execPXR_GetControllerPower);


#define UE4PlatformSample_IdentifyFriendEtc_Plugins_PicoXR_Source_PicoXRInput_Public_PXR_InputFunctionLibrary_h_216_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPicoXRInputFunctionLibrary(); \
	friend struct Z_Construct_UClass_UPicoXRInputFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UPicoXRInputFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PicoXRInput"), NO_API) \
	DECLARE_SERIALIZER(UPicoXRInputFunctionLibrary)


#define UE4PlatformSample_IdentifyFriendEtc_Plugins_PicoXR_Source_PicoXRInput_Public_PXR_InputFunctionLibrary_h_216_INCLASS \
private: \
	static void StaticRegisterNativesUPicoXRInputFunctionLibrary(); \
	friend struct Z_Construct_UClass_UPicoXRInputFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UPicoXRInputFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PicoXRInput"), NO_API) \
	DECLARE_SERIALIZER(UPicoXRInputFunctionLibrary)


#define UE4PlatformSample_IdentifyFriendEtc_Plugins_PicoXR_Source_PicoXRInput_Public_PXR_InputFunctionLibrary_h_216_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPicoXRInputFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPicoXRInputFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPicoXRInputFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPicoXRInputFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPicoXRInputFunctionLibrary(UPicoXRInputFunctionLibrary&&); \
	NO_API UPicoXRInputFunctionLibrary(const UPicoXRInputFunctionLibrary&); \
public:


#define UE4PlatformSample_IdentifyFriendEtc_Plugins_PicoXR_Source_PicoXRInput_Public_PXR_InputFunctionLibrary_h_216_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPicoXRInputFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPicoXRInputFunctionLibrary(UPicoXRInputFunctionLibrary&&); \
	NO_API UPicoXRInputFunctionLibrary(const UPicoXRInputFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPicoXRInputFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPicoXRInputFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPicoXRInputFunctionLibrary)


#define UE4PlatformSample_IdentifyFriendEtc_Plugins_PicoXR_Source_PicoXRInput_Public_PXR_InputFunctionLibrary_h_216_PRIVATE_PROPERTY_OFFSET
#define UE4PlatformSample_IdentifyFriendEtc_Plugins_PicoXR_Source_PicoXRInput_Public_PXR_InputFunctionLibrary_h_213_PROLOG
#define UE4PlatformSample_IdentifyFriendEtc_Plugins_PicoXR_Source_PicoXRInput_Public_PXR_InputFunctionLibrary_h_216_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE4PlatformSample_IdentifyFriendEtc_Plugins_PicoXR_Source_PicoXRInput_Public_PXR_InputFunctionLibrary_h_216_PRIVATE_PROPERTY_OFFSET \
	UE4PlatformSample_IdentifyFriendEtc_Plugins_PicoXR_Source_PicoXRInput_Public_PXR_InputFunctionLibrary_h_216_SPARSE_DATA \
	UE4PlatformSample_IdentifyFriendEtc_Plugins_PicoXR_Source_PicoXRInput_Public_PXR_InputFunctionLibrary_h_216_RPC_WRAPPERS \
	UE4PlatformSample_IdentifyFriendEtc_Plugins_PicoXR_Source_PicoXRInput_Public_PXR_InputFunctionLibrary_h_216_INCLASS \
	UE4PlatformSample_IdentifyFriendEtc_Plugins_PicoXR_Source_PicoXRInput_Public_PXR_InputFunctionLibrary_h_216_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UE4PlatformSample_IdentifyFriendEtc_Plugins_PicoXR_Source_PicoXRInput_Public_PXR_InputFunctionLibrary_h_216_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE4PlatformSample_IdentifyFriendEtc_Plugins_PicoXR_Source_PicoXRInput_Public_PXR_InputFunctionLibrary_h_216_PRIVATE_PROPERTY_OFFSET \
	UE4PlatformSample_IdentifyFriendEtc_Plugins_PicoXR_Source_PicoXRInput_Public_PXR_InputFunctionLibrary_h_216_SPARSE_DATA \
	UE4PlatformSample_IdentifyFriendEtc_Plugins_PicoXR_Source_PicoXRInput_Public_PXR_InputFunctionLibrary_h_216_RPC_WRAPPERS_NO_PURE_DECLS \
	UE4PlatformSample_IdentifyFriendEtc_Plugins_PicoXR_Source_PicoXRInput_Public_PXR_InputFunctionLibrary_h_216_INCLASS_NO_PURE_DECLS \
	UE4PlatformSample_IdentifyFriendEtc_Plugins_PicoXR_Source_PicoXRInput_Public_PXR_InputFunctionLibrary_h_216_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PICOXRINPUT_API UClass* StaticClass<class UPicoXRInputFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UE4PlatformSample_IdentifyFriendEtc_Plugins_PicoXR_Source_PicoXRInput_Public_PXR_InputFunctionLibrary_h


#define FOREACH_ENUM_EPXRCONTROLLERKEYMAP(op) \
	op(EPxrControllerKeyMap::PXR_CONTROLLER_KEY_HOME) \
	op(EPxrControllerKeyMap::PXR_CONTROLLER_KEY_AX) \
	op(EPxrControllerKeyMap::PXR_CONTROLLER_KEY_BY) \
	op(EPxrControllerKeyMap::PXR_CONTROLLER_KEY_BACK) \
	op(EPxrControllerKeyMap::PXR_CONTROLLER_KEY_TRIGGER) \
	op(EPxrControllerKeyMap::PXR_CONTROLLER_KEY_VOL_UP) \
	op(EPxrControllerKeyMap::PXR_CONTROLLER_KEY_VOL_DOWN) \
	op(EPxrControllerKeyMap::PXR_CONTROLLER_KEY_ROCKER) \
	op(EPxrControllerKeyMap::PXR_CONTROLLER_KEY_GRIP) \
	op(EPxrControllerKeyMap::PXR_CONTROLLER_KEY_TOUCHPAD) \
	op(EPxrControllerKeyMap::PXR_CONTROLLER_KEY_LASTONE) \
	op(EPxrControllerKeyMap::PXR_CONTROLLER_TOUCH_AX) \
	op(EPxrControllerKeyMap::PXR_CONTROLLER_TOUCH_BY) \
	op(EPxrControllerKeyMap::PXR_CONTROLLER_TOUCH_ROCKER) \
	op(EPxrControllerKeyMap::PXR_CONTROLLER_TOUCH_TRIGGER) \
	op(EPxrControllerKeyMap::PXR_CONTROLLER_TOUCH_THUMB) \
	op(EPxrControllerKeyMap::PXR_CONTROLLER_TOUCH_LASTONE) 

enum class EPxrControllerKeyMap : uint8;
template<> PICOXRINPUT_API UEnum* StaticEnum<EPxrControllerKeyMap>();

#define FOREACH_ENUM_EHANDPOSETYPE(op) \
	op(EHandPoseType::None) \
	op(EHandPoseType::Global) \
	op(EHandPoseType::Local) 

enum class EHandPoseType : uint8;
template<> PICOXRINPUT_API UEnum* StaticEnum<EHandPoseType>();

#define FOREACH_ENUM_EHANDSTAGE(op) \
	op(EHandStage::None) \
	op(EHandStage::LeftHandHomeStart) \
	op(EHandStage::LeftHandHomeEnd) \
	op(EHandStage::LeftHandHomeStop) \
	op(EHandStage::RightHandHomeStart) \
	op(EHandStage::RightHandHomeEnd) \
	op(EHandStage::RightHandHomeStop) \
	op(EHandStage::LeftHandResetStart) \
	op(EHandStage::LeftHandResetEnd) \
	op(EHandStage::LeftHandResetStop) \
	op(EHandStage::RightHandResetStart) \
	op(EHandStage::RightHandResetEnd) \
	op(EHandStage::RightHandResetStop) 

enum class EHandStage : uint8;
template<> PICOXRINPUT_API UEnum* StaticEnum<EHandStage>();

#define FOREACH_ENUM_EBONE(op) \
	op(EBone::Wrist_Root) \
	op(EBone::Hand_Start) \
	op(EBone::Forearm_Stub) \
	op(EBone::Thumb_0) \
	op(EBone::Thumb_1) \
	op(EBone::Thumb_2) \
	op(EBone::Thumb_3) \
	op(EBone::Index_1) \
	op(EBone::Index_2) \
	op(EBone::Index_3) \
	op(EBone::Middle_1) \
	op(EBone::Middle_2) \
	op(EBone::Middle_3) \
	op(EBone::Ring_1) \
	op(EBone::Ring_2) \
	op(EBone::Ring_3) \
	op(EBone::Pinky_0) \
	op(EBone::Pinky_1) \
	op(EBone::Pinky_2) \
	op(EBone::Pinky_3) \
	op(EBone::Max_Skinnable) \
	op(EBone::Hand_ThumbTip) \
	op(EBone::Hand_IndexTip) \
	op(EBone::Hand_MiddleTip) \
	op(EBone::Hand_RingTip) \
	op(EBone::Hand_PinkyTip) \
	op(EBone::Hand_Max) \
	op(EBone::Hand_End) \
	op(EBone::Bone_Max) \
	op(EBone::Invalid) 

enum class EBone : uint8;
template<> PICOXRINPUT_API UEnum* StaticEnum<EBone>();

#define FOREACH_ENUM_EPICOXRHANDTRACKINGCONFIDENCE(op) \
	op(EPicoXRHandTrackingConfidence::Low) \
	op(EPicoXRHandTrackingConfidence::High) 

enum class EPicoXRHandTrackingConfidence : uint8;
template<> PICOXRINPUT_API UEnum* StaticEnum<EPicoXRHandTrackingConfidence>();

#define FOREACH_ENUM_EPICOXRHANDTYPE(op) \
	op(EPicoXRHandType::None) \
	op(EPicoXRHandType::HandLeft) \
	op(EPicoXRHandType::HandRight) 

enum class EPicoXRHandType : uint8;
template<> PICOXRINPUT_API UEnum* StaticEnum<EPicoXRHandType>();

#define FOREACH_ENUM_EPICOXRACTIVEINPUTDEVICE(op) \
	op(EPicoXRActiveInputDevice::NoneActive) \
	op(EPicoXRActiveInputDevice::ControllerActive) \
	op(EPicoXRActiveInputDevice::HandTrackingActive) 

enum class EPicoXRActiveInputDevice : uint8;
template<> PICOXRINPUT_API UEnum* StaticEnum<EPicoXRActiveInputDevice>();

#define FOREACH_ENUM_EPICOXRCONTROLLERDEVICETYPE(op) \
	op(EPicoXRControllerDeviceType::UnKnown) \
	op(EPicoXRControllerDeviceType::G2) \
	op(EPicoXRControllerDeviceType::Neo2) \
	op(EPicoXRControllerDeviceType::Neo3) \
	op(EPicoXRControllerDeviceType::Phoenix) 

enum class EPicoXRControllerDeviceType : uint8;
template<> PICOXRINPUT_API UEnum* StaticEnum<EPicoXRControllerDeviceType>();

#define FOREACH_ENUM_EPICOXRGAZEBEHAVIOR(op) \
	op(EPicoXRGazeBehavior::Never) \
	op(EPicoXRGazeBehavior::DuringMotion) \
	op(EPicoXRGazeBehavior::Always) 

enum class EPicoXRGazeBehavior : uint8;
template<> PICOXRINPUT_API UEnum* StaticEnum<EPicoXRGazeBehavior>();

#define FOREACH_ENUM_EPICOXRARMMODELJOINT(op) \
	op(EPicoXRArmModelJoint::Controller) \
	op(EPicoXRArmModelJoint::Wrist) \
	op(EPicoXRArmModelJoint::Elbow) \
	op(EPicoXRArmModelJoint::Shoulder) 

enum class EPicoXRArmModelJoint : uint8;
template<> PICOXRINPUT_API UEnum* StaticEnum<EPicoXRArmModelJoint>();

#define FOREACH_ENUM_EPICOXRCONTROLLERTYPE(op) \
	op(EPicoXRControllerType::LeftHand) \
	op(EPicoXRControllerType::RightHand) \
	op(EPicoXRControllerType::G2Hand) 

enum class EPicoXRControllerType : uint8;
template<> PICOXRINPUT_API UEnum* StaticEnum<EPicoXRControllerType>();

#define FOREACH_ENUM_EPICOXRHANDEDNESS(op) \
	op(EPicoXRHandedness::LeftHand) \
	op(EPicoXRHandedness::RightHand) 

enum class EPicoXRHandedness : uint8;
template<> PICOXRINPUT_API UEnum* StaticEnum<EPicoXRHandedness>();

#define FOREACH_ENUM_EHANDFINGER(op) \
	op(EHandFinger::Thumb) \
	op(EHandFinger::Index) \
	op(EHandFinger::Middle) \
	op(EHandFinger::Ring) \
	op(EHandFinger::Pinky) \
	op(EHandFinger::Max) 

enum class EHandFinger : uint8;
template<> PICOXRINPUT_API UEnum* StaticEnum<EHandFinger>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
