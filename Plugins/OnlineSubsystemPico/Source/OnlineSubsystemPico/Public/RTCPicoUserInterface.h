// Copyright 2022 Pico Technology Co., Ltd.All rights reserved.
// This plugin incorporates portions of the Unreal® Engine. Unreal® is a trademark or registered trademark of Epic Games, Inc.In the United States of America and elsewhere.
// Unreal® Engine, Copyright 1998 – 2022, Epic Games, Inc.All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "OnlineSubsystemPico.h"
#include "OnlineSubsystemPicoPackage.h"
#include "OnlineSubsystemPicoNames.h"

/// @file RTCPicoUserInterface.h

DECLARE_LOG_CATEGORY_EXTERN(RtcInterface, Log, All);

/// @brief Rtc engine privilege enum.
UENUM(BlueprintType)
enum  class ERtcPrivilege : uint8
{
    None,
    PublishStream,
    PublishAudioStream,
    PublishVideoStream,
    SubscribeStream
};

/// @brief Rtc engine init result enum.
UENUM(BlueprintType)
enum  class ERtcEngineInitResult : uint8
{
    None,
    Unknow,
    AlreadyInitialized,
    InvalidConfig,
    Success
};

/// @brief Rtc engine room profile type enum.
UENUM(BlueprintType)
enum class ERtcRoomProfileType : uint8
{
    None,
    Communication,
    LiveBroadcasting,
    Game,
    CloundGame,
    LowLatency
};

/// @brief Rtc mute state enum.
UENUM(BlueprintType)
enum class ERtcMuteState : uint8
{
    None,
    Off,
    On
};

/// @brief Rtc pause or resume media type enum.
UENUM(BlueprintType)
enum class ERtcPauseResumeMediaType : uint8
{
    None,
    Audio,
    Video,
    AudioAndVideo
};

/// @brief Rtc audio playback device enum.
UENUM(BlueprintType)
enum class ERtcAudioPlaybackDevice : uint8
{
    None,
    Headset,
    EarPiece,
    SpeakerPhone,
    HeadsetBlueTooth,
    HeadsetUsb
};

/// @brief Rtc audio scenario type enum.
UENUM(BlueprintType)
enum class ERtcAudioScenarioType : uint8
{
    None,
    Music,
    HighQualityCommunication,
    Communication,
    Media,
    GameStreaming
};

/// @brief Rtc audio stream index enum.
UENUM(BlueprintType)
enum class ERtcStreamIndex : uint8
{
    None,
    Main,
    Screen
};

/// @brief Rtc ear monitor mode enum.
UENUM(BlueprintType)
enum class ERtcEarMonitorMode : uint8
{
    None,
    Off,
    On
};

/// @brief Rtc join room type enum.
UENUM(BlueprintType)
enum class ERtcJoinRoomType : uint8
{
    None,
    First,
    Reconnected
};

/// @brief Rtc user leave reason type.
UENUM(BlueprintType)
enum class ERtcUserLeaveReasonType : uint8
{
    None,
    Quit,
    Dropped
};

/// @brief Rtc media device type.
UENUM(BlueprintType)
enum class ERtcMediaDeviceType : uint8
{
    None,
    AudioUnknown,
    AudioRenderDevice,
    AudioCaptureDevice
};

/// @brief Rtc media device state.
UENUM(BlueprintType)
enum class ERtcMediaDeviceState : uint8
{
    None,
    Started,
    Stopped,
    RuntimeError,
    Added,
    Removed
};

/// @brief Rtc media device error type.
UENUM(BlueprintType)
enum class ERtcMediaDeviceError : uint8
{
    None,
    Ok,
    NoPermission,
    DeviceBusy,
    DeviceFailure,
    DeviceNotFound,
    DeviceDisconnected,
    DeviceNoCallback,
    UnSupporttedFormat
};

// Request
DECLARE_DELEGATE_ThreeParams(FOnGetTokenComplete, const FString& /*String Token*/, bool /*IsError*/, const FString& /*Error Message*/);

// Notification
DECLARE_MULTICAST_DELEGATE_FiveParams(FRtcJoinRoomResult, const FString& /*RoomId*/, const FString& /*UserId*/, int /*ErrorCode*/, int /*Elapsed*/, ERtcJoinRoomType /*JoinRoomType*/);
DECLARE_MULTICAST_DELEGATE_OneParam(FRtcLeaveRoomReault, const FString& /*RoomId*/);
DECLARE_MULTICAST_DELEGATE_ThreeParams(FRtcRoomState, int /*TotalDuration*/, int /*UserCount*/, const FString& /*RoomId*/);
DECLARE_MULTICAST_DELEGATE_FourParams(FRtcUserJoinInfo, const FString& /*UserId*/, const FString& /*UserExtra*/, int /*Elapsed*/, const FString& /*RoomId*/);
DECLARE_MULTICAST_DELEGATE_ThreeParams(FRtcUserLeaveInfo, const FString& /*UserId*/, ERtcUserLeaveReasonType /*RtcUserLeaveReasonType*/, const FString& /*RoomId*/);
DECLARE_MULTICAST_DELEGATE_TwoParams(FRtcRoomWarn, int /*Code*/, const FString& /*RoomId*/);
DECLARE_MULTICAST_DELEGATE_TwoParams(FRtcRoomError, int /*Code*/, const FString& /*RoomId*/);
DECLARE_MULTICAST_DELEGATE_TwoParams(FRtcUserMuteAudioInfo, const FString& /*UserId*/, ERtcMuteState /*RtcMuteState*/);
DECLARE_MULTICAST_DELEGATE_OneParam(FRtcAudioChangePlaybackDevice, ERtcAudioPlaybackDevice /*RtcAudioPlaybackDevice*/);
DECLARE_MULTICAST_DELEGATE_FourParams(FRtcMediaDeviceChangeInfo, const FString& /*DeviceId*/, ERtcMediaDeviceType /*MediaDeciveType*/, ERtcMediaDeviceState /*MediaDeviceState*/, ERtcMediaDeviceError /*MediaDeviceError*/);
DECLARE_MULTICAST_DELEGATE_TwoParams(FRtcLocalAudioPropertiesReport, TArray<ERtcStreamIndex>  /*StreamIndex*/, TArray<int> /*Volume Array*/);
DECLARE_MULTICAST_DELEGATE_FiveParams(FRtcRemoteAudioPropertiesReport, int /*TotalRemoteVolume*/, TArray<int> /*Volume Array*/, const TArray<FString>& /*RoomId Array*/, const TArray<FString>&  /*UserId Array*/, TArray<ERtcStreamIndex>  /*StreamIndex Array*/);
DECLARE_MULTICAST_DELEGATE_OneParam(FRtcStringResult, const FString& /*MessageString*/);
DECLARE_MULTICAST_DELEGATE_OneParam(FRtcIntResult, int /*MessageCode*/);


/** @defgroup Rtc RtcInterface
 *  This is the RtcInterface group
 *  @{
 */

/// @brief Pico RTC interface class.
class ONLINESUBSYSTEMPICO_API FRTCPicoUserInterface
{
private:

	FOnlineSubsystemPico& PicoSubsystem;

	
public:
	FRTCPicoUserInterface(FOnlineSubsystemPico& InSubsystem);
	~FRTCPicoUserInterface();

	// Rtc Function


    /// @brief Voice engine initialization.
    /// @return Voice engine init result.
	ERtcEngineInitResult RtcEngineInit();


    /// @brief Join voice room.
    /// @param RoomId Room id.
    /// @param UserId User id.
    /// @param Token Room token.
    /// @param UserExtra User extra.
    /// @param InRoomProfileType Room profile type.
    /// @param bIsAutoSubscribeAudio Enable auto subscribe audio.
    /// @return int Join room return code.
	int RtcJoinRoom(const FString& RoomId, const FString& UserId, const FString& Token, const FString& UserExtra, ERtcRoomProfileType InRoomProfileType, bool bIsAutoSubscribeAudio);
	

    /// @brief Destroy voice room.
    /// @param RoomId Room id.
    /// @return int Destroy room return code.
    int RtcDestroyRoom(const FString& RoomId);


    /// @brief Enable audio properties report. When this switch is turned on, you will receive a statistical report of audio data every interval ms.
    /// @param Interval Interval duration.
	void RtcEnableAudioPropertiesReport(int Interval);


    /// @brief Leave the voice room.
    /// @param RoomId Room id.
    /// @return int Leave room return code.
	int RtcLeaveRoom(const FString& RoomId);


    /// @brief Local mute.
    /// @param InRtcMuteState Mute state on/off.
	void RtcMuteLocalAudio(ERtcMuteState InRtcMuteState);


    /// @brief Publish room.
    /// @param RoomId Room id.
	void RtcPublishRoom(const FString& RoomId);


    /// @brief Room pause subscribing to all audio streams.
    /// @param RoomId Room id.
    /// @param InPauseResumeMediaType Media type.
	void RtcRoomPauseAllSubscribedStream(const FString& RoomId, ERtcPauseResumeMediaType InPauseResumeMediaType);


    /// @brief Room resume subscribing to all audio streams.
    /// @param RoomId Room id.
    /// @param InPauseResumeMediaType Media type.
	void RtcRoomResumeAllSubscribedStream(const FString& RoomId, ERtcPauseResumeMediaType InPauseResumeMediaType);


    /// @brief Set audio scenario.
    /// @param InRtcAudioScenarioType Audio scenario type.
	void RtcSetAudioPlaybackDevice(ERtcAudioPlaybackDevice InRtcAudioPlaybackDevice);


    /// @brief Set audio scenario.
    /// @param InRtcAudioScenarioType Audio scenario type.
	void RtcSetAudioScenario(ERtcAudioScenarioType InRtcAudioScenarioType);


    /// @brief Set recording volume.
    /// @param InRtcStreamIndex Stream index main/screen.
    /// @param InVolume Between 0 and 400. 100 indicates normal volume, and more than 100 indicates amplified volume.
	void RtcSetCaptureVolume(ERtcStreamIndex InRtcStreamIndex, int InVolume);


    /// @brief Set ear monitor mode.
    /// @param InRtcEarMonitorMode Ear monitor mode off/on.
	void RtcSetEarMonitorMode(ERtcEarMonitorMode InRtcEarMonitorMode);


    /// @brief Set ear monitor volume.
    /// @param InVolume Ear monitor volume, Between 0 and 400. 100 indicates normal volume, and more than 100 indicates amplified volume.
	void RtcSetEarMonitorVolume(int InVolume);


    /// @brief Set playback volume.
    /// @param InVolume Ear monitor volume, Between 0 and 400. 100 indicates normal volume, and more than 100 indicates amplified volume.
	void RtcSetPlaybackVolume(int InVolume);


    /// @brief Start audio capture.
	void RtcStartAudioCapture();


    /// @brief Stop audio capture.
	void RtcStopAudioCatpure();


    /// @brief Unpublish room.
    /// @param RoomId Room id.
	void RtcUnPublishRoom(const FString& RoomId);


    /// @brief Update room token.
    /// @param RoomId Room id.
    /// @param Token New token.
	void RtcUpdateToken(const FString& RoomId, const FString& Token);
PACKAGE_SCOPE:

	//Request


    /// @brief Request function. Get voice room token.
    /// @param UserId User id.
    /// @param RoomId Room id.
    /// @param Ttl Effective duration of room (s).
    /// @param InValue Channel effective time (s).
    /// @param InRtcGetTokenDelegate Callback function proxy.
	void GetToken(const FString &UserId, const FString &RoomId, int Ttl, int InValue, const FOnGetTokenComplete& Delegate = FOnGetTokenComplete());
	void OnQueryGetTokenComplete(ppfMessageHandle Message, bool bIsError, const FOnGetTokenComplete& Delegate);


	// Notification

	FDelegateHandle OnJoinRoomNotificationResultHandle;
	void OnJoinRoomResult(ppfMessageHandle Message, bool bIsError);

	FDelegateHandle OnLeaveRoomNotificationResultHandle;
	void OnLeaveRoomResult(ppfMessageHandle Message, bool bIsError);

	FDelegateHandle OnUserJoinRoomNotificationResultHandle;
	void OnUserJoinRoomResult(ppfMessageHandle Message, bool bIsError);

	FDelegateHandle OnUserLeaveRoomNotificationResultHandle;
	void OnUserLeaveRoomResult(ppfMessageHandle Message, bool bIsError);

	FDelegateHandle OnRoomStatsNotificationHandle;
	void OnRoomStatsNotification(ppfMessageHandle Message, bool bIsError);

	FDelegateHandle OnWarnNotificationHandle;
	void OnWarnNotification(ppfMessageHandle Message, bool bIsError);

	FDelegateHandle OnErrorNotificationHandle;
	void OnErrorNotification(ppfMessageHandle Message, bool bIsError);

	FDelegateHandle OnRoomWarnNotificationHandle;
	void OnRoomWarnNotification(ppfMessageHandle Message, bool bIsError);

	FDelegateHandle OnRoomErrorNotificationHandle;
	void OnRoomErrorNotification(ppfMessageHandle Message, bool bIsError);

	FDelegateHandle OnConnectionStateChangeNotificationHandle;
	void OnConnectionStateChangeNotification(ppfMessageHandle Message, bool bIsError);

	FDelegateHandle OnUserStartAudioCaptureNotificationHandle;
	void OnUserStartAudioCaptureNotification(ppfMessageHandle Message, bool bIsError);

	FDelegateHandle OnUserStopAudioCaptureNotificationHandle;
	void OnUserStopAudioCaptureNotification(ppfMessageHandle Message, bool bIsError);

	FDelegateHandle OnAudioPlaybackDeviceChangedNotificationHandle;
	void OnAudioPlaybackDeviceChangeNotification(ppfMessageHandle Message, bool bIsError);

	FDelegateHandle OnRemoteAudioPropertiesReportNotificationHandle;
	void OnRemoteAudioPropertiesReportNotification(ppfMessageHandle Message, bool bIsError);

	FDelegateHandle OnLocalAudioPropertiesReportNotificationHandle;
	void OnLocalAudioPropertiesReportNotification(ppfMessageHandle Message, bool bIsError);

	FDelegateHandle OnUserMuteAudioNotificationHandle;
	void OnUserMuteAudioNotification(ppfMessageHandle Message, bool bIsError);

	FDelegateHandle OnMediaDeviceStateChangedNotificationHandle;
	void OnMediaDeviceStateChangedNotification(ppfMessageHandle Message, bool bIsError);


public:

    /// @brief Room entry notice
	FRtcJoinRoomResult RtcJoinRoomCallback;

    /// @brief Leave room notice
	FRtcLeaveRoomReault RtcLeaveRoomCallback;

    /// @brief Notify the user to enter the room
	FRtcUserJoinInfo RtcUserJoinInfoCallback;

    /// @brief Notice of user leaving the room
	FRtcUserLeaveInfo RtcUserLeaveInfoCallback;

    /// @brief Room information notification
	FRtcRoomState RtcRoomStateCallback;

    /// @brief Room information notification when there is a warning in the room, the developer needs to deal with the warning
	FRtcRoomWarn RtcRoomWarnCallback;

    /// @brief When an error occurs in the room, the developer needs to deal with the error
	FRtcRoomError RtcRoomErrorCallback;

    /// @brief Audio playback device change notice
	FRtcAudioChangePlaybackDevice RtcAudioPlaybackDeviceChangeCallback;

    /// @brief Developers can get the volume of each user's voice according to this callback function.
	FRtcRemoteAudioPropertiesReport RtcRemoteAudioPropertiesReportCallback;

    /// @brief Developers can get the volume of the current user's voice according to this callback function.
	FRtcLocalAudioPropertiesReport RtcLocalAudioPropertiesReportCallback;

    /// @brief User mute notification
	FRtcUserMuteAudioInfo RtcUserMuteAudioInfoCallback;

    /// @brief Media device change notice
	FRtcMediaDeviceChangeInfo RtcMediaDeviceChangeInfoCallback;

    /// @brief The engine warning notice needs to be handled by the developer
    FRtcIntResult RtcWarnCallback;

    /// @brief The engine error notice needs to be handled by the developer
    FRtcIntResult RtcErrorCallback;

    /// @brief Network connection status notification
    FRtcStringResult RtcConnectStateChangedCallback;

    /// @brief User turns on voice capture notification
    FRtcStringResult RtcUserStartAudioCaptureCallback;

    /// @brief User turns off voice capture notification
    FRtcStringResult RtcUserStopAudioCaptureCallback;

};
/** @} */ // end of Rtc