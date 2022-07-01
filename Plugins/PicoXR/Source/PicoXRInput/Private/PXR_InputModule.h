//Unreal® Engine, Copyright 1998 – 2022, Epic Games, Inc. All rights reserved.

#pragma once
#include "IPXR_InputModule.h"
#include "IInputDevice.h"
#include "Templates/SharedPointer.h"
#include "PXR_HMD.h"

class FPicoXRInputModule : public IPicoXRInputModule
{
public:
	FPicoXRInputModule();
	virtual ~FPicoXRInputModule();
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
	virtual TSharedPtr< class IInputDevice > CreateInputDevice(const TSharedRef< FGenericApplicationMessageHandler >& InMessageHandler) override;
private:
	TSharedPtr<class FPicoXRInput> InputDevice;
};

