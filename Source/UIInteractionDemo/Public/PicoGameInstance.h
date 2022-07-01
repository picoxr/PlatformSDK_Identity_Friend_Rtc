// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Online.h"
#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "Interfaces/OnlineFriendsInterface.h"
#include "Interfaces/OnlineIdentityInterface.h"
#include "UObject/CoreOnline.h"
#include "RTCPicoUserInterface.h"
#include "OnlineSessionInterfacePico.h"
#include "OnlineSubsystemTypes.h"
#include "Delegates/DelegateCombinations.h"
#include "PicoGameInstance.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGameSessionStateChanged, const FString&, States);
/**
 * 
 */
class FOnlineSubsystemPico;

class FOnlineSessionPico;
typedef TSharedPtr<class FOnlineSessionPico, ESPMode::ThreadSafe> FOnlineSessionPicoPtr;

UCLASS()
class UIINTERACTIONDEMO_API UPicoGameInstance : public UGameInstance
{
    GENERATED_BODY()
public:
    UPicoGameInstance();
    IOnlineSessionPtr GameInterface;
protected:
    IOnlineFriendsPtr FriendInterface;
    IOnlineIdentityPtr IdentityInterface;
    TSharedPtr<FRTCPicoUserInterface> RtcInterface;

    virtual void Init() override;
protected:

    bool bIsLoggedIn;

    UFUNCTION(BlueprintCallable)
    bool ReadFriendList(int32 LocalUserNum, const FString& ListName);

    void OnReadListComplete(int32 InLocalUserNum/*LocalUserNum*/, bool bWasSuccessful/*bWasSuccessful*/, const FString& ListName/*ListName*/, const FString& ErrorStr/*ErrorStr*/);
    FOnReadFriendsListComplete ReadCompleteDelegate;



public:
    UPROPERTY(BlueprintReadOnly)
    FString DebugShowA;

    UPROPERTY(BlueprintReadOnly)
    FString DebugShowB;

    UPROPERTY(BlueprintReadOnly)
    FString ShowErrorString;

    UPROPERTY(BlueprintReadOnly)
    TArray<FString> DisplayNameArray;

    UPROPERTY(BlueprintReadOnly)
    TArray<FString> IdArray;

    FOnlineSubsystemPico* PicoSubsystem;
public:

    UFUNCTION(BlueprintCallable)
    void PicoLogin(FString LocalUserNum, FString InType, FString ID, FString InToken);

    void OnLoginComplete(int LocalUserNum, bool bWasSuccessful, const FUniqueNetId& UserId, const FString& ErrorString);

    UFUNCTION(BlueprintImplementableEvent)
    void BPLoginComplete(int LocalUserNum, bool bSuccessful, const FString &UserId, const FString &ErrorString);

    UFUNCTION(BlueprintImplementableEvent)
    void BPReadFriendListComplete(int32 InLocalUserNum/*LocalUserNum*/, bool bWasSuccessful/*bWasSuccessful*/, const FString& ListName/*ListName*/, const FString& ErrorStr/*ErrorStr*/);

   







    // BP Call Function
    UFUNCTION(BlueprintCallable)
    ERtcEngineInitResult RtcEngineInit();

    UFUNCTION(BlueprintCallable)
    int RtcJoinRoom(const FString& RoomId, const FString& UserId, const FString& Token, const FString& UserExtra, ERtcRoomProfileType InRoomProfileType, bool bIsAutoSubscribeAudio);

    UFUNCTION(BlueprintCallable)
    int RtcDestroyRoom(const FString& RoomId);

    UFUNCTION(BlueprintCallable)
    void RtcEnableAudioPropertiesReport(int Interval);

    UFUNCTION(BlueprintCallable)
    int RtcLeaveRoom(const FString& RoomId);

    UFUNCTION(BlueprintCallable)
    void RtcMuteLocalAudio(ERtcMuteState InRtcMuteState);

    UFUNCTION(BlueprintCallable)
    void RtcPublishRoom(const FString& RoomId);

    UFUNCTION(BlueprintCallable)
    void RtcRoomPauseAllSubscribedStream(const FString& RoomId, ERtcPauseResumeMediaType InPauseResumeMediaType);

    UFUNCTION(BlueprintCallable)
    void RtcRoomResumeAllSubscribedStream(const FString& RoomId, ERtcPauseResumeMediaType InPauseResumeMediaType);

    UFUNCTION(BlueprintCallable)
    void RtcSetAudioPlaybackDevice(ERtcAudioPlaybackDevice InRtcAudioPlaybackDevice);

    UFUNCTION(BlueprintCallable)
    void RtcSetAudioScenario(ERtcAudioScenarioType InRtcAudioScenarioType);

    UFUNCTION(BlueprintCallable)
    void RtcSetCaptureVolume(ERtcStreamIndex InRtcStreamIndex, int InVolume);

    UFUNCTION(BlueprintCallable)
    void RtcSetEarMonitorMode(ERtcEarMonitorMode InRtcEarMonitorMode);
   
    UFUNCTION(BlueprintCallable)
    void RtcSetEarMonitorVolume(int InVolume);

    UFUNCTION(BlueprintCallable)
    void RtcSetPlaybackVolume(int InVolume);

    UFUNCTION(BlueprintCallable)
    void RtcStartAudioCapture();

    UFUNCTION(BlueprintCallable)
    void RtcStopAudioCatpure();

    UFUNCTION(BlueprintCallable)
    void RtcUnPublishRoom(const FString& RoomId);

    UFUNCTION(BlueprintCallable)
    void RtcUpdateToken(const FString& RoomId, const FString& Token);

    //RTC Notify React
    void OnRtcJoinRoomResult(const FString& RoomId, const FString& UserId, int ErrorCode, int Elapsed, ERtcJoinRoomType InJoinRoomType);
    void OnRtcLeaveRoomResult(const FString& RoomId);
    void OnRtcRoomState(int TotalDuration, int UserCount, const FString& RoomId);       
    void OnRtcUserJoinInfo(const FString& UserId, const FString& UserExtra, int Elapsed, const FString& RoomId);
    void OnRtcUserLeaveInfo(const FString& UserId, ERtcUserLeaveReasonType RtcUserLeaveReasonType, const FString& RoomId);
    void OnRtcRoomWarn(int Code, const FString& RoomId);
    void OnRtcRoomError(int Code, const FString& RoomId);
    void OnRtcMuteState(const FString& UserId, ERtcMuteState RtcMuteState);
    void OnRtcAudioChangePlaybackDevice(ERtcAudioPlaybackDevice RtcAudioPlaybackDevice);
    void OnRtcMediaDeviceChangeInfo(const FString& DeviceId, ERtcMediaDeviceType MediaDeciveType, ERtcMediaDeviceState MediaDeviceState, ERtcMediaDeviceError MediaDeviceError);
    void OnRtcLocalAudioPropertiesReport(TArray<ERtcStreamIndex> StreamIndexs, TArray<int> Volumes);
    void OnRtcRemoteAudioPropertiesReport(int TotalRemoteVolume, TArray<int> Volumes, const TArray<FString>& RoomIds, const TArray<FString>& UserIds, TArray<ERtcStreamIndex> StreamIndexs);
    void OnRtcWarn(int MessageCode);
    void OnRtcError(int MessageCode);
    void OnRtcConnectStateChanged(const FString& StringMessage);
    void OnRtcUserStartAudioCapture(const FString& StringMessage);
    void OnRtcUserStopAudioCapture(const FString& StringMessage);

    // RTC Notify BP react
    UFUNCTION(BlueprintImplementableEvent)
    void BPOnRtcJoinRoomResult(const FString& RoomId, const FString& UserId, int ErrorCode, int Elapsed, ERtcJoinRoomType InJoinRoomType);

    UFUNCTION(BlueprintImplementableEvent)
    void BPOnRtcLeaveRoomResult(const FString& RoomId);

    UFUNCTION(BlueprintImplementableEvent)
    void BPOnRtcRoomState(int TotalDuration, int UserCount, const FString& RoomId);

    UFUNCTION(BlueprintImplementableEvent)
    void BPOnRtcUserJoinInfo(const FString& UserId, const FString& UserExtra, int Elapsed, const FString& RoomId);

    UFUNCTION(BlueprintImplementableEvent)
    void BPOnRtcUserLeaveInfo(const FString& UserId, ERtcUserLeaveReasonType RtcUserLeaveReasonType, const FString& RoomId);

    UFUNCTION(BlueprintImplementableEvent)
    void BPOnRtcRoomWarn(int Code, const FString& RoomId);

    UFUNCTION(BlueprintImplementableEvent)
    void BPOnRtcRoomError(int Code, const FString& RoomId);

    UFUNCTION(BlueprintImplementableEvent)
    void BPOnRtcMuteState(const FString& UserId, ERtcMuteState RtcMuteState);

    UFUNCTION(BlueprintImplementableEvent)
    void BPOnRtcAudioChangePlaybackDevice(ERtcAudioPlaybackDevice RtcAudioPlaybackDevice);

    UFUNCTION(BlueprintImplementableEvent)
    void BPOnRtcMediaDeviceChangeInfo(const FString& DeviceId, ERtcMediaDeviceType MediaDeciveType, ERtcMediaDeviceState MediaDeviceState, ERtcMediaDeviceError MediaDeviceError);

    UFUNCTION(BlueprintImplementableEvent)
    void BPOnRtcLocalAudioPropertiesReport(const TArray<ERtcStreamIndex>& StreamIndexs, const TArray<int32>& Volumes);

    UFUNCTION(BlueprintImplementableEvent)
    void BPOnRtcRemoteAudioPropertiesReport(int TotalRemoteVolume, const TArray<int32> &Volumes, const TArray<FString>& RoomIds, const TArray<FString>& UserIds, const TArray<ERtcStreamIndex> &StreamIndexs);

    UFUNCTION(BlueprintImplementableEvent)
    void BPOnRtcWarn(int MessageCode);

    UFUNCTION(BlueprintImplementableEvent)
    void BPOnRtcError(int MessageCode);

    UFUNCTION(BlueprintImplementableEvent)
    void BPOnRtcConnectStateChanged(const FString& StringMessage);

    UFUNCTION(BlueprintImplementableEvent)
    void BPOnRtcUserStartAudioCapture(const FString& StringMessage);

    UFUNCTION(BlueprintImplementableEvent)
    void BPOnRtcUserStopAudioCapture(const FString& StringMessage);

    // Game
    UFUNCTION(BlueprintCallable, Category = PicoGame)
    void GameInitialize();

    UFUNCTION(BlueprintCallable, Category = PicoGame)
    bool GameUninitialize();

    void OnGameConnectionComplete(int Result, bool bWasSuccessful);
    void OnGameStateResetComplete(bool bWasSuccessful);

    UFUNCTION(BlueprintCallable, Category = PicoGame)
    void DumpSessions();

    UFUNCTION(BlueprintCallable, Category = PicoGame)
    void CreateSession(const FString& Keys, const FString& Values, bool bShouldAdvertise, bool bAllowJoinViaPresenceFriendsOnly,
            bool bAllowInvites, bool bAllowJoinViaPresence, int NumPublicConnections);
    void OnCreateSessionComplete(FName SessionName, bool bWasSuccessful);

    UFUNCTION(BlueprintCallable, Category = PicoGame)
    void StartSession(const FName SessionName);
    void OnStartSessionComplete(FName SessionName, bool bWasSuccessful);

    UFUNCTION(BlueprintCallable, Category = PicoGame)
    int32 RefreshPlayerCountInSession();

    UFUNCTION(BlueprintCallable, Category = PicoGame)
    void EndSession(const FName SessionName);
    void OnEndSessionComplete(FName SessionName, bool bWasSuccessful);

    UFUNCTION(BlueprintCallable, Category = PicoGame)
    void DestroySession(const FName SessionName);
    void OnDestroySessionComplete(FName SessionName, bool bWasSuccessful);

    UFUNCTION(BlueprintCallable, Category = PicoGame)
    bool StartMatchmaking(const FString& Keys, const FString& Values, int NumPublicConnections);
    void OnMatchmakingComplete(FName SessionName, bool bWasSuccessful);

    UFUNCTION(BlueprintCallable, Category = PicoGame)
    bool CancelMatchmaking(const FName SessionName);
    void OnCancelMatchmakingComplete(FName SessionName, bool bWasSuccessful);

    UFUNCTION(BlueprintCallable, Category = PicoGame)
    void UpdateSessionState(FName SessionName);

    UFUNCTION(BlueprintCallable, Category = PicoGame)
    bool InAValidSession();

    UFUNCTION(BlueprintCallable, Category = PicoGame)
    bool FindSessions(const FString& Keys, const FString& Values, int MaxSearchResults);
    void OnFindSessionComplete(bool Result);
    
    UFUNCTION(BlueprintCallable, Category = PicoGame)
    bool UpdateSession(const FString& Keys, const FString& Values, bool bShouldAdvertise);
    
    UFUNCTION(BlueprintCallable, Category = PicoGame)
    bool IsPlayerInSession(const FString& UniqueNetIdString);
    
    UFUNCTION(BlueprintCallable, Category = PicoGame)
    bool FindSessionById(const FString& SearchingUserId, const FString& RoomId);
    
    UFUNCTION(BlueprintCallable, Category = PicoGame)
    bool JoinSearchResultSession(int SearchResultIndex);

    UPROPERTY(BlueprintAssignable, Category = PicoGame, DisplayName = OnGameSessionStateChanged)
    FOnGameSessionStateChanged OnGameSessionStateChangedDelegates;
    void OnGameSessionStateChanged(const FString& Log);

private:
    FOnCreateSessionCompleteDelegate OnCreateSessionCompleteDelegate;
    FOnStartSessionCompleteDelegate OnStartSessionCompleteDelegate;
    FOnEndSessionCompleteDelegate OnEndSessionCompleteDelegate;
    FOnDestroySessionCompleteDelegate OnDestroySessionCompleteDelegate;
    FOnMatchmakingCompleteDelegate OnMatchmakingCompleteDelegate;
    FOnCancelMatchmakingCompleteDelegate OnCancelMatchmakingCompleteDelegate;
    FOnFindSessionsCompleteDelegate OnFindSessionsCompleteDelegate;

    TSharedPtr<FOnlineSessionSearch> SearchSettings;
};  

