//Unreal® Engine, Copyright 1998 – 2022, Epic Games, Inc. All rights reserved.

#include "PXR_InputFunctionLibrary.h"

#include "PXR_HandTracking.h"
#include "PXR_Input.h"
#include "PXR_Log.h"

#if PLATFORM_ANDROID
#include "Android/AndroidApplication.h"
#include "Android/AndroidJNI.h"
#include "PxrApi.h"
#include "PxrInput.h"
#endif

FPicoXRInput* GetPicoXRInput()
{
    TArray<IMotionController*> MotionControllers = IModularFeatures::Get().GetModularFeatureImplementations<IMotionController>(IMotionController::GetModularFeatureName());
    for (auto MotionController : MotionControllers)
    {
        if (MotionController != nullptr && MotionController->GetMotionControllerDeviceTypeName() == FName(TEXT("PicoXRInput")))
        {
            return static_cast<FPicoXRInput*>(MotionController);
        }
    }
    return nullptr;
}

bool UPicoXRInputFunctionLibrary::PXR_GetControllerPower(EPicoXRControllerType ControllerType, int32& Power)
{
    FPicoXRInput* PicoXRInputInstence = GetPicoXRInput();
    if (PicoXRInputInstence)
    {
        Power = PicoXRInputInstence->UPxr_GetControllerPower((uint8_t)ControllerType);
        return true;
    }
    return false;
}

bool UPicoXRInputFunctionLibrary::PXR_GetControllerConnectionState(EPicoXRControllerType ControllerType, bool& Status)
{
    FPicoXRInput* Input =  GetPicoXRInput();
    if (Input)
    {
        if (ControllerType ==EPicoXRControllerType::LeftHand || ControllerType == EPicoXRControllerType::RightHand)
        {
            Status = Input->UPxr_GetControllerConnectState(static_cast<int32>(ControllerType));
		}
		else if (ControllerType == EPicoXRControllerType::G2Hand)
		{
			Status = Input->UPxr_GetControllerConnectState(0);
		}
		else
		{
			return false;
		}
        return true;
    }  
#if PLATFORM_WINDOWS
	Status = true;
#endif
	return false;
}

bool UPicoXRInputFunctionLibrary::PXR_GetMainControllerHandle( EPicoXRHandedness& Handedness)
{
    bool Ret = false;
    FPicoXRInput* Input =  GetPicoXRInput();
    if (Input)
    {
        int32 MainHandle = 0;
        Ret = Input->UPxr_GetControllerMainInputHandle(MainHandle);
        Handedness = MainHandle == 0? EPicoXRHandedness::LeftHand: EPicoXRHandedness::RightHand;
        return Ret;
    }
    return Ret;
}

bool UPicoXRInputFunctionLibrary::PXR_SetMainControllerHandle(EPicoXRHandedness Handedness)
{
	FPicoXRInput *PxrInput = GetPicoXRInput();
	if (PxrInput)
	{
		PxrInput->UPxr_SetControllerMainInputHandle(int32(Handedness));
		return true;
	}
	return false;
}

bool UPicoXRInputFunctionLibrary::PXR_GetControllerAngularVelocity(EPicoXRControllerType ControllerType,
                                                                          FVector& AngularVelocity)
{
#if PLATFORM_ANDROID
    PxrControllerTracking Tracking;
    uint32_t Hand;

    if (ControllerType == EPicoXRControllerType::LeftHand) 
    {
        Hand = EPicoXRControllerHandness::LeftController;
    } 
    else 
    {
        Hand = EPicoXRControllerHandness::RightController;
    }

    float HeadSensorData[7] = {0};
    Pxr_GetControllerTrackingState(Hand, 0, HeadSensorData, &Tracking);

    float Data[3] = {0.0f};
    Data[0] = Tracking.localControllerPose.angularVelocity.x;
    Data[1] = Tracking.localControllerPose.angularVelocity.y;
    Data[2] = Tracking.localControllerPose.angularVelocity.z;

    PXR_LOGD(PxrUnrealFunctionLibrary,"Pxr_GetControllerAngularVelocityState %f,%f,%f",Data[0],Data[1],Data[2]);
    AngularVelocity = FVector(Data[0],Data[1],Data[2]);
    AngularVelocity = FVector(-AngularVelocity.Z , AngularVelocity.X , AngularVelocity.Y);
    return true;
#endif
    return false;
}

bool UPicoXRInputFunctionLibrary::PXR_GetControllerAcceleration(EPicoXRControllerType ControllerType,FVector& Acceleration)
{
#if PLATFORM_ANDROID
    PxrControllerTracking Tracking;
    uint32_t Hand;

    if (ControllerType == EPicoXRControllerType::LeftHand) {
        Hand = EPicoXRControllerHandness::LeftController;
    } else {
        Hand = EPicoXRControllerHandness::RightController;
    }
	float HeadSensorData[7] = { 0 };
	Pxr_GetControllerTrackingState(Hand, 0, HeadSensorData, &Tracking);

    float Data[3] = {0.0f};
    Data[0] = Tracking.localControllerPose.angularAcceleration.x;
    Data[1] = Tracking.localControllerPose.angularAcceleration.y;
    Data[2] = Tracking.localControllerPose.angularAcceleration.z;

    PXR_LOGD(PxrUnrealFunctionLibrary,"Pxr_GetControllerAccelerationState %f,%f,%f",Data[0],Data[1],Data[2]);
    Acceleration = FVector(Data[0],Data[1],Data[2]);
    Acceleration = FVector(-Acceleration.Z , Acceleration.X , Acceleration.Y);
    return true;
#endif
    return false;
}

bool UPicoXRInputFunctionLibrary::PXR_GetControllerLinearVelocity(EPicoXRControllerType ControllerType,
    FVector& LinearVelocity)
{
#if PLATFORM_ANDROID
    PxrControllerTracking Tracking;
    uint32_t Hand;

    if (ControllerType == EPicoXRControllerType::LeftHand) {
        Hand = EPicoXRControllerHandness::LeftController;
    } else {
        Hand = EPicoXRControllerHandness::RightController;
    }
	float HeadSensorData[7] = { 0 };
	Pxr_GetControllerTrackingState(Hand, 0, HeadSensorData, &Tracking);

    float Data[3] = {0.0f};
    Data[0] = Tracking.localControllerPose.linearVelocity.x;
    Data[1] = Tracking.localControllerPose.linearVelocity.y;
    Data[2] = Tracking.localControllerPose.linearVelocity.z;

    PXR_LOGD(PxrUnrealFunctionLibrary,"Pxr_GetControllerLinearVelocityState %f,%f,%f",Data[0],Data[1],Data[2]);
    LinearVelocity = FVector(Data[0],Data[1],Data[2]);
    LinearVelocity = FVector(-LinearVelocity.Z , LinearVelocity.X , LinearVelocity.Y);
    return true;
#endif
    return false;
}

bool UPicoXRInputFunctionLibrary::PXR_VibrateController(EPicoXRControllerType ControllerType,float Strength, int Time)
{
#if PLATFORM_ANDROID
    if (Pxr_SetControllerVibration((uint32_t)ControllerType, Strength, Time) == 0)
    {
        return true;
    }
#endif
    return false;
}

void UPicoXRInputFunctionLibrary::PXR_GetControllerDeviceType(EPicoXRControllerDeviceType& OutControllerType)
{
	int32 ControllerType = 0;
#if PLATFORM_ANDROID
	PxrControllerCapability Cap;
	Pxr_GetControllerCapabilities(PXR_CONTROLLER_LEFT, &Cap);
	ControllerType = Cap.type;
#endif
#if PLATFORM_WINDOWS
	ControllerType = 6;
#endif
	OutControllerType = static_cast<EPicoXRControllerDeviceType>(ControllerType);
}

void UPicoXRInputFunctionLibrary::PXR_SetControllerArmModelParam(EPicoXRControllerType Controller,
    EPicoXRHandedness Handness, EPicoXRArmModelJoint ArmJoint, EPicoXRGazeBehavior GazeType, float ElbowHeight,
    float ElbowDepth, float PointerTiltAngle)
{
}

void UPicoXRInputFunctionLibrary::PXR_GetControllerArmModelParam(EPicoXRControllerType Controller,
    EPicoXRHandedness& Handness, EPicoXRArmModelJoint& ArmJoint, EPicoXRGazeBehavior& GazeType, float& ElbowHeight,
    float& ElbowDepth, float& PointerTiltAngle)
{
}

bool UPicoXRInputFunctionLibrary::PXR_GetHandedness(EPicoXRHandedness &Handedness)
{
	bool Ret = false;
	FPicoXRInput* PxrInput = GetPicoXRInput();
	if (PxrInput)
	{
		int32 MainHandle = 0;
		Ret = PxrInput->UPxr_GetControllerMainInputHandle(MainHandle);
        Handedness = MainHandle == 0 ? EPicoXRHandedness::LeftHand : EPicoXRHandedness::RightHand;
		return Ret;
	}
	return Ret;
}

bool UPicoXRInputFunctionLibrary::PXR_GetControllerEnableHomekey()
{
    FPicoXRInput* PxrInput = GetPicoXRInput();
    if (PxrInput)
    {
       return PxrInput->UPxr_GetControllerEnableHomeKey();
    }
    return false;
}

void UPicoXRInputFunctionLibrary::PXR_SetControllerOriginOffset(EPicoXRControllerType Controller, FVector Offset)
{
    if (Controller == EPicoXRControllerType::LeftHand)
    {
        FPicoXRInput::OriginOffsetL = Offset;
    }
    else if (Controller == EPicoXRControllerType::RightHand)
    {
        FPicoXRInput::OriginOffsetR = Offset;
    }
}

void UPicoXRInputFunctionLibrary::PXR_GetControllerPredictedLocationAndRotation(EControllerHand DeviceHand, float PredictedTime, FVector& OutLocation, FRotator& OutRotation)
{
    FVector PredictedLocation; FRotator PredictedRotation;
    PredictedLocation = FVector::ZeroVector;
    PredictedRotation = FRotator::ZeroRotator;
    FPicoXRInput* PxrInput = GetPicoXRInput();
    if (PxrInput)
	{
	    PxrInput->GetPredictedLocationAndRotation(DeviceHand, PredictedTime, PredictedRotation,PredictedLocation);
    }
    OutLocation = PredictedLocation;
    OutRotation = PredictedRotation;
}
int UPicoXRInputFunctionLibrary::PXR_StartControllerVCMotor(FString file, int slot, int slotconfig)
{
    //0-Left And Right 1-Left 2-Right 3-Left And Right
    //0-Reversal 1-No Reversal
    int state = 0;
#if PLATFORM_ANDROID
    int SdkVersion = 0;
    Pxr_GetConfigInt(PXR_API_VERSION, &SdkVersion);
    if (SdkVersion >= 0x2000305) {
        state = Pxr_StartControllerVCMotor(PLATFORM_CHAR(*file), slot, slotconfig);
    }
#endif
    return state;
}

int UPicoXRInputFunctionLibrary::PXR_SetControllerAmp(float mode) {
    int state = 0;
#if PLATFORM_ANDROID
    int SdkVersion = 0;
    Pxr_GetConfigInt(PXR_API_VERSION, &SdkVersion);
    if (SdkVersion >= 0x2000305) {
        state = Pxr_SetControllerAmp(mode);
    }
#endif
    return state;
}

int UPicoXRInputFunctionLibrary::PXR_StopControllerVCMotor(int clientId) {
    int state = 0;
#if PLATFORM_ANDROID
    int SdkVersion = 0;
    Pxr_GetConfigInt(PXR_API_VERSION, &SdkVersion);
    if (SdkVersion >= 0x2000305) {
        state = Pxr_StopControllerVCMotor(clientId);
    }
#endif
    return state;
}

int UPicoXRInputFunctionLibrary::PXR_SetControllerVibrationEvent(int deviceID, int frequency, float strength, int time) {
    int state = 0;
#if PLATFORM_ANDROID
    int SdkVersion = 0;
    Pxr_GetConfigInt(PXR_API_VERSION, &SdkVersion);
    if (SdkVersion >= 0x2000305) {
        PXR_LOGD(PxrUnreal, "PXR_SetControllerVibrationEvent :%d", deviceID);
        state = Pxr_SetControllerVibrationEvent((uint32)deviceID, frequency, strength, time);
    }
#endif
    return state;
}


Audio::FSampleBuffer tSampleBuffer;


int UPicoXRInputFunctionLibrary::PXR_StartVibrateBySharem(USoundWave* InSoundWave, int slot, int slotConfig) {
    int state = 0;
#if PLATFORM_ANDROID
    int SdkVersion = 0;
    Pxr_GetConfigInt(PXR_API_VERSION, &SdkVersion);

    if (SdkVersion >= 0x2000305) {
        int32 delaytag;
        int32 buffersize;
        int32 sampleRate;
        int32 channelMask;
        int32 bitrate = 16;
        float OutSampleDuration;
        uint8* data = nullptr;
        AudioClipData parameter;
        FString TempString;
        int Value = 1024;
        if (GConfig->GetString(FPlatformProperties::GetRuntimeSettingsClassName(), TEXT("AudioCallbackBufferFrameSize"), TempString, GEngineIni))
        {
            Value = FCString::Atoi(*TempString);
            PXR_LOGI(PxrUnreal, "AudioCallbackBufferFrameSize = %d", Value);
        }
        int level = 0;
        if (Value <= 768)
        {
            level = 2;
        }
        else if (Value <= 1536)
        {
            level = 3;
        }
        else
        {
            level = 4;
        }

        Audio::FSoundWavePCMLoader SoundWaveLoader;
        if (InSoundWave)
        {
            TFunction<void(const USoundWave* SoundWave, const Audio::FSampleBuffer& SampleBuffer)> OnLoaded
                = [](const USoundWave* SoundWave, const Audio::FSampleBuffer& SampleBuffer)
            {
                tSampleBuffer = SampleBuffer;
            };
#if ENGINE_MINOR_VERSION>24
            SoundWaveLoader.LoadSoundWave(InSoundWave, MoveTemp(OnLoaded), true);
#else
            SoundWaveLoader.LoadSoundWave(InSoundWave, MoveTemp(OnLoaded));
#endif
            
        }
        data = InSoundWave->RawPCMData;
        PXR_LOGI(PxrUnreal, "AudioCallbackBufferFrameSize = %d", data[0]);
        buffersize = tSampleBuffer.GetNumSamples();
        //OutNumFrames = tSampleBuffer.GetNumFrames();
        channelMask = tSampleBuffer.GetNumChannels();
        sampleRate = tSampleBuffer.GetSampleRate();
        OutSampleDuration = tSampleBuffer.GetSampleDuration();
        parameter.delaytag = level;
        parameter.slot = slot;
        parameter.buffersize = buffersize;
        parameter.sampleRate = sampleRate;
        parameter.channelMask = channelMask;
        parameter.bitrate = bitrate;
        parameter.slotConfig = slotConfig;
        state = Pxr_StartVibrateBySharemU(data, &parameter);
    }
#endif
    return state;
}

void UPicoXRInputFunctionLibrary::PXR_GetVibrateDelayTime(FString &data) {
    int length = 10;
    data = nullptr;
#if PLATFORM_ANDROID
    int SdkVersion = 0;
    Pxr_GetConfigInt(PXR_API_VERSION, &SdkVersion);
    if (SdkVersion >= 0x2000305) {
        data = Pxr_GetVibrateDelayTime(&length);
    }
#endif
}
FQuat UPicoXRInputFunctionLibrary::GetBoneRotation(const EPicoXRHandType DeviceHand, const EBone BoneId)
{
    return FPicoXRHandTracking::GetBoneRotation(DeviceHand, BoneId);
}

EPicoXRHandTrackingConfidence UPicoXRInputFunctionLibrary::GetTrackingConfidence(const EPicoXRHandType DeviceHand)
{
    return FPicoXRHandTracking::GetTrackingConfidence(DeviceHand);
}

FTransform UPicoXRInputFunctionLibrary::GetPointerPose(const EPicoXRHandType DeviceHand)
{
    return FPicoXRHandTracking::GetPointerPose( DeviceHand);
}

bool UPicoXRInputFunctionLibrary::IsHandTracked(const EPicoXRHandType DeviceHand)
{
    return FPicoXRHandTracking::IsHandTracked(DeviceHand);
}

bool UPicoXRInputFunctionLibrary::IsInputStateValid(const EPicoXRHandType DeviceHand)
{
    return FPicoXRHandTracking::IsInputStateValid(DeviceHand);
}

bool UPicoXRInputFunctionLibrary::IsRayValid(const EPicoXRHandType DeviceHand)
{
    return FPicoXRHandTracking::IsRayValid(DeviceHand);
}

bool UPicoXRInputFunctionLibrary::IsSystemGestureInProgress(const EPicoXRHandType DeviceHand)
{
    return FPicoXRHandTracking::IsSystemGestureInProgress(DeviceHand);
}

bool UPicoXRInputFunctionLibrary::IsDominantHand(const EPicoXRHandType DeviceHand)
{
    return FPicoXRHandTracking::IsDominantHand(DeviceHand);
}

bool UPicoXRInputFunctionLibrary::IsMenuPressed(const EPicoXRHandType DeviceHand)
{
    return FPicoXRHandTracking::IsMenuPressed(DeviceHand);
}

float UPicoXRInputFunctionLibrary::GetHandScale(const EPicoXRHandType DeviceHand)
{
    return FPicoXRHandTracking::GetHandScale(DeviceHand);
}

float UPicoXRInputFunctionLibrary::GetClickStrength(const EPicoXRHandType DeviceHand)
{
    return FPicoXRHandTracking::GetClickStrength(DeviceHand);
}

EPicoXRHandType UPicoXRInputFunctionLibrary::GetDominantHand()
{
    EPicoXRHandType DominantHand = EPicoXRHandType::None;
    if (FPicoXRHandTracking::IsHandDominant(EPicoXRHandType::HandLeft))
    {
        DominantHand = EPicoXRHandType::HandLeft;
    }
    else if (FPicoXRHandTracking::IsHandDominant(EPicoXRHandType::HandRight))
    {
        DominantHand = EPicoXRHandType::HandRight;
    }
    return DominantHand;
}

bool UPicoXRInputFunctionLibrary::IsHandTrackingEnabled()
{
    FPicoXRInput* PxrInput = GetPicoXRInput();
    if (PxrInput&&PxrInput->GetPicoXRSettings())
    {
        return FPicoXRHandTracking::IsSystemHandTrackingEnabled()&
            (PxrInput->GetPicoXRSettings()->HandTrackingSupport != EHandTrackingSupport::ControllersOnly);
    }
    return false;
}


FString UPicoXRInputFunctionLibrary::GetBoneName(EBone BoneId)
{
#if PLATFORM_ANDROID
    uint32 ovrBoneId = FPicoXRHandTracking::ToPxrBone(BoneId);
    return FPicoXRHandTracking::GetBoneName(ovrBoneId);
#endif
    return  FString();
}

EPicoXRActiveInputDevice UPicoXRInputFunctionLibrary::GetActiveInputDevice()
{
    return FPicoXRHandTracking::GetActiveInputDevice();
}

bool UPicoXRInputFunctionLibrary::GetFingerIsPinching(const EPicoXRHandType DeviceHand, EHandFinger Finger)
{
    return FPicoXRHandTracking::GetFingerIsPinching(DeviceHand,Finger);
}

float UPicoXRInputFunctionLibrary::GetFingerPinchStrength(const EPicoXRHandType DeviceHand, EHandFinger Finger)
{
    return FPicoXRHandTracking::GetFingerPinchStrength(DeviceHand,Finger);
}

EPicoXRHandTrackingConfidence UPicoXRInputFunctionLibrary::GetFingerConfidence(const EPicoXRHandType DeviceHand, EHandFinger Finger)
{
    return FPicoXRHandTracking::GetFingerConfidence(DeviceHand,Finger);
}

int UPicoXRInputFunctionLibrary::PXR_SetControllerEnableKey(bool isEnable, EPxrControllerKeyMap Key) {
#if PLATFORM_ANDROID
    PxrControllerKeyMap PxrKey = static_cast<PxrControllerKeyMap>(Key);
    return Pxr_SetControllerEnableKey(isEnable, PxrKey);
#endif
    return 0;
}