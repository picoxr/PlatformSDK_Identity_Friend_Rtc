// Fill out your copyright notice in the Description page of Project Settings.


#include "PicoGameInstance.h"
#include "OnlineSubsystem.h"
#include "UObject/CoreOnline.h"

UPicoGameInstance::UPicoGameInstance()
{
}

void UPicoGameInstance::Init()
{
    DebugShowA = DebugShowB = TEXT("Not Get Pico");

    // Text Pico Use on the Mobile
    if (IOnlineSubsystem* Subsystem = IOnlineSubsystem::Get())
    {
        PicoSubsystem = static_cast<FOnlineSubsystemPico*>(Subsystem);

        if (!PicoSubsystem)
        {
            return;
        }
        if (PicoSubsystem->Init())
        {
            DebugShowA = TEXT("Pico Init Success!");
        }
        else
        {
            return;
        }
        if (PicoSubsystem)
        {
            RtcInterface = PicoSubsystem->GetRtcUserInterface();
            FriendInterface = PicoSubsystem->GetFriendsInterface();
            IdentityInterface = PicoSubsystem->GetIdentityInterface();
            if (RtcInterface && FriendInterface && IdentityInterface)
            {
                DebugShowA = TEXT("Pico Init Success and Interface Get");
            }
            //GameInterface = PicoSubsystem->GetSessionInterface();
            GameInterface = PicoSubsystem->GetGameSessionInterface();
        }
        if (RtcInterface)
        {
            // BindNofitity
            RtcInterface->RtcJoinRoomCallback.AddUObject(this, &UPicoGameInstance::OnRtcJoinRoomResult);
            RtcInterface->RtcLeaveRoomCallback.AddUObject(this, &UPicoGameInstance::OnRtcLeaveRoomResult);
            RtcInterface->RtcRoomStateCallback.AddUObject(this, &UPicoGameInstance::OnRtcRoomState);
            RtcInterface->RtcUserJoinInfoCallback.AddUObject(this, &UPicoGameInstance::OnRtcUserJoinInfo);
            RtcInterface->RtcUserLeaveInfoCallback.AddUObject(this, &UPicoGameInstance::OnRtcUserLeaveInfo);
            RtcInterface->RtcRoomWarnCallback.AddUObject(this, &UPicoGameInstance::OnRtcRoomWarn);
            RtcInterface->RtcRoomErrorCallback.AddUObject(this, &UPicoGameInstance::OnRtcRoomError);
            RtcInterface->RtcUserMuteAudioInfoCallback.AddUObject(this, &UPicoGameInstance::OnRtcMuteState);
            RtcInterface->RtcAudioPlaybackDeviceChangeCallback.AddUObject(this, &UPicoGameInstance::OnRtcAudioChangePlaybackDevice);
            RtcInterface->RtcMediaDeviceChangeInfoCallback.AddUObject(this, &UPicoGameInstance::OnRtcMediaDeviceChangeInfo);
            RtcInterface->RtcLocalAudioPropertiesReportCallback.AddUObject(this, &UPicoGameInstance::OnRtcLocalAudioPropertiesReport);
            RtcInterface->RtcRemoteAudioPropertiesReportCallback.AddUObject(this, &UPicoGameInstance::OnRtcRemoteAudioPropertiesReport);
            RtcInterface->RtcWarnCallback.AddUObject(this, &UPicoGameInstance::OnRtcWarn);
            RtcInterface->RtcErrorCallback.AddUObject(this, &UPicoGameInstance::OnRtcError);
            RtcInterface->RtcConnectStateChangedCallback.AddUObject(this, &UPicoGameInstance::OnRtcConnectStateChanged);
            RtcInterface->RtcUserStartAudioCaptureCallback.AddUObject(this, &UPicoGameInstance::OnRtcUserStartAudioCapture);
            RtcInterface->RtcUserStopAudioCaptureCallback.AddUObject(this, &UPicoGameInstance::OnRtcUserStopAudioCapture);
        }
        /*if (GameInterface)
        {
            GameInterface->GameConnectionCallback.AddUObject(this, &UPicoGameInstance::OnGameConnectionComplete);
            GameInterface->GameStateResetCallback.AddUObject(this, &UPicoGameInstance::OnGameStateResetComplete);
        }*/
    }
}


bool UPicoGameInstance::ReadFriendList(int32 LocalUserNum, const FString& ListName)
{
    if (!bIsLoggedIn)
    {
        UE_LOG(LogTemp, Warning, TEXT("Not Logged In"));
    }
    if (FriendInterface.IsValid())
    {
        ReadCompleteDelegate.BindUObject(this, &UPicoGameInstance::OnReadListComplete);
        UE_LOG(LogTemp, Log, TEXT("Call Read Friend List"));
        return FriendInterface->ReadFriendsList(LocalUserNum, ListName, ReadCompleteDelegate);
    }
    return false;
}

void UPicoGameInstance::OnReadListComplete(int32 InLocalUserNum/*LocalUserNum*/, bool bWasSuccessful/*bWasSuccessful*/, const FString& ListName/*ListName*/, const FString& ErrorStr/*ErrorStr*/)
{
    if (bWasSuccessful)
    {
        ShowErrorString = ErrorStr;
        ReadCompleteDelegate.Unbind();
        TArray< TSharedRef<FOnlineFriend> > OutFriends;
        FriendInterface->GetFriendsList(InLocalUserNum, ListName, OutFriends);
        for (int i = 0; i < OutFriends.Num(); i++)
        {
            DisplayNameArray.Add(OutFriends[i]->GetDisplayName());
            IdArray.Add((OutFriends[i]->GetUserId()).Get().ToString());
        }
        BPReadFriendListComplete(InLocalUserNum, bWasSuccessful, ListName, ErrorStr);
    }
}

void UPicoGameInstance::PicoLogin(FString LocalUserNum, FString InType, FString ID, FString InToken)
{
    if (IdentityInterface.IsValid())
    {
        FOnlineAccountCredentials Credentials;
        Credentials.Id = ID;
        Credentials.Token = InToken;
        Credentials.Type = InType;
        IdentityInterface->OnLoginCompleteDelegates->AddUObject(this, &UPicoGameInstance::OnLoginComplete);
        IdentityInterface->Login(0, Credentials);
    }
    else
    {
        UE_LOG_ONLINE(Display, TEXT("PPF_GAME PicoLogin IdentityInterface is invalid"));
    }
}

void UPicoGameInstance::OnLoginComplete(int LocalUserNum, bool bWasSuccessful, const FUniqueNetId& UserId, const FString& ErrorString)
{

    UE_LOG(LogTemp, Warning, TEXT("LoggedIn: %d"), bWasSuccessful);
    bIsLoggedIn = bWasSuccessful;
    if (IdentityInterface.IsValid())
    {
        IdentityInterface->ClearOnLoginCompleteDelegates(0, this);
    }
    if (!bWasSuccessful)
    {
        UE_LOG(LogTemp, Error, TEXT("LoggedIn Failed : %s"), *ErrorString);
    }

    BPLoginComplete(LocalUserNum, bWasSuccessful, UserId.ToString(), ErrorString);

    ShowErrorString = ErrorString;
}

ERtcEngineInitResult UPicoGameInstance::RtcEngineInit()
{
    ERtcEngineInitResult Result = ERtcEngineInitResult::None;
    if (RtcInterface)
    {
        Result = RtcInterface->RtcEngineInit();
    }
    return Result;
}

int UPicoGameInstance::RtcJoinRoom(const FString& RoomId, const FString& UserId, const FString& Token, const FString& UserExtra, ERtcRoomProfileType InRoomProfileType, bool bIsAutoSubscribeAudio)
{
    int ReturnCode = 0;
    if (RtcInterface)
    {
        ReturnCode = RtcInterface->RtcJoinRoom(RoomId, UserId, Token, UserExtra, InRoomProfileType, bIsAutoSubscribeAudio);
    }
    return ReturnCode;
    
}

void UPicoGameInstance::OnRtcJoinRoomResult(const FString& RoomId, const FString& UserId, int ErrorCode, int Elapsed, ERtcJoinRoomType InJoinRoomType)
{

    BPOnRtcJoinRoomResult(RoomId, UserId, ErrorCode, Elapsed, InJoinRoomType);
}


void UPicoGameInstance::OnRtcLeaveRoomResult(const FString& RoomId)
{
    BPOnRtcLeaveRoomResult(RoomId);
}

void UPicoGameInstance::OnRtcRoomState(int TotalDuration, int UserCount, const FString& RoomId)
{
    BPOnRtcRoomState(TotalDuration, UserCount, RoomId);
}

void UPicoGameInstance::OnRtcUserJoinInfo(const FString& UserId, const FString& UserExtra, int Elapsed, const FString& RoomId)
{
    BPOnRtcUserJoinInfo(UserId, UserExtra, Elapsed, RoomId);
}

void UPicoGameInstance::OnRtcUserLeaveInfo(const FString& UserId, ERtcUserLeaveReasonType RtcUserLeaveReasonType, const FString& RoomId)
{
    BPOnRtcUserLeaveInfo(UserId, RtcUserLeaveReasonType, RoomId);
}

void UPicoGameInstance::OnRtcRoomWarn(int Code, const FString& RoomId)
{
    BPOnRtcRoomWarn(Code, RoomId);
}

void UPicoGameInstance::OnRtcRoomError(int Code, const FString& RoomId)
{
    BPOnRtcRoomError(Code, RoomId);
}

void UPicoGameInstance::OnRtcMuteState(const FString& UserId, ERtcMuteState RtcMuteState)
{
    BPOnRtcMuteState(UserId, RtcMuteState);
}

void UPicoGameInstance::OnRtcAudioChangePlaybackDevice(ERtcAudioPlaybackDevice RtcAudioPlaybackDevice)
{
    BPOnRtcAudioChangePlaybackDevice(RtcAudioPlaybackDevice);
}

void UPicoGameInstance::OnRtcMediaDeviceChangeInfo(const FString& DeviceId, ERtcMediaDeviceType MediaDeciveType, ERtcMediaDeviceState MediaDeviceState, ERtcMediaDeviceError MediaDeviceError)
{
    BPOnRtcMediaDeviceChangeInfo(DeviceId, MediaDeciveType, MediaDeviceState, MediaDeviceError);
}

void UPicoGameInstance::OnRtcLocalAudioPropertiesReport(TArray<ERtcStreamIndex> StreamIndexs, TArray<int> Volumes)
{
    BPOnRtcLocalAudioPropertiesReport(StreamIndexs, Volumes);
}

void UPicoGameInstance::OnRtcRemoteAudioPropertiesReport(int TotalRemoteVolume, TArray<int> Volumes, const TArray<FString>& RoomIds, const TArray<FString>& UserIds, TArray<ERtcStreamIndex> StreamIndexs)
{
    BPOnRtcRemoteAudioPropertiesReport(TotalRemoteVolume, Volumes, RoomIds, UserIds, StreamIndexs);
}

void UPicoGameInstance::OnRtcWarn(int MessageCode)
{
    BPOnRtcWarn(MessageCode);
}

void UPicoGameInstance::OnRtcError(int MessageCode)
{
    BPOnRtcError(MessageCode);
}

void UPicoGameInstance::OnRtcConnectStateChanged(const FString& StringMessage)
{
    BPOnRtcConnectStateChanged(StringMessage);
}

void UPicoGameInstance::OnRtcUserStartAudioCapture(const FString& StringMessage)
{
    BPOnRtcUserStartAudioCapture(StringMessage);
}

void UPicoGameInstance::OnRtcUserStopAudioCapture(const FString& StringMessage)
{
    BPOnRtcUserStopAudioCapture(StringMessage);
}

int UPicoGameInstance::RtcDestroyRoom(const FString& RoomId)
{
    int ReturenCode = 0;
    if (RtcInterface)
    {
        ReturenCode = RtcInterface->RtcDestroyRoom(RoomId);
    }
    return ReturenCode;
}

void UPicoGameInstance::RtcEnableAudioPropertiesReport(int Interval)
{
    if (RtcInterface)
    {
        RtcInterface->RtcEnableAudioPropertiesReport(Interval);
    }
}

int UPicoGameInstance::RtcLeaveRoom(const FString& RoomId)
{
    int ReturenCode = 0;
    if (RtcInterface)
    {
        ReturenCode = RtcInterface->RtcLeaveRoom(RoomId);
    }
    return ReturenCode;
}

void UPicoGameInstance::RtcMuteLocalAudio(ERtcMuteState InRtcMuteState)
{
    if (RtcInterface)
    {
        RtcInterface->RtcMuteLocalAudio(InRtcMuteState);
    }
}

void UPicoGameInstance::RtcPublishRoom(const FString& RoomId)
{
    if (RtcInterface)
    {
        RtcInterface->RtcPublishRoom(RoomId);
    }
}

void UPicoGameInstance::RtcRoomPauseAllSubscribedStream(const FString& RoomId, ERtcPauseResumeMediaType InPauseResumeMediaType)
{
    if (RtcInterface)
    {
        RtcInterface->RtcRoomPauseAllSubscribedStream(RoomId, InPauseResumeMediaType);
    }
}

void UPicoGameInstance::RtcRoomResumeAllSubscribedStream(const FString& RoomId, ERtcPauseResumeMediaType InPauseResumeMediaType)
{
    if (RtcInterface)
    {
        RtcInterface->RtcRoomResumeAllSubscribedStream(RoomId, InPauseResumeMediaType);
    }
}

void UPicoGameInstance::RtcSetAudioPlaybackDevice(ERtcAudioPlaybackDevice InRtcAudioPlaybackDevice)
{
    if (RtcInterface)
    {
        RtcInterface->RtcSetAudioPlaybackDevice(InRtcAudioPlaybackDevice);
    }
}

void UPicoGameInstance::RtcSetAudioScenario(ERtcAudioScenarioType InRtcAudioScenarioType)
{
    if (RtcInterface)
    {
        RtcInterface->RtcSetAudioScenario(InRtcAudioScenarioType);
    }
}

void UPicoGameInstance::RtcSetCaptureVolume(ERtcStreamIndex InRtcStreamIndex, int InVolume)
{
    if (RtcInterface)
    {
        RtcInterface->RtcSetCaptureVolume(InRtcStreamIndex, InVolume);
    }
}

void UPicoGameInstance::RtcSetEarMonitorMode(ERtcEarMonitorMode InRtcEarMonitorMode)
{
    if (RtcInterface)
    {
        RtcInterface->RtcSetEarMonitorMode(InRtcEarMonitorMode);
    }
}

void UPicoGameInstance::RtcSetEarMonitorVolume(int InVolume)
{
    if (RtcInterface)
    {
        RtcInterface->RtcSetEarMonitorVolume(InVolume);
    }
}

void UPicoGameInstance::RtcSetPlaybackVolume(int InVolume)
{
    if (RtcInterface)
    {
        RtcInterface->RtcSetPlaybackVolume(InVolume);
    }
}

void UPicoGameInstance::RtcStartAudioCapture()
{
    if (RtcInterface)
    {
        RtcInterface->RtcStartAudioCapture();
    }
}

void UPicoGameInstance::RtcStopAudioCatpure()
{
    if (RtcInterface)
    {
        RtcInterface->RtcStopAudioCatpure();
    }
}

void UPicoGameInstance::RtcUnPublishRoom(const FString& RoomId)
{
    if (RtcInterface)
    {
        RtcInterface->RtcUnPublishRoom(RoomId);
    }
}

void UPicoGameInstance::RtcUpdateToken(const FString& RoomId, const FString& Token)
{
    if (RtcInterface)
    {
        RtcInterface->RtcUpdateToken(RoomId, Token);
    }
}

// Game Function
void UPicoGameInstance::GameInitialize()
{ 
    /*if (GameInterface)
    {
        GameInterface->Initialize();
    }*/
}
bool UPicoGameInstance::GameUninitialize()
{
    /*if (GameInterface)
    {
        return GameInterface->Uninitialize();
    }*/
    return false;
}

// Game Notification
void UPicoGameInstance::OnGameSessionStateChanged(const FString& Log)
{
    UE_LOG_ONLINE(Display, TEXT("PPF_GAME %s"), *Log);
    OnGameSessionStateChangedDelegates.Broadcast(FString::Printf(TEXT("%s\n"), *Log));
}
void UPicoGameInstance::OnGameConnectionComplete(int Result, bool bWasSuccessful)
{
    OnGameSessionStateChanged(FString::Printf(TEXT("OnGameConnectionComplete Result: %d, bWasSuccessful: %d"), Result, bWasSuccessful));
}
void UPicoGameInstance::OnGameStateResetComplete(bool bWasSuccessful)
{
    OnGameSessionStateChanged(FString::Printf(TEXT("OnGameStateResetComplete bWasSuccessful: %d"), bWasSuccessful));
}

// Game OnComplete
void UPicoGameInstance::OnStartSessionComplete(FName SessionName, bool bWasSuccessful)
{
    OnGameSessionStateChanged(FString::Printf(TEXT("OnStartSessionComplete bWasSuccessful: %d"), bWasSuccessful));
}
void UPicoGameInstance::OnEndSessionComplete(FName SessionName, bool bWasSuccessful)
{
    OnGameSessionStateChanged(FString::Printf(TEXT("OnEndSessionComplete SessionName: %s, bWasSuccessful: %d"), *SessionName.ToString(), bWasSuccessful));
}
void UPicoGameInstance::OnDestroySessionComplete(FName SessionName, bool bWasSuccessful)
{
    OnGameSessionStateChanged(FString::Printf(TEXT("OnDestroySessionComplete SessionName: %s, bWasSuccessful: %d"), *SessionName.ToString(), bWasSuccessful));
}
void UPicoGameInstance::OnCancelMatchmakingComplete(FName SessionName, bool bWasSuccessful) {
    OnGameSessionStateChanged(FString::Printf(TEXT("OnCancelMatchmakingComplete bWasSuccessful: %d"), bWasSuccessful));
}
void UPicoGameInstance::OnMatchmakingComplete(FName SessionName, bool bWasSuccessful) {
    if (!GameInterface)
        return;
    if (!(bWasSuccessful && SearchSettings->SearchResults.Num() > 0))
    {
        OnGameSessionStateChanged(FString::Printf(TEXT("OnMatchmakingComplete Error! Did not successfully find a matchmaking session!")));
        return;
    }
    bool Result = GameInterface->JoinSession(0, SessionName, SearchSettings->SearchResults[0]);
    OnGameSessionStateChanged(FString::Printf(TEXT("OnMatchmakingComplete Found a matchmaking session.  Joining session... Result: %d"), Result));
}
void UPicoGameInstance::OnFindSessionComplete(bool Result)
{
    OnGameSessionStateChanged(FString::Printf(TEXT("OnFindSessionComplete Result: %d"), Result));
}
void UPicoGameInstance::OnCreateSessionComplete(FName SessionName, bool bWasSuccessful) {
    if (!GameInterface.IsValid())
    {
        return;
    }
    auto Session = GameInterface->GetNamedSession(SessionName);
    if (Session)
    {
        OnGameSessionStateChanged(FString::Printf(TEXT("OnCreateSessionComplete OwningUserName: %s, SessionState: %s"), *Session->OwningUserName, EOnlineSessionState::ToString(Session->SessionState)));
    }
    OnGameSessionStateChanged(FString::Printf(TEXT("OnCreateSessionComplete bWasSuccessful: %d"), bWasSuccessful));
}

// Game IOnlineSession Function
void UPicoGameInstance::CreateSession(const FString& Keys, const FString& Values, bool bShouldAdvertise, bool bAllowJoinViaPresenceFriendsOnly, bool bAllowInvites, bool bAllowJoinViaPresence, int NumPublicConnections) {
    if (!GameInterface.IsValid())
    {
        return;
    }
    if (!OnCreateSessionCompleteDelegate.IsBound())
    {
        OnCreateSessionCompleteDelegate = FOnCreateSessionCompleteDelegate::CreateUObject(this, &UPicoGameInstance::OnCreateSessionComplete);
        GameInterface->AddOnCreateSessionCompleteDelegate_Handle(OnCreateSessionCompleteDelegate);
    }

    TSharedPtr<class FOnlineSessionSettings> SessionSettings = MakeShareable(new FOnlineSessionSettings());
    SessionSettings->NumPublicConnections = NumPublicConnections;
    SessionSettings->bShouldAdvertise = bShouldAdvertise;
    SessionSettings->bAllowJoinViaPresenceFriendsOnly = bAllowJoinViaPresenceFriendsOnly;
    SessionSettings->bAllowInvites = bAllowInvites;
    SessionSettings->bAllowJoinViaPresence = bAllowJoinViaPresence;
    TArray<FString> KeyArr, ValueArr;
    Keys.ParseIntoArray(KeyArr, TEXT(","), true);
    Values.ParseIntoArray(ValueArr, TEXT(","), true);
    if (ValueArr.Num() != KeyArr.Num())
    {
        OnGameSessionStateChanged(FString::Printf(TEXT("CreateSession Input Error! keys count != values count")));
        return;
    }
    for (int i = 0; i < KeyArr.Num(); i++)
    {
        OnGameSessionStateChanged(FString::Printf(TEXT("CreateSession set key: %s, value: %s"), *KeyArr[i], *ValueArr[i]));
        SessionSettings->Set(FName(KeyArr[i]), ValueArr[i], EOnlineDataAdvertisementType::ViaOnlineService);
    }
    bool Result = GameInterface->CreateSession(/* Hosting Player Num*/ 0, TEXT("Game"), *SessionSettings);
    OnGameSessionStateChanged(FString::Printf(TEXT("CreateSession Result: %d"), Result));
}
bool UPicoGameInstance::StartMatchmaking(const FString& Keys, const FString& Values, int NumPublicConnections) {
    if (!GameInterface)
        return false;
    TArray<TSharedRef<const FUniqueNetId>> GameLocalPlayers;
    SearchSettings = MakeShareable(new FOnlineSessionSearch());
    auto SessionSettings = new FOnlineSessionSettings();
    SessionSettings->NumPublicConnections = NumPublicConnections;

    if (!OnMatchmakingCompleteDelegate.IsBound())
    {
        OnMatchmakingCompleteDelegate = FOnMatchmakingCompleteDelegate::CreateUObject(this, &UPicoGameInstance::OnMatchmakingComplete);
        GameInterface->AddOnMatchmakingCompleteDelegate_Handle(OnMatchmakingCompleteDelegate);
    }

    TArray<FString> KeyArr, ValueArr;
    Keys.ParseIntoArray(KeyArr, TEXT(","), true);
    Values.ParseIntoArray(ValueArr, TEXT(","), true);
    if (ValueArr.Num() != KeyArr.Num())
    {
        OnGameSessionStateChanged(FString::Printf(TEXT("StartMatchmaking Input Error! keys count != values count")));
        return false;
    }
    for (int i = 0; i < KeyArr.Num(); i++)
    {
        OnGameSessionStateChanged(FString::Printf(TEXT("StartMatchmaking set key: %s, value: %s"), *KeyArr[i], *ValueArr[i]));
        SearchSettings->QuerySettings.Set(FName(KeyArr[i]), ValueArr[i], EOnlineComparisonOp::Equals);
    }
    TSharedRef<FOnlineSessionSearch> SearchSettingsRef = SearchSettings.ToSharedRef();
    bool Result = GameInterface->StartMatchmaking(GameLocalPlayers, TEXT("Game"), *SessionSettings, SearchSettingsRef);
    OnGameSessionStateChanged(FString::Printf(TEXT("StartMatchmaking Result: %d"), Result));
    return Result;
}
bool UPicoGameInstance::CancelMatchmaking(FName SessionName) {
    if (!GameInterface)
        return false;
    if (!OnCancelMatchmakingCompleteDelegate.IsBound())
    {
        OnCancelMatchmakingCompleteDelegate = FOnCancelMatchmakingCompleteDelegate::CreateUObject(this, &UPicoGameInstance::OnCancelMatchmakingComplete);
        GameInterface->AddOnCancelMatchmakingCompleteDelegate_Handle(OnCancelMatchmakingCompleteDelegate);
    }
    bool Result = GameInterface->CancelMatchmaking(0, TEXT("Game"));
    OnGameSessionStateChanged(FString::Printf(TEXT("CancelMatchmaking Result: %d"), Result));
    return Result;
}
void UPicoGameInstance::StartSession(FName SessionName) {
    if (!GameInterface)
        return;
    auto Session = GameInterface->GetNamedSession(SessionName);
    if (Session)
    {
        OnGameSessionStateChanged(FString::Printf(TEXT("StartSession Session OwningUserName: %s"), *Session->OwningUserName));
    }
    if (!OnStartSessionCompleteDelegate.IsBound())
    {
        OnStartSessionCompleteDelegate = FOnStartSessionCompleteDelegate::CreateUObject(this, &UPicoGameInstance::OnStartSessionComplete);
        GameInterface->AddOnStartSessionCompleteDelegate_Handle(OnStartSessionCompleteDelegate);
    }
    bool Result = GameInterface->StartSession(SessionName);
    OnGameSessionStateChanged(FString::Printf(TEXT("StartSession Result: %d"), Result));
}
void UPicoGameInstance::DestroySession(FName SessionName) {
    if (!GameInterface)
        return;
    auto Session = GameInterface->GetNamedSession(SessionName);
    if (Session)
    {
        OnGameSessionStateChanged(FString::Printf(TEXT("DestroySession owned by %s, state: %s"), *Session->OwningUserName, EOnlineSessionState::ToString(Session->SessionState)));
    }
    if (!OnDestroySessionCompleteDelegate.IsBound())
    {
        OnDestroySessionCompleteDelegate = FOnDestroySessionCompleteDelegate::CreateUObject(this, &UPicoGameInstance::OnDestroySessionComplete);
        GameInterface->AddOnDestroySessionCompleteDelegate_Handle(OnDestroySessionCompleteDelegate);
    }

    bool Result = GameInterface->DestroySession(SessionName);
    OnGameSessionStateChanged(FString::Printf(TEXT("DestroySession Result: %d"), Result));
}
bool UPicoGameInstance::UpdateSession(const FString& Keys, const FString& Values, bool bShouldAdvertise) {
    if (!GameInterface)
        return false;
    TSharedPtr<class FOnlineSessionSettings> SessionSettings = MakeShareable(new FOnlineSessionSettings());
    SessionSettings->NumPublicConnections = 2;
    SessionSettings->bShouldAdvertise = bShouldAdvertise;
    TArray<FString> KeyArr, ValueArr;
    Keys.ParseIntoArray(KeyArr, TEXT(","), true);
    Values.ParseIntoArray(ValueArr, TEXT(","), true);
    if (ValueArr.Num() != KeyArr.Num())
    {
        OnGameSessionStateChanged(FString::Printf(TEXT("UpdateSession Input Error! keys count != values count")));
        return false;
    }
    for (int i = 0; i < KeyArr.Num(); i++)
    {
        OnGameSessionStateChanged(FString::Printf(TEXT("UpdateSession set key: %s, value: %s"), *KeyArr[i], *ValueArr[i]));
        SessionSettings->Set(FName(KeyArr[i]), ValueArr[i], EOnlineDataAdvertisementType::ViaOnlineService);
    }

    bool Result = GameInterface->UpdateSession(TEXT("Game"), *SessionSettings);
    OnGameSessionStateChanged(FString::Printf(TEXT("UpdateSession Result: %d"), Result));
    return Result;
}
void UPicoGameInstance::EndSession(FName SessionName) {
    if (!GameInterface)
        return;
    auto Session = GameInterface->GetNamedSession(SessionName);
    if (Session) 
    {
        OnGameSessionStateChanged(FString::Printf(TEXT("EndSession OwningUserName: %s, SessionState: %s"), *Session->OwningUserName, EOnlineSessionState::ToString(Session->SessionState)));
    }
    if (!OnEndSessionCompleteDelegate.IsBound()) {
        OnEndSessionCompleteDelegate = FOnEndSessionCompleteDelegate::CreateUObject(
            this, &UPicoGameInstance::OnEndSessionComplete);
        GameInterface->AddOnEndSessionCompleteDelegate_Handle(OnEndSessionCompleteDelegate);
    }
    bool Result = GameInterface->EndSession(SessionName);
    OnGameSessionStateChanged(FString::Printf(TEXT("EndSession Result: %d"), Result));
}
bool UPicoGameInstance::FindSessions(const FString& Keys, const FString& Values, int MaxSearchResults)
{
    if (!GameInterface)
        return false;

    // Add the delegate
    if (!OnFindSessionsCompleteDelegate.IsBound()) {
        OnFindSessionsCompleteDelegate = FOnFindSessionsCompleteDelegate::CreateUObject(this, &UPicoGameInstance::OnFindSessionComplete);
        GameInterface->AddOnFindSessionsCompleteDelegate_Handle(OnFindSessionsCompleteDelegate);
    }

    SearchSettings = MakeShareable(new FOnlineSessionSearch());
    SearchSettings->MaxSearchResults = MaxSearchResults;
    TArray<FString> KeyArr, ValueArr;
    Keys.ParseIntoArray(KeyArr, TEXT(","), true);
    Values.ParseIntoArray(ValueArr, TEXT(","), true);
    if (ValueArr.Num() != KeyArr.Num())
    {
        OnGameSessionStateChanged(FString::Printf(TEXT("FindSessions Input Error! keys count != values count")));
        return false;
    }
    for (int i = 0; i < KeyArr.Num(); i++)
    {
        OnGameSessionStateChanged(FString::Printf(TEXT("FindSessions set key: %s, value: %s"), *KeyArr[i], *ValueArr[i]));
        if (KeyArr[i] == "PICOMODERATEDROOMSONLY")
        {
            SearchSettings->QuerySettings.Set(FName(KeyArr[i]), ValueArr[i].ToBool(), EOnlineComparisonOp::Equals);
        }
        else
        {
            SearchSettings->QuerySettings.Set(FName(KeyArr[i]), ValueArr[i], EOnlineComparisonOp::Equals);
        }
    }
    TSharedRef<FOnlineSessionSearch> SearchSettingsRef = SearchSettings.ToSharedRef();
    auto Result = GameInterface->FindSessions(0, SearchSettingsRef);
    OnGameSessionStateChanged(FString::Printf(TEXT("FindSessions Result: %d"), Result));
    return Result;
}
int32 UPicoGameInstance::RefreshPlayerCountInSession()
{
    if (!GameInterface.IsValid())
    {
        return 0;
    }
    auto Session = GameInterface->GetNamedSession(TEXT("Game"));
    if (!Session)
    {
        OnGameSessionStateChanged(FString::Printf(TEXT("PlayerCountInSession: cannot find session: Game")));
        return 0;
    }
    OnGameSessionStateChanged(FString::Printf(TEXT("PlayerCountInSession: %d"), Session->RegisteredPlayers.Num()));
    return Session->RegisteredPlayers.Num();
}
void UPicoGameInstance::UpdateSessionState(FName SessionName)
{
    if (!GameInterface)
    {
        return;
    }
    auto Session = GameInterface->GetNamedSession(SessionName);
    if (Session)
    {
        OnGameSessionStateChanged(FString::Printf(TEXT("UpdateSessionState SessionState: %s"), EOnlineSessionState::ToString(Session->SessionState)));
    }
    else
    {
        OnGameSessionStateChanged(FString::Printf(TEXT("UpdateSessionState NoSession")));
    }
}
bool UPicoGameInstance::InAValidSession()
{
    if (!GameInterface.IsValid())
    {
        return false;
    }
    auto Session = GameInterface->GetNamedSession(TEXT("Game"));
    if (!Session)
    {
        OnGameSessionStateChanged(FString::Printf(TEXT("InAValidSession: false ( cannot GetNamedSession(Game) )")));
        return false;
    }
    OnGameSessionStateChanged(FString::Printf(TEXT("InAValidSession: %s ( SessionState: NoSession->false, Other->true )"), Session->SessionState != EOnlineSessionState::NoSession?TEXT("true"):TEXT("false")));
    return (Session->SessionState != EOnlineSessionState::NoSession);
}
void UPicoGameInstance::DumpSessions()
{
    if (!GameInterface.IsValid())
    {
        return;
    }
    GameInterface->DumpSessionState();
}
bool UPicoGameInstance::IsPlayerInSession(const FString& UniqueNetIdString)
{
    if (!GameInterface.IsValid())
    {
        return false;
    }
    IOnlineSubsystem* Subsystem = IOnlineSubsystem::Get(TEXT("Pico"));
    auto NetId = Subsystem->GetIdentityInterface()->CreateUniquePlayerId(UniqueNetIdString).ToSharedRef();
    OnGameSessionStateChanged(FString::Printf(TEXT("IsPlayerInSession Input: %s"), *NetId->ToString()));
    auto Result = GameInterface->IsPlayerInSession(TEXT("Game"), NetId.Get());
    OnGameSessionStateChanged(FString::Printf(TEXT("IsPlayerInSession Result: %s"), Result?TEXT("true"):TEXT("false")));
    return Result;
}
bool UPicoGameInstance::FindSessionById(const FString& SearchingUserId, const FString& RoomId)
{
    if (!GameInterface.IsValid())
    {
        return false;
    }
    IOnlineSubsystem* Subsystem = IOnlineSubsystem::Get(TEXT("Pico"));
    auto SearchingUserIdPtr = Subsystem->GetIdentityInterface()->CreateUniquePlayerId(SearchingUserId).ToSharedRef();
    auto RoomIdPtr = Subsystem->GetIdentityInterface()->CreateUniquePlayerId(RoomId).ToSharedRef();
    OnGameSessionStateChanged(FString::Printf(TEXT("FindSessionById SearchingUserId: %s, RoomId: %s"), *SearchingUserIdPtr->ToString(), *RoomIdPtr->ToString()));
    FUniqueNetIdString FriendId = FUniqueNetIdString();
    auto Result = GameInterface->FindSessionById(SearchingUserIdPtr.Get(), RoomIdPtr.Get(), FriendId, FOnSingleSessionResultCompleteDelegate());
    OnGameSessionStateChanged(FString::Printf(TEXT("FindSessionById Result: %d"), Result));
    return Result;
}
bool UPicoGameInstance::JoinSearchResultSession(int SearchResultIndex)
{
    if (!GameInterface)
    {
        return false;
    }
    if (!SearchSettings.IsValid() || SearchResultIndex < 0 || SearchSettings->SearchResults.Num() <= SearchResultIndex)
    {
        OnGameSessionStateChanged(FString::Printf(TEXT("JoinSearchResultSession JoinSession SearchSettings is invalid or SearchResultIndex invalid")));
        return false;
    }
    FOnlineSessionSearchResult SearchResult = SearchSettings->SearchResults[SearchResultIndex];
    OnGameSessionStateChanged(FString::Printf(TEXT("JoinSearchResultSession Trying to join OwningUserId:%s's session"), *SearchResult.Session.OwningUserId->ToString()));
    auto Result = GameInterface->JoinSession(0, TEXT("Game"), SearchResult);
    OnGameSessionStateChanged(FString::Printf(TEXT("JoinSearchResultSession JoinSession Result: %d"), Result));
    return Result;
}

