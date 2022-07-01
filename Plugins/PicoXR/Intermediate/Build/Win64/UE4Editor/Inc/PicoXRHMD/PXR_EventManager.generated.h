// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PICOXRHMD_PXR_EventManager_generated_h
#error "PXR_EventManager.generated.h already included, missing '#pragma once' in PXR_EventManager.h"
#endif
#define PICOXRHMD_PXR_EventManager_generated_h

#define UE4PlatformSample_IdentifyFriendEtc_Plugins_PicoXR_Source_PicoXRHMD_Private_PXR_EventManager_h_19_DELEGATE \
struct _Script_PicoXRHMD_eventPXRRefreshRateChanged_Parms \
{ \
	float NewRate; \
}; \
static inline void FPXRRefreshRateChanged_DelegateWrapper(const FMulticastScriptDelegate& PXRRefreshRateChanged, float NewRate) \
{ \
	_Script_PicoXRHMD_eventPXRRefreshRateChanged_Parms Parms; \
	Parms.NewRate=NewRate; \
	PXRRefreshRateChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define UE4PlatformSample_IdentifyFriendEtc_Plugins_PicoXR_Source_PicoXRHMD_Private_PXR_EventManager_h_17_DELEGATE \
struct _Script_PicoXRHMD_eventPXRIpdChanged_Parms \
{ \
	float NewIpd; \
}; \
static inline void FPXRIpdChanged_DelegateWrapper(const FMulticastScriptDelegate& PXRIpdChanged, float NewIpd) \
{ \
	_Script_PicoXRHMD_eventPXRIpdChanged_Parms Parms; \
	Parms.NewIpd=NewIpd; \
	PXRIpdChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define UE4PlatformSample_IdentifyFriendEtc_Plugins_PicoXR_Source_PicoXRHMD_Private_PXR_EventManager_h_15_DELEGATE \
static inline void FPXRResume_DelegateWrapper(const FMulticastScriptDelegate& PXRResume) \
{ \
	PXRResume.ProcessMulticastDelegate<UObject>(NULL); \
}


#define UE4PlatformSample_IdentifyFriendEtc_Plugins_PicoXR_Source_PicoXRHMD_Private_PXR_EventManager_h_14_DELEGATE \
static inline void FPXRLongHomeKey_DelegateWrapper(const FMulticastScriptDelegate& PXRLongHomeKey) \
{ \
	PXRLongHomeKey.ProcessMulticastDelegate<UObject>(NULL); \
}


#define UE4PlatformSample_IdentifyFriendEtc_Plugins_PicoXR_Source_PicoXRHMD_Private_PXR_EventManager_h_13_DELEGATE \
struct _Script_PicoXRHMD_eventPXRHandMenuPressedDelegate_Parms \
{ \
	int32 trackingStage; \
	int32 trackingStageProcess; \
}; \
static inline void FPXRHandMenuPressedDelegate_DelegateWrapper(const FMulticastScriptDelegate& PXRHandMenuPressedDelegate, int32 trackingStage, int32 trackingStageProcess) \
{ \
	_Script_PicoXRHMD_eventPXRHandMenuPressedDelegate_Parms Parms; \
	Parms.trackingStage=trackingStage; \
	Parms.trackingStageProcess=trackingStageProcess; \
	PXRHandMenuPressedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define UE4PlatformSample_IdentifyFriendEtc_Plugins_PicoXR_Source_PicoXRHMD_Private_PXR_EventManager_h_12_DELEGATE \
struct _Script_PicoXRHMD_eventPXRDeviceConnectChangedDelegate_Parms \
{ \
	int32 Handness; \
	int32 State; \
}; \
static inline void FPXRDeviceConnectChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& PXRDeviceConnectChangedDelegate, int32 Handness, int32 State) \
{ \
	_Script_PicoXRHMD_eventPXRDeviceConnectChangedDelegate_Parms Parms; \
	Parms.Handness=Handness; \
	Parms.State=State; \
	PXRDeviceConnectChangedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define UE4PlatformSample_IdentifyFriendEtc_Plugins_PicoXR_Source_PicoXRHMD_Private_PXR_EventManager_h_10_DELEGATE \
struct _Script_PicoXRHMD_eventPXRDeviceMainChangedDelegate_Parms \
{ \
	int32 Handness; \
}; \
static inline void FPXRDeviceMainChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& PXRDeviceMainChangedDelegate, int32 Handness) \
{ \
	_Script_PicoXRHMD_eventPXRDeviceMainChangedDelegate_Parms Parms; \
	Parms.Handness=Handness; \
	PXRDeviceMainChangedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define UE4PlatformSample_IdentifyFriendEtc_Plugins_PicoXR_Source_PicoXRHMD_Private_PXR_EventManager_h_23_SPARSE_DATA
#define UE4PlatformSample_IdentifyFriendEtc_Plugins_PicoXR_Source_PicoXRHMD_Private_PXR_EventManager_h_23_RPC_WRAPPERS
#define UE4PlatformSample_IdentifyFriendEtc_Plugins_PicoXR_Source_PicoXRHMD_Private_PXR_EventManager_h_23_RPC_WRAPPERS_NO_PURE_DECLS
#define UE4PlatformSample_IdentifyFriendEtc_Plugins_PicoXR_Source_PicoXRHMD_Private_PXR_EventManager_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPicoXREventManager(); \
	friend struct Z_Construct_UClass_UPicoXREventManager_Statics; \
public: \
	DECLARE_CLASS(UPicoXREventManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PicoXRHMD"), NO_API) \
	DECLARE_SERIALIZER(UPicoXREventManager)


#define UE4PlatformSample_IdentifyFriendEtc_Plugins_PicoXR_Source_PicoXRHMD_Private_PXR_EventManager_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUPicoXREventManager(); \
	friend struct Z_Construct_UClass_UPicoXREventManager_Statics; \
public: \
	DECLARE_CLASS(UPicoXREventManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PicoXRHMD"), NO_API) \
	DECLARE_SERIALIZER(UPicoXREventManager)


#define UE4PlatformSample_IdentifyFriendEtc_Plugins_PicoXR_Source_PicoXRHMD_Private_PXR_EventManager_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPicoXREventManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPicoXREventManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPicoXREventManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPicoXREventManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPicoXREventManager(UPicoXREventManager&&); \
	NO_API UPicoXREventManager(const UPicoXREventManager&); \
public:


#define UE4PlatformSample_IdentifyFriendEtc_Plugins_PicoXR_Source_PicoXRHMD_Private_PXR_EventManager_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPicoXREventManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPicoXREventManager(UPicoXREventManager&&); \
	NO_API UPicoXREventManager(const UPicoXREventManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPicoXREventManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPicoXREventManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPicoXREventManager)


#define UE4PlatformSample_IdentifyFriendEtc_Plugins_PicoXR_Source_PicoXRHMD_Private_PXR_EventManager_h_23_PRIVATE_PROPERTY_OFFSET
#define UE4PlatformSample_IdentifyFriendEtc_Plugins_PicoXR_Source_PicoXRHMD_Private_PXR_EventManager_h_20_PROLOG
#define UE4PlatformSample_IdentifyFriendEtc_Plugins_PicoXR_Source_PicoXRHMD_Private_PXR_EventManager_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE4PlatformSample_IdentifyFriendEtc_Plugins_PicoXR_Source_PicoXRHMD_Private_PXR_EventManager_h_23_PRIVATE_PROPERTY_OFFSET \
	UE4PlatformSample_IdentifyFriendEtc_Plugins_PicoXR_Source_PicoXRHMD_Private_PXR_EventManager_h_23_SPARSE_DATA \
	UE4PlatformSample_IdentifyFriendEtc_Plugins_PicoXR_Source_PicoXRHMD_Private_PXR_EventManager_h_23_RPC_WRAPPERS \
	UE4PlatformSample_IdentifyFriendEtc_Plugins_PicoXR_Source_PicoXRHMD_Private_PXR_EventManager_h_23_INCLASS \
	UE4PlatformSample_IdentifyFriendEtc_Plugins_PicoXR_Source_PicoXRHMD_Private_PXR_EventManager_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UE4PlatformSample_IdentifyFriendEtc_Plugins_PicoXR_Source_PicoXRHMD_Private_PXR_EventManager_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE4PlatformSample_IdentifyFriendEtc_Plugins_PicoXR_Source_PicoXRHMD_Private_PXR_EventManager_h_23_PRIVATE_PROPERTY_OFFSET \
	UE4PlatformSample_IdentifyFriendEtc_Plugins_PicoXR_Source_PicoXRHMD_Private_PXR_EventManager_h_23_SPARSE_DATA \
	UE4PlatformSample_IdentifyFriendEtc_Plugins_PicoXR_Source_PicoXRHMD_Private_PXR_EventManager_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	UE4PlatformSample_IdentifyFriendEtc_Plugins_PicoXR_Source_PicoXRHMD_Private_PXR_EventManager_h_23_INCLASS_NO_PURE_DECLS \
	UE4PlatformSample_IdentifyFriendEtc_Plugins_PicoXR_Source_PicoXRHMD_Private_PXR_EventManager_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PICOXRHMD_API UClass* StaticClass<class UPicoXREventManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UE4PlatformSample_IdentifyFriendEtc_Plugins_PicoXR_Source_PicoXRHMD_Private_PXR_EventManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
