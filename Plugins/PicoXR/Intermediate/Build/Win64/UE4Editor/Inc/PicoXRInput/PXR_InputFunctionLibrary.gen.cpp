// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PicoXRInput/Public/PXR_InputFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePXR_InputFunctionLibrary() {}
// Cross Module References
	PICOXRINPUT_API UEnum* Z_Construct_UEnum_PicoXRInput_EPxrControllerKeyMap();
	UPackage* Z_Construct_UPackage__Script_PicoXRInput();
	PICOXRINPUT_API UEnum* Z_Construct_UEnum_PicoXRInput_EHandPoseType();
	PICOXRINPUT_API UEnum* Z_Construct_UEnum_PicoXRInput_EHandStage();
	PICOXRINPUT_API UEnum* Z_Construct_UEnum_PicoXRInput_EBone();
	PICOXRINPUT_API UEnum* Z_Construct_UEnum_PicoXRInput_EPicoXRHandTrackingConfidence();
	PICOXRINPUT_API UEnum* Z_Construct_UEnum_PicoXRInput_EPicoXRHandType();
	PICOXRINPUT_API UEnum* Z_Construct_UEnum_PicoXRInput_EPicoXRActiveInputDevice();
	PICOXRINPUT_API UEnum* Z_Construct_UEnum_PicoXRInput_EPicoXRControllerDeviceType();
	PICOXRINPUT_API UEnum* Z_Construct_UEnum_PicoXRInput_EPicoXRGazeBehavior();
	PICOXRINPUT_API UEnum* Z_Construct_UEnum_PicoXRInput_EPicoXRArmModelJoint();
	PICOXRINPUT_API UEnum* Z_Construct_UEnum_PicoXRInput_EPicoXRControllerType();
	PICOXRINPUT_API UEnum* Z_Construct_UEnum_PicoXRInput_EPicoXRHandedness();
	PICOXRINPUT_API UEnum* Z_Construct_UEnum_PicoXRInput_EHandFinger();
	PICOXRINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FAudioClipData();
	PICOXRINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FPicoXRCapsuleCollider();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
	PICOXRINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FHandTrackingStage();
	PICOXRINPUT_API UClass* Z_Construct_UClass_UPicoXRInputFunctionLibrary_NoRegister();
	PICOXRINPUT_API UClass* Z_Construct_UClass_UPicoXRInputFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	INPUTCORE_API UEnum* Z_Construct_UEnum_InputCore_EControllerHand();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UClass* Z_Construct_UClass_USoundWave_NoRegister();
// End Cross Module References
	static UEnum* EPxrControllerKeyMap_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PicoXRInput_EPxrControllerKeyMap, Z_Construct_UPackage__Script_PicoXRInput(), TEXT("EPxrControllerKeyMap"));
		}
		return Singleton;
	}
	template<> PICOXRINPUT_API UEnum* StaticEnum<EPxrControllerKeyMap>()
	{
		return EPxrControllerKeyMap_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPxrControllerKeyMap(EPxrControllerKeyMap_StaticEnum, TEXT("/Script/PicoXRInput"), TEXT("EPxrControllerKeyMap"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PicoXRInput_EPxrControllerKeyMap_Hash() { return 2604842985U; }
	UEnum* Z_Construct_UEnum_PicoXRInput_EPxrControllerKeyMap()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PicoXRInput();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPxrControllerKeyMap"), 0, Get_Z_Construct_UEnum_PicoXRInput_EPxrControllerKeyMap_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPxrControllerKeyMap::PXR_CONTROLLER_KEY_HOME", (int64)EPxrControllerKeyMap::PXR_CONTROLLER_KEY_HOME },
				{ "EPxrControllerKeyMap::PXR_CONTROLLER_KEY_AX", (int64)EPxrControllerKeyMap::PXR_CONTROLLER_KEY_AX },
				{ "EPxrControllerKeyMap::PXR_CONTROLLER_KEY_BY", (int64)EPxrControllerKeyMap::PXR_CONTROLLER_KEY_BY },
				{ "EPxrControllerKeyMap::PXR_CONTROLLER_KEY_BACK", (int64)EPxrControllerKeyMap::PXR_CONTROLLER_KEY_BACK },
				{ "EPxrControllerKeyMap::PXR_CONTROLLER_KEY_TRIGGER", (int64)EPxrControllerKeyMap::PXR_CONTROLLER_KEY_TRIGGER },
				{ "EPxrControllerKeyMap::PXR_CONTROLLER_KEY_VOL_UP", (int64)EPxrControllerKeyMap::PXR_CONTROLLER_KEY_VOL_UP },
				{ "EPxrControllerKeyMap::PXR_CONTROLLER_KEY_VOL_DOWN", (int64)EPxrControllerKeyMap::PXR_CONTROLLER_KEY_VOL_DOWN },
				{ "EPxrControllerKeyMap::PXR_CONTROLLER_KEY_ROCKER", (int64)EPxrControllerKeyMap::PXR_CONTROLLER_KEY_ROCKER },
				{ "EPxrControllerKeyMap::PXR_CONTROLLER_KEY_GRIP", (int64)EPxrControllerKeyMap::PXR_CONTROLLER_KEY_GRIP },
				{ "EPxrControllerKeyMap::PXR_CONTROLLER_KEY_TOUCHPAD", (int64)EPxrControllerKeyMap::PXR_CONTROLLER_KEY_TOUCHPAD },
				{ "EPxrControllerKeyMap::PXR_CONTROLLER_KEY_LASTONE", (int64)EPxrControllerKeyMap::PXR_CONTROLLER_KEY_LASTONE },
				{ "EPxrControllerKeyMap::PXR_CONTROLLER_TOUCH_AX", (int64)EPxrControllerKeyMap::PXR_CONTROLLER_TOUCH_AX },
				{ "EPxrControllerKeyMap::PXR_CONTROLLER_TOUCH_BY", (int64)EPxrControllerKeyMap::PXR_CONTROLLER_TOUCH_BY },
				{ "EPxrControllerKeyMap::PXR_CONTROLLER_TOUCH_ROCKER", (int64)EPxrControllerKeyMap::PXR_CONTROLLER_TOUCH_ROCKER },
				{ "EPxrControllerKeyMap::PXR_CONTROLLER_TOUCH_TRIGGER", (int64)EPxrControllerKeyMap::PXR_CONTROLLER_TOUCH_TRIGGER },
				{ "EPxrControllerKeyMap::PXR_CONTROLLER_TOUCH_THUMB", (int64)EPxrControllerKeyMap::PXR_CONTROLLER_TOUCH_THUMB },
				{ "EPxrControllerKeyMap::PXR_CONTROLLER_TOUCH_LASTONE", (int64)EPxrControllerKeyMap::PXR_CONTROLLER_TOUCH_LASTONE },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
				{ "PXR_CONTROLLER_KEY_AX.Name", "EPxrControllerKeyMap::PXR_CONTROLLER_KEY_AX" },
				{ "PXR_CONTROLLER_KEY_BACK.Name", "EPxrControllerKeyMap::PXR_CONTROLLER_KEY_BACK" },
				{ "PXR_CONTROLLER_KEY_BY.Name", "EPxrControllerKeyMap::PXR_CONTROLLER_KEY_BY" },
				{ "PXR_CONTROLLER_KEY_GRIP.Name", "EPxrControllerKeyMap::PXR_CONTROLLER_KEY_GRIP" },
				{ "PXR_CONTROLLER_KEY_HOME.Name", "EPxrControllerKeyMap::PXR_CONTROLLER_KEY_HOME" },
				{ "PXR_CONTROLLER_KEY_LASTONE.Name", "EPxrControllerKeyMap::PXR_CONTROLLER_KEY_LASTONE" },
				{ "PXR_CONTROLLER_KEY_ROCKER.Name", "EPxrControllerKeyMap::PXR_CONTROLLER_KEY_ROCKER" },
				{ "PXR_CONTROLLER_KEY_TOUCHPAD.Name", "EPxrControllerKeyMap::PXR_CONTROLLER_KEY_TOUCHPAD" },
				{ "PXR_CONTROLLER_KEY_TRIGGER.Name", "EPxrControllerKeyMap::PXR_CONTROLLER_KEY_TRIGGER" },
				{ "PXR_CONTROLLER_KEY_VOL_DOWN.Name", "EPxrControllerKeyMap::PXR_CONTROLLER_KEY_VOL_DOWN" },
				{ "PXR_CONTROLLER_KEY_VOL_UP.Name", "EPxrControllerKeyMap::PXR_CONTROLLER_KEY_VOL_UP" },
				{ "PXR_CONTROLLER_TOUCH_AX.Name", "EPxrControllerKeyMap::PXR_CONTROLLER_TOUCH_AX" },
				{ "PXR_CONTROLLER_TOUCH_BY.Name", "EPxrControllerKeyMap::PXR_CONTROLLER_TOUCH_BY" },
				{ "PXR_CONTROLLER_TOUCH_LASTONE.Name", "EPxrControllerKeyMap::PXR_CONTROLLER_TOUCH_LASTONE" },
				{ "PXR_CONTROLLER_TOUCH_ROCKER.Name", "EPxrControllerKeyMap::PXR_CONTROLLER_TOUCH_ROCKER" },
				{ "PXR_CONTROLLER_TOUCH_THUMB.Name", "EPxrControllerKeyMap::PXR_CONTROLLER_TOUCH_THUMB" },
				{ "PXR_CONTROLLER_TOUCH_TRIGGER.Name", "EPxrControllerKeyMap::PXR_CONTROLLER_TOUCH_TRIGGER" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PicoXRInput,
				nullptr,
				"EPxrControllerKeyMap",
				"EPxrControllerKeyMap",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EHandPoseType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PicoXRInput_EHandPoseType, Z_Construct_UPackage__Script_PicoXRInput(), TEXT("EHandPoseType"));
		}
		return Singleton;
	}
	template<> PICOXRINPUT_API UEnum* StaticEnum<EHandPoseType>()
	{
		return EHandPoseType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHandPoseType(EHandPoseType_StaticEnum, TEXT("/Script/PicoXRInput"), TEXT("EHandPoseType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PicoXRInput_EHandPoseType_Hash() { return 2908252957U; }
	UEnum* Z_Construct_UEnum_PicoXRInput_EHandPoseType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PicoXRInput();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHandPoseType"), 0, Get_Z_Construct_UEnum_PicoXRInput_EHandPoseType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EHandPoseType::None", (int64)EHandPoseType::None },
				{ "EHandPoseType::Global", (int64)EHandPoseType::Global },
				{ "EHandPoseType::Local", (int64)EHandPoseType::Local },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Global.Name", "EHandPoseType::Global" },
				{ "Local.Name", "EHandPoseType::Local" },
				{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
				{ "None.Name", "EHandPoseType::None" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PicoXRInput,
				nullptr,
				"EHandPoseType",
				"EHandPoseType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EHandStage_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PicoXRInput_EHandStage, Z_Construct_UPackage__Script_PicoXRInput(), TEXT("EHandStage"));
		}
		return Singleton;
	}
	template<> PICOXRINPUT_API UEnum* StaticEnum<EHandStage>()
	{
		return EHandStage_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHandStage(EHandStage_StaticEnum, TEXT("/Script/PicoXRInput"), TEXT("EHandStage"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PicoXRInput_EHandStage_Hash() { return 4197177062U; }
	UEnum* Z_Construct_UEnum_PicoXRInput_EHandStage()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PicoXRInput();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHandStage"), 0, Get_Z_Construct_UEnum_PicoXRInput_EHandStage_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EHandStage::None", (int64)EHandStage::None },
				{ "EHandStage::LeftHandHomeStart", (int64)EHandStage::LeftHandHomeStart },
				{ "EHandStage::LeftHandHomeEnd", (int64)EHandStage::LeftHandHomeEnd },
				{ "EHandStage::LeftHandHomeStop", (int64)EHandStage::LeftHandHomeStop },
				{ "EHandStage::RightHandHomeStart", (int64)EHandStage::RightHandHomeStart },
				{ "EHandStage::RightHandHomeEnd", (int64)EHandStage::RightHandHomeEnd },
				{ "EHandStage::RightHandHomeStop", (int64)EHandStage::RightHandHomeStop },
				{ "EHandStage::LeftHandResetStart", (int64)EHandStage::LeftHandResetStart },
				{ "EHandStage::LeftHandResetEnd", (int64)EHandStage::LeftHandResetEnd },
				{ "EHandStage::LeftHandResetStop", (int64)EHandStage::LeftHandResetStop },
				{ "EHandStage::RightHandResetStart", (int64)EHandStage::RightHandResetStart },
				{ "EHandStage::RightHandResetEnd", (int64)EHandStage::RightHandResetEnd },
				{ "EHandStage::RightHandResetStop", (int64)EHandStage::RightHandResetStop },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "LeftHandHomeEnd.Name", "EHandStage::LeftHandHomeEnd" },
				{ "LeftHandHomeStart.Name", "EHandStage::LeftHandHomeStart" },
				{ "LeftHandHomeStop.Name", "EHandStage::LeftHandHomeStop" },
				{ "LeftHandResetEnd.Name", "EHandStage::LeftHandResetEnd" },
				{ "LeftHandResetStart.Name", "EHandStage::LeftHandResetStart" },
				{ "LeftHandResetStop.Name", "EHandStage::LeftHandResetStop" },
				{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
				{ "None.Name", "EHandStage::None" },
				{ "RightHandHomeEnd.Name", "EHandStage::RightHandHomeEnd" },
				{ "RightHandHomeStart.Name", "EHandStage::RightHandHomeStart" },
				{ "RightHandHomeStop.Name", "EHandStage::RightHandHomeStop" },
				{ "RightHandResetEnd.Name", "EHandStage::RightHandResetEnd" },
				{ "RightHandResetStart.Name", "EHandStage::RightHandResetStart" },
				{ "RightHandResetStop.Name", "EHandStage::RightHandResetStop" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PicoXRInput,
				nullptr,
				"EHandStage",
				"EHandStage",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EBone_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PicoXRInput_EBone, Z_Construct_UPackage__Script_PicoXRInput(), TEXT("EBone"));
		}
		return Singleton;
	}
	template<> PICOXRINPUT_API UEnum* StaticEnum<EBone>()
	{
		return EBone_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBone(EBone_StaticEnum, TEXT("/Script/PicoXRInput"), TEXT("EBone"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PicoXRInput_EBone_Hash() { return 3675212623U; }
	UEnum* Z_Construct_UEnum_PicoXRInput_EBone()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PicoXRInput();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBone"), 0, Get_Z_Construct_UEnum_PicoXRInput_EBone_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBone::Wrist_Root", (int64)EBone::Wrist_Root },
				{ "EBone::Hand_Start", (int64)EBone::Hand_Start },
				{ "EBone::Forearm_Stub", (int64)EBone::Forearm_Stub },
				{ "EBone::Thumb_0", (int64)EBone::Thumb_0 },
				{ "EBone::Thumb_1", (int64)EBone::Thumb_1 },
				{ "EBone::Thumb_2", (int64)EBone::Thumb_2 },
				{ "EBone::Thumb_3", (int64)EBone::Thumb_3 },
				{ "EBone::Index_1", (int64)EBone::Index_1 },
				{ "EBone::Index_2", (int64)EBone::Index_2 },
				{ "EBone::Index_3", (int64)EBone::Index_3 },
				{ "EBone::Middle_1", (int64)EBone::Middle_1 },
				{ "EBone::Middle_2", (int64)EBone::Middle_2 },
				{ "EBone::Middle_3", (int64)EBone::Middle_3 },
				{ "EBone::Ring_1", (int64)EBone::Ring_1 },
				{ "EBone::Ring_2", (int64)EBone::Ring_2 },
				{ "EBone::Ring_3", (int64)EBone::Ring_3 },
				{ "EBone::Pinky_0", (int64)EBone::Pinky_0 },
				{ "EBone::Pinky_1", (int64)EBone::Pinky_1 },
				{ "EBone::Pinky_2", (int64)EBone::Pinky_2 },
				{ "EBone::Pinky_3", (int64)EBone::Pinky_3 },
				{ "EBone::Max_Skinnable", (int64)EBone::Max_Skinnable },
				{ "EBone::Hand_ThumbTip", (int64)EBone::Hand_ThumbTip },
				{ "EBone::Hand_IndexTip", (int64)EBone::Hand_IndexTip },
				{ "EBone::Hand_MiddleTip", (int64)EBone::Hand_MiddleTip },
				{ "EBone::Hand_RingTip", (int64)EBone::Hand_RingTip },
				{ "EBone::Hand_PinkyTip", (int64)EBone::Hand_PinkyTip },
				{ "EBone::Hand_Max", (int64)EBone::Hand_Max },
				{ "EBone::Hand_End", (int64)EBone::Hand_End },
				{ "EBone::Bone_Max", (int64)EBone::Bone_Max },
				{ "EBone::Invalid", (int64)EBone::Invalid },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Bone_Max.DisplayName", "Bone_Max" },
				{ "Bone_Max.Name", "EBone::Bone_Max" },
				{ "Comment", "/**\n* EBone is enum representing the Bone Ids that come from the PicoXR Runtime.\n*/" },
				{ "Forearm_Stub.DisplayName", "forearm_stub" },
				{ "Forearm_Stub.Name", "EBone::Forearm_Stub" },
				{ "Hand_End.DisplayName", "Hand_End" },
				{ "Hand_End.Name", "EBone::Hand_End" },
				{ "Hand_IndexTip.DisplayName", "Hand_IndexTip" },
				{ "Hand_IndexTip.Name", "EBone::Hand_IndexTip" },
				{ "Hand_Max.DisplayName", "Hand_Max" },
				{ "Hand_Max.Name", "EBone::Hand_Max" },
				{ "Hand_MiddleTip.DisplayName", "Hand_MiddleTip" },
				{ "Hand_MiddleTip.Name", "EBone::Hand_MiddleTip" },
				{ "Hand_PinkyTip.DisplayName", "Hand_PinkyTip" },
				{ "Hand_PinkyTip.Name", "EBone::Hand_PinkyTip" },
				{ "Hand_RingTip.DisplayName", "Hand_RingTip" },
				{ "Hand_RingTip.Name", "EBone::Hand_RingTip" },
				{ "Hand_Start.DisplayName", "Hand Start" },
				{ "Hand_Start.Name", "EBone::Hand_Start" },
				{ "Hand_ThumbTip.DisplayName", "Hand_ThumbTip" },
				{ "Hand_ThumbTip.Name", "EBone::Hand_ThumbTip" },
				{ "Index_1.DisplayName", "index1" },
				{ "Index_1.Name", "EBone::Index_1" },
				{ "Index_2.DisplayName", "index2" },
				{ "Index_2.Name", "EBone::Index_2" },
				{ "Index_3.DisplayName", "index3" },
				{ "Index_3.Name", "EBone::Index_3" },
				{ "Invalid.DisplayName", "Invalid" },
				{ "Invalid.Name", "EBone::Invalid" },
				{ "Max_Skinnable.DisplayName", "Max Skinnable" },
				{ "Max_Skinnable.Name", "EBone::Max_Skinnable" },
				{ "Middle_1.DisplayName", "middle1" },
				{ "Middle_1.Name", "EBone::Middle_1" },
				{ "Middle_2.DisplayName", "middle2" },
				{ "Middle_2.Name", "EBone::Middle_2" },
				{ "Middle_3.DisplayName", "middle3" },
				{ "Middle_3.Name", "EBone::Middle_3" },
				{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
				{ "Pinky_0.DisplayName", "pinky0" },
				{ "Pinky_0.Name", "EBone::Pinky_0" },
				{ "Pinky_1.DisplayName", "pinky1" },
				{ "Pinky_1.Name", "EBone::Pinky_1" },
				{ "Pinky_2.DisplayName", "pinky2" },
				{ "Pinky_2.Name", "EBone::Pinky_2" },
				{ "Pinky_3.DisplayName", "pinky3" },
				{ "Pinky_3.Name", "EBone::Pinky_3" },
				{ "Ring_1.DisplayName", "ring1" },
				{ "Ring_1.Name", "EBone::Ring_1" },
				{ "Ring_2.DisplayName", "ring2" },
				{ "Ring_2.Name", "EBone::Ring_2" },
				{ "Ring_3.DisplayName", "ring3" },
				{ "Ring_3.Name", "EBone::Ring_3" },
				{ "Thumb_0.DisplayName", "thumb0" },
				{ "Thumb_0.Name", "EBone::Thumb_0" },
				{ "Thumb_1.DisplayName", "thumb1" },
				{ "Thumb_1.Name", "EBone::Thumb_1" },
				{ "Thumb_2.DisplayName", "thumb2" },
				{ "Thumb_2.Name", "EBone::Thumb_2" },
				{ "Thumb_3.DisplayName", "thumb3" },
				{ "Thumb_3.Name", "EBone::Thumb_3" },
				{ "ToolTip", "EBone is enum representing the Bone Ids that come from the PicoXR Runtime." },
				{ "Wrist_Root.DisplayName", "wrist" },
				{ "Wrist_Root.Name", "EBone::Wrist_Root" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PicoXRInput,
				nullptr,
				"EBone",
				"EBone",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EPicoXRHandTrackingConfidence_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PicoXRInput_EPicoXRHandTrackingConfidence, Z_Construct_UPackage__Script_PicoXRInput(), TEXT("EPicoXRHandTrackingConfidence"));
		}
		return Singleton;
	}
	template<> PICOXRINPUT_API UEnum* StaticEnum<EPicoXRHandTrackingConfidence>()
	{
		return EPicoXRHandTrackingConfidence_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPicoXRHandTrackingConfidence(EPicoXRHandTrackingConfidence_StaticEnum, TEXT("/Script/PicoXRInput"), TEXT("EPicoXRHandTrackingConfidence"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PicoXRInput_EPicoXRHandTrackingConfidence_Hash() { return 3637640676U; }
	UEnum* Z_Construct_UEnum_PicoXRInput_EPicoXRHandTrackingConfidence()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PicoXRInput();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPicoXRHandTrackingConfidence"), 0, Get_Z_Construct_UEnum_PicoXRInput_EPicoXRHandTrackingConfidence_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPicoXRHandTrackingConfidence::Low", (int64)EPicoXRHandTrackingConfidence::Low },
				{ "EPicoXRHandTrackingConfidence::High", (int64)EPicoXRHandTrackingConfidence::High },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "High.Name", "EPicoXRHandTrackingConfidence::High" },
				{ "Low.Name", "EPicoXRHandTrackingConfidence::Low" },
				{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PicoXRInput,
				nullptr,
				"EPicoXRHandTrackingConfidence",
				"EPicoXRHandTrackingConfidence",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EPicoXRHandType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PicoXRInput_EPicoXRHandType, Z_Construct_UPackage__Script_PicoXRInput(), TEXT("EPicoXRHandType"));
		}
		return Singleton;
	}
	template<> PICOXRINPUT_API UEnum* StaticEnum<EPicoXRHandType>()
	{
		return EPicoXRHandType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPicoXRHandType(EPicoXRHandType_StaticEnum, TEXT("/Script/PicoXRInput"), TEXT("EPicoXRHandType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PicoXRInput_EPicoXRHandType_Hash() { return 548043365U; }
	UEnum* Z_Construct_UEnum_PicoXRInput_EPicoXRHandType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PicoXRInput();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPicoXRHandType"), 0, Get_Z_Construct_UEnum_PicoXRInput_EPicoXRHandType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPicoXRHandType::None", (int64)EPicoXRHandType::None },
				{ "EPicoXRHandType::HandLeft", (int64)EPicoXRHandType::HandLeft },
				{ "EPicoXRHandType::HandRight", (int64)EPicoXRHandType::HandRight },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "HandLeft.Name", "EPicoXRHandType::HandLeft" },
				{ "HandRight.Name", "EPicoXRHandType::HandRight" },
				{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
				{ "None.Name", "EPicoXRHandType::None" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PicoXRInput,
				nullptr,
				"EPicoXRHandType",
				"EPicoXRHandType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EPicoXRActiveInputDevice_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PicoXRInput_EPicoXRActiveInputDevice, Z_Construct_UPackage__Script_PicoXRInput(), TEXT("EPicoXRActiveInputDevice"));
		}
		return Singleton;
	}
	template<> PICOXRINPUT_API UEnum* StaticEnum<EPicoXRActiveInputDevice>()
	{
		return EPicoXRActiveInputDevice_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPicoXRActiveInputDevice(EPicoXRActiveInputDevice_StaticEnum, TEXT("/Script/PicoXRInput"), TEXT("EPicoXRActiveInputDevice"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PicoXRInput_EPicoXRActiveInputDevice_Hash() { return 4177481425U; }
	UEnum* Z_Construct_UEnum_PicoXRInput_EPicoXRActiveInputDevice()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PicoXRInput();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPicoXRActiveInputDevice"), 0, Get_Z_Construct_UEnum_PicoXRInput_EPicoXRActiveInputDevice_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPicoXRActiveInputDevice::NoneActive", (int64)EPicoXRActiveInputDevice::NoneActive },
				{ "EPicoXRActiveInputDevice::ControllerActive", (int64)EPicoXRActiveInputDevice::ControllerActive },
				{ "EPicoXRActiveInputDevice::HandTrackingActive", (int64)EPicoXRActiveInputDevice::HandTrackingActive },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ControllerActive.Name", "EPicoXRActiveInputDevice::ControllerActive" },
				{ "HandTrackingActive.Name", "EPicoXRActiveInputDevice::HandTrackingActive" },
				{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
				{ "NoneActive.Name", "EPicoXRActiveInputDevice::NoneActive" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PicoXRInput,
				nullptr,
				"EPicoXRActiveInputDevice",
				"EPicoXRActiveInputDevice",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EPicoXRControllerDeviceType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PicoXRInput_EPicoXRControllerDeviceType, Z_Construct_UPackage__Script_PicoXRInput(), TEXT("EPicoXRControllerDeviceType"));
		}
		return Singleton;
	}
	template<> PICOXRINPUT_API UEnum* StaticEnum<EPicoXRControllerDeviceType>()
	{
		return EPicoXRControllerDeviceType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPicoXRControllerDeviceType(EPicoXRControllerDeviceType_StaticEnum, TEXT("/Script/PicoXRInput"), TEXT("EPicoXRControllerDeviceType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PicoXRInput_EPicoXRControllerDeviceType_Hash() { return 1729567820U; }
	UEnum* Z_Construct_UEnum_PicoXRInput_EPicoXRControllerDeviceType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PicoXRInput();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPicoXRControllerDeviceType"), 0, Get_Z_Construct_UEnum_PicoXRInput_EPicoXRControllerDeviceType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPicoXRControllerDeviceType::UnKnown", (int64)EPicoXRControllerDeviceType::UnKnown },
				{ "EPicoXRControllerDeviceType::G2", (int64)EPicoXRControllerDeviceType::G2 },
				{ "EPicoXRControllerDeviceType::Neo2", (int64)EPicoXRControllerDeviceType::Neo2 },
				{ "EPicoXRControllerDeviceType::Neo3", (int64)EPicoXRControllerDeviceType::Neo3 },
				{ "EPicoXRControllerDeviceType::Phoenix", (int64)EPicoXRControllerDeviceType::Phoenix },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "G2.DisplayName", "Pico G2" },
				{ "G2.Name", "EPicoXRControllerDeviceType::G2" },
				{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
				{ "Neo2.DisplayName", "Pico Neo2" },
				{ "Neo2.Name", "EPicoXRControllerDeviceType::Neo2" },
				{ "Neo3.DisplayName", "Pico Neo3" },
				{ "Neo3.Name", "EPicoXRControllerDeviceType::Neo3" },
				{ "Phoenix.DisplayName", "Pico Phoenix" },
				{ "Phoenix.Name", "EPicoXRControllerDeviceType::Phoenix" },
				{ "UnKnown.DisplayName", "UnKnown Controller" },
				{ "UnKnown.Name", "EPicoXRControllerDeviceType::UnKnown" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PicoXRInput,
				nullptr,
				"EPicoXRControllerDeviceType",
				"EPicoXRControllerDeviceType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EPicoXRGazeBehavior_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PicoXRInput_EPicoXRGazeBehavior, Z_Construct_UPackage__Script_PicoXRInput(), TEXT("EPicoXRGazeBehavior"));
		}
		return Singleton;
	}
	template<> PICOXRINPUT_API UEnum* StaticEnum<EPicoXRGazeBehavior>()
	{
		return EPicoXRGazeBehavior_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPicoXRGazeBehavior(EPicoXRGazeBehavior_StaticEnum, TEXT("/Script/PicoXRInput"), TEXT("EPicoXRGazeBehavior"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PicoXRInput_EPicoXRGazeBehavior_Hash() { return 3594333153U; }
	UEnum* Z_Construct_UEnum_PicoXRInput_EPicoXRGazeBehavior()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PicoXRInput();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPicoXRGazeBehavior"), 0, Get_Z_Construct_UEnum_PicoXRInput_EPicoXRGazeBehavior_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPicoXRGazeBehavior::Never", (int64)EPicoXRGazeBehavior::Never },
				{ "EPicoXRGazeBehavior::DuringMotion", (int64)EPicoXRGazeBehavior::DuringMotion },
				{ "EPicoXRGazeBehavior::Always", (int64)EPicoXRGazeBehavior::Always },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Always.Name", "EPicoXRGazeBehavior::Always" },
				{ "BlueprintType", "true" },
				{ "DuringMotion.Name", "EPicoXRGazeBehavior::DuringMotion" },
				{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
				{ "Never.Name", "EPicoXRGazeBehavior::Never" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PicoXRInput,
				nullptr,
				"EPicoXRGazeBehavior",
				"EPicoXRGazeBehavior",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EPicoXRArmModelJoint_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PicoXRInput_EPicoXRArmModelJoint, Z_Construct_UPackage__Script_PicoXRInput(), TEXT("EPicoXRArmModelJoint"));
		}
		return Singleton;
	}
	template<> PICOXRINPUT_API UEnum* StaticEnum<EPicoXRArmModelJoint>()
	{
		return EPicoXRArmModelJoint_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPicoXRArmModelJoint(EPicoXRArmModelJoint_StaticEnum, TEXT("/Script/PicoXRInput"), TEXT("EPicoXRArmModelJoint"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PicoXRInput_EPicoXRArmModelJoint_Hash() { return 39512613U; }
	UEnum* Z_Construct_UEnum_PicoXRInput_EPicoXRArmModelJoint()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PicoXRInput();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPicoXRArmModelJoint"), 0, Get_Z_Construct_UEnum_PicoXRInput_EPicoXRArmModelJoint_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPicoXRArmModelJoint::Controller", (int64)EPicoXRArmModelJoint::Controller },
				{ "EPicoXRArmModelJoint::Wrist", (int64)EPicoXRArmModelJoint::Wrist },
				{ "EPicoXRArmModelJoint::Elbow", (int64)EPicoXRArmModelJoint::Elbow },
				{ "EPicoXRArmModelJoint::Shoulder", (int64)EPicoXRArmModelJoint::Shoulder },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Controller.Name", "EPicoXRArmModelJoint::Controller" },
				{ "Elbow.Name", "EPicoXRArmModelJoint::Elbow" },
				{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
				{ "Shoulder.Name", "EPicoXRArmModelJoint::Shoulder" },
				{ "Wrist.Name", "EPicoXRArmModelJoint::Wrist" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PicoXRInput,
				nullptr,
				"EPicoXRArmModelJoint",
				"EPicoXRArmModelJoint",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EPicoXRControllerType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PicoXRInput_EPicoXRControllerType, Z_Construct_UPackage__Script_PicoXRInput(), TEXT("EPicoXRControllerType"));
		}
		return Singleton;
	}
	template<> PICOXRINPUT_API UEnum* StaticEnum<EPicoXRControllerType>()
	{
		return EPicoXRControllerType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPicoXRControllerType(EPicoXRControllerType_StaticEnum, TEXT("/Script/PicoXRInput"), TEXT("EPicoXRControllerType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PicoXRInput_EPicoXRControllerType_Hash() { return 2798331063U; }
	UEnum* Z_Construct_UEnum_PicoXRInput_EPicoXRControllerType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PicoXRInput();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPicoXRControllerType"), 0, Get_Z_Construct_UEnum_PicoXRInput_EPicoXRControllerType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPicoXRControllerType::LeftHand", (int64)EPicoXRControllerType::LeftHand },
				{ "EPicoXRControllerType::RightHand", (int64)EPicoXRControllerType::RightHand },
				{ "EPicoXRControllerType::G2Hand", (int64)EPicoXRControllerType::G2Hand },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "G2Hand.DisplayName", "Pico G2 Hand" },
				{ "G2Hand.Name", "EPicoXRControllerType::G2Hand" },
				{ "LeftHand.DisplayName", "Pico LeftHand" },
				{ "LeftHand.Name", "EPicoXRControllerType::LeftHand" },
				{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
				{ "RightHand.DisplayName", "Pico RightHand" },
				{ "RightHand.Name", "EPicoXRControllerType::RightHand" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PicoXRInput,
				nullptr,
				"EPicoXRControllerType",
				"EPicoXRControllerType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EPicoXRHandedness_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PicoXRInput_EPicoXRHandedness, Z_Construct_UPackage__Script_PicoXRInput(), TEXT("EPicoXRHandedness"));
		}
		return Singleton;
	}
	template<> PICOXRINPUT_API UEnum* StaticEnum<EPicoXRHandedness>()
	{
		return EPicoXRHandedness_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPicoXRHandedness(EPicoXRHandedness_StaticEnum, TEXT("/Script/PicoXRInput"), TEXT("EPicoXRHandedness"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PicoXRInput_EPicoXRHandedness_Hash() { return 3256712269U; }
	UEnum* Z_Construct_UEnum_PicoXRInput_EPicoXRHandedness()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PicoXRInput();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPicoXRHandedness"), 0, Get_Z_Construct_UEnum_PicoXRInput_EPicoXRHandedness_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPicoXRHandedness::LeftHand", (int64)EPicoXRHandedness::LeftHand },
				{ "EPicoXRHandedness::RightHand", (int64)EPicoXRHandedness::RightHand },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "LeftHand.Name", "EPicoXRHandedness::LeftHand" },
				{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
				{ "RightHand.Name", "EPicoXRHandedness::RightHand" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PicoXRInput,
				nullptr,
				"EPicoXRHandedness",
				"EPicoXRHandedness",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EHandFinger_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PicoXRInput_EHandFinger, Z_Construct_UPackage__Script_PicoXRInput(), TEXT("EHandFinger"));
		}
		return Singleton;
	}
	template<> PICOXRINPUT_API UEnum* StaticEnum<EHandFinger>()
	{
		return EHandFinger_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHandFinger(EHandFinger_StaticEnum, TEXT("/Script/PicoXRInput"), TEXT("EHandFinger"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PicoXRInput_EHandFinger_Hash() { return 1973507907U; }
	UEnum* Z_Construct_UEnum_PicoXRInput_EHandFinger()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PicoXRInput();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHandFinger"), 0, Get_Z_Construct_UEnum_PicoXRInput_EHandFinger_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EHandFinger::Thumb", (int64)EHandFinger::Thumb },
				{ "EHandFinger::Index", (int64)EHandFinger::Index },
				{ "EHandFinger::Middle", (int64)EHandFinger::Middle },
				{ "EHandFinger::Ring", (int64)EHandFinger::Ring },
				{ "EHandFinger::Pinky", (int64)EHandFinger::Pinky },
				{ "EHandFinger::Max", (int64)EHandFinger::Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Index.Name", "EHandFinger::Index" },
				{ "Max.Name", "EHandFinger::Max" },
				{ "Middle.Name", "EHandFinger::Middle" },
				{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
				{ "Pinky.Name", "EHandFinger::Pinky" },
				{ "Ring.Name", "EHandFinger::Ring" },
				{ "Thumb.Name", "EHandFinger::Thumb" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PicoXRInput,
				nullptr,
				"EHandFinger",
				"EHandFinger",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FAudioClipData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PICOXRINPUT_API uint32 Get_Z_Construct_UScriptStruct_FAudioClipData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAudioClipData, Z_Construct_UPackage__Script_PicoXRInput(), TEXT("AudioClipData"), sizeof(FAudioClipData), Get_Z_Construct_UScriptStruct_FAudioClipData_Hash());
	}
	return Singleton;
}
template<> PICOXRINPUT_API UScriptStruct* StaticStruct<FAudioClipData>()
{
	return FAudioClipData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAudioClipData(FAudioClipData::StaticStruct, TEXT("/Script/PicoXRInput"), TEXT("AudioClipData"), false, nullptr, nullptr);
static struct FScriptStruct_PicoXRInput_StaticRegisterNativesFAudioClipData
{
	FScriptStruct_PicoXRInput_StaticRegisterNativesFAudioClipData()
	{
		UScriptStruct::DeferCppStructOps<FAudioClipData>(FName(TEXT("AudioClipData")));
	}
} ScriptStruct_PicoXRInput_StaticRegisterNativesFAudioClipData;
	struct Z_Construct_UScriptStruct_FAudioClipData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_delaytag_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_delaytag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_slot_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_slot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_buffersize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_buffersize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sampleRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_sampleRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_channelMask_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_channelMask;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bitrate_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bitrate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioClipData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAudioClipData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAudioClipData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioClipData_Statics::NewProp_delaytag_MetaData[] = {
		{ "Category", "PXR|PXRSystemAPI" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAudioClipData_Statics::NewProp_delaytag = { "delaytag", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAudioClipData, delaytag), METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioClipData_Statics::NewProp_delaytag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioClipData_Statics::NewProp_delaytag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioClipData_Statics::NewProp_slot_MetaData[] = {
		{ "Category", "PXR|PXRSystemAPI" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAudioClipData_Statics::NewProp_slot = { "slot", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAudioClipData, slot), METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioClipData_Statics::NewProp_slot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioClipData_Statics::NewProp_slot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioClipData_Statics::NewProp_buffersize_MetaData[] = {
		{ "Category", "PXR|PXRSystemAPI" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAudioClipData_Statics::NewProp_buffersize = { "buffersize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAudioClipData, buffersize), METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioClipData_Statics::NewProp_buffersize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioClipData_Statics::NewProp_buffersize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioClipData_Statics::NewProp_sampleRate_MetaData[] = {
		{ "Category", "PXR|PXRSystemAPI" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAudioClipData_Statics::NewProp_sampleRate = { "sampleRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAudioClipData, sampleRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioClipData_Statics::NewProp_sampleRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioClipData_Statics::NewProp_sampleRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioClipData_Statics::NewProp_channelMask_MetaData[] = {
		{ "Category", "PXR|PXRSystemAPI" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAudioClipData_Statics::NewProp_channelMask = { "channelMask", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAudioClipData, channelMask), METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioClipData_Statics::NewProp_channelMask_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioClipData_Statics::NewProp_channelMask_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioClipData_Statics::NewProp_bitrate_MetaData[] = {
		{ "Category", "PXR|PXRSystemAPI" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAudioClipData_Statics::NewProp_bitrate = { "bitrate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAudioClipData, bitrate), METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioClipData_Statics::NewProp_bitrate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioClipData_Statics::NewProp_bitrate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAudioClipData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioClipData_Statics::NewProp_delaytag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioClipData_Statics::NewProp_slot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioClipData_Statics::NewProp_buffersize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioClipData_Statics::NewProp_sampleRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioClipData_Statics::NewProp_channelMask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioClipData_Statics::NewProp_bitrate,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAudioClipData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PicoXRInput,
		nullptr,
		&NewStructOps,
		"AudioClipData",
		sizeof(FAudioClipData),
		alignof(FAudioClipData),
		Z_Construct_UScriptStruct_FAudioClipData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioClipData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioClipData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioClipData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAudioClipData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAudioClipData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PicoXRInput();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AudioClipData"), sizeof(FAudioClipData), Get_Z_Construct_UScriptStruct_FAudioClipData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAudioClipData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAudioClipData_Hash() { return 2238094613U; }
class UScriptStruct* FPicoXRCapsuleCollider::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PICOXRINPUT_API uint32 Get_Z_Construct_UScriptStruct_FPicoXRCapsuleCollider_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPicoXRCapsuleCollider, Z_Construct_UPackage__Script_PicoXRInput(), TEXT("PicoXRCapsuleCollider"), sizeof(FPicoXRCapsuleCollider), Get_Z_Construct_UScriptStruct_FPicoXRCapsuleCollider_Hash());
	}
	return Singleton;
}
template<> PICOXRINPUT_API UScriptStruct* StaticStruct<FPicoXRCapsuleCollider>()
{
	return FPicoXRCapsuleCollider::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPicoXRCapsuleCollider(FPicoXRCapsuleCollider::StaticStruct, TEXT("/Script/PicoXRInput"), TEXT("PicoXRCapsuleCollider"), false, nullptr, nullptr);
static struct FScriptStruct_PicoXRInput_StaticRegisterNativesFPicoXRCapsuleCollider
{
	FScriptStruct_PicoXRInput_StaticRegisterNativesFPicoXRCapsuleCollider()
	{
		UScriptStruct::DeferCppStructOps<FPicoXRCapsuleCollider>(FName(TEXT("PicoXRCapsuleCollider")));
	}
} ScriptStruct_PicoXRInput_StaticRegisterNativesFPicoXRCapsuleCollider;
	struct Z_Construct_UScriptStruct_FPicoXRCapsuleCollider_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Capsule_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Capsule;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BoneId_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneId_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BoneId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPicoXRCapsuleCollider_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPicoXRCapsuleCollider_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPicoXRCapsuleCollider>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPicoXRCapsuleCollider_Statics::NewProp_Capsule_MetaData[] = {
		{ "Category", "PicoXR|PicoXRHandTracking" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPicoXRCapsuleCollider_Statics::NewProp_Capsule = { "Capsule", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPicoXRCapsuleCollider, Capsule), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPicoXRCapsuleCollider_Statics::NewProp_Capsule_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPicoXRCapsuleCollider_Statics::NewProp_Capsule_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPicoXRCapsuleCollider_Statics::NewProp_BoneId_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPicoXRCapsuleCollider_Statics::NewProp_BoneId_MetaData[] = {
		{ "Category", "PicoXR|PicoXRHandTracking" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPicoXRCapsuleCollider_Statics::NewProp_BoneId = { "BoneId", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPicoXRCapsuleCollider, BoneId), Z_Construct_UEnum_PicoXRInput_EBone, METADATA_PARAMS(Z_Construct_UScriptStruct_FPicoXRCapsuleCollider_Statics::NewProp_BoneId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPicoXRCapsuleCollider_Statics::NewProp_BoneId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPicoXRCapsuleCollider_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPicoXRCapsuleCollider_Statics::NewProp_Capsule,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPicoXRCapsuleCollider_Statics::NewProp_BoneId_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPicoXRCapsuleCollider_Statics::NewProp_BoneId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPicoXRCapsuleCollider_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PicoXRInput,
		nullptr,
		&NewStructOps,
		"PicoXRCapsuleCollider",
		sizeof(FPicoXRCapsuleCollider),
		alignof(FPicoXRCapsuleCollider),
		Z_Construct_UScriptStruct_FPicoXRCapsuleCollider_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPicoXRCapsuleCollider_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPicoXRCapsuleCollider_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPicoXRCapsuleCollider_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPicoXRCapsuleCollider()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPicoXRCapsuleCollider_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PicoXRInput();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PicoXRCapsuleCollider"), sizeof(FPicoXRCapsuleCollider), Get_Z_Construct_UScriptStruct_FPicoXRCapsuleCollider_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPicoXRCapsuleCollider_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPicoXRCapsuleCollider_Hash() { return 421168897U; }
class UScriptStruct* FHandTrackingStage::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PICOXRINPUT_API uint32 Get_Z_Construct_UScriptStruct_FHandTrackingStage_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FHandTrackingStage, Z_Construct_UPackage__Script_PicoXRInput(), TEXT("HandTrackingStage"), sizeof(FHandTrackingStage), Get_Z_Construct_UScriptStruct_FHandTrackingStage_Hash());
	}
	return Singleton;
}
template<> PICOXRINPUT_API UScriptStruct* StaticStruct<FHandTrackingStage>()
{
	return FHandTrackingStage::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FHandTrackingStage(FHandTrackingStage::StaticStruct, TEXT("/Script/PicoXRInput"), TEXT("HandTrackingStage"), false, nullptr, nullptr);
static struct FScriptStruct_PicoXRInput_StaticRegisterNativesFHandTrackingStage
{
	FScriptStruct_PicoXRInput_StaticRegisterNativesFHandTrackingStage()
	{
		UScriptStruct::DeferCppStructOps<FHandTrackingStage>(FName(TEXT("HandTrackingStage")));
	}
} ScriptStruct_PicoXRInput_StaticRegisterNativesFHandTrackingStage;
	struct Z_Construct_UScriptStruct_FHandTrackingStage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TrackingStage_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackingStage_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TrackingStage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackingStageProgress_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_TrackingStageProgress;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHandTrackingStage_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHandTrackingStage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHandTrackingStage>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FHandTrackingStage_Statics::NewProp_TrackingStage_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHandTrackingStage_Statics::NewProp_TrackingStage_MetaData[] = {
		{ "Category", "PicoXR|PicoXRHandTracking" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FHandTrackingStage_Statics::NewProp_TrackingStage = { "TrackingStage", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHandTrackingStage, TrackingStage), Z_Construct_UEnum_PicoXRInput_EHandStage, METADATA_PARAMS(Z_Construct_UScriptStruct_FHandTrackingStage_Statics::NewProp_TrackingStage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHandTrackingStage_Statics::NewProp_TrackingStage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHandTrackingStage_Statics::NewProp_TrackingStageProgress_MetaData[] = {
		{ "Category", "PicoXR|PicoXRHandTracking" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FHandTrackingStage_Statics::NewProp_TrackingStageProgress = { "TrackingStageProgress", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHandTrackingStage, TrackingStageProgress), METADATA_PARAMS(Z_Construct_UScriptStruct_FHandTrackingStage_Statics::NewProp_TrackingStageProgress_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHandTrackingStage_Statics::NewProp_TrackingStageProgress_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHandTrackingStage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHandTrackingStage_Statics::NewProp_TrackingStage_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHandTrackingStage_Statics::NewProp_TrackingStage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHandTrackingStage_Statics::NewProp_TrackingStageProgress,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHandTrackingStage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PicoXRInput,
		nullptr,
		&NewStructOps,
		"HandTrackingStage",
		sizeof(FHandTrackingStage),
		alignof(FHandTrackingStage),
		Z_Construct_UScriptStruct_FHandTrackingStage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHandTrackingStage_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHandTrackingStage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHandTrackingStage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHandTrackingStage()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FHandTrackingStage_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PicoXRInput();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("HandTrackingStage"), sizeof(FHandTrackingStage), Get_Z_Construct_UScriptStruct_FHandTrackingStage_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FHandTrackingStage_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FHandTrackingStage_Hash() { return 3689664667U; }
	DEFINE_FUNCTION(UPicoXRInputFunctionLibrary::execPXR_SetControllerEnableKey)
	{
		P_GET_UBOOL(Z_Param_isEnable);
		P_GET_ENUM(EPxrControllerKeyMap,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UPicoXRInputFunctionLibrary::PXR_SetControllerEnableKey(Z_Param_isEnable,EPxrControllerKeyMap(Z_Param_Key));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPicoXRInputFunctionLibrary::execGetFingerConfidence)
	{
		P_GET_ENUM(EPicoXRHandType,Z_Param_DeviceHand);
		P_GET_ENUM(EHandFinger,Z_Param_Finger);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EPicoXRHandTrackingConfidence*)Z_Param__Result=UPicoXRInputFunctionLibrary::GetFingerConfidence(EPicoXRHandType(Z_Param_DeviceHand),EHandFinger(Z_Param_Finger));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPicoXRInputFunctionLibrary::execGetFingerPinchStrength)
	{
		P_GET_ENUM(EPicoXRHandType,Z_Param_DeviceHand);
		P_GET_ENUM(EHandFinger,Z_Param_Finger);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UPicoXRInputFunctionLibrary::GetFingerPinchStrength(EPicoXRHandType(Z_Param_DeviceHand),EHandFinger(Z_Param_Finger));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPicoXRInputFunctionLibrary::execGetFingerIsPinching)
	{
		P_GET_ENUM(EPicoXRHandType,Z_Param_DeviceHand);
		P_GET_ENUM(EHandFinger,Z_Param_Finger);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPicoXRInputFunctionLibrary::GetFingerIsPinching(EPicoXRHandType(Z_Param_DeviceHand),EHandFinger(Z_Param_Finger));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPicoXRInputFunctionLibrary::execGetActiveInputDevice)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EPicoXRActiveInputDevice*)Z_Param__Result=UPicoXRInputFunctionLibrary::GetActiveInputDevice();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPicoXRInputFunctionLibrary::execGetBoneName)
	{
		P_GET_ENUM(EBone,Z_Param_BoneId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UPicoXRInputFunctionLibrary::GetBoneName(EBone(Z_Param_BoneId));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPicoXRInputFunctionLibrary::execIsHandTrackingEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPicoXRInputFunctionLibrary::IsHandTrackingEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPicoXRInputFunctionLibrary::execGetDominantHand)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EPicoXRHandType*)Z_Param__Result=UPicoXRInputFunctionLibrary::GetDominantHand();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPicoXRInputFunctionLibrary::execGetClickStrength)
	{
		P_GET_ENUM(EPicoXRHandType,Z_Param_DeviceHand);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UPicoXRInputFunctionLibrary::GetClickStrength(EPicoXRHandType(Z_Param_DeviceHand));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPicoXRInputFunctionLibrary::execGetHandScale)
	{
		P_GET_ENUM(EPicoXRHandType,Z_Param_DeviceHand);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UPicoXRInputFunctionLibrary::GetHandScale(EPicoXRHandType(Z_Param_DeviceHand));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPicoXRInputFunctionLibrary::execGetTrackingConfidence)
	{
		P_GET_ENUM(EPicoXRHandType,Z_Param_DeviceHand);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EPicoXRHandTrackingConfidence*)Z_Param__Result=UPicoXRInputFunctionLibrary::GetTrackingConfidence(EPicoXRHandType(Z_Param_DeviceHand));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPicoXRInputFunctionLibrary::execIsMenuPressed)
	{
		P_GET_ENUM(EPicoXRHandType,Z_Param_DeviceHand);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPicoXRInputFunctionLibrary::IsMenuPressed(EPicoXRHandType(Z_Param_DeviceHand));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPicoXRInputFunctionLibrary::execIsDominantHand)
	{
		P_GET_ENUM(EPicoXRHandType,Z_Param_DeviceHand);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPicoXRInputFunctionLibrary::IsDominantHand(EPicoXRHandType(Z_Param_DeviceHand));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPicoXRInputFunctionLibrary::execIsSystemGestureInProgress)
	{
		P_GET_ENUM(EPicoXRHandType,Z_Param_DeviceHand);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPicoXRInputFunctionLibrary::IsSystemGestureInProgress(EPicoXRHandType(Z_Param_DeviceHand));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPicoXRInputFunctionLibrary::execIsRayValid)
	{
		P_GET_ENUM(EPicoXRHandType,Z_Param_DeviceHand);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPicoXRInputFunctionLibrary::IsRayValid(EPicoXRHandType(Z_Param_DeviceHand));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPicoXRInputFunctionLibrary::execIsInputStateValid)
	{
		P_GET_ENUM(EPicoXRHandType,Z_Param_DeviceHand);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPicoXRInputFunctionLibrary::IsInputStateValid(EPicoXRHandType(Z_Param_DeviceHand));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPicoXRInputFunctionLibrary::execIsHandTracked)
	{
		P_GET_ENUM(EPicoXRHandType,Z_Param_DeviceHand);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPicoXRInputFunctionLibrary::IsHandTracked(EPicoXRHandType(Z_Param_DeviceHand));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPicoXRInputFunctionLibrary::execGetPointerPose)
	{
		P_GET_ENUM(EPicoXRHandType,Z_Param_DeviceHand);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=UPicoXRInputFunctionLibrary::GetPointerPose(EPicoXRHandType(Z_Param_DeviceHand));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPicoXRInputFunctionLibrary::execGetBoneRotation)
	{
		P_GET_ENUM(EPicoXRHandType,Z_Param_DeviceHand);
		P_GET_ENUM(EBone,Z_Param_BoneId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FQuat*)Z_Param__Result=UPicoXRInputFunctionLibrary::GetBoneRotation(EPicoXRHandType(Z_Param_DeviceHand),EBone(Z_Param_BoneId));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPicoXRInputFunctionLibrary::execPXR_StartVibrateBySharem)
	{
		P_GET_OBJECT(USoundWave,Z_Param_InSoundWave);
		P_GET_PROPERTY(FIntProperty,Z_Param_slot);
		P_GET_PROPERTY(FIntProperty,Z_Param_slotConfig);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UPicoXRInputFunctionLibrary::PXR_StartVibrateBySharem(Z_Param_InSoundWave,Z_Param_slot,Z_Param_slotConfig);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPicoXRInputFunctionLibrary::execPXR_SetControllerVibrationEvent)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_deviceID);
		P_GET_PROPERTY(FIntProperty,Z_Param_frequency);
		P_GET_PROPERTY(FFloatProperty,Z_Param_strength);
		P_GET_PROPERTY(FIntProperty,Z_Param_time);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UPicoXRInputFunctionLibrary::PXR_SetControllerVibrationEvent(Z_Param_deviceID,Z_Param_frequency,Z_Param_strength,Z_Param_time);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPicoXRInputFunctionLibrary::execPXR_StopControllerVCMotor)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_clientId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UPicoXRInputFunctionLibrary::PXR_StopControllerVCMotor(Z_Param_clientId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPicoXRInputFunctionLibrary::execPXR_SetControllerAmp)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_mode);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UPicoXRInputFunctionLibrary::PXR_SetControllerAmp(Z_Param_mode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPicoXRInputFunctionLibrary::execPXR_StartControllerVCMotor)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_file);
		P_GET_PROPERTY(FIntProperty,Z_Param_slot);
		P_GET_PROPERTY(FIntProperty,Z_Param_slotconfig);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UPicoXRInputFunctionLibrary::PXR_StartControllerVCMotor(Z_Param_file,Z_Param_slot,Z_Param_slotconfig);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPicoXRInputFunctionLibrary::execPXR_GetControllerPredictedLocationAndRotation)
	{
		P_GET_ENUM(EControllerHand,Z_Param_DeviceHand);
		P_GET_PROPERTY(FFloatProperty,Z_Param_PredictedTime);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutLocation);
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_OutRotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPicoXRInputFunctionLibrary::PXR_GetControllerPredictedLocationAndRotation(EControllerHand(Z_Param_DeviceHand),Z_Param_PredictedTime,Z_Param_Out_OutLocation,Z_Param_Out_OutRotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPicoXRInputFunctionLibrary::execPXR_SetControllerOriginOffset)
	{
		P_GET_ENUM(EPicoXRControllerType,Z_Param_Controller);
		P_GET_STRUCT(FVector,Z_Param_Offset);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPicoXRInputFunctionLibrary::PXR_SetControllerOriginOffset(EPicoXRControllerType(Z_Param_Controller),Z_Param_Offset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPicoXRInputFunctionLibrary::execPXR_GetControllerEnableHomekey)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPicoXRInputFunctionLibrary::PXR_GetControllerEnableHomekey();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPicoXRInputFunctionLibrary::execPXR_GetHandedness)
	{
		P_GET_ENUM_REF(EPicoXRHandedness,Z_Param_Out_Handedness);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPicoXRInputFunctionLibrary::PXR_GetHandedness((EPicoXRHandedness&)(Z_Param_Out_Handedness));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPicoXRInputFunctionLibrary::execPXR_GetControllerArmModelParam)
	{
		P_GET_ENUM(EPicoXRControllerType,Z_Param_Controller);
		P_GET_ENUM_REF(EPicoXRHandedness,Z_Param_Out_Handness);
		P_GET_ENUM_REF(EPicoXRArmModelJoint,Z_Param_Out_ArmJoint);
		P_GET_ENUM_REF(EPicoXRGazeBehavior,Z_Param_Out_GazeType);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_ElbowHeight);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_ElbowDepth);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_PointerTiltAngle);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPicoXRInputFunctionLibrary::PXR_GetControllerArmModelParam(EPicoXRControllerType(Z_Param_Controller),(EPicoXRHandedness&)(Z_Param_Out_Handness),(EPicoXRArmModelJoint&)(Z_Param_Out_ArmJoint),(EPicoXRGazeBehavior&)(Z_Param_Out_GazeType),Z_Param_Out_ElbowHeight,Z_Param_Out_ElbowDepth,Z_Param_Out_PointerTiltAngle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPicoXRInputFunctionLibrary::execPXR_SetControllerArmModelParam)
	{
		P_GET_ENUM(EPicoXRControllerType,Z_Param_Controller);
		P_GET_ENUM(EPicoXRHandedness,Z_Param_Handness);
		P_GET_ENUM(EPicoXRArmModelJoint,Z_Param_ArmJoint);
		P_GET_ENUM(EPicoXRGazeBehavior,Z_Param_GazeType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ElbowHeight);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ElbowDepth);
		P_GET_PROPERTY(FFloatProperty,Z_Param_PointerTiltAngle);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPicoXRInputFunctionLibrary::PXR_SetControllerArmModelParam(EPicoXRControllerType(Z_Param_Controller),EPicoXRHandedness(Z_Param_Handness),EPicoXRArmModelJoint(Z_Param_ArmJoint),EPicoXRGazeBehavior(Z_Param_GazeType),Z_Param_ElbowHeight,Z_Param_ElbowDepth,Z_Param_PointerTiltAngle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPicoXRInputFunctionLibrary::execPXR_GetControllerDeviceType)
	{
		P_GET_ENUM_REF(EPicoXRControllerDeviceType,Z_Param_Out_ControllerType);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPicoXRInputFunctionLibrary::PXR_GetControllerDeviceType((EPicoXRControllerDeviceType&)(Z_Param_Out_ControllerType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPicoXRInputFunctionLibrary::execPXR_VibrateController)
	{
		P_GET_ENUM(EPicoXRControllerType,Z_Param_ControllerType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Strength);
		P_GET_PROPERTY(FIntProperty,Z_Param_Time);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPicoXRInputFunctionLibrary::PXR_VibrateController(EPicoXRControllerType(Z_Param_ControllerType),Z_Param_Strength,Z_Param_Time);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPicoXRInputFunctionLibrary::execPXR_GetControllerLinearVelocity)
	{
		P_GET_ENUM(EPicoXRControllerType,Z_Param_ControllerType);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_LinearVelocity);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPicoXRInputFunctionLibrary::PXR_GetControllerLinearVelocity(EPicoXRControllerType(Z_Param_ControllerType),Z_Param_Out_LinearVelocity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPicoXRInputFunctionLibrary::execPXR_GetControllerAcceleration)
	{
		P_GET_ENUM(EPicoXRControllerType,Z_Param_ControllerType);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Acceleration);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPicoXRInputFunctionLibrary::PXR_GetControllerAcceleration(EPicoXRControllerType(Z_Param_ControllerType),Z_Param_Out_Acceleration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPicoXRInputFunctionLibrary::execPXR_GetControllerAngularVelocity)
	{
		P_GET_ENUM(EPicoXRControllerType,Z_Param_ControllerType);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_AngularVelocity);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPicoXRInputFunctionLibrary::PXR_GetControllerAngularVelocity(EPicoXRControllerType(Z_Param_ControllerType),Z_Param_Out_AngularVelocity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPicoXRInputFunctionLibrary::execPXR_SetMainControllerHandle)
	{
		P_GET_ENUM(EPicoXRHandedness,Z_Param_Handedness);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPicoXRInputFunctionLibrary::PXR_SetMainControllerHandle(EPicoXRHandedness(Z_Param_Handedness));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPicoXRInputFunctionLibrary::execPXR_GetMainControllerHandle)
	{
		P_GET_ENUM_REF(EPicoXRHandedness,Z_Param_Out_Handedness);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPicoXRInputFunctionLibrary::PXR_GetMainControllerHandle((EPicoXRHandedness&)(Z_Param_Out_Handedness));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPicoXRInputFunctionLibrary::execPXR_GetControllerConnectionState)
	{
		P_GET_ENUM(EPicoXRControllerType,Z_Param_ControllerType);
		P_GET_UBOOL_REF(Z_Param_Out_Status);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPicoXRInputFunctionLibrary::PXR_GetControllerConnectionState(EPicoXRControllerType(Z_Param_ControllerType),Z_Param_Out_Status);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPicoXRInputFunctionLibrary::execPXR_GetControllerPower)
	{
		P_GET_ENUM(EPicoXRControllerType,Z_Param_ControllerType);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Power);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPicoXRInputFunctionLibrary::PXR_GetControllerPower(EPicoXRControllerType(Z_Param_ControllerType),Z_Param_Out_Power);
		P_NATIVE_END;
	}
	void UPicoXRInputFunctionLibrary::StaticRegisterNativesUPicoXRInputFunctionLibrary()
	{
		UClass* Class = UPicoXRInputFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetActiveInputDevice", &UPicoXRInputFunctionLibrary::execGetActiveInputDevice },
			{ "GetBoneName", &UPicoXRInputFunctionLibrary::execGetBoneName },
			{ "GetBoneRotation", &UPicoXRInputFunctionLibrary::execGetBoneRotation },
			{ "GetClickStrength", &UPicoXRInputFunctionLibrary::execGetClickStrength },
			{ "GetDominantHand", &UPicoXRInputFunctionLibrary::execGetDominantHand },
			{ "GetFingerConfidence", &UPicoXRInputFunctionLibrary::execGetFingerConfidence },
			{ "GetFingerIsPinching", &UPicoXRInputFunctionLibrary::execGetFingerIsPinching },
			{ "GetFingerPinchStrength", &UPicoXRInputFunctionLibrary::execGetFingerPinchStrength },
			{ "GetHandScale", &UPicoXRInputFunctionLibrary::execGetHandScale },
			{ "GetPointerPose", &UPicoXRInputFunctionLibrary::execGetPointerPose },
			{ "GetTrackingConfidence", &UPicoXRInputFunctionLibrary::execGetTrackingConfidence },
			{ "IsDominantHand", &UPicoXRInputFunctionLibrary::execIsDominantHand },
			{ "IsHandTracked", &UPicoXRInputFunctionLibrary::execIsHandTracked },
			{ "IsHandTrackingEnabled", &UPicoXRInputFunctionLibrary::execIsHandTrackingEnabled },
			{ "IsInputStateValid", &UPicoXRInputFunctionLibrary::execIsInputStateValid },
			{ "IsMenuPressed", &UPicoXRInputFunctionLibrary::execIsMenuPressed },
			{ "IsRayValid", &UPicoXRInputFunctionLibrary::execIsRayValid },
			{ "IsSystemGestureInProgress", &UPicoXRInputFunctionLibrary::execIsSystemGestureInProgress },
			{ "PXR_GetControllerAcceleration", &UPicoXRInputFunctionLibrary::execPXR_GetControllerAcceleration },
			{ "PXR_GetControllerAngularVelocity", &UPicoXRInputFunctionLibrary::execPXR_GetControllerAngularVelocity },
			{ "PXR_GetControllerArmModelParam", &UPicoXRInputFunctionLibrary::execPXR_GetControllerArmModelParam },
			{ "PXR_GetControllerConnectionState", &UPicoXRInputFunctionLibrary::execPXR_GetControllerConnectionState },
			{ "PXR_GetControllerDeviceType", &UPicoXRInputFunctionLibrary::execPXR_GetControllerDeviceType },
			{ "PXR_GetControllerEnableHomekey", &UPicoXRInputFunctionLibrary::execPXR_GetControllerEnableHomekey },
			{ "PXR_GetControllerLinearVelocity", &UPicoXRInputFunctionLibrary::execPXR_GetControllerLinearVelocity },
			{ "PXR_GetControllerPower", &UPicoXRInputFunctionLibrary::execPXR_GetControllerPower },
			{ "PXR_GetControllerPredictedLocationAndRotation", &UPicoXRInputFunctionLibrary::execPXR_GetControllerPredictedLocationAndRotation },
			{ "PXR_GetHandedness", &UPicoXRInputFunctionLibrary::execPXR_GetHandedness },
			{ "PXR_GetMainControllerHandle", &UPicoXRInputFunctionLibrary::execPXR_GetMainControllerHandle },
			{ "PXR_SetControllerAmp", &UPicoXRInputFunctionLibrary::execPXR_SetControllerAmp },
			{ "PXR_SetControllerArmModelParam", &UPicoXRInputFunctionLibrary::execPXR_SetControllerArmModelParam },
			{ "PXR_SetControllerEnableKey", &UPicoXRInputFunctionLibrary::execPXR_SetControllerEnableKey },
			{ "PXR_SetControllerOriginOffset", &UPicoXRInputFunctionLibrary::execPXR_SetControllerOriginOffset },
			{ "PXR_SetControllerVibrationEvent", &UPicoXRInputFunctionLibrary::execPXR_SetControllerVibrationEvent },
			{ "PXR_SetMainControllerHandle", &UPicoXRInputFunctionLibrary::execPXR_SetMainControllerHandle },
			{ "PXR_StartControllerVCMotor", &UPicoXRInputFunctionLibrary::execPXR_StartControllerVCMotor },
			{ "PXR_StartVibrateBySharem", &UPicoXRInputFunctionLibrary::execPXR_StartVibrateBySharem },
			{ "PXR_StopControllerVCMotor", &UPicoXRInputFunctionLibrary::execPXR_StopControllerVCMotor },
			{ "PXR_VibrateController", &UPicoXRInputFunctionLibrary::execPXR_VibrateController },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetActiveInputDevice_Statics
	{
		struct PicoXRInputFunctionLibrary_eventGetActiveInputDevice_Parms
		{
			EPicoXRActiveInputDevice ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetActiveInputDevice_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetActiveInputDevice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoXRInputFunctionLibrary_eventGetActiveInputDevice_Parms, ReturnValue), Z_Construct_UEnum_PicoXRInput_EPicoXRActiveInputDevice, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetActiveInputDevice_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetActiveInputDevice_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetActiveInputDevice_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetActiveInputDevice_Statics::Function_MetaDataParams[] = {
		{ "Category", "PicoXR|PicoXRHandTracking" },
		{ "Comment", "/**\n\x09 * Get the active input device\n\x09 */" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "Get the active input device" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetActiveInputDevice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPicoXRInputFunctionLibrary, nullptr, "GetActiveInputDevice", nullptr, nullptr, sizeof(PicoXRInputFunctionLibrary_eventGetActiveInputDevice_Parms), Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetActiveInputDevice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetActiveInputDevice_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetActiveInputDevice_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetActiveInputDevice_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetActiveInputDevice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetActiveInputDevice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetBoneName_Statics
	{
		struct PicoXRInputFunctionLibrary_eventGetBoneName_Parms
		{
			EBone BoneId;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BoneId_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BoneId;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetBoneName_Statics::NewProp_BoneId_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetBoneName_Statics::NewProp_BoneId = { "BoneId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoXRInputFunctionLibrary_eventGetBoneName_Parms, BoneId), Z_Construct_UEnum_PicoXRInput_EBone, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetBoneName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoXRInputFunctionLibrary_eventGetBoneName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetBoneName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetBoneName_Statics::NewProp_BoneId_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetBoneName_Statics::NewProp_BoneId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetBoneName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetBoneName_Statics::Function_MetaDataParams[] = {
		{ "Category", "PicoXR|PicoXRHandTracking" },
		{ "Comment", "/**\n\x09 * Get the bone name from the bone index\n\x09 *\n\x09 */" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "Get the bone name from the bone index" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetBoneName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPicoXRInputFunctionLibrary, nullptr, "GetBoneName", nullptr, nullptr, sizeof(PicoXRInputFunctionLibrary_eventGetBoneName_Parms), Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetBoneName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetBoneName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetBoneName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetBoneName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetBoneName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetBoneName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetBoneRotation_Statics
	{
		struct PicoXRInputFunctionLibrary_eventGetBoneRotation_Parms
		{
			EPicoXRHandType DeviceHand;
			EBone BoneId;
			FQuat ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DeviceHand_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeviceHand_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DeviceHand;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BoneId_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneId_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BoneId;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetBoneRotation_Statics::NewProp_DeviceHand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetBoneRotation_Statics::NewProp_DeviceHand_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetBoneRotation_Statics::NewProp_DeviceHand = { "DeviceHand", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoXRInputFunctionLibrary_eventGetBoneRotation_Parms, DeviceHand), Z_Construct_UEnum_PicoXRInput_EPicoXRHandType, METADATA_PARAMS(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetBoneRotation_Statics::NewProp_DeviceHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetBoneRotation_Statics::NewProp_DeviceHand_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetBoneRotation_Statics::NewProp_BoneId_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetBoneRotation_Statics::NewProp_BoneId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetBoneRotation_Statics::NewProp_BoneId = { "BoneId", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoXRInputFunctionLibrary_eventGetBoneRotation_Parms, BoneId), Z_Construct_UEnum_PicoXRInput_EBone, METADATA_PARAMS(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetBoneRotation_Statics::NewProp_BoneId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetBoneRotation_Statics::NewProp_BoneId_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetBoneRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoXRInputFunctionLibrary_eventGetBoneRotation_Parms, ReturnValue), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetBoneRotation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetBoneRotation_Statics::NewProp_DeviceHand_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetBoneRotation_Statics::NewProp_DeviceHand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetBoneRotation_Statics::NewProp_BoneId_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetBoneRotation_Statics::NewProp_BoneId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetBoneRotation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetBoneRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "PicoXR|PicoXRHandTracking" },
		{ "Comment", "/**\n\x09 * Get the rotation of a specific bone\n\x09 *\n\x09 * @param DeviceHand\x09\x09\x09\x09(in) The hand to get the rotations from\n\x09 * @param BoneId\x09\x09\x09\x09\x09(in) The specific bone to get the rotation from\n\x09 */" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "Get the rotation of a specific bone\n\n@param DeviceHand                            (in) The hand to get the rotations from\n@param BoneId                                        (in) The specific bone to get the rotation from" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetBoneRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPicoXRInputFunctionLibrary, nullptr, "GetBoneRotation", nullptr, nullptr, sizeof(PicoXRInputFunctionLibrary_eventGetBoneRotation_Parms), Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetBoneRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetBoneRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetBoneRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetBoneRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetBoneRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetBoneRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetClickStrength_Statics
	{
		struct PicoXRInputFunctionLibrary_eventGetClickStrength_Parms
		{
			EPicoXRHandType DeviceHand;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DeviceHand_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeviceHand_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DeviceHand;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetClickStrength_Statics::NewProp_DeviceHand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetClickStrength_Statics::NewProp_DeviceHand_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetClickStrength_Statics::NewProp_DeviceHand = { "DeviceHand", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoXRInputFunctionLibrary_eventGetClickStrength_Parms, DeviceHand), Z_Construct_UEnum_PicoXRInput_EPicoXRHandType, METADATA_PARAMS(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetClickStrength_Statics::NewProp_DeviceHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetClickStrength_Statics::NewProp_DeviceHand_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetClickStrength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoXRInputFunctionLibrary_eventGetClickStrength_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetClickStrength_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetClickStrength_Statics::NewProp_DeviceHand_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetClickStrength_Statics::NewProp_DeviceHand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetClickStrength_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetClickStrength_Statics::Function_MetaDataParams[] = {
		{ "Category", "PicoXR|PicoXRHandTracking" },
		{ "Comment", "/**\n\x09 * Get the click strength of the hand\n\x09 *\n\x09 * @param DeviceHand\x09\x09\x09\x09(in) The hand to get click strength of\n\x09 */" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "Get the click strength of the hand\n\n@param DeviceHand                            (in) The hand to get click strength of" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetClickStrength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPicoXRInputFunctionLibrary, nullptr, "GetClickStrength", nullptr, nullptr, sizeof(PicoXRInputFunctionLibrary_eventGetClickStrength_Parms), Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetClickStrength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetClickStrength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetClickStrength_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetClickStrength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetClickStrength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetClickStrength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetDominantHand_Statics
	{
		struct PicoXRInputFunctionLibrary_eventGetDominantHand_Parms
		{
			EPicoXRHandType ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetDominantHand_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetDominantHand_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoXRInputFunctionLibrary_eventGetDominantHand_Parms, ReturnValue), Z_Construct_UEnum_PicoXRInput_EPicoXRHandType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetDominantHand_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetDominantHand_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetDominantHand_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetDominantHand_Statics::Function_MetaDataParams[] = {
		{ "Category", "PicoXR|PicoXRHandTracking" },
		{ "Comment", "/**\n\x09 * Get the user's dominant hand\n\x09 *\n\x09 */" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "Get the user's dominant hand" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetDominantHand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPicoXRInputFunctionLibrary, nullptr, "GetDominantHand", nullptr, nullptr, sizeof(PicoXRInputFunctionLibrary_eventGetDominantHand_Parms), Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetDominantHand_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetDominantHand_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetDominantHand_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetDominantHand_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetDominantHand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetDominantHand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetFingerConfidence_Statics
	{
		struct PicoXRInputFunctionLibrary_eventGetFingerConfidence_Parms
		{
			EPicoXRHandType DeviceHand;
			EHandFinger Finger;
			EPicoXRHandTrackingConfidence ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DeviceHand_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeviceHand_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DeviceHand;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Finger_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Finger;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetFingerConfidence_Statics::NewProp_DeviceHand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetFingerConfidence_Statics::NewProp_DeviceHand_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetFingerConfidence_Statics::NewProp_DeviceHand = { "DeviceHand", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoXRInputFunctionLibrary_eventGetFingerConfidence_Parms, DeviceHand), Z_Construct_UEnum_PicoXRInput_EPicoXRHandType, METADATA_PARAMS(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetFingerConfidence_Statics::NewProp_DeviceHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetFingerConfidence_Statics::NewProp_DeviceHand_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetFingerConfidence_Statics::NewProp_Finger_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetFingerConfidence_Statics::NewProp_Finger = { "Finger", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoXRInputFunctionLibrary_eventGetFingerConfidence_Parms, Finger), Z_Construct_UEnum_PicoXRInput_EHandFinger, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetFingerConfidence_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetFingerConfidence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoXRInputFunctionLibrary_eventGetFingerConfidence_Parms, ReturnValue), Z_Construct_UEnum_PicoXRInput_EPicoXRHandTrackingConfidence, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetFingerConfidence_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetFingerConfidence_Statics::NewProp_DeviceHand_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetFingerConfidence_Statics::NewProp_DeviceHand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetFingerConfidence_Statics::NewProp_Finger_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetFingerConfidence_Statics::NewProp_Finger,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetFingerConfidence_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetFingerConfidence_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetFingerConfidence_Statics::Function_MetaDataParams[] = {
		{ "Category", "PicoXR|PicoXRHandTracking" },
		{ "Comment", "/**\n\x09 * Get finger confidence of the specific finger\n\x09 *\n\x09 * @param DeviceHand\n\x09 * @param Finger\n\x09 */" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "Get finger confidence of the specific finger\n\n@param DeviceHand\n@param Finger" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetFingerConfidence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPicoXRInputFunctionLibrary, nullptr, "GetFingerConfidence", nullptr, nullptr, sizeof(PicoXRInputFunctionLibrary_eventGetFingerConfidence_Parms), Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetFingerConfidence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetFingerConfidence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetFingerConfidence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetFingerConfidence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetFingerConfidence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetFingerConfidence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetFingerIsPinching_Statics
	{
		struct PicoXRInputFunctionLibrary_eventGetFingerIsPinching_Parms
		{
			EPicoXRHandType DeviceHand;
			EHandFinger Finger;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DeviceHand_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeviceHand_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DeviceHand;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Finger_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Finger;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetFingerIsPinching_Statics::NewProp_DeviceHand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetFingerIsPinching_Statics::NewProp_DeviceHand_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetFingerIsPinching_Statics::NewProp_DeviceHand = { "DeviceHand", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoXRInputFunctionLibrary_eventGetFingerIsPinching_Parms, DeviceHand), Z_Construct_UEnum_PicoXRInput_EPicoXRHandType, METADATA_PARAMS(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetFingerIsPinching_Statics::NewProp_DeviceHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetFingerIsPinching_Statics::NewProp_DeviceHand_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetFingerIsPinching_Statics::NewProp_Finger_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetFingerIsPinching_Statics::NewProp_Finger = { "Finger", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoXRInputFunctionLibrary_eventGetFingerIsPinching_Parms, Finger), Z_Construct_UEnum_PicoXRInput_EHandFinger, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetFingerIsPinching_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PicoXRInputFunctionLibrary_eventGetFingerIsPinching_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetFingerIsPinching_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PicoXRInputFunctionLibrary_eventGetFingerIsPinching_Parms), &Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetFingerIsPinching_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetFingerIsPinching_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetFingerIsPinching_Statics::NewProp_DeviceHand_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetFingerIsPinching_Statics::NewProp_DeviceHand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetFingerIsPinching_Statics::NewProp_Finger_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetFingerIsPinching_Statics::NewProp_Finger,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetFingerIsPinching_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetFingerIsPinching_Statics::Function_MetaDataParams[] = {
		{ "Category", "PicoXR|PicoXRHandTracking" },
		{ "Comment", "/**\n\x09 * Check if the specific finger is pinching\n\x09 *\n\x09 * @param DeviceHand\n\x09 * @param Finger\n\x09 */" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "Check if the specific finger is pinching\n\n@param DeviceHand\n@param Finger" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetFingerIsPinching_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPicoXRInputFunctionLibrary, nullptr, "GetFingerIsPinching", nullptr, nullptr, sizeof(PicoXRInputFunctionLibrary_eventGetFingerIsPinching_Parms), Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetFingerIsPinching_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetFingerIsPinching_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetFingerIsPinching_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetFingerIsPinching_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetFingerIsPinching()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetFingerIsPinching_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetFingerPinchStrength_Statics
	{
		struct PicoXRInputFunctionLibrary_eventGetFingerPinchStrength_Parms
		{
			EPicoXRHandType DeviceHand;
			EHandFinger Finger;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DeviceHand_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeviceHand_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DeviceHand;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Finger_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Finger;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetFingerPinchStrength_Statics::NewProp_DeviceHand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetFingerPinchStrength_Statics::NewProp_DeviceHand_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetFingerPinchStrength_Statics::NewProp_DeviceHand = { "DeviceHand", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoXRInputFunctionLibrary_eventGetFingerPinchStrength_Parms, DeviceHand), Z_Construct_UEnum_PicoXRInput_EPicoXRHandType, METADATA_PARAMS(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetFingerPinchStrength_Statics::NewProp_DeviceHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetFingerPinchStrength_Statics::NewProp_DeviceHand_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetFingerPinchStrength_Statics::NewProp_Finger_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetFingerPinchStrength_Statics::NewProp_Finger = { "Finger", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoXRInputFunctionLibrary_eventGetFingerPinchStrength_Parms, Finger), Z_Construct_UEnum_PicoXRInput_EHandFinger, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetFingerPinchStrength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoXRInputFunctionLibrary_eventGetFingerPinchStrength_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetFingerPinchStrength_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetFingerPinchStrength_Statics::NewProp_DeviceHand_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetFingerPinchStrength_Statics::NewProp_DeviceHand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetFingerPinchStrength_Statics::NewProp_Finger_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetFingerPinchStrength_Statics::NewProp_Finger,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetFingerPinchStrength_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetFingerPinchStrength_Statics::Function_MetaDataParams[] = {
		{ "Category", "PicoXR|PicoXRHandTracking" },
		{ "Comment", "/**\n\x09 * Get finger pinch strength of the specific finger\n\x09 *\n\x09 * @param DeviceHand\n\x09 * @param Finger\n\x09 */" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "Get finger pinch strength of the specific finger\n\n@param DeviceHand\n@param Finger" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetFingerPinchStrength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPicoXRInputFunctionLibrary, nullptr, "GetFingerPinchStrength", nullptr, nullptr, sizeof(PicoXRInputFunctionLibrary_eventGetFingerPinchStrength_Parms), Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetFingerPinchStrength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetFingerPinchStrength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetFingerPinchStrength_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetFingerPinchStrength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetFingerPinchStrength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetFingerPinchStrength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetHandScale_Statics
	{
		struct PicoXRInputFunctionLibrary_eventGetHandScale_Parms
		{
			EPicoXRHandType DeviceHand;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DeviceHand_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeviceHand_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DeviceHand;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetHandScale_Statics::NewProp_DeviceHand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetHandScale_Statics::NewProp_DeviceHand_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetHandScale_Statics::NewProp_DeviceHand = { "DeviceHand", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoXRInputFunctionLibrary_eventGetHandScale_Parms, DeviceHand), Z_Construct_UEnum_PicoXRInput_EPicoXRHandType, METADATA_PARAMS(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetHandScale_Statics::NewProp_DeviceHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetHandScale_Statics::NewProp_DeviceHand_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetHandScale_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoXRInputFunctionLibrary_eventGetHandScale_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetHandScale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetHandScale_Statics::NewProp_DeviceHand_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetHandScale_Statics::NewProp_DeviceHand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetHandScale_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetHandScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "PicoXR|PicoXRHandTracking" },
		{ "Comment", "/**\n\x09 * Get the scale of the hand\n\x09 *\n\x09 * @param DeviceHand\x09\x09\x09\x09(in) The hand to get scale of\n\x09 */" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "Get the scale of the hand\n\n@param DeviceHand                            (in) The hand to get scale of" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetHandScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPicoXRInputFunctionLibrary, nullptr, "GetHandScale", nullptr, nullptr, sizeof(PicoXRInputFunctionLibrary_eventGetHandScale_Parms), Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetHandScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetHandScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetHandScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetHandScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetHandScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetHandScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetPointerPose_Statics
	{
		struct PicoXRInputFunctionLibrary_eventGetPointerPose_Parms
		{
			EPicoXRHandType DeviceHand;
			FTransform ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DeviceHand_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeviceHand_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DeviceHand;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetPointerPose_Statics::NewProp_DeviceHand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetPointerPose_Statics::NewProp_DeviceHand_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetPointerPose_Statics::NewProp_DeviceHand = { "DeviceHand", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoXRInputFunctionLibrary_eventGetPointerPose_Parms, DeviceHand), Z_Construct_UEnum_PicoXRInput_EPicoXRHandType, METADATA_PARAMS(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetPointerPose_Statics::NewProp_DeviceHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetPointerPose_Statics::NewProp_DeviceHand_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetPointerPose_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoXRInputFunctionLibrary_eventGetPointerPose_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetPointerPose_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetPointerPose_Statics::NewProp_DeviceHand_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetPointerPose_Statics::NewProp_DeviceHand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetPointerPose_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetPointerPose_Statics::Function_MetaDataParams[] = {
		{ "Category", "PicoXR|PicoXRHandTracking" },
		{ "Comment", "/**\n\x09 * Get the pointer pose\n\x09 *\n\x09 * @param DeviceHand\x09\x09\x09\x09(in) The hand to get the pointer pose from\n\x09 */" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "Get the pointer pose\n\n@param DeviceHand                            (in) The hand to get the pointer pose from" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetPointerPose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPicoXRInputFunctionLibrary, nullptr, "GetPointerPose", nullptr, nullptr, sizeof(PicoXRInputFunctionLibrary_eventGetPointerPose_Parms), Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetPointerPose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetPointerPose_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetPointerPose_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetPointerPose_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetPointerPose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetPointerPose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetTrackingConfidence_Statics
	{
		struct PicoXRInputFunctionLibrary_eventGetTrackingConfidence_Parms
		{
			EPicoXRHandType DeviceHand;
			EPicoXRHandTrackingConfidence ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DeviceHand_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeviceHand_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DeviceHand;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetTrackingConfidence_Statics::NewProp_DeviceHand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetTrackingConfidence_Statics::NewProp_DeviceHand_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetTrackingConfidence_Statics::NewProp_DeviceHand = { "DeviceHand", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoXRInputFunctionLibrary_eventGetTrackingConfidence_Parms, DeviceHand), Z_Construct_UEnum_PicoXRInput_EPicoXRHandType, METADATA_PARAMS(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetTrackingConfidence_Statics::NewProp_DeviceHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetTrackingConfidence_Statics::NewProp_DeviceHand_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetTrackingConfidence_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetTrackingConfidence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoXRInputFunctionLibrary_eventGetTrackingConfidence_Parms, ReturnValue), Z_Construct_UEnum_PicoXRInput_EPicoXRHandTrackingConfidence, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetTrackingConfidence_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetTrackingConfidence_Statics::NewProp_DeviceHand_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetTrackingConfidence_Statics::NewProp_DeviceHand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetTrackingConfidence_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetTrackingConfidence_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetTrackingConfidence_Statics::Function_MetaDataParams[] = {
		{ "Category", "PicoXR|PicoXRHandTracking" },
		{ "Comment", "/**\n\x09 * Get the tracking confidence of the hand\n\x09 *\n\x09 * @param DeviceHand\x09\x09\x09\x09(in) The hand to get tracking confidence of\n\x09 */" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "Get the tracking confidence of the hand\n\n@param DeviceHand                            (in) The hand to get tracking confidence of" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetTrackingConfidence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPicoXRInputFunctionLibrary, nullptr, "GetTrackingConfidence", nullptr, nullptr, sizeof(PicoXRInputFunctionLibrary_eventGetTrackingConfidence_Parms), Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetTrackingConfidence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetTrackingConfidence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetTrackingConfidence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetTrackingConfidence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetTrackingConfidence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetTrackingConfidence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsDominantHand_Statics
	{
		struct PicoXRInputFunctionLibrary_eventIsDominantHand_Parms
		{
			EPicoXRHandType DeviceHand;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DeviceHand_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeviceHand_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DeviceHand;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsDominantHand_Statics::NewProp_DeviceHand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsDominantHand_Statics::NewProp_DeviceHand_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsDominantHand_Statics::NewProp_DeviceHand = { "DeviceHand", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoXRInputFunctionLibrary_eventIsDominantHand_Parms, DeviceHand), Z_Construct_UEnum_PicoXRInput_EPicoXRHandType, METADATA_PARAMS(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsDominantHand_Statics::NewProp_DeviceHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsDominantHand_Statics::NewProp_DeviceHand_MetaData)) };
	void Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsDominantHand_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PicoXRInputFunctionLibrary_eventIsDominantHand_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsDominantHand_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PicoXRInputFunctionLibrary_eventIsDominantHand_Parms), &Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsDominantHand_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsDominantHand_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsDominantHand_Statics::NewProp_DeviceHand_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsDominantHand_Statics::NewProp_DeviceHand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsDominantHand_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsDominantHand_Statics::Function_MetaDataParams[] = {
		{ "Category", "PicoXR|PicoXRHandTracking" },
		{ "Comment", "/**\n\x09 * Check if the hand is dominant\n\x09 *\n\x09 * @param DeviceHand\x09\x09\x09\x09(in) The hand to get the hand status from\n\x09 */" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "Check if the hand is dominant\n\n@param DeviceHand                            (in) The hand to get the hand status from" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsDominantHand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPicoXRInputFunctionLibrary, nullptr, "IsDominantHand", nullptr, nullptr, sizeof(PicoXRInputFunctionLibrary_eventIsDominantHand_Parms), Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsDominantHand_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsDominantHand_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsDominantHand_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsDominantHand_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsDominantHand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsDominantHand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsHandTracked_Statics
	{
		struct PicoXRInputFunctionLibrary_eventIsHandTracked_Parms
		{
			EPicoXRHandType DeviceHand;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DeviceHand_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeviceHand_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DeviceHand;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsHandTracked_Statics::NewProp_DeviceHand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsHandTracked_Statics::NewProp_DeviceHand_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsHandTracked_Statics::NewProp_DeviceHand = { "DeviceHand", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoXRInputFunctionLibrary_eventIsHandTracked_Parms, DeviceHand), Z_Construct_UEnum_PicoXRInput_EPicoXRHandType, METADATA_PARAMS(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsHandTracked_Statics::NewProp_DeviceHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsHandTracked_Statics::NewProp_DeviceHand_MetaData)) };
	void Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsHandTracked_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PicoXRInputFunctionLibrary_eventIsHandTracked_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsHandTracked_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PicoXRInputFunctionLibrary_eventIsHandTracked_Parms), &Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsHandTracked_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsHandTracked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsHandTracked_Statics::NewProp_DeviceHand_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsHandTracked_Statics::NewProp_DeviceHand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsHandTracked_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsHandTracked_Statics::Function_MetaDataParams[] = {
		{ "Category", "PicoXR|PicoXRHandTracking" },
		{ "Comment", "/**\n\x09 * Check if the hand is tracked\n\x09 *\n\x09 * @param DeviceHand\x09\x09\x09\x09(in) The hand to get the hand status from\n\x09 */" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "Check if the hand is tracked\n\n@param DeviceHand                            (in) The hand to get the hand status from" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsHandTracked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPicoXRInputFunctionLibrary, nullptr, "IsHandTracked", nullptr, nullptr, sizeof(PicoXRInputFunctionLibrary_eventIsHandTracked_Parms), Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsHandTracked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsHandTracked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsHandTracked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsHandTracked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsHandTracked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsHandTracked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsHandTrackingEnabled_Statics
	{
		struct PicoXRInputFunctionLibrary_eventIsHandTrackingEnabled_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsHandTrackingEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PicoXRInputFunctionLibrary_eventIsHandTrackingEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsHandTrackingEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PicoXRInputFunctionLibrary_eventIsHandTrackingEnabled_Parms), &Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsHandTrackingEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsHandTrackingEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsHandTrackingEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsHandTrackingEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "PicoXR|PicoXRHandTracking" },
		{ "Comment", "/**\n\x09 * Check if hand tracking is enabled currently\n\x09 */" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "Check if hand tracking is enabled currently" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsHandTrackingEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPicoXRInputFunctionLibrary, nullptr, "IsHandTrackingEnabled", nullptr, nullptr, sizeof(PicoXRInputFunctionLibrary_eventIsHandTrackingEnabled_Parms), Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsHandTrackingEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsHandTrackingEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsHandTrackingEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsHandTrackingEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsHandTrackingEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsHandTrackingEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsInputStateValid_Statics
	{
		struct PicoXRInputFunctionLibrary_eventIsInputStateValid_Parms
		{
			EPicoXRHandType DeviceHand;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DeviceHand_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeviceHand_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DeviceHand;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsInputStateValid_Statics::NewProp_DeviceHand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsInputStateValid_Statics::NewProp_DeviceHand_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsInputStateValid_Statics::NewProp_DeviceHand = { "DeviceHand", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoXRInputFunctionLibrary_eventIsInputStateValid_Parms, DeviceHand), Z_Construct_UEnum_PicoXRInput_EPicoXRHandType, METADATA_PARAMS(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsInputStateValid_Statics::NewProp_DeviceHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsInputStateValid_Statics::NewProp_DeviceHand_MetaData)) };
	void Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsInputStateValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PicoXRInputFunctionLibrary_eventIsInputStateValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsInputStateValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PicoXRInputFunctionLibrary_eventIsInputStateValid_Parms), &Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsInputStateValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsInputStateValid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsInputStateValid_Statics::NewProp_DeviceHand_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsInputStateValid_Statics::NewProp_DeviceHand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsInputStateValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsInputStateValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "PicoXR|PicoXRHandTracking" },
		{ "Comment", "/**\n\x09 * Check if the input state is valid\n\x09 *\n\x09 * @param DeviceHand\x09\x09\x09\x09(in) The hand to get the input state from\n\x09 */" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "Check if the input state is valid\n\n@param DeviceHand                            (in) The hand to get the input state from" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsInputStateValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPicoXRInputFunctionLibrary, nullptr, "IsInputStateValid", nullptr, nullptr, sizeof(PicoXRInputFunctionLibrary_eventIsInputStateValid_Parms), Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsInputStateValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsInputStateValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsInputStateValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsInputStateValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsInputStateValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsInputStateValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsMenuPressed_Statics
	{
		struct PicoXRInputFunctionLibrary_eventIsMenuPressed_Parms
		{
			EPicoXRHandType DeviceHand;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DeviceHand_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeviceHand_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DeviceHand;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsMenuPressed_Statics::NewProp_DeviceHand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsMenuPressed_Statics::NewProp_DeviceHand_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsMenuPressed_Statics::NewProp_DeviceHand = { "DeviceHand", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoXRInputFunctionLibrary_eventIsMenuPressed_Parms, DeviceHand), Z_Construct_UEnum_PicoXRInput_EPicoXRHandType, METADATA_PARAMS(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsMenuPressed_Statics::NewProp_DeviceHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsMenuPressed_Statics::NewProp_DeviceHand_MetaData)) };
	void Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsMenuPressed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PicoXRInputFunctionLibrary_eventIsMenuPressed_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsMenuPressed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PicoXRInputFunctionLibrary_eventIsMenuPressed_Parms), &Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsMenuPressed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsMenuPressed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsMenuPressed_Statics::NewProp_DeviceHand_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsMenuPressed_Statics::NewProp_DeviceHand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsMenuPressed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsMenuPressed_Statics::Function_MetaDataParams[] = {
		{ "Category", "PicoXR|PicoXRHandTracking" },
		{ "Comment", "/**\n\x09 * Check if the menu pressed\n\x09 *\n\x09 * @param DeviceHand\x09\x09\x09\x09(in) The hand to get the menu status from\n\x09 */" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "Check if the menu pressed\n\n@param DeviceHand                            (in) The hand to get the menu status from" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsMenuPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPicoXRInputFunctionLibrary, nullptr, "IsMenuPressed", nullptr, nullptr, sizeof(PicoXRInputFunctionLibrary_eventIsMenuPressed_Parms), Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsMenuPressed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsMenuPressed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsMenuPressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsMenuPressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsMenuPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsMenuPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsRayValid_Statics
	{
		struct PicoXRInputFunctionLibrary_eventIsRayValid_Parms
		{
			EPicoXRHandType DeviceHand;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DeviceHand_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeviceHand_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DeviceHand;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsRayValid_Statics::NewProp_DeviceHand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsRayValid_Statics::NewProp_DeviceHand_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsRayValid_Statics::NewProp_DeviceHand = { "DeviceHand", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoXRInputFunctionLibrary_eventIsRayValid_Parms, DeviceHand), Z_Construct_UEnum_PicoXRInput_EPicoXRHandType, METADATA_PARAMS(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsRayValid_Statics::NewProp_DeviceHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsRayValid_Statics::NewProp_DeviceHand_MetaData)) };
	void Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsRayValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PicoXRInputFunctionLibrary_eventIsRayValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsRayValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PicoXRInputFunctionLibrary_eventIsRayValid_Parms), &Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsRayValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsRayValid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsRayValid_Statics::NewProp_DeviceHand_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsRayValid_Statics::NewProp_DeviceHand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsRayValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsRayValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "PicoXR|PicoXRHandTracking" },
		{ "Comment", "/**\n\x09 * Check if the ray is a valid\n\x09 *\n\x09 * @param DeviceHand\x09\x09\x09\x09(in) The hand to get the ray status from\n\x09 */" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "Check if the ray is a valid\n\n@param DeviceHand                            (in) The hand to get the ray status from" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsRayValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPicoXRInputFunctionLibrary, nullptr, "IsRayValid", nullptr, nullptr, sizeof(PicoXRInputFunctionLibrary_eventIsRayValid_Parms), Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsRayValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsRayValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsRayValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsRayValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsRayValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsRayValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsSystemGestureInProgress_Statics
	{
		struct PicoXRInputFunctionLibrary_eventIsSystemGestureInProgress_Parms
		{
			EPicoXRHandType DeviceHand;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DeviceHand_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeviceHand_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DeviceHand;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsSystemGestureInProgress_Statics::NewProp_DeviceHand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsSystemGestureInProgress_Statics::NewProp_DeviceHand_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsSystemGestureInProgress_Statics::NewProp_DeviceHand = { "DeviceHand", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoXRInputFunctionLibrary_eventIsSystemGestureInProgress_Parms, DeviceHand), Z_Construct_UEnum_PicoXRInput_EPicoXRHandType, METADATA_PARAMS(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsSystemGestureInProgress_Statics::NewProp_DeviceHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsSystemGestureInProgress_Statics::NewProp_DeviceHand_MetaData)) };
	void Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsSystemGestureInProgress_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PicoXRInputFunctionLibrary_eventIsSystemGestureInProgress_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsSystemGestureInProgress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PicoXRInputFunctionLibrary_eventIsSystemGestureInProgress_Parms), &Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsSystemGestureInProgress_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsSystemGestureInProgress_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsSystemGestureInProgress_Statics::NewProp_DeviceHand_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsSystemGestureInProgress_Statics::NewProp_DeviceHand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsSystemGestureInProgress_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsSystemGestureInProgress_Statics::Function_MetaDataParams[] = {
		{ "Category", "PicoXR|PicoXRHandTracking" },
		{ "Comment", "/**\n\x09 * Check if the system gesture is in progress\n\x09 *\n\x09 * @param DeviceHand\x09\x09\x09\x09(in) The hand to get the pointer status from\n\x09 */" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "Check if the system gesture is in progress\n\n@param DeviceHand                            (in) The hand to get the pointer status from" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsSystemGestureInProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPicoXRInputFunctionLibrary, nullptr, "IsSystemGestureInProgress", nullptr, nullptr, sizeof(PicoXRInputFunctionLibrary_eventIsSystemGestureInProgress_Parms), Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsSystemGestureInProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsSystemGestureInProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsSystemGestureInProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsSystemGestureInProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsSystemGestureInProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsSystemGestureInProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerAcceleration_Statics
	{
		struct PicoXRInputFunctionLibrary_eventPXR_GetControllerAcceleration_Parms
		{
			EPicoXRControllerType ControllerType;
			FVector Acceleration;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ControllerType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ControllerType;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Acceleration;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerAcceleration_Statics::NewProp_ControllerType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerAcceleration_Statics::NewProp_ControllerType = { "ControllerType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoXRInputFunctionLibrary_eventPXR_GetControllerAcceleration_Parms, ControllerType), Z_Construct_UEnum_PicoXRInput_EPicoXRControllerType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerAcceleration_Statics::NewProp_Acceleration = { "Acceleration", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoXRInputFunctionLibrary_eventPXR_GetControllerAcceleration_Parms, Acceleration), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerAcceleration_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PicoXRInputFunctionLibrary_eventPXR_GetControllerAcceleration_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerAcceleration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PicoXRInputFunctionLibrary_eventPXR_GetControllerAcceleration_Parms), &Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerAcceleration_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerAcceleration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerAcceleration_Statics::NewProp_ControllerType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerAcceleration_Statics::NewProp_ControllerType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerAcceleration_Statics::NewProp_Acceleration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerAcceleration_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerAcceleration_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRInput" },
		{ "Comment", "/**\n\x09* Get controller acceleration.\n\x09* @param ControllerType    (In) The controller type(G2 controller/Neo LeftController/Neo RightController).\n\x09* @param Acceleration     (Out) Controller acceleration.\n\x09*/" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "Get controller acceleration.\n@param ControllerType    (In) The controller type(G2 controller/Neo LeftController/Neo RightController).\n@param Acceleration     (Out) Controller acceleration." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerAcceleration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPicoXRInputFunctionLibrary, nullptr, "PXR_GetControllerAcceleration", nullptr, nullptr, sizeof(PicoXRInputFunctionLibrary_eventPXR_GetControllerAcceleration_Parms), Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerAcceleration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerAcceleration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerAcceleration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerAcceleration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerAcceleration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerAcceleration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerAngularVelocity_Statics
	{
		struct PicoXRInputFunctionLibrary_eventPXR_GetControllerAngularVelocity_Parms
		{
			EPicoXRControllerType ControllerType;
			FVector AngularVelocity;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ControllerType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ControllerType;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AngularVelocity;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerAngularVelocity_Statics::NewProp_ControllerType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerAngularVelocity_Statics::NewProp_ControllerType = { "ControllerType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoXRInputFunctionLibrary_eventPXR_GetControllerAngularVelocity_Parms, ControllerType), Z_Construct_UEnum_PicoXRInput_EPicoXRControllerType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerAngularVelocity_Statics::NewProp_AngularVelocity = { "AngularVelocity", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoXRInputFunctionLibrary_eventPXR_GetControllerAngularVelocity_Parms, AngularVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerAngularVelocity_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PicoXRInputFunctionLibrary_eventPXR_GetControllerAngularVelocity_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerAngularVelocity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PicoXRInputFunctionLibrary_eventPXR_GetControllerAngularVelocity_Parms), &Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerAngularVelocity_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerAngularVelocity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerAngularVelocity_Statics::NewProp_ControllerType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerAngularVelocity_Statics::NewProp_ControllerType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerAngularVelocity_Statics::NewProp_AngularVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerAngularVelocity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerAngularVelocity_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRInput" },
		{ "Comment", "/**\n\x09* Get controller angular velocity.\n\x09* @param ControllerType     (In) The controller type(G2 controller/Neo LeftController/Neo RightController).\n\x09* @param AngularVelocity   (Out) Controller angular velocity.\n\x09*/" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "Get controller angular velocity.\n@param ControllerType     (In) The controller type(G2 controller/Neo LeftController/Neo RightController).\n@param AngularVelocity   (Out) Controller angular velocity." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerAngularVelocity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPicoXRInputFunctionLibrary, nullptr, "PXR_GetControllerAngularVelocity", nullptr, nullptr, sizeof(PicoXRInputFunctionLibrary_eventPXR_GetControllerAngularVelocity_Parms), Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerAngularVelocity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerAngularVelocity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerAngularVelocity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerAngularVelocity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerAngularVelocity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerAngularVelocity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerArmModelParam_Statics
	{
		struct PicoXRInputFunctionLibrary_eventPXR_GetControllerArmModelParam_Parms
		{
			EPicoXRControllerType Controller;
			EPicoXRHandedness Handness;
			EPicoXRArmModelJoint ArmJoint;
			EPicoXRGazeBehavior GazeType;
			float ElbowHeight;
			float ElbowDepth;
			float PointerTiltAngle;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Controller_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Controller;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Handness_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Handness;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ArmJoint_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ArmJoint;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_GazeType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_GazeType;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ElbowHeight;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ElbowDepth;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PointerTiltAngle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerArmModelParam_Statics::NewProp_Controller_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerArmModelParam_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoXRInputFunctionLibrary_eventPXR_GetControllerArmModelParam_Parms, Controller), Z_Construct_UEnum_PicoXRInput_EPicoXRControllerType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerArmModelParam_Statics::NewProp_Handness_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerArmModelParam_Statics::NewProp_Handness = { "Handness", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoXRInputFunctionLibrary_eventPXR_GetControllerArmModelParam_Parms, Handness), Z_Construct_UEnum_PicoXRInput_EPicoXRHandedness, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerArmModelParam_Statics::NewProp_ArmJoint_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerArmModelParam_Statics::NewProp_ArmJoint = { "ArmJoint", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoXRInputFunctionLibrary_eventPXR_GetControllerArmModelParam_Parms, ArmJoint), Z_Construct_UEnum_PicoXRInput_EPicoXRArmModelJoint, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerArmModelParam_Statics::NewProp_GazeType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerArmModelParam_Statics::NewProp_GazeType = { "GazeType", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoXRInputFunctionLibrary_eventPXR_GetControllerArmModelParam_Parms, GazeType), Z_Construct_UEnum_PicoXRInput_EPicoXRGazeBehavior, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerArmModelParam_Statics::NewProp_ElbowHeight = { "ElbowHeight", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoXRInputFunctionLibrary_eventPXR_GetControllerArmModelParam_Parms, ElbowHeight), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerArmModelParam_Statics::NewProp_ElbowDepth = { "ElbowDepth", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoXRInputFunctionLibrary_eventPXR_GetControllerArmModelParam_Parms, ElbowDepth), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerArmModelParam_Statics::NewProp_PointerTiltAngle = { "PointerTiltAngle", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoXRInputFunctionLibrary_eventPXR_GetControllerArmModelParam_Parms, PointerTiltAngle), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerArmModelParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerArmModelParam_Statics::NewProp_Controller_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerArmModelParam_Statics::NewProp_Controller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerArmModelParam_Statics::NewProp_Handness_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerArmModelParam_Statics::NewProp_Handness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerArmModelParam_Statics::NewProp_ArmJoint_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerArmModelParam_Statics::NewProp_ArmJoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerArmModelParam_Statics::NewProp_GazeType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerArmModelParam_Statics::NewProp_GazeType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerArmModelParam_Statics::NewProp_ElbowHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerArmModelParam_Statics::NewProp_ElbowDepth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerArmModelParam_Statics::NewProp_PointerTiltAngle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerArmModelParam_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRInput" },
		{ "Comment", "/**\n\x09* Set controller arm model parameter.\n\x09* @param Controller         (In) The controller type(G2 controller/Neo LeftController/Neo RightController).\n\x09* @param Handness          (Out) Determines if the controller is in the left hand or right hand.\n\x09* @param ArmJoint          (Out) The arm joint(Controller/Wrist/Elbow/Shoulder).\n\x09* @param GazeType          (Out) The gaze type(Never/DuringMotion/Always).\n\x09* @param ElbowHeight       (Out) The Height of the elbow..\n\x09* @param ElbowDepth        (Out) The Depth of the elbow.\n\x09* @param PointerTiltAngle  (Out) The Downward tilt or pitch of the laser pointer relative to the controller (degrees).\n\x09*/" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "Set controller arm model parameter.\n@param Controller         (In) The controller type(G2 controller/Neo LeftController/Neo RightController).\n@param Handness          (Out) Determines if the controller is in the left hand or right hand.\n@param ArmJoint          (Out) The arm joint(Controller/Wrist/Elbow/Shoulder).\n@param GazeType          (Out) The gaze type(Never/DuringMotion/Always).\n@param ElbowHeight       (Out) The Height of the elbow..\n@param ElbowDepth        (Out) The Depth of the elbow.\n@param PointerTiltAngle  (Out) The Downward tilt or pitch of the laser pointer relative to the controller (degrees)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerArmModelParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPicoXRInputFunctionLibrary, nullptr, "PXR_GetControllerArmModelParam", nullptr, nullptr, sizeof(PicoXRInputFunctionLibrary_eventPXR_GetControllerArmModelParam_Parms), Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerArmModelParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerArmModelParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerArmModelParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerArmModelParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerArmModelParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerArmModelParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerConnectionState_Statics
	{
		struct PicoXRInputFunctionLibrary_eventPXR_GetControllerConnectionState_Parms
		{
			EPicoXRControllerType ControllerType;
			bool Status;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ControllerType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ControllerType;
		static void NewProp_Status_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Status;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerConnectionState_Statics::NewProp_ControllerType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerConnectionState_Statics::NewProp_ControllerType = { "ControllerType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoXRInputFunctionLibrary_eventPXR_GetControllerConnectionState_Parms, ControllerType), Z_Construct_UEnum_PicoXRInput_EPicoXRControllerType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerConnectionState_Statics::NewProp_Status_SetBit(void* Obj)
	{
		((PicoXRInputFunctionLibrary_eventPXR_GetControllerConnectionState_Parms*)Obj)->Status = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerConnectionState_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PicoXRInputFunctionLibrary_eventPXR_GetControllerConnectionState_Parms), &Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerConnectionState_Statics::NewProp_Status_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerConnectionState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PicoXRInputFunctionLibrary_eventPXR_GetControllerConnectionState_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerConnectionState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PicoXRInputFunctionLibrary_eventPXR_GetControllerConnectionState_Parms), &Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerConnectionState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerConnectionState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerConnectionState_Statics::NewProp_ControllerType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerConnectionState_Statics::NewProp_ControllerType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerConnectionState_Statics::NewProp_Status,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerConnectionState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerConnectionState_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRInput" },
		{ "Comment", "/**\n\x09* Get controller connect state.\n\x09* @param ControllerType   (In) The controller type(G2 controller/Neo LeftController/Neo RightController).\n\x09* @param Status          (Out) Connect state,true:Connected,false:DisConnected.\n\x09*/" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "Get controller connect state.\n@param ControllerType   (In) The controller type(G2 controller/Neo LeftController/Neo RightController).\n@param Status          (Out) Connect state,true:Connected,false:DisConnected." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerConnectionState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPicoXRInputFunctionLibrary, nullptr, "PXR_GetControllerConnectionState", nullptr, nullptr, sizeof(PicoXRInputFunctionLibrary_eventPXR_GetControllerConnectionState_Parms), Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerConnectionState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerConnectionState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerConnectionState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerConnectionState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerConnectionState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerConnectionState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerDeviceType_Statics
	{
		struct PicoXRInputFunctionLibrary_eventPXR_GetControllerDeviceType_Parms
		{
			EPicoXRControllerDeviceType ControllerType;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ControllerType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ControllerType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerDeviceType_Statics::NewProp_ControllerType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerDeviceType_Statics::NewProp_ControllerType = { "ControllerType", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoXRInputFunctionLibrary_eventPXR_GetControllerDeviceType_Parms, ControllerType), Z_Construct_UEnum_PicoXRInput_EPicoXRControllerDeviceType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerDeviceType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerDeviceType_Statics::NewProp_ControllerType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerDeviceType_Statics::NewProp_ControllerType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerDeviceType_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRInput" },
		{ "Comment", "/**\n\x09* Get the controller type.\n\x09* @param ControllerType    (Out) The controller type(G2 /Neo).\n\x09*/" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "Get the controller type.\n@param ControllerType    (Out) The controller type(G2 /Neo)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerDeviceType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPicoXRInputFunctionLibrary, nullptr, "PXR_GetControllerDeviceType", nullptr, nullptr, sizeof(PicoXRInputFunctionLibrary_eventPXR_GetControllerDeviceType_Parms), Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerDeviceType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerDeviceType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerDeviceType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerDeviceType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerDeviceType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerDeviceType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerEnableHomekey_Statics
	{
		struct PicoXRInputFunctionLibrary_eventPXR_GetControllerEnableHomekey_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerEnableHomekey_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PicoXRInputFunctionLibrary_eventPXR_GetControllerEnableHomekey_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerEnableHomekey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PicoXRInputFunctionLibrary_eventPXR_GetControllerEnableHomekey_Parms), &Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerEnableHomekey_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerEnableHomekey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerEnableHomekey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerEnableHomekey_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRInput" },
		{ "Comment", "/**\n\x09* Get controller enable homeKey.\n\x09* @return True if home key enable.\n\x09*/" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "Get controller enable homeKey.\n@return True if home key enable." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerEnableHomekey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPicoXRInputFunctionLibrary, nullptr, "PXR_GetControllerEnableHomekey", nullptr, nullptr, sizeof(PicoXRInputFunctionLibrary_eventPXR_GetControllerEnableHomekey_Parms), Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerEnableHomekey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerEnableHomekey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerEnableHomekey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerEnableHomekey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerEnableHomekey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerEnableHomekey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerLinearVelocity_Statics
	{
		struct PicoXRInputFunctionLibrary_eventPXR_GetControllerLinearVelocity_Parms
		{
			EPicoXRControllerType ControllerType;
			FVector LinearVelocity;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ControllerType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ControllerType;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LinearVelocity;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerLinearVelocity_Statics::NewProp_ControllerType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerLinearVelocity_Statics::NewProp_ControllerType = { "ControllerType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoXRInputFunctionLibrary_eventPXR_GetControllerLinearVelocity_Parms, ControllerType), Z_Construct_UEnum_PicoXRInput_EPicoXRControllerType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerLinearVelocity_Statics::NewProp_LinearVelocity = { "LinearVelocity", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoXRInputFunctionLibrary_eventPXR_GetControllerLinearVelocity_Parms, LinearVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerLinearVelocity_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PicoXRInputFunctionLibrary_eventPXR_GetControllerLinearVelocity_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerLinearVelocity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PicoXRInputFunctionLibrary_eventPXR_GetControllerLinearVelocity_Parms), &Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerLinearVelocity_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerLinearVelocity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerLinearVelocity_Statics::NewProp_ControllerType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerLinearVelocity_Statics::NewProp_ControllerType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerLinearVelocity_Statics::NewProp_LinearVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerLinearVelocity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerLinearVelocity_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRInput" },
		{ "Comment", "/**\n\x09* Get controller linear velocity.\n\x09* @param ControllerType     (In) The controller type(G2 controller/Neo LeftController/Neo RightController).\n\x09* @param LinearVelocity    (Out) Controller linear velocity.\n\x09*/" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "Get controller linear velocity.\n@param ControllerType     (In) The controller type(G2 controller/Neo LeftController/Neo RightController).\n@param LinearVelocity    (Out) Controller linear velocity." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerLinearVelocity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPicoXRInputFunctionLibrary, nullptr, "PXR_GetControllerLinearVelocity", nullptr, nullptr, sizeof(PicoXRInputFunctionLibrary_eventPXR_GetControllerLinearVelocity_Parms), Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerLinearVelocity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerLinearVelocity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerLinearVelocity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerLinearVelocity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerLinearVelocity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerLinearVelocity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerPower_Statics
	{
		struct PicoXRInputFunctionLibrary_eventPXR_GetControllerPower_Parms
		{
			EPicoXRControllerType ControllerType;
			int32 Power;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ControllerType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ControllerType;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Power;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerPower_Statics::NewProp_ControllerType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerPower_Statics::NewProp_ControllerType = { "ControllerType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoXRInputFunctionLibrary_eventPXR_GetControllerPower_Parms, ControllerType), Z_Construct_UEnum_PicoXRInput_EPicoXRControllerType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerPower_Statics::NewProp_Power = { "Power", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoXRInputFunctionLibrary_eventPXR_GetControllerPower_Parms, Power), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerPower_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PicoXRInputFunctionLibrary_eventPXR_GetControllerPower_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerPower_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PicoXRInputFunctionLibrary_eventPXR_GetControllerPower_Parms), &Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerPower_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerPower_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerPower_Statics::NewProp_ControllerType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerPower_Statics::NewProp_ControllerType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerPower_Statics::NewProp_Power,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerPower_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerPower_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRInput" },
		{ "Comment", "/**\n\x09* Get controller power.\n\x09* @param ControllerType   (In) The controller type(G2 controller/Neo LeftController/Neo RightController).\n\x09* @param Power           (Out) The power of controller.\n\x09*/" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "Get controller power.\n@param ControllerType   (In) The controller type(G2 controller/Neo LeftController/Neo RightController).\n@param Power           (Out) The power of controller." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerPower_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPicoXRInputFunctionLibrary, nullptr, "PXR_GetControllerPower", nullptr, nullptr, sizeof(PicoXRInputFunctionLibrary_eventPXR_GetControllerPower_Parms), Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerPower_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerPower_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerPower_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerPower_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerPower()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerPower_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerPredictedLocationAndRotation_Statics
	{
		struct PicoXRInputFunctionLibrary_eventPXR_GetControllerPredictedLocationAndRotation_Parms
		{
			EControllerHand DeviceHand;
			float PredictedTime;
			FVector OutLocation;
			FRotator OutRotation;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DeviceHand_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DeviceHand;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PredictedTime;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutLocation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutRotation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerPredictedLocationAndRotation_Statics::NewProp_DeviceHand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerPredictedLocationAndRotation_Statics::NewProp_DeviceHand = { "DeviceHand", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoXRInputFunctionLibrary_eventPXR_GetControllerPredictedLocationAndRotation_Parms, DeviceHand), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerPredictedLocationAndRotation_Statics::NewProp_PredictedTime = { "PredictedTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoXRInputFunctionLibrary_eventPXR_GetControllerPredictedLocationAndRotation_Parms, PredictedTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerPredictedLocationAndRotation_Statics::NewProp_OutLocation = { "OutLocation", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoXRInputFunctionLibrary_eventPXR_GetControllerPredictedLocationAndRotation_Parms, OutLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerPredictedLocationAndRotation_Statics::NewProp_OutRotation = { "OutRotation", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoXRInputFunctionLibrary_eventPXR_GetControllerPredictedLocationAndRotation_Parms, OutRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerPredictedLocationAndRotation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerPredictedLocationAndRotation_Statics::NewProp_DeviceHand_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerPredictedLocationAndRotation_Statics::NewProp_DeviceHand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerPredictedLocationAndRotation_Statics::NewProp_PredictedTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerPredictedLocationAndRotation_Statics::NewProp_OutLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerPredictedLocationAndRotation_Statics::NewProp_OutRotation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerPredictedLocationAndRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRInput" },
		{ "Comment", "/**\n\x09 * Get controller location and rotation with predicted time.\n\x09 * @param DeviceHand      (In) Select the left or right handle.\n\x09 * @param PredictedTime   (In) Prediction time (ms).\n\x09 * @param OutLocation    (Out) Location with predicted time.\n\x09 * @param OutRotation    (Out) Rotation with predicted time.\n\x09 */" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "Get controller location and rotation with predicted time.\n@param DeviceHand      (In) Select the left or right handle.\n@param PredictedTime   (In) Prediction time (ms).\n@param OutLocation    (Out) Location with predicted time.\n@param OutRotation    (Out) Rotation with predicted time." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerPredictedLocationAndRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPicoXRInputFunctionLibrary, nullptr, "PXR_GetControllerPredictedLocationAndRotation", nullptr, nullptr, sizeof(PicoXRInputFunctionLibrary_eventPXR_GetControllerPredictedLocationAndRotation_Parms), Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerPredictedLocationAndRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerPredictedLocationAndRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerPredictedLocationAndRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerPredictedLocationAndRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerPredictedLocationAndRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerPredictedLocationAndRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetHandedness_Statics
	{
		struct PicoXRInputFunctionLibrary_eventPXR_GetHandedness_Parms
		{
			EPicoXRHandedness Handedness;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Handedness_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Handedness;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetHandedness_Statics::NewProp_Handedness_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetHandedness_Statics::NewProp_Handedness = { "Handedness", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoXRInputFunctionLibrary_eventPXR_GetHandedness_Parms, Handedness), Z_Construct_UEnum_PicoXRInput_EPicoXRHandedness, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetHandedness_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PicoXRInputFunctionLibrary_eventPXR_GetHandedness_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetHandedness_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PicoXRInputFunctionLibrary_eventPXR_GetHandedness_Parms), &Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetHandedness_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetHandedness_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetHandedness_Statics::NewProp_Handedness_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetHandedness_Statics::NewProp_Handedness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetHandedness_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetHandedness_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRInput" },
		{ "Comment", "/**\n\x09* Get handedness.\n\x09* @param  Handedness        (Out) Handedness.\n\x09* @return True if get succeed.\n\x09*/" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "Get handedness.\n@param  Handedness        (Out) Handedness.\n@return True if get succeed." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetHandedness_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPicoXRInputFunctionLibrary, nullptr, "PXR_GetHandedness", nullptr, nullptr, sizeof(PicoXRInputFunctionLibrary_eventPXR_GetHandedness_Parms), Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetHandedness_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetHandedness_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetHandedness_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetHandedness_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetHandedness()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetHandedness_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetMainControllerHandle_Statics
	{
		struct PicoXRInputFunctionLibrary_eventPXR_GetMainControllerHandle_Parms
		{
			EPicoXRHandedness Handedness;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Handedness_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Handedness;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetMainControllerHandle_Statics::NewProp_Handedness_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetMainControllerHandle_Statics::NewProp_Handedness = { "Handedness", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoXRInputFunctionLibrary_eventPXR_GetMainControllerHandle_Parms, Handedness), Z_Construct_UEnum_PicoXRInput_EPicoXRHandedness, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetMainControllerHandle_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PicoXRInputFunctionLibrary_eventPXR_GetMainControllerHandle_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetMainControllerHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PicoXRInputFunctionLibrary_eventPXR_GetMainControllerHandle_Parms), &Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetMainControllerHandle_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetMainControllerHandle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetMainControllerHandle_Statics::NewProp_Handedness_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetMainControllerHandle_Statics::NewProp_Handedness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetMainControllerHandle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetMainControllerHandle_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRInput" },
		{ "Comment", "/**\n\x09* Get the main controller.\n\x09* @param Handedness     (Out) Main handedness(Neo LeftController/Neo RightController).\n\x09*/" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "Get the main controller.\n@param Handedness     (Out) Main handedness(Neo LeftController/Neo RightController)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetMainControllerHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPicoXRInputFunctionLibrary, nullptr, "PXR_GetMainControllerHandle", nullptr, nullptr, sizeof(PicoXRInputFunctionLibrary_eventPXR_GetMainControllerHandle_Parms), Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetMainControllerHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetMainControllerHandle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetMainControllerHandle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetMainControllerHandle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetMainControllerHandle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetMainControllerHandle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_SetControllerAmp_Statics
	{
		struct PicoXRInputFunctionLibrary_eventPXR_SetControllerAmp_Parms
		{
			float mode;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mode;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_SetControllerAmp_Statics::NewProp_mode = { "mode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoXRInputFunctionLibrary_eventPXR_SetControllerAmp_Parms, mode), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_SetControllerAmp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoXRInputFunctionLibrary_eventPXR_SetControllerAmp_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_SetControllerAmp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_SetControllerAmp_Statics::NewProp_mode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_SetControllerAmp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_SetControllerAmp_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRInput" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_SetControllerAmp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPicoXRInputFunctionLibrary, nullptr, "PXR_SetControllerAmp", nullptr, nullptr, sizeof(PicoXRInputFunctionLibrary_eventPXR_SetControllerAmp_Parms), Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_SetControllerAmp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_SetControllerAmp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_SetControllerAmp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_SetControllerAmp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_SetControllerAmp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_SetControllerAmp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_SetControllerArmModelParam_Statics
	{
		struct PicoXRInputFunctionLibrary_eventPXR_SetControllerArmModelParam_Parms
		{
			EPicoXRControllerType Controller;
			EPicoXRHandedness Handness;
			EPicoXRArmModelJoint ArmJoint;
			EPicoXRGazeBehavior GazeType;
			float ElbowHeight;
			float ElbowDepth;
			float PointerTiltAngle;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Controller_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Controller;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Handness_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Handness;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ArmJoint_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ArmJoint;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_GazeType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_GazeType;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ElbowHeight;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ElbowDepth;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PointerTiltAngle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_SetControllerArmModelParam_Statics::NewProp_Controller_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_SetControllerArmModelParam_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoXRInputFunctionLibrary_eventPXR_SetControllerArmModelParam_Parms, Controller), Z_Construct_UEnum_PicoXRInput_EPicoXRControllerType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_SetControllerArmModelParam_Statics::NewProp_Handness_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_SetControllerArmModelParam_Statics::NewProp_Handness = { "Handness", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoXRInputFunctionLibrary_eventPXR_SetControllerArmModelParam_Parms, Handness), Z_Construct_UEnum_PicoXRInput_EPicoXRHandedness, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_SetControllerArmModelParam_Statics::NewProp_ArmJoint_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_SetControllerArmModelParam_Statics::NewProp_ArmJoint = { "ArmJoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoXRInputFunctionLibrary_eventPXR_SetControllerArmModelParam_Parms, ArmJoint), Z_Construct_UEnum_PicoXRInput_EPicoXRArmModelJoint, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_SetControllerArmModelParam_Statics::NewProp_GazeType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_SetControllerArmModelParam_Statics::NewProp_GazeType = { "GazeType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoXRInputFunctionLibrary_eventPXR_SetControllerArmModelParam_Parms, GazeType), Z_Construct_UEnum_PicoXRInput_EPicoXRGazeBehavior, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_SetControllerArmModelParam_Statics::NewProp_ElbowHeight = { "ElbowHeight", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoXRInputFunctionLibrary_eventPXR_SetControllerArmModelParam_Parms, ElbowHeight), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_SetControllerArmModelParam_Statics::NewProp_ElbowDepth = { "ElbowDepth", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoXRInputFunctionLibrary_eventPXR_SetControllerArmModelParam_Parms, ElbowDepth), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_SetControllerArmModelParam_Statics::NewProp_PointerTiltAngle = { "PointerTiltAngle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoXRInputFunctionLibrary_eventPXR_SetControllerArmModelParam_Parms, PointerTiltAngle), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_SetControllerArmModelParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_SetControllerArmModelParam_Statics::NewProp_Controller_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_SetControllerArmModelParam_Statics::NewProp_Controller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_SetControllerArmModelParam_Statics::NewProp_Handness_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_SetControllerArmModelParam_Statics::NewProp_Handness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_SetControllerArmModelParam_Statics::NewProp_ArmJoint_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_SetControllerArmModelParam_Statics::NewProp_ArmJoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_SetControllerArmModelParam_Statics::NewProp_GazeType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_SetControllerArmModelParam_Statics::NewProp_GazeType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_SetControllerArmModelParam_Statics::NewProp_ElbowHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_SetControllerArmModelParam_Statics::NewProp_ElbowDepth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_SetControllerArmModelParam_Statics::NewProp_PointerTiltAngle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_SetControllerArmModelParam_Statics::Function_MetaDataParams[] = {
		{ "ArmJoint", "Controller" },
		{ "Category", "PXR|PXRInput" },
		{ "Comment", "/**\n\x09* Set controller arm model parameter.\n\x09* @param Controller        (In) The controller type(G2 controller/Neo LeftController/Neo RightController).\n\x09* @param Handness          (In) Determines if the controller is in the left hand or right hand.\n\x09* @param ArmJoint          (In) The arm joint(Controller/Wrist/Elbow/Shoulder).\n\x09* @param GazeType          (In) The gaze type(Never/DuringMotion/Always).\n\x09* @param ElbowHeight       (In) The Height of the elbow..\n\x09* @param ElbowDepth        (In) The Depth of the elbow.\n\x09* @param PointerTiltAngle  (In) The Downward tilt or pitch of the laser pointer relative to the controller (degrees).\n\x09*/" },
		{ "ElbowDepth", "0.0" },
		{ "ElbowHeight", "0.0" },
		{ "GazeType", "DuringMotion" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "PointerTiltAngle", "15.0" },
		{ "ToolTip", "Set controller arm model parameter.\n@param Controller        (In) The controller type(G2 controller/Neo LeftController/Neo RightController).\n@param Handness          (In) Determines if the controller is in the left hand or right hand.\n@param ArmJoint          (In) The arm joint(Controller/Wrist/Elbow/Shoulder).\n@param GazeType          (In) The gaze type(Never/DuringMotion/Always).\n@param ElbowHeight       (In) The Height of the elbow..\n@param ElbowDepth        (In) The Depth of the elbow.\n@param PointerTiltAngle  (In) The Downward tilt or pitch of the laser pointer relative to the controller (degrees)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_SetControllerArmModelParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPicoXRInputFunctionLibrary, nullptr, "PXR_SetControllerArmModelParam", nullptr, nullptr, sizeof(PicoXRInputFunctionLibrary_eventPXR_SetControllerArmModelParam_Parms), Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_SetControllerArmModelParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_SetControllerArmModelParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_SetControllerArmModelParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_SetControllerArmModelParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_SetControllerArmModelParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_SetControllerArmModelParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_SetControllerEnableKey_Statics
	{
		struct PicoXRInputFunctionLibrary_eventPXR_SetControllerEnableKey_Parms
		{
			bool isEnable;
			EPxrControllerKeyMap Key;
			int32 ReturnValue;
		};
		static void NewProp_isEnable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isEnable;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Key_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_SetControllerEnableKey_Statics::NewProp_isEnable_SetBit(void* Obj)
	{
		((PicoXRInputFunctionLibrary_eventPXR_SetControllerEnableKey_Parms*)Obj)->isEnable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_SetControllerEnableKey_Statics::NewProp_isEnable = { "isEnable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PicoXRInputFunctionLibrary_eventPXR_SetControllerEnableKey_Parms), &Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_SetControllerEnableKey_Statics::NewProp_isEnable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_SetControllerEnableKey_Statics::NewProp_Key_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_SetControllerEnableKey_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoXRInputFunctionLibrary_eventPXR_SetControllerEnableKey_Parms, Key), Z_Construct_UEnum_PicoXRInput_EPxrControllerKeyMap, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_SetControllerEnableKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoXRInputFunctionLibrary_eventPXR_SetControllerEnableKey_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_SetControllerEnableKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_SetControllerEnableKey_Statics::NewProp_isEnable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_SetControllerEnableKey_Statics::NewProp_Key_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_SetControllerEnableKey_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_SetControllerEnableKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_SetControllerEnableKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRInput" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_SetControllerEnableKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPicoXRInputFunctionLibrary, nullptr, "PXR_SetControllerEnableKey", nullptr, nullptr, sizeof(PicoXRInputFunctionLibrary_eventPXR_SetControllerEnableKey_Parms), Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_SetControllerEnableKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_SetControllerEnableKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_SetControllerEnableKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_SetControllerEnableKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_SetControllerEnableKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_SetControllerEnableKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_SetControllerOriginOffset_Statics
	{
		struct PicoXRInputFunctionLibrary_eventPXR_SetControllerOriginOffset_Parms
		{
			EPicoXRControllerType Controller;
			FVector Offset;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Controller_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Controller;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Offset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_SetControllerOriginOffset_Statics::NewProp_Controller_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_SetControllerOriginOffset_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoXRInputFunctionLibrary_eventPXR_SetControllerOriginOffset_Parms, Controller), Z_Construct_UEnum_PicoXRInput_EPicoXRControllerType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_SetControllerOriginOffset_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoXRInputFunctionLibrary_eventPXR_SetControllerOriginOffset_Parms, Offset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_SetControllerOriginOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_SetControllerOriginOffset_Statics::NewProp_Controller_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_SetControllerOriginOffset_Statics::NewProp_Controller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_SetControllerOriginOffset_Statics::NewProp_Offset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_SetControllerOriginOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRInput" },
		{ "Comment", "/**\n\x09* Set controller origin offset.\n\x09* @param Controller      (In) Controller type.\n\x09* @param Offset          (In) Origin offset.   \n\x09*/" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "Set controller origin offset.\n@param Controller      (In) Controller type.\n@param Offset          (In) Origin offset." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_SetControllerOriginOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPicoXRInputFunctionLibrary, nullptr, "PXR_SetControllerOriginOffset", nullptr, nullptr, sizeof(PicoXRInputFunctionLibrary_eventPXR_SetControllerOriginOffset_Parms), Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_SetControllerOriginOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_SetControllerOriginOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_SetControllerOriginOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_SetControllerOriginOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_SetControllerOriginOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_SetControllerOriginOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_SetControllerVibrationEvent_Statics
	{
		struct PicoXRInputFunctionLibrary_eventPXR_SetControllerVibrationEvent_Parms
		{
			int32 deviceID;
			int32 frequency;
			float strength;
			int32 time;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_deviceID;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_frequency;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_strength;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_time;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_SetControllerVibrationEvent_Statics::NewProp_deviceID = { "deviceID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoXRInputFunctionLibrary_eventPXR_SetControllerVibrationEvent_Parms, deviceID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_SetControllerVibrationEvent_Statics::NewProp_frequency = { "frequency", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoXRInputFunctionLibrary_eventPXR_SetControllerVibrationEvent_Parms, frequency), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_SetControllerVibrationEvent_Statics::NewProp_strength = { "strength", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoXRInputFunctionLibrary_eventPXR_SetControllerVibrationEvent_Parms, strength), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_SetControllerVibrationEvent_Statics::NewProp_time = { "time", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoXRInputFunctionLibrary_eventPXR_SetControllerVibrationEvent_Parms, time), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_SetControllerVibrationEvent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoXRInputFunctionLibrary_eventPXR_SetControllerVibrationEvent_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_SetControllerVibrationEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_SetControllerVibrationEvent_Statics::NewProp_deviceID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_SetControllerVibrationEvent_Statics::NewProp_frequency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_SetControllerVibrationEvent_Statics::NewProp_strength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_SetControllerVibrationEvent_Statics::NewProp_time,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_SetControllerVibrationEvent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_SetControllerVibrationEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRInput" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_SetControllerVibrationEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPicoXRInputFunctionLibrary, nullptr, "PXR_SetControllerVibrationEvent", nullptr, nullptr, sizeof(PicoXRInputFunctionLibrary_eventPXR_SetControllerVibrationEvent_Parms), Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_SetControllerVibrationEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_SetControllerVibrationEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_SetControllerVibrationEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_SetControllerVibrationEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_SetControllerVibrationEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_SetControllerVibrationEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_SetMainControllerHandle_Statics
	{
		struct PicoXRInputFunctionLibrary_eventPXR_SetMainControllerHandle_Parms
		{
			EPicoXRHandedness Handedness;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Handedness_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Handedness;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_SetMainControllerHandle_Statics::NewProp_Handedness_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_SetMainControllerHandle_Statics::NewProp_Handedness = { "Handedness", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoXRInputFunctionLibrary_eventPXR_SetMainControllerHandle_Parms, Handedness), Z_Construct_UEnum_PicoXRInput_EPicoXRHandedness, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_SetMainControllerHandle_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PicoXRInputFunctionLibrary_eventPXR_SetMainControllerHandle_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_SetMainControllerHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PicoXRInputFunctionLibrary_eventPXR_SetMainControllerHandle_Parms), &Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_SetMainControllerHandle_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_SetMainControllerHandle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_SetMainControllerHandle_Statics::NewProp_Handedness_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_SetMainControllerHandle_Statics::NewProp_Handedness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_SetMainControllerHandle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_SetMainControllerHandle_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRInput" },
		{ "Comment", "/**\n\x09* Set the main controller.\n\x09* @param Handedness     (In) Main handedness(Neo LeftController/Neo RightController).\n\x09*/" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "Set the main controller.\n@param Handedness     (In) Main handedness(Neo LeftController/Neo RightController)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_SetMainControllerHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPicoXRInputFunctionLibrary, nullptr, "PXR_SetMainControllerHandle", nullptr, nullptr, sizeof(PicoXRInputFunctionLibrary_eventPXR_SetMainControllerHandle_Parms), Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_SetMainControllerHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_SetMainControllerHandle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_SetMainControllerHandle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_SetMainControllerHandle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_SetMainControllerHandle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_SetMainControllerHandle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_StartControllerVCMotor_Statics
	{
		struct PicoXRInputFunctionLibrary_eventPXR_StartControllerVCMotor_Parms
		{
			FString file;
			int32 slot;
			int32 slotconfig;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_file;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_slot;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_slotconfig;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_StartControllerVCMotor_Statics::NewProp_file = { "file", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoXRInputFunctionLibrary_eventPXR_StartControllerVCMotor_Parms, file), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_StartControllerVCMotor_Statics::NewProp_slot = { "slot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoXRInputFunctionLibrary_eventPXR_StartControllerVCMotor_Parms, slot), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_StartControllerVCMotor_Statics::NewProp_slotconfig = { "slotconfig", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoXRInputFunctionLibrary_eventPXR_StartControllerVCMotor_Parms, slotconfig), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_StartControllerVCMotor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoXRInputFunctionLibrary_eventPXR_StartControllerVCMotor_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_StartControllerVCMotor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_StartControllerVCMotor_Statics::NewProp_file,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_StartControllerVCMotor_Statics::NewProp_slot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_StartControllerVCMotor_Statics::NewProp_slotconfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_StartControllerVCMotor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_StartControllerVCMotor_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRInput" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_StartControllerVCMotor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPicoXRInputFunctionLibrary, nullptr, "PXR_StartControllerVCMotor", nullptr, nullptr, sizeof(PicoXRInputFunctionLibrary_eventPXR_StartControllerVCMotor_Parms), Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_StartControllerVCMotor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_StartControllerVCMotor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_StartControllerVCMotor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_StartControllerVCMotor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_StartControllerVCMotor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_StartControllerVCMotor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_StartVibrateBySharem_Statics
	{
		struct PicoXRInputFunctionLibrary_eventPXR_StartVibrateBySharem_Parms
		{
			USoundWave* InSoundWave;
			int32 slot;
			int32 slotConfig;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InSoundWave;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_slot;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_slotConfig;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_StartVibrateBySharem_Statics::NewProp_InSoundWave = { "InSoundWave", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoXRInputFunctionLibrary_eventPXR_StartVibrateBySharem_Parms, InSoundWave), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_StartVibrateBySharem_Statics::NewProp_slot = { "slot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoXRInputFunctionLibrary_eventPXR_StartVibrateBySharem_Parms, slot), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_StartVibrateBySharem_Statics::NewProp_slotConfig = { "slotConfig", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoXRInputFunctionLibrary_eventPXR_StartVibrateBySharem_Parms, slotConfig), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_StartVibrateBySharem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoXRInputFunctionLibrary_eventPXR_StartVibrateBySharem_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_StartVibrateBySharem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_StartVibrateBySharem_Statics::NewProp_InSoundWave,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_StartVibrateBySharem_Statics::NewProp_slot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_StartVibrateBySharem_Statics::NewProp_slotConfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_StartVibrateBySharem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_StartVibrateBySharem_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRInput" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_StartVibrateBySharem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPicoXRInputFunctionLibrary, nullptr, "PXR_StartVibrateBySharem", nullptr, nullptr, sizeof(PicoXRInputFunctionLibrary_eventPXR_StartVibrateBySharem_Parms), Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_StartVibrateBySharem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_StartVibrateBySharem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_StartVibrateBySharem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_StartVibrateBySharem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_StartVibrateBySharem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_StartVibrateBySharem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_StopControllerVCMotor_Statics
	{
		struct PicoXRInputFunctionLibrary_eventPXR_StopControllerVCMotor_Parms
		{
			int32 clientId;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_clientId;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_StopControllerVCMotor_Statics::NewProp_clientId = { "clientId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoXRInputFunctionLibrary_eventPXR_StopControllerVCMotor_Parms, clientId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_StopControllerVCMotor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoXRInputFunctionLibrary_eventPXR_StopControllerVCMotor_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_StopControllerVCMotor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_StopControllerVCMotor_Statics::NewProp_clientId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_StopControllerVCMotor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_StopControllerVCMotor_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRInput" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_StopControllerVCMotor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPicoXRInputFunctionLibrary, nullptr, "PXR_StopControllerVCMotor", nullptr, nullptr, sizeof(PicoXRInputFunctionLibrary_eventPXR_StopControllerVCMotor_Parms), Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_StopControllerVCMotor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_StopControllerVCMotor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_StopControllerVCMotor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_StopControllerVCMotor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_StopControllerVCMotor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_StopControllerVCMotor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_VibrateController_Statics
	{
		struct PicoXRInputFunctionLibrary_eventPXR_VibrateController_Parms
		{
			EPicoXRControllerType ControllerType;
			float Strength;
			int32 Time;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ControllerType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ControllerType;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Strength;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Time;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_VibrateController_Statics::NewProp_ControllerType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_VibrateController_Statics::NewProp_ControllerType = { "ControllerType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoXRInputFunctionLibrary_eventPXR_VibrateController_Parms, ControllerType), Z_Construct_UEnum_PicoXRInput_EPicoXRControllerType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_VibrateController_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoXRInputFunctionLibrary_eventPXR_VibrateController_Parms, Strength), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_VibrateController_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoXRInputFunctionLibrary_eventPXR_VibrateController_Parms, Time), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_VibrateController_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PicoXRInputFunctionLibrary_eventPXR_VibrateController_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_VibrateController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PicoXRInputFunctionLibrary_eventPXR_VibrateController_Parms), &Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_VibrateController_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_VibrateController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_VibrateController_Statics::NewProp_ControllerType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_VibrateController_Statics::NewProp_ControllerType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_VibrateController_Statics::NewProp_Strength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_VibrateController_Statics::NewProp_Time,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_VibrateController_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_VibrateController_Statics::Function_MetaDataParams[] = {
		{ "Category", "PXR|PXRInput" },
		{ "Comment", "/**\n\x09* Vibration the controller.\n\x09* @param ControllerType    (In) The controller type(G2 controller/Neo LeftController/Neo RightController).\n\x09* @param Strength          (In) Vibration strength.\n\x09* @param Time              (In) Vibration time.\n\x09*/" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
		{ "ToolTip", "Vibration the controller.\n@param ControllerType    (In) The controller type(G2 controller/Neo LeftController/Neo RightController).\n@param Strength          (In) Vibration strength.\n@param Time              (In) Vibration time." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_VibrateController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPicoXRInputFunctionLibrary, nullptr, "PXR_VibrateController", nullptr, nullptr, sizeof(PicoXRInputFunctionLibrary_eventPXR_VibrateController_Parms), Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_VibrateController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_VibrateController_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_VibrateController_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_VibrateController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_VibrateController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_VibrateController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPicoXRInputFunctionLibrary_NoRegister()
	{
		return UPicoXRInputFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UPicoXRInputFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPicoXRInputFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_PicoXRInput,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPicoXRInputFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetActiveInputDevice, "GetActiveInputDevice" }, // 2011569011
		{ &Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetBoneName, "GetBoneName" }, // 252093359
		{ &Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetBoneRotation, "GetBoneRotation" }, // 1933209312
		{ &Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetClickStrength, "GetClickStrength" }, // 3954975657
		{ &Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetDominantHand, "GetDominantHand" }, // 1551289646
		{ &Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetFingerConfidence, "GetFingerConfidence" }, // 1495523362
		{ &Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetFingerIsPinching, "GetFingerIsPinching" }, // 1157517708
		{ &Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetFingerPinchStrength, "GetFingerPinchStrength" }, // 504789488
		{ &Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetHandScale, "GetHandScale" }, // 997566100
		{ &Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetPointerPose, "GetPointerPose" }, // 1333617330
		{ &Z_Construct_UFunction_UPicoXRInputFunctionLibrary_GetTrackingConfidence, "GetTrackingConfidence" }, // 2360629952
		{ &Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsDominantHand, "IsDominantHand" }, // 277072651
		{ &Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsHandTracked, "IsHandTracked" }, // 338398773
		{ &Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsHandTrackingEnabled, "IsHandTrackingEnabled" }, // 3348844089
		{ &Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsInputStateValid, "IsInputStateValid" }, // 2430965829
		{ &Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsMenuPressed, "IsMenuPressed" }, // 1827644830
		{ &Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsRayValid, "IsRayValid" }, // 797621049
		{ &Z_Construct_UFunction_UPicoXRInputFunctionLibrary_IsSystemGestureInProgress, "IsSystemGestureInProgress" }, // 2094902618
		{ &Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerAcceleration, "PXR_GetControllerAcceleration" }, // 40456988
		{ &Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerAngularVelocity, "PXR_GetControllerAngularVelocity" }, // 1258801585
		{ &Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerArmModelParam, "PXR_GetControllerArmModelParam" }, // 2815581694
		{ &Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerConnectionState, "PXR_GetControllerConnectionState" }, // 4208280405
		{ &Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerDeviceType, "PXR_GetControllerDeviceType" }, // 2641465440
		{ &Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerEnableHomekey, "PXR_GetControllerEnableHomekey" }, // 3953340093
		{ &Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerLinearVelocity, "PXR_GetControllerLinearVelocity" }, // 1691300952
		{ &Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerPower, "PXR_GetControllerPower" }, // 1472243610
		{ &Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetControllerPredictedLocationAndRotation, "PXR_GetControllerPredictedLocationAndRotation" }, // 2982270046
		{ &Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetHandedness, "PXR_GetHandedness" }, // 724239787
		{ &Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_GetMainControllerHandle, "PXR_GetMainControllerHandle" }, // 3810522379
		{ &Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_SetControllerAmp, "PXR_SetControllerAmp" }, // 449677463
		{ &Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_SetControllerArmModelParam, "PXR_SetControllerArmModelParam" }, // 204073731
		{ &Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_SetControllerEnableKey, "PXR_SetControllerEnableKey" }, // 366707046
		{ &Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_SetControllerOriginOffset, "PXR_SetControllerOriginOffset" }, // 3725514023
		{ &Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_SetControllerVibrationEvent, "PXR_SetControllerVibrationEvent" }, // 676095536
		{ &Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_SetMainControllerHandle, "PXR_SetMainControllerHandle" }, // 1673850455
		{ &Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_StartControllerVCMotor, "PXR_StartControllerVCMotor" }, // 1828107943
		{ &Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_StartVibrateBySharem, "PXR_StartVibrateBySharem" }, // 3407806968
		{ &Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_StopControllerVCMotor, "PXR_StopControllerVCMotor" }, // 2787419631
		{ &Z_Construct_UFunction_UPicoXRInputFunctionLibrary_PXR_VibrateController, "PXR_VibrateController" }, // 660348844
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPicoXRInputFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PXR_InputFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/PXR_InputFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPicoXRInputFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPicoXRInputFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPicoXRInputFunctionLibrary_Statics::ClassParams = {
		&UPicoXRInputFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPicoXRInputFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPicoXRInputFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPicoXRInputFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPicoXRInputFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPicoXRInputFunctionLibrary, 1325484780);
	template<> PICOXRINPUT_API UClass* StaticClass<UPicoXRInputFunctionLibrary>()
	{
		return UPicoXRInputFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPicoXRInputFunctionLibrary(Z_Construct_UClass_UPicoXRInputFunctionLibrary, &UPicoXRInputFunctionLibrary::StaticClass, TEXT("/Script/PicoXRInput"), TEXT("UPicoXRInputFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPicoXRInputFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
