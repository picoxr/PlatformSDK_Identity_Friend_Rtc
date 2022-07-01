// Copyright 2022 Pico Technology Co., Ltd.All rights reserved.
// This plugin incorporates portions of the Unreal® Engine. Unreal® is a trademark or registered trademark of Epic Games, Inc.In the United States of America and elsewhere.
// Unreal® Engine, Copyright 1998 – 2022, Epic Games, Inc.All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "OnlineSubsystemPicoManager.h"
#include "RTCPicoUserInterface.h"
#include "OnlineSubsystem.h"
#include "OnlineSessionSettings.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "OnlinePicoFunctionLibrary.generated.h"

DECLARE_DYNAMIC_DELEGATE_OneParam(FOnlinePicoVerifyAppDelegate, const int32&, code);
/// @file OnlinePicoFunctionLibrary.h
 
/** @defgroup PicoBPFunction PicoBPFunction
 *  This is the PicoBPFunction group
 *  @{
 */

/// @brief Pico blueprint function library.
UCLASS()
class ONLINESUBSYSTEMPICO_API UOnlinePicoFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UOnlinePicoFunctionLibrary();
	static UOnlineSubsystemPicoManager* PicoSubsystemManager;


    
    /// @brief Get online subsystem pico manager for bind notify.
    /// @return Return UOnlineSubsystemPicoManager class
    UFUNCTION(BlueprintPure, Category = "OnlinePico")
    static UOnlineSubsystemPicoManager* GetOnlineSubsystemPicoManager();

    // Pico Identity 
    
    /// @brief Request function. Account login is not supported, the function obtains the current device login account information.
    /// @param WorldContextObject function use UObject.
    /// @param LocalUserNum Account No.   
    /// @param UserId User id.
    /// @param InToken User token.
    /// @param InType User type.
    /// @param InLoginComleteDelegate Callback function proxy.
    UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"), Category = "OnlinePico|Identity")
    static void PicoLogin(UObject* WorldContextObject, int32 LocalUserNum, const FString& UserId, const FString& InToken, const FString& InType, FOnlineManagerLoginCompleteDelegate InLoginComleteDelegate);

    /// @brief Get user nick name after login.
    /// @param WorldContextObject function use UObject.
    /// @param LocalUserNum Account No.   
    UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"), Category = "OnlinePico|Identity")
    static FString PicoGetNickName(UObject* WorldContextObject, int32 LocalUserNum);


	// Pico FriendInterface
    
    
    /// @brief Request function. TMap<LocalUserNum, UserId> Obtain user information by serial number(LocalUserNum) and use this to obtain the user's friend list.
    /// @param WorldContextObject function use UObject.
    /// @param LocalUserNum Account No.
    /// @param ListName Name of list, Default or OnlinePlayers.
    /// @param InReadFriendListDelegate Callback function proxy. 
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"), Category = "OnlinePico|Friend")
	static void PicoReadFriendList(UObject* WorldContextObject, int32 LocalUserNum, const FString& ListName, FOnlineManagerReadFriendListDelegate InReadFriendListDelegate);

    
    /// @brief Get friend array by friend list name
    /// @param WorldContextObject Function use UObject.
    /// @param LocalUserNum Account No.
    /// @param ListName Name of list, Default or OnlinePlayers.
    /// @param OutFriends Return Friends     
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"), Category = "OnlinePico|Friend")
	static void PicoGetFriendList(UObject* WorldContextObject, int32 LocalUserNum, const FString& ListName, TArray<FPicoFriend> &OutFriends);


    
    /// @brief Get friend by friend list name and friend id.
    /// @param WorldContextObject Function use UObject.
    /// @param LocalUserNum Account No.
    /// @param FriendId Friend user id.
    /// @param ListName Name of list, Default or OnlinePlayers.
    /// @return FPicoFriend Pico friend struct.    
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"), Category = "OnlinePico|Friend")
	static FPicoFriend PicoGetFriend(UObject* WorldContextObject, int32 LocalUserNum, const FString& FriendId, const FString& ListName);


	// Pico RtcInterface
    
    /// @brief Request function. Get voice room token.
    /// @param WorldContextObject function use UObject.
    /// @param UserId User id.
    /// @param RoomId Room id.
    /// @param Ttl Effective duration of room (s).
    /// @param InValue Channel effective time (s).
    /// @param InRtcGetTokenDelegate Callback function proxy.   
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"), Category = "OnlinePico|Rtc")
	static void PicoRtcGetToken(UObject* WorldContextObject, const FString& UserId, const FString& RoomId, int Ttl, int InValue, FOnlineManagerRtcGetTokenDelegate InRtcGetTokenDelegate);

    // Function Call

    
    /// @brief Voice engine initialization.
    /// @param WorldContextObject Function use UObject.
    /// @return Voice engine init result. 
    UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"), Category = "OnlinePico|Rtc")
    static ERtcEngineInitResult PicoGetRtcEngineInit(UObject* WorldContextObject);

    
    /// @brief Join voice room.
    /// @param WorldContextObject Function use UObject.
    /// @param RoomId Room id.
    /// @param UserId User id.
    /// @param Token Room token.
    /// @param UserExtra User extra.
    /// @param InRoomProfileType Room profile type.
    /// @param bIsAutoSubscribeAudio Enable auto subscribe audio.
    /// @return int Join room return code.
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"), Category = "OnlinePico|Rtc")
	static int PicoRtcJoinRoom(UObject* WorldContextObject, const FString& RoomId, const FString& UserId, const FString& Token, const FString& UserExtra, ERtcRoomProfileType InRoomProfileType, bool bIsAutoSubscribeAudio);

    
    /// @brief Destroy voice room.
    /// @param WorldContextObject Function use UObject.
    /// @param RoomId Room id.
    /// @return int Destroy room return code.     
    UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"), Category = "OnlinePico|Rtc")
    static int RtcDestroyRoom(UObject* WorldContextObject, const FString& RoomId);

    
    /// @brief Enable audio properties report. When this switch is turned on, you will receive a statistical report of audio data every interval ms.
    /// @param WorldContextObject Function use UObject.
    /// @param Interval Interval duration.     
    UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"), Category = "OnlinePico|Rtc")
    static void RtcEnableAudioPropertiesReport(UObject* WorldContextObject, int Interval);

    /// @brief Leave the voice room.
    /// @param WorldContextObject Function use UObject.
    /// @param RoomId Room id.
    /// @return int Leave room return code.
    UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"), Category = "OnlinePico|Rtc")
    static int RtcLeaveRoom(UObject* WorldContextObject, const FString& RoomId);


    /// @brief Local mute.
    /// @param WorldContextObject Function use UObject.
    /// @param InRtcMuteState Mute state on/off.
    UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"), Category = "OnlinePico|Rtc")
    static void RtcMuteLocalAudio(UObject* WorldContextObject, ERtcMuteState InRtcMuteState);

    
    /// @brief Publish room.
    /// @param WorldContextObject Function use UObject.
    /// @param RoomId Room id.     
    UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"), Category = "OnlinePico|Rtc")
    static void RtcPublishRoom(UObject* WorldContextObject, const FString& RoomId);

    
    /// @brief Unpublish room.
    /// @param WorldContextObject Function use UObject.
    /// @param RoomId Room id.     
    UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"), Category = "OnlinePico|Rtc")
    static void RtcUnPublishRoom(UObject* WorldContextObject, const FString& RoomId);

    
    /// @brief Room pause subscribing to all audio streams.
    /// @param WorldContextObject Function use UObject.
    /// @param RoomId Room id.
    /// @param InPauseResumeMediaType Media type.     
    UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"), Category = "OnlinePico|Rtc")
    static void RtcRoomPauseAllSubscribedStream(UObject* WorldContextObject, const FString& RoomId, ERtcPauseResumeMediaType InPauseResumeMediaType);

    
    /// @brief Room resume subscribing to all audio streams.
    /// @param WorldContextObject Function use UObject.
    /// @param RoomId Room id.
    /// @param InPauseResumeMediaType Media type.     
    UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"), Category = "OnlinePico|Rtc")
    static void RtcRoomResumeAllSubscribedStream(UObject* WorldContextObject, const FString& RoomId, ERtcPauseResumeMediaType InPauseResumeMediaType);

    
    /// @brief Set audio playback device type.
    /// @param WorldContextObject Function use UObject.
    /// @param InRtcAudioPlaybackDevice Media type.     
    UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"), Category = "OnlinePico|Rtc")
    static void RtcSetAudioPlaybackDevice(UObject* WorldContextObject, ERtcAudioPlaybackDevice InRtcAudioPlaybackDevice);

    
    /// @brief Set audio scenario.
    /// @param WorldContextObject Function use UObject.
    /// @param InRtcAudioScenarioType Audio scenario type.     
    UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"), Category = "OnlinePico|Rtc")
    static void RtcSetAudioScenario(UObject* WorldContextObject, ERtcAudioScenarioType InRtcAudioScenarioType);

    
    /// @brief Set recording volume.
    /// @param WorldContextObject Function use UObject.
    /// @param InRtcStreamIndex Stream index main/screen.
    /// @param InVolume Between 0 and 400. 100 indicates normal volume, and more than 100 indicates amplified volume.     
    UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"), Category = "OnlinePico|Rtc")
    static void RtcSetCaptureVolume(UObject* WorldContextObject, ERtcStreamIndex InRtcStreamIndex, int InVolume);

    
    /// @brief Set ear monitor mode.
    /// @param WorldContextObject Function use UObject.
    /// @param InRtcEarMonitorMode Ear monitor mode off/on.     
    UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"), Category = "OnlinePico|Rtc")
    static void RtcSetEarMonitorMode(UObject* WorldContextObject, ERtcEarMonitorMode InRtcEarMonitorMode);

    
    /// @brief Set ear monitor volume.
    /// @param WorldContextObject Function use UObject.
    /// @param InVolume Ear monitor volume, Between 0 and 400. 100 indicates normal volume, and more than 100 indicates amplified volume.     
    UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"), Category = "OnlinePico|Rtc")
    static void RtcSetEarMonitorVolume(UObject* WorldContextObject, int InVolume);

    
    /// @brief Set playback volume.
    /// @param WorldContextObject Function use UObject.
    /// @param InVolume Ear monitor volume, Between 0 and 400. 100 indicates normal volume, and more than 100 indicates amplified volume.    
    UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"), Category = "OnlinePico|Rtc")
    static void RtcSetPlaybackVolume(UObject* WorldContextObject, int InVolume);

    
    /// @brief Start audio capture.
    /// @param WorldContextObject Function use UObject.     
    UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"), Category = "OnlinePico|Rtc")
    static void RtcStartAudioCapture(UObject* WorldContextObject);

    
    /// @brief Stop audio capture.
    /// @param WorldContextObject Function use UObject.     
    UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"), Category = "OnlinePico|Rtc")
    static void RtcStopAudioCapture(UObject* WorldContextObject);

    
    /// @brief Update room token.
    /// @param WorldContextObject Function use UObject.
    /// @param RoomId Room id.
    /// @param Token New token.     
    UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"), Category = "OnlinePico|Rtc")
    static void RtcUpdateToken(UObject* WorldContextObject, const FString& RoomId, const FString& Token);


    // Game
	/// @brief Create private room or matchmaking room
    /// @param WorldContextObject Function use UObject.
	/// @param HostingPlayerNum the index in the current userId array
	/// @param SessionName name to mark session
	/// @param NewSessionSettings room settings
	/// @param OnCreateSessionCompleteDelegate execute on create private room or matchmaking room complete
	/// @return true if the read request was started successfully, false otherwise
    UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"), Category = "OnlinePico|Game")
    static bool CreateSession(UObject* WorldContextObject, int HostingPlayerNum, FName SessionName, const FPicoOnlineSessionSettings& NewSessionSettings, FPicoManagerOnCreateSessionCompleteDelegate OnCreateSessionCompleteDelegate);

	/// @brief Change the session state to InProgress
    /// @param WorldContextObject Function use UObject.
	/// @param SessionName The name of the session
	/// @param OnStartSessionCompleteDelegate execute on start session complete
	/// @return true if the read request was started successfully, false otherwise
    UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"), Category = "OnlinePico|Game")
    static bool StartSession(UObject* WorldContextObject, FName SessionName, FPicoManagerOnStartSessionCompleteDelegate OnStartSessionCompleteDelegate);

	/// @brief Update datastore of a session
    /// @param WorldContextObject Function use UObject.
	/// @param SessionName The name of the session
	/// @param UpdatedSessionSettings The settings with new datastore
	/// @param bShouldRefreshOnlineData not used
	/// @param OnUpdateSessionCompleteDelegate execute on update session complete
	/// @return true if the read request was started successfully, false otherwise
    UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"), Category = "OnlinePico|Game")
    static bool UpdateSession(UObject* WorldContextObject, FName SessionName, const FPicoOnlineSessionSettings& UpdatedSessionSettings, FPicoManagerOnUpdateSessionCompleteDelegate OnUpdateSessionCompleteDelegate, bool bShouldRefreshOnlineData = true);

	/// @brief Change the session state to Ended
    /// @param WorldContextObject Function use UObject.
	/// @param SessionName The name of the session
	/// @param OnEndSessionCompleteDelegate execute on end session
	/// @return true if the read request was started successfully, false otherwise
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"), Category = "OnlinePico|Game")
    static bool EndSession(UObject* WorldContextObject, FName SessionName, FPicoManagerOnEndSessionCompleteDelegate OnEndSessionCompleteDelegate);

	// todo CompletionDelegate
	/// @brief Leave current room
    /// @param WorldContextObject Function use UObject.
	/// @param SessionName The name of the session
	/// @param OnDestroySessionCompleteDelegate will execute when room leave complete
	/// @return true if the read request was started successfully, false otherwise
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"), Category = "OnlinePico|Game")
    static bool DestroySession(UObject* WorldContextObject, FName SessionName, FPicoManagerOnDestroySessionCompleteDelegate OnDestroySessionCompleteDelegate);

	/// @brief Check UniqueId player in session
    /// @param WorldContextObject Function use UObject.
	/// @param SessionName The name of the session
	/// @param UniqueId check player unique ID
	/// @return true if the read request was started successfully, false otherwise
    UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"), Category = "OnlinePico|Game")
    static bool IsPlayerInSession(UObject* WorldContextObject, FName SessionName, const FString& UniqueId);

	/// @brief matchmaking enqueue
    /// @param WorldContextObject Function use UObject.
	/// @param LocalPlayers start matchmaking need login
	/// @param SessionName The name of the session
	/// @param NewSessionSettings NumPrivateConnections need be zero
	/// @param NewSessionSearch Used to modify the search state
	/// @param OnMatchmakingCompleteDelegate execute on matchmaking complete
	/// @return true if the read request was started successfully, false otherwise
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"), Category = "OnlinePico|Game")
    static bool StartMatchmaking(UObject* WorldContextObject, const TArray<FString>& LocalPlayers, FName SessionName, const FPicoOnlineSessionSettings& NewSessionSettings, const FPicoOnlineSessionSearch& NewSessionSearch, FPicoManagerOnMatchmakingCompleteDelegate OnMatchmakingCompleteDelegate);

	/// @brief cancel matchmaking
    /// @param WorldContextObject Function use UObject.
	/// @param SearchingPlayerNum not used
	/// @param SessionName The name of the session
	/// @param OnCancelMatchmakingCompleteDelegate execute on cancel matchmaking complete
	/// @return true if the read request was started successfully, false otherwise
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"), Category = "OnlinePico|Game")
    static bool CancelMatchmaking(UObject* WorldContextObject, int SearchingPlayerNum, FName SessionName, FPicoManagerOnCancelMatchmakingCompleteDelegate OnCancelMatchmakingCompleteDelegate);

	/// @brief find matchmaking rooms or moderated rooms
    /// @param WorldContextObject Function use UObject.
	/// @param SearchingPlayerNum not used
	/// @param NewSessionSearch settings for searching
	/// @param OnFindSessionCompleteDelegate execute on find sessions
	/// @return true if the read request was started successfully, false otherwise
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"), Category = "OnlinePico|Game")
    static bool FindSessions(UObject* WorldContextObject, int32 SearchingPlayerNum, const FPicoOnlineSessionSearch& NewSessionSearch, FPicoManagerOnFindSessionCompleteDelegate OnFindSessionCompleteDelegate);

	// todo FriendId /// CompletionDelegate
	/// @brief get room data by room ID
    /// @param WorldContextObject Function use UObject.
	/// @param SearchingUserId must be loggedin player id, otherwise cannot get the data of the room
	/// @param SessionId the room you want to get
	/// @param OnSingleSessionResultCompleteDelegate execute on find session by id complete
	/// @return true if the read request was started successfully, false otherwise
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"), Category = "OnlinePico|Game")
    static bool FindSessionById(UObject* WorldContextObject, const FString& SearchingUserId, const FString& SessionId, FPicoManagerOnSingleSessionResultCompleteDelegate OnSingleSessionResultCompleteDelegate);

	/// @brief get room data by room ID
    /// @param WorldContextObject Function use UObject.
	/// @param PlayerNum the LocalOwnerId of the session
	/// @param SessionName the name of the session you want to join
	/// @param SearchResult search session result settings
	/// @param OnJoinSessionCompleteDelegate exectue on join session complete
	/// @return true if the read request was started successfully, false otherwise
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"), Category = "OnlinePico|Game")
	static bool JoinSession(UObject* WorldContextObject, int PlayerNum, FName SessionName, const FPicoOnlineSessionSearchResult& SearchResult, FPicoManagerOnJoinSessionCompleteDelegate OnJoinSessionCompleteDelegate);

	/// @brief dump session state
	/// @param WorldContextObject Function use UObject.
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"), Category = "OnlinePico|Game")
	static void DumpSessionState(UObject* WorldContextObject);

	/// @brief get the state of the session
	/// @param WorldContextObject Function use UObject.
	/// @param SessionName the name of the session you want to get the state
	/// @return the state of the session
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"), Category = "OnlinePico|Game")
	static EOnlineSessionStatePicoType GetSessionState(UObject* WorldContextObject, FName SessionName);

	/// @brief get the session
	/// @param WorldContextObject Function use UObject.
	/// @param SessionName the name of the session you want to get
	/// @return the session data
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"), Category = "OnlinePico|Game")
	static FPicoNamedOnlineSession GetNamedSession(UObject* WorldContextObject, FName SessionName);

	/// @brief add session by sessionsettings
	/// @param WorldContextObject Function use UObject.
	/// @param SessionName the name of the session you want to add
	/// @param SessionSettings the settings of the session
	/// @return the session you add
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"), Category = "OnlinePico|Game")
	static FPicoNamedOnlineSession AddNamedSessionBySettings(UObject* WorldContextObject, FName SessionName, const FPicoOnlineSessionSettings& SessionSettings);

	/// @brief add session
	/// @param WorldContextObject Function use UObject.
	/// @param SessionName the name of the session you want to add
	/// @param Session the session will be add
	/// @return the session you add
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"), Category = "OnlinePico|Game")
	static FPicoNamedOnlineSession AddNamedSession(UObject* WorldContextObject, FName SessionName, const FPicoOnlineSession& Session);

	/// @brief get the settings of a session
	/// @param WorldContextObject Function use UObject.
	/// @param SessionName the name of the session you want to get its settings
	/// @return the settings of the session
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"), Category = "OnlinePico|Game")
	static FPicoOnlineSessionSettings GetSessionSettings(UObject* WorldContextObject, FName SessionName);
	
private:
	static FOnlineSessionSettings GetOnlineSessionSettings(const FPicoOnlineSessionSettings& UpdatedSessionSettings);
	static FPicoOnlineSessionSettings GetPicoOnlineSessionSettings(const FOnlineSessionSettings& UpdatedSessionSettings);
	static FPicoNamedOnlineSession GetPicoOnlineSession(const FNamedOnlineSession& Session);
	static FOnlineSession GetOnlineSession(const FPicoOnlineSession& PicoSession);
	static TSharedPtr<FOnlineSessionSearch> GetOnlineSessionSearch(const FPicoOnlineSessionSearch& SessionSearch);
	
    // Old Online Pico
public:
    static FOnlinePicoVerifyAppDelegate VerifyAppDelegate;
    static int32 VerifyAppCode;

    UFUNCTION(BlueprintCallable, Category = "OnlinePico|PicoEntitlement")
    static void PicoEntitlementVerifyAppDelegate(FOnlinePicoVerifyAppDelegate OnVerifyAppCallback);

    UFUNCTION(BlueprintCallable, Category = "OnlinePico|PicoEntitlement")
    static void PicoEntitlementVerifyCheck();

    UFUNCTION(BlueprintCallable, Category = "OnlinePico|PicoEntitlement")
    static FString PicoGetDeviceSN();

    UFUNCTION(BlueprintCallable, Category = "OnlinePico|Platform")
    static FString GetOpenId();
};

/** @} */ // end of PicoBPFunction