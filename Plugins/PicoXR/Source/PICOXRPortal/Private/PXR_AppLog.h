// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
DEFINE_LOG_CATEGORY_STATIC(LogAppLog, Log, All);

/**
 * 
 */
class PICOXRPORTAL_API PXR_AppLog
{
public:
	PXR_AppLog();
	~PXR_AppLog();

	static bool InitAppLog();
	static void ShutdownAppLog();

	static void AddAppLog(const FString& param, const FString& value);
	
private:
	static FString GetJsonStringFromParamAndValue(const FString& param, const FString& value);

	static FString StrAppID;
	static FString StrChannelName;
	static FString StrXRSDK;
	static bool IsInitialized;
};
