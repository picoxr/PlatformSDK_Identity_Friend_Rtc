// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PicoXRInput/Public/PXR_HandComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePXR_HandComponent() {}
// Cross Module References
	PICOXRINPUT_API UEnum* Z_Construct_UEnum_PicoXRInput_ESystemGestureBehavior();
	UPackage* Z_Construct_UPackage__Script_PicoXRInput();
	PICOXRINPUT_API UEnum* Z_Construct_UEnum_PicoXRInput_EConfidenceBehavior();
	PICOXRINPUT_API UClass* Z_Construct_UClass_UPicoXRHandComponent_NoRegister();
	PICOXRINPUT_API UClass* Z_Construct_UClass_UPicoXRHandComponent();
	ENGINE_API UClass* Z_Construct_UClass_UPoseableMeshComponent();
	PICOXRINPUT_API UEnum* Z_Construct_UEnum_PicoXRInput_EPicoXRHandType();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	PICOXRINPUT_API UEnum* Z_Construct_UEnum_PicoXRInput_EBone();
	PICOXRINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FPicoXRCapsuleCollider();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	PICOXRINPUT_API UClass* Z_Construct_UClass_APXR_HandUIAnimation2DActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	PICOXRINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FHandTrackingStage();
// End Cross Module References
	static UEnum* ESystemGestureBehavior_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PicoXRInput_ESystemGestureBehavior, Z_Construct_UPackage__Script_PicoXRInput(), TEXT("ESystemGestureBehavior"));
		}
		return Singleton;
	}
	template<> PICOXRINPUT_API UEnum* StaticEnum<ESystemGestureBehavior>()
	{
		return ESystemGestureBehavior_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESystemGestureBehavior(ESystemGestureBehavior_StaticEnum, TEXT("/Script/PicoXRInput"), TEXT("ESystemGestureBehavior"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PicoXRInput_ESystemGestureBehavior_Hash() { return 2864466375U; }
	UEnum* Z_Construct_UEnum_PicoXRInput_ESystemGestureBehavior()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PicoXRInput();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESystemGestureBehavior"), 0, Get_Z_Construct_UEnum_PicoXRInput_ESystemGestureBehavior_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESystemGestureBehavior::None", (int64)ESystemGestureBehavior::None },
				{ "ESystemGestureBehavior::SwapMaterial", (int64)ESystemGestureBehavior::SwapMaterial },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/PXR_HandComponent.h" },
				{ "None.Name", "ESystemGestureBehavior::None" },
				{ "SwapMaterial.Name", "ESystemGestureBehavior::SwapMaterial" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PicoXRInput,
				nullptr,
				"ESystemGestureBehavior",
				"ESystemGestureBehavior",
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
	static UEnum* EConfidenceBehavior_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PicoXRInput_EConfidenceBehavior, Z_Construct_UPackage__Script_PicoXRInput(), TEXT("EConfidenceBehavior"));
		}
		return Singleton;
	}
	template<> PICOXRINPUT_API UEnum* StaticEnum<EConfidenceBehavior>()
	{
		return EConfidenceBehavior_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EConfidenceBehavior(EConfidenceBehavior_StaticEnum, TEXT("/Script/PicoXRInput"), TEXT("EConfidenceBehavior"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PicoXRInput_EConfidenceBehavior_Hash() { return 3508283186U; }
	UEnum* Z_Construct_UEnum_PicoXRInput_EConfidenceBehavior()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PicoXRInput();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EConfidenceBehavior"), 0, Get_Z_Construct_UEnum_PicoXRInput_EConfidenceBehavior_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EConfidenceBehavior::None", (int64)EConfidenceBehavior::None },
				{ "EConfidenceBehavior::HideActor", (int64)EConfidenceBehavior::HideActor },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "HideActor.Name", "EConfidenceBehavior::HideActor" },
				{ "ModuleRelativePath", "Public/PXR_HandComponent.h" },
				{ "None.Name", "EConfidenceBehavior::None" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PicoXRInput,
				nullptr,
				"EConfidenceBehavior",
				"EConfidenceBehavior",
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
	DEFINE_FUNCTION(UPicoXRHandComponent::execStageCallBackFunction)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_TrackingStage);
		P_GET_PROPERTY(FIntProperty,Z_Param_TrackingStageProcess);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StageCallBackFunction(Z_Param_TrackingStage,Z_Param_TrackingStageProcess);
		P_NATIVE_END;
	}
	void UPicoXRHandComponent::StaticRegisterNativesUPicoXRHandComponent()
	{
		UClass* Class = UPicoXRHandComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "StageCallBackFunction", &UPicoXRHandComponent::execStageCallBackFunction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPicoXRHandComponent_StageCallBackFunction_Statics
	{
		struct PicoXRHandComponent_eventStageCallBackFunction_Parms
		{
			int32 TrackingStage;
			int32 TrackingStageProcess;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TrackingStage;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TrackingStageProcess;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPicoXRHandComponent_StageCallBackFunction_Statics::NewProp_TrackingStage = { "TrackingStage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoXRHandComponent_eventStageCallBackFunction_Parms, TrackingStage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPicoXRHandComponent_StageCallBackFunction_Statics::NewProp_TrackingStageProcess = { "TrackingStageProcess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PicoXRHandComponent_eventStageCallBackFunction_Parms, TrackingStageProcess), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPicoXRHandComponent_StageCallBackFunction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRHandComponent_StageCallBackFunction_Statics::NewProp_TrackingStage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPicoXRHandComponent_StageCallBackFunction_Statics::NewProp_TrackingStageProcess,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPicoXRHandComponent_StageCallBackFunction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PXR_HandComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPicoXRHandComponent_StageCallBackFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPicoXRHandComponent, nullptr, "StageCallBackFunction", nullptr, nullptr, sizeof(PicoXRHandComponent_eventStageCallBackFunction_Parms), Z_Construct_UFunction_UPicoXRHandComponent_StageCallBackFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoXRHandComponent_StageCallBackFunction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPicoXRHandComponent_StageCallBackFunction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPicoXRHandComponent_StageCallBackFunction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPicoXRHandComponent_StageCallBackFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPicoXRHandComponent_StageCallBackFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPicoXRHandComponent_NoRegister()
	{
		return UPicoXRHandComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPicoXRHandComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SkeletonType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletonType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SkeletonType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MeshType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MeshType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ConfidenceBehavior_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConfidenceBehavior_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ConfidenceBehavior;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUpdateHandScale_MetaData[];
#endif
		static void NewProp_bUpdateHandScale_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateHandScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MaterialOverride;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneNameMappings_ValueProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BoneNameMappings_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BoneNameMappings_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneNameMappings_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_BoneNameMappings;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CollisionCapsules_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionCapsules_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CollisionCapsules;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Animation2DClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Animation2DClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Animation2DActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Animation2DActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentCameraManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentCameraManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RuntimeSkeletalMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RuntimeSkeletalMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedBaseMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CachedBaseMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HandTrackingStage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HandTrackingStage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPicoXRHandComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPoseableMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_PicoXRInput,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPicoXRHandComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPicoXRHandComponent_StageCallBackFunction, "StageCallBackFunction" }, // 2465037310
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPicoXRHandComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "PicoXRComponent" },
		{ "HideCategories", "Object Physics Object Mobility Trigger" },
		{ "IncludePath", "PXR_HandComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PXR_HandComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPicoXRHandComponent_Statics::NewProp_SkeletonType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPicoXRHandComponent_Statics::NewProp_SkeletonType_MetaData[] = {
		{ "Category", "HandProperties" },
		{ "Comment", "/** The hand skeleton that will be loaded */" },
		{ "ModuleRelativePath", "Public/PXR_HandComponent.h" },
		{ "ToolTip", "The hand skeleton that will be loaded" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPicoXRHandComponent_Statics::NewProp_SkeletonType = { "SkeletonType", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPicoXRHandComponent, SkeletonType), Z_Construct_UEnum_PicoXRInput_EPicoXRHandType, METADATA_PARAMS(Z_Construct_UClass_UPicoXRHandComponent_Statics::NewProp_SkeletonType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPicoXRHandComponent_Statics::NewProp_SkeletonType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPicoXRHandComponent_Statics::NewProp_MeshType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPicoXRHandComponent_Statics::NewProp_MeshType_MetaData[] = {
		{ "Category", "HandProperties" },
		{ "Comment", "/** The hand mesh that will be applied to the skeleton */" },
		{ "ModuleRelativePath", "Public/PXR_HandComponent.h" },
		{ "ToolTip", "The hand mesh that will be applied to the skeleton" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPicoXRHandComponent_Statics::NewProp_MeshType = { "MeshType", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPicoXRHandComponent, MeshType), Z_Construct_UEnum_PicoXRInput_EPicoXRHandType, METADATA_PARAMS(Z_Construct_UClass_UPicoXRHandComponent_Statics::NewProp_MeshType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPicoXRHandComponent_Statics::NewProp_MeshType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPicoXRHandComponent_Statics::NewProp_ConfidenceBehavior_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPicoXRHandComponent_Statics::NewProp_ConfidenceBehavior_MetaData[] = {
		{ "Category", "HandProperties" },
		{ "Comment", "/** Behavior for when hand tracking loses high confidence tracking */" },
		{ "ModuleRelativePath", "Public/PXR_HandComponent.h" },
		{ "ToolTip", "Behavior for when hand tracking loses high confidence tracking" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPicoXRHandComponent_Statics::NewProp_ConfidenceBehavior = { "ConfidenceBehavior", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPicoXRHandComponent, ConfidenceBehavior), Z_Construct_UEnum_PicoXRInput_EConfidenceBehavior, METADATA_PARAMS(Z_Construct_UClass_UPicoXRHandComponent_Statics::NewProp_ConfidenceBehavior_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPicoXRHandComponent_Statics::NewProp_ConfidenceBehavior_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPicoXRHandComponent_Statics::NewProp_bUpdateHandScale_MetaData[] = {
		{ "Category", "HandProperties" },
		{ "Comment", "/** Whether or not the hand scale should update based on values from the runtime to match the users hand scale */" },
		{ "ModuleRelativePath", "Public/PXR_HandComponent.h" },
		{ "ToolTip", "Whether or not the hand scale should update based on values from the runtime to match the users hand scale" },
	};
#endif
	void Z_Construct_UClass_UPicoXRHandComponent_Statics::NewProp_bUpdateHandScale_SetBit(void* Obj)
	{
		((UPicoXRHandComponent*)Obj)->bUpdateHandScale = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPicoXRHandComponent_Statics::NewProp_bUpdateHandScale = { "bUpdateHandScale", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPicoXRHandComponent), &Z_Construct_UClass_UPicoXRHandComponent_Statics::NewProp_bUpdateHandScale_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPicoXRHandComponent_Statics::NewProp_bUpdateHandScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPicoXRHandComponent_Statics::NewProp_bUpdateHandScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPicoXRHandComponent_Statics::NewProp_MaterialOverride_MetaData[] = {
		{ "Comment", "/** Material override for the runtime skeletal mesh *///UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = \"HandProperties\")\n" },
		{ "ModuleRelativePath", "Public/PXR_HandComponent.h" },
		{ "ToolTip", "Material override for the runtime skeletal mesh //UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = \"HandProperties\")" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPicoXRHandComponent_Statics::NewProp_MaterialOverride = { "MaterialOverride", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPicoXRHandComponent, MaterialOverride), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPicoXRHandComponent_Statics::NewProp_MaterialOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPicoXRHandComponent_Statics::NewProp_MaterialOverride_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPicoXRHandComponent_Statics::NewProp_BoneNameMappings_ValueProp = { "BoneNameMappings", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPicoXRHandComponent_Statics::NewProp_BoneNameMappings_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPicoXRHandComponent_Statics::NewProp_BoneNameMappings_Key_KeyProp = { "BoneNameMappings_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_PicoXRInput_EBone, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPicoXRHandComponent_Statics::NewProp_BoneNameMappings_MetaData[] = {
		{ "Category", "CustomSkeletalMesh" },
		{ "Comment", "/** Bone mapping for custom hand skeletal meshes */" },
		{ "ModuleRelativePath", "Public/PXR_HandComponent.h" },
		{ "ToolTip", "Bone mapping for custom hand skeletal meshes" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UPicoXRHandComponent_Statics::NewProp_BoneNameMappings = { "BoneNameMappings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPicoXRHandComponent, BoneNameMappings), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPicoXRHandComponent_Statics::NewProp_BoneNameMappings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPicoXRHandComponent_Statics::NewProp_BoneNameMappings_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPicoXRHandComponent_Statics::NewProp_CollisionCapsules_Inner = { "CollisionCapsules", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPicoXRCapsuleCollider, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPicoXRHandComponent_Statics::NewProp_CollisionCapsules_MetaData[] = {
		{ "Category", "HandProperties" },
		{ "Comment", "/** List of capsule colliders created for the skeletal mesh */" },
		{ "ModuleRelativePath", "Public/PXR_HandComponent.h" },
		{ "ToolTip", "List of capsule colliders created for the skeletal mesh" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPicoXRHandComponent_Statics::NewProp_CollisionCapsules = { "CollisionCapsules", nullptr, (EPropertyFlags)0x0010008000000014, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPicoXRHandComponent, CollisionCapsules), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPicoXRHandComponent_Statics::NewProp_CollisionCapsules_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPicoXRHandComponent_Statics::NewProp_CollisionCapsules_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPicoXRHandComponent_Statics::NewProp_Animation2DClass_MetaData[] = {
		{ "Category", "HandProperties" },
		{ "ModuleRelativePath", "Public/PXR_HandComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UPicoXRHandComponent_Statics::NewProp_Animation2DClass = { "Animation2DClass", nullptr, (EPropertyFlags)0x0014000000010005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPicoXRHandComponent, Animation2DClass), Z_Construct_UClass_APXR_HandUIAnimation2DActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UPicoXRHandComponent_Statics::NewProp_Animation2DClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPicoXRHandComponent_Statics::NewProp_Animation2DClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPicoXRHandComponent_Statics::NewProp_Animation2DActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/PXR_HandComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPicoXRHandComponent_Statics::NewProp_Animation2DActor = { "Animation2DActor", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPicoXRHandComponent, Animation2DActor), Z_Construct_UClass_APXR_HandUIAnimation2DActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPicoXRHandComponent_Statics::NewProp_Animation2DActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPicoXRHandComponent_Statics::NewProp_Animation2DActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPicoXRHandComponent_Statics::NewProp_CurrentCameraManager_MetaData[] = {
		{ "ModuleRelativePath", "Public/PXR_HandComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPicoXRHandComponent_Statics::NewProp_CurrentCameraManager = { "CurrentCameraManager", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPicoXRHandComponent, CurrentCameraManager), Z_Construct_UClass_APlayerCameraManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPicoXRHandComponent_Statics::NewProp_CurrentCameraManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPicoXRHandComponent_Statics::NewProp_CurrentCameraManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPicoXRHandComponent_Statics::NewProp_RuntimeSkeletalMesh_MetaData[] = {
		{ "ModuleRelativePath", "Public/PXR_HandComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPicoXRHandComponent_Statics::NewProp_RuntimeSkeletalMesh = { "RuntimeSkeletalMesh", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPicoXRHandComponent, RuntimeSkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPicoXRHandComponent_Statics::NewProp_RuntimeSkeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPicoXRHandComponent_Statics::NewProp_RuntimeSkeletalMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPicoXRHandComponent_Statics::NewProp_CachedBaseMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/PXR_HandComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPicoXRHandComponent_Statics::NewProp_CachedBaseMaterial = { "CachedBaseMaterial", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPicoXRHandComponent, CachedBaseMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPicoXRHandComponent_Statics::NewProp_CachedBaseMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPicoXRHandComponent_Statics::NewProp_CachedBaseMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPicoXRHandComponent_Statics::NewProp_HandTrackingStage_MetaData[] = {
		{ "ModuleRelativePath", "Public/PXR_HandComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPicoXRHandComponent_Statics::NewProp_HandTrackingStage = { "HandTrackingStage", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPicoXRHandComponent, HandTrackingStage), Z_Construct_UScriptStruct_FHandTrackingStage, METADATA_PARAMS(Z_Construct_UClass_UPicoXRHandComponent_Statics::NewProp_HandTrackingStage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPicoXRHandComponent_Statics::NewProp_HandTrackingStage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPicoXRHandComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPicoXRHandComponent_Statics::NewProp_SkeletonType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPicoXRHandComponent_Statics::NewProp_SkeletonType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPicoXRHandComponent_Statics::NewProp_MeshType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPicoXRHandComponent_Statics::NewProp_MeshType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPicoXRHandComponent_Statics::NewProp_ConfidenceBehavior_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPicoXRHandComponent_Statics::NewProp_ConfidenceBehavior,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPicoXRHandComponent_Statics::NewProp_bUpdateHandScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPicoXRHandComponent_Statics::NewProp_MaterialOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPicoXRHandComponent_Statics::NewProp_BoneNameMappings_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPicoXRHandComponent_Statics::NewProp_BoneNameMappings_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPicoXRHandComponent_Statics::NewProp_BoneNameMappings_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPicoXRHandComponent_Statics::NewProp_BoneNameMappings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPicoXRHandComponent_Statics::NewProp_CollisionCapsules_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPicoXRHandComponent_Statics::NewProp_CollisionCapsules,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPicoXRHandComponent_Statics::NewProp_Animation2DClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPicoXRHandComponent_Statics::NewProp_Animation2DActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPicoXRHandComponent_Statics::NewProp_CurrentCameraManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPicoXRHandComponent_Statics::NewProp_RuntimeSkeletalMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPicoXRHandComponent_Statics::NewProp_CachedBaseMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPicoXRHandComponent_Statics::NewProp_HandTrackingStage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPicoXRHandComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPicoXRHandComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPicoXRHandComponent_Statics::ClassParams = {
		&UPicoXRHandComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPicoXRHandComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPicoXRHandComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPicoXRHandComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPicoXRHandComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPicoXRHandComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPicoXRHandComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPicoXRHandComponent, 831743833);
	template<> PICOXRINPUT_API UClass* StaticClass<UPicoXRHandComponent>()
	{
		return UPicoXRHandComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPicoXRHandComponent(Z_Construct_UClass_UPicoXRHandComponent, &UPicoXRHandComponent::StaticClass, TEXT("/Script/PicoXRInput"), TEXT("UPicoXRHandComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPicoXRHandComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
