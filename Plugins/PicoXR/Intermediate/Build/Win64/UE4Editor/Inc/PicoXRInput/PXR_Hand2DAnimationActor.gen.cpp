// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PicoXRInput/Private/PXR_Hand2DAnimationActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePXR_Hand2DAnimationActor() {}
// Cross Module References
	PICOXRINPUT_API UEnum* Z_Construct_UEnum_PicoXRInput_ELoadingType();
	UPackage* Z_Construct_UPackage__Script_PicoXRInput();
	PICOXRINPUT_API UClass* Z_Construct_UClass_APXR_HandUIAnimation2DActor_NoRegister();
	PICOXRINPUT_API UClass* Z_Construct_UClass_APXR_HandUIAnimation2DActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
// End Cross Module References
	static UEnum* ELoadingType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PicoXRInput_ELoadingType, Z_Construct_UPackage__Script_PicoXRInput(), TEXT("ELoadingType"));
		}
		return Singleton;
	}
	template<> PICOXRINPUT_API UEnum* StaticEnum<ELoadingType>()
	{
		return ELoadingType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELoadingType(ELoadingType_StaticEnum, TEXT("/Script/PicoXRInput"), TEXT("ELoadingType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PicoXRInput_ELoadingType_Hash() { return 462378441U; }
	UEnum* Z_Construct_UEnum_PicoXRInput_ELoadingType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PicoXRInput();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELoadingType"), 0, Get_Z_Construct_UEnum_PicoXRInput_ELoadingType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ELoadingType::HomeGestureLoading", (int64)ELoadingType::HomeGestureLoading },
				{ "ELoadingType::ResetGestureLoading", (int64)ELoadingType::ResetGestureLoading },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "HomeGestureLoading.Name", "ELoadingType::HomeGestureLoading" },
				{ "ModuleRelativePath", "Private/PXR_Hand2DAnimationActor.h" },
				{ "ResetGestureLoading.Name", "ELoadingType::ResetGestureLoading" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PicoXRInput,
				nullptr,
				"ELoadingType",
				"ELoadingType",
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
	DEFINE_FUNCTION(APXR_HandUIAnimation2DActor::execSetCurrnetLoadingType)
	{
		P_GET_ENUM(ELoadingType,Z_Param_CurrentLoadingType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCurrnetLoadingType(ELoadingType(Z_Param_CurrentLoadingType));
		P_NATIVE_END;
	}
	static FName NAME_APXR_HandUIAnimation2DActor_ActiveLoadingAnimation = FName(TEXT("ActiveLoadingAnimation"));
	void APXR_HandUIAnimation2DActor::ActiveLoadingAnimation(ELoadingType In_LoadingType, float In_LoadingTime)
	{
		PXR_HandUIAnimation2DActor_eventActiveLoadingAnimation_Parms Parms;
		Parms.In_LoadingType=In_LoadingType;
		Parms.In_LoadingTime=In_LoadingTime;
		ProcessEvent(FindFunctionChecked(NAME_APXR_HandUIAnimation2DActor_ActiveLoadingAnimation),&Parms);
	}
	void APXR_HandUIAnimation2DActor::StaticRegisterNativesAPXR_HandUIAnimation2DActor()
	{
		UClass* Class = APXR_HandUIAnimation2DActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetCurrnetLoadingType", &APXR_HandUIAnimation2DActor::execSetCurrnetLoadingType },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APXR_HandUIAnimation2DActor_ActiveLoadingAnimation_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_In_LoadingType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_In_LoadingType;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_In_LoadingTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_APXR_HandUIAnimation2DActor_ActiveLoadingAnimation_Statics::NewProp_In_LoadingType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_APXR_HandUIAnimation2DActor_ActiveLoadingAnimation_Statics::NewProp_In_LoadingType = { "In_LoadingType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PXR_HandUIAnimation2DActor_eventActiveLoadingAnimation_Parms, In_LoadingType), Z_Construct_UEnum_PicoXRInput_ELoadingType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APXR_HandUIAnimation2DActor_ActiveLoadingAnimation_Statics::NewProp_In_LoadingTime = { "In_LoadingTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PXR_HandUIAnimation2DActor_eventActiveLoadingAnimation_Parms, In_LoadingTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APXR_HandUIAnimation2DActor_ActiveLoadingAnimation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APXR_HandUIAnimation2DActor_ActiveLoadingAnimation_Statics::NewProp_In_LoadingType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APXR_HandUIAnimation2DActor_ActiveLoadingAnimation_Statics::NewProp_In_LoadingType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APXR_HandUIAnimation2DActor_ActiveLoadingAnimation_Statics::NewProp_In_LoadingTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APXR_HandUIAnimation2DActor_ActiveLoadingAnimation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/PXR_Hand2DAnimationActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APXR_HandUIAnimation2DActor_ActiveLoadingAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APXR_HandUIAnimation2DActor, nullptr, "ActiveLoadingAnimation", nullptr, nullptr, sizeof(PXR_HandUIAnimation2DActor_eventActiveLoadingAnimation_Parms), Z_Construct_UFunction_APXR_HandUIAnimation2DActor_ActiveLoadingAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APXR_HandUIAnimation2DActor_ActiveLoadingAnimation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APXR_HandUIAnimation2DActor_ActiveLoadingAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APXR_HandUIAnimation2DActor_ActiveLoadingAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APXR_HandUIAnimation2DActor_ActiveLoadingAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APXR_HandUIAnimation2DActor_ActiveLoadingAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APXR_HandUIAnimation2DActor_SetCurrnetLoadingType_Statics
	{
		struct PXR_HandUIAnimation2DActor_eventSetCurrnetLoadingType_Parms
		{
			ELoadingType CurrentLoadingType;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CurrentLoadingType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentLoadingType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CurrentLoadingType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_APXR_HandUIAnimation2DActor_SetCurrnetLoadingType_Statics::NewProp_CurrentLoadingType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APXR_HandUIAnimation2DActor_SetCurrnetLoadingType_Statics::NewProp_CurrentLoadingType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_APXR_HandUIAnimation2DActor_SetCurrnetLoadingType_Statics::NewProp_CurrentLoadingType = { "CurrentLoadingType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PXR_HandUIAnimation2DActor_eventSetCurrnetLoadingType_Parms, CurrentLoadingType), Z_Construct_UEnum_PicoXRInput_ELoadingType, METADATA_PARAMS(Z_Construct_UFunction_APXR_HandUIAnimation2DActor_SetCurrnetLoadingType_Statics::NewProp_CurrentLoadingType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APXR_HandUIAnimation2DActor_SetCurrnetLoadingType_Statics::NewProp_CurrentLoadingType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APXR_HandUIAnimation2DActor_SetCurrnetLoadingType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APXR_HandUIAnimation2DActor_SetCurrnetLoadingType_Statics::NewProp_CurrentLoadingType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APXR_HandUIAnimation2DActor_SetCurrnetLoadingType_Statics::NewProp_CurrentLoadingType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APXR_HandUIAnimation2DActor_SetCurrnetLoadingType_Statics::Function_MetaDataParams[] = {
		{ "Category", "PicoXR|PicoXRHandTracking" },
		{ "ModuleRelativePath", "Private/PXR_Hand2DAnimationActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APXR_HandUIAnimation2DActor_SetCurrnetLoadingType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APXR_HandUIAnimation2DActor, nullptr, "SetCurrnetLoadingType", nullptr, nullptr, sizeof(PXR_HandUIAnimation2DActor_eventSetCurrnetLoadingType_Parms), Z_Construct_UFunction_APXR_HandUIAnimation2DActor_SetCurrnetLoadingType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APXR_HandUIAnimation2DActor_SetCurrnetLoadingType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APXR_HandUIAnimation2DActor_SetCurrnetLoadingType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APXR_HandUIAnimation2DActor_SetCurrnetLoadingType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APXR_HandUIAnimation2DActor_SetCurrnetLoadingType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APXR_HandUIAnimation2DActor_SetCurrnetLoadingType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APXR_HandUIAnimation2DActor_NoRegister()
	{
		return APXR_HandUIAnimation2DActor::StaticClass();
	}
	struct Z_Construct_UClass_APXR_HandUIAnimation2DActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APXR_HandUIAnimation2DActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PicoXRInput,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APXR_HandUIAnimation2DActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APXR_HandUIAnimation2DActor_ActiveLoadingAnimation, "ActiveLoadingAnimation" }, // 666641209
		{ &Z_Construct_UFunction_APXR_HandUIAnimation2DActor_SetCurrnetLoadingType, "SetCurrnetLoadingType" }, // 1603445082
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APXR_HandUIAnimation2DActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PXR_Hand2DAnimationActor.h" },
		{ "ModuleRelativePath", "Private/PXR_Hand2DAnimationActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APXR_HandUIAnimation2DActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APXR_HandUIAnimation2DActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APXR_HandUIAnimation2DActor_Statics::ClassParams = {
		&APXR_HandUIAnimation2DActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APXR_HandUIAnimation2DActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APXR_HandUIAnimation2DActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APXR_HandUIAnimation2DActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APXR_HandUIAnimation2DActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APXR_HandUIAnimation2DActor, 1107919277);
	template<> PICOXRINPUT_API UClass* StaticClass<APXR_HandUIAnimation2DActor>()
	{
		return APXR_HandUIAnimation2DActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APXR_HandUIAnimation2DActor(Z_Construct_UClass_APXR_HandUIAnimation2DActor, &APXR_HandUIAnimation2DActor::StaticClass, TEXT("/Script/PicoXRInput"), TEXT("APXR_HandUIAnimation2DActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APXR_HandUIAnimation2DActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
