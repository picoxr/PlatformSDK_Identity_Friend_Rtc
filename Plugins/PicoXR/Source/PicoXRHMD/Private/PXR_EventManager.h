//Unreal® Engine, Copyright 1998 – 2022, Epic Games, Inc. All rights reserved.

#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Delegates/Delegate.h"
#include "PXR_EventManager.generated.h"

//ControllerDelegate
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPXRDeviceMainChangedDelegate,int32,Handness);
DECLARE_MULTICAST_DELEGATE_OneParam(FPXRHandTrackingEnabledDelegate,int32);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPXRDeviceConnectChangedDelegate,int32,Handness,int32,State);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPXRHandMenuPressedDelegate,int32,trackingStage,int32,trackingStageProcess);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FPXRLongHomeKey);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FPXRResume);
//HMDDelegate
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPXRIpdChanged,float,NewIpd);
//SystemDisplayRateDelegate
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPXRRefreshRateChanged, float, NewRate);
UCLASS()
class UPicoXREventManager : public UObject
{
	GENERATED_BODY()
public:
	
	static UPicoXREventManager* GetInstance();
	
	UPROPERTY(BlueprintAssignable)
	FPXRDeviceMainChangedDelegate DeviceMainChangedDelegate;
	
	UPROPERTY(BlueprintAssignable)
	FPXRDeviceConnectChangedDelegate DeviceConnectChangedDelegate;

	UPROPERTY(BlueprintAssignable)
	FPXRIpdChanged IpdChangedDelegate;

	UPROPERTY(BlueprintAssignable)
	FPXRLongHomeKey LongHomePressedDelegate;

	UPROPERTY(BlueprintAssignable)
	FPXRResume ResumeDelegate;

	UPROPERTY(BlueprintAssignable)
	FPXRRefreshRateChanged RefreshRateChangedDelegate;

	UPROPERTY(BlueprintAssignable)
	FPXRHandMenuPressedDelegate HandMenuPressedDelegate;
	
	FPXRHandTrackingEnabledDelegate HandTrackingEnabledDelegate;
};
