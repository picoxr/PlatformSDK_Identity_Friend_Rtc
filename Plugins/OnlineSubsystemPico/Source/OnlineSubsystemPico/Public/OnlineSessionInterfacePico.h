// Copyright 2022 Pico Technology Co., Ltd.All rights reserved.
// This plugin incorporates portions of the Unreal® Engine. Unreal® is a trademark or registered trademark of Epic Games, Inc.In the United States of America and elsewhere.
// Unreal® Engine, Copyright 1998 – 2022, Epic Games, Inc.All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "OnlineSubsystemPico.h"
#include "Interfaces/OnlineSessionInterface.h"
#include "OnlineSubsystemPicoPackage.h"

/// @file OnlineSessionInterfacePico.h

/// @brief Used to set the matching pool name
#define SETTING_PICO_POOL FName(TEXT("PICOPOOL"))
/// @brief Used to set the pico build unique ID
#define SETTING_PICO_BUILD_UNIQUE_ID FName(TEXT("PICOSESSIONBUILDUNIQUEID"))
/// @brief Used to set whether to search moderated rooms
#define SEARCH_PICO_MODERATED_ROOMS_ONLY FName(TEXT("PICOMODERATEDROOMSONLY"))
/// @brief Used to set the page index when search moderated rooms
#define GET_MODERATEDROOMS_PAGEINDEX FName(TEXT("GETMODERATEDROOMSPAGEINDEX"))
/// @brief Used to set the page size when search moderated rooms
#define GET_MODERATEDROOMS_PAGESIZE FName(TEXT("GETMODERATEDROOMSPAGESIZE"))

class FUniqueNetIdPico;
class FOnlineSessionInfoPico;


// Notifications
DECLARE_MULTICAST_DELEGATE_TwoParams(FOnGameConnectionComplete, int /*Result*/, bool /*bWasSuccessful*/);
DECLARE_MULTICAST_DELEGATE_TwoParams(FOnGameRequestFailedComplete, int /*Result*/, bool /*bWasSuccessful*/);
DECLARE_MULTICAST_DELEGATE_OneParam(FOnGameStateResetComplete, bool /*bWasSuccessful*/);
DECLARE_MULTICAST_DELEGATE_OneParam(FOnMatchmakingCancel2Complete, bool /*bWasSuccessful*/);
DECLARE_MULTICAST_DELEGATE_TwoParams(FOnRoomLeaveComplete, const FString& /*RoomID*/, bool /*bWasSuccessful*/);
DECLARE_MULTICAST_DELEGATE_TwoParams(FOnRoomJoin2Complete, const FString& /*RoomID*/, bool /*bWasSuccessful*/);
DECLARE_MULTICAST_DELEGATE_TwoParams(FOnRoomSetDescriptionComplete, const FString& /*RoomID*/, bool /*bWasSuccessful*/);
DECLARE_MULTICAST_DELEGATE_TwoParams(FOnRoomKickUserComplete, const FString& /*RoomID*/, bool /*bWasSuccessful*/);
DECLARE_MULTICAST_DELEGATE_OneParam(FOnRoomUpdateOwnerComplete, bool /*bWasSuccessful*/);
DECLARE_MULTICAST_DELEGATE_TwoParams(FOnRoomUpdateDataStoreComplete, const FString& /*RoomID*/, bool /*bWasSuccessful*/);
DECLARE_MULTICAST_DELEGATE_TwoParams(FOnRoomUpdateMembershipLockStatusComplete, const FString& /*RoomID*/, bool /*bWasSuccessful*/);
DECLARE_MULTICAST_DELEGATE_TwoParams(FOnRoomUpdateComplete, const FString& /*RoomID*/, bool /*bWasSuccessful*/);
DECLARE_MULTICAST_DELEGATE_TwoParams(FOnRoomInviteAcceptedComplete, const FString& /*RoomID*/, bool /*bWasSuccessful*/);

/** @defgroup SessionInterface SessionInterface
 *  This is the SessionInterface group
 *  @{
 */


/// @brief FOnlineSessionPico class inherited from IOnlineSession(Unreal Engine)
class FOnlineSessionPico : public IOnlineSession
{
private:

	/// @brief Reference to the main Pico subsystem
	FOnlineSubsystemPico& PicoSubsystem;

	/// @brief Current sessions
	TMap<FName, TSharedPtr<FNamedOnlineSession>> Sessions;

	/// @brief The SearchSettings when in Matchmaking
	TSharedPtr<FOnlineSessionSearch> InProgressMatchmakingSearch;

	/// @brief The SessionName when in Matchmaking
	FName InProgressMatchmakingSearchName;

	/// @brief return RoomID of the Session
	/// @param Session the Session you want to get RoomID
	/// @return return RoomID
	ppfID GetRoomIDOfSession(const FNamedOnlineSession& Session) const;
	
	/// @brief The session search result of the sessions which the invite was accepted. Supported version: above 4.8.0
	TArray<TSharedRef<const FOnlineSessionSearchResult>> InviteAcceptedSessions;
	
	/// @brief Return the build unique ID of a room
	/// @param The handle of the room
	/// @return return the build unique ID of the room
	int32 GetRoomBuildUniqueId(const ppfRoomHandle Room);

PACKAGE_SCOPE:

	FDelegateHandle OnRoomNotificationUpdateHandle;
	void OnRoomNotificationUpdate(ppfMessageHandle Message, bool bIsError);

	FDelegateHandle OnRoomNotificationInviteAcceptedHandle;
	void OnRoomInviteAccepted(ppfMessageHandle Message, bool bIsError);

	FDelegateHandle OnMatchmakingNotificationMatchFoundHandle;
	void OnMatchmakingNotificationMatchFound(ppfMessageHandle Message, bool bIsError);

	TSharedRef<FOnlineSession> CreateSessionFromRoom(ppfRoomHandle Room) const;

	void UpdateSessionFromRoom(FNamedOnlineSession& Session, ppfRoomHandle Room) const;
	void UpdateSessionSettingsFromDataStore(FOnlineSessionSettings& SessionSettings, ppfDataStoreHandle DataStore) const;

	void TickPendingInvites(float DeltaTime);

	bool CreateRoomSession(FNamedOnlineSession& Session, ppfRoomJoinPolicy JoinPolicy);
	bool CreateMatchmakingSession(FNamedOnlineSession& Session, ppfRoomJoinPolicy JoinPolicy);
	void OnCreateRoomComplete(ppfMessageHandle Message, bool bIsError, FName SessionName);
	
	/// @brief Get the moderated rooms
	/// @param SearchSettings settings for searching
	/// @return true if the read request was started successfully, false otherwise
	bool FindModeratedRoomSessions(const TSharedRef<FOnlineSessionSearch>& SearchSettings);
	
	/// @brief Get the matchmaking browse rooms
	/// @param Pool The name of the match pool
	/// @param SearchSettings To set the search results and the searchState
	/// @return true if the read request was started successfully, false otherwise
	bool FindMatchmakingSessions(const FString Pool, const TSharedRef<FOnlineSessionSearch>& SearchSettings);
	
	bool UpdateRoomDataStore(FName SessionName, FOnlineSessionSettings& UpdatedSessionSettings);

public:

	/// @brief Constructor
	/// @param InSubsystem - A reference to the owning subsystem
	FOnlineSessionPico(FOnlineSubsystemPico& InSubsystem);
	
    /// Default destructor
	virtual ~FOnlineSessionPico();


	// Begin IOnlineSession interface

	/// @brief Create private room or matchmaking room
	/// @param HostingPlayerNum the index in the current userId array
	/// @param SessionName name to mark session
	/// @param NewSessionSettings room settings
	/// @return true if the read request was started successfully, false otherwise
	virtual bool CreateSession(int32 HostingPlayerNum, FName SessionName, const FOnlineSessionSettings& NewSessionSettings) override;
	virtual bool CreateSession(const FUniqueNetId& HostingPlayerId, FName SessionName, const FOnlineSessionSettings& NewSessionSettings) override;
	
	/// @brief Change the session state to InProgress
	/// @param SessionName The name of the session
	/// @return true if the read request was started successfully, false otherwise
	virtual bool StartSession(FName SessionName) override;

	/// @brief Update datastore of a session
	/// @param SessionName The name of the session
	/// @param UpdatedSessionSettings The settings with new datastore
	/// @param bShouldRefreshOnlineData not used
	/// @return true if the read request was started successfully, false otherwise
	virtual bool UpdateSession(FName SessionName, FOnlineSessionSettings& UpdatedSessionSettings, bool bShouldRefreshOnlineData = true) override;

	/// @brief Change the session state to Ended
	/// @param SessionName The name of the session
	/// @return true if the read request was started successfully, false otherwise
	virtual bool EndSession(FName SessionName) override;

	/// @brief Leave current room
	/// @param SessionName The name of the session
	/// @param CompletionDelegate will execute when room leave complete
	/// @return true if the read request was started successfully, false otherwise
	virtual bool DestroySession(FName SessionName, const FOnDestroySessionCompleteDelegate& CompletionDelegate = FOnDestroySessionCompleteDelegate()) override;

	/// @brief Check UniqueId player in session
	/// @param SessionName The name of the session
	/// @param UniqueId check player unique ID
	/// @return true if the read request was started successfully, false otherwise
	virtual bool IsPlayerInSession(FName SessionName, const FUniqueNetId& UniqueId) override;

	/// @brief matchmaking enqueue
	/// @param LocalPlayers start matchmaking need login
	/// @param SessionName The name of the session
	/// @param NewSessionSettings NumPrivateConnections need be zero
	/// @param SearchSettings Used to modify the search state
	/// @return true if the read request was started successfully, false otherwise
	virtual bool StartMatchmaking(const TArray< FUniqueNetIdRef >& LocalPlayers, FName SessionName, const FOnlineSessionSettings& NewSessionSettings, TSharedRef<FOnlineSessionSearch>& SearchSettings) override;

	/// @brief cancel matchmaking
	/// @param SearchingPlayerNum not used
	/// @param SessionName The name of the session
	/// @return true if the read request was started successfully, false otherwise
	virtual bool CancelMatchmaking(int32 SearchingPlayerNum, FName SessionName) override;
	virtual bool CancelMatchmaking(const FUniqueNetId& SearchingPlayerId, FName SessionName) override;

	/// @brief find matchmaking rooms or moderated rooms
	/// @param SearchingPlayerNum not used
	/// @param SearchSettings settings for searching
	/// @return true if the read request was started successfully, false otherwise
	virtual bool FindSessions(int32 SearchingPlayerNum, const TSharedRef<FOnlineSessionSearch>& SearchSettings) override;
	virtual bool FindSessions(const FUniqueNetId& SearchingPlayerId, const TSharedRef<FOnlineSessionSearch>& SearchSettings) override;

	/// @brief get room data by room ID
	/// @param SearchingUserId must be loggedin player id, otherwise cannot get the data of the room
	/// @param SessionId the room you want to get
	/// @param FriendId not supported. Set it invalid 
	/// @param CompletionDelegate will execute when ppf_Room_Get complete
	/// @return true if the read request was started successfully, false otherwise
	virtual bool FindSessionById(const FUniqueNetId& SearchingUserId, const FUniqueNetId& SessionId, const FUniqueNetId& FriendId, const FOnSingleSessionResultCompleteDelegate& CompletionDelegate) override;
	virtual bool CancelFindSessions() override;
	virtual bool PingSearchResults(const FOnlineSessionSearchResult& SearchResult) override;

	/// @brief get room data by room ID
	/// @param PlayerNum the LocalOwnerId of the session
	/// @param SessionName the name of the session you want to join
	/// @param DesiredSession search session result settings
	/// @return true if the read request was started successfully, false otherwise
	virtual bool JoinSession(int32 PlayerNum, FName SessionName, const FOnlineSessionSearchResult& DesiredSession) override;
	virtual bool JoinSession(const FUniqueNetId& PlayerId, FName SessionName, const FOnlineSessionSearchResult& DesiredSession) override;

	/// @brief not supported in version 4.7.0
	virtual bool FindFriendSession(int32 LocalUserNum, const FUniqueNetId& Friend) override;
	virtual bool FindFriendSession(const FUniqueNetId& LocalUserId, const FUniqueNetId& Friend) override;
	virtual bool FindFriendSession(const FUniqueNetId& LocalUserId, const TArray<FUniqueNetIdRef>& FriendList) override;
	
	/// @brief not supported in version 4.7.0
	virtual bool SendSessionInviteToFriend(int32 LocalUserNum, FName SessionName, const FUniqueNetId& Friend) override;
	virtual bool SendSessionInviteToFriend(const FUniqueNetId& LocalUserId, FName SessionName, const FUniqueNetId& Friend) override;
	virtual bool SendSessionInviteToFriends(int32 LocalUserNum, FName SessionName, const TArray< FUniqueNetIdRef >& Friends) override;
	virtual bool SendSessionInviteToFriends(const FUniqueNetId& LocalUserId, FName SessionName, const TArray< FUniqueNetIdRef >& Friends) override;
	virtual bool GetResolvedConnectString(FName SessionName, FString& ConnectInfo, FName PortType = NAME_GamePort) override;
	virtual bool GetResolvedConnectString(const class FOnlineSessionSearchResult& SearchResult, FName PortType, FString& ConnectInfo) override;
	virtual FOnlineSessionSettings* GetSessionSettings(FName SessionName) override;
	virtual bool RegisterPlayer(FName SessionName, const FUniqueNetId& PlayerId, bool bWasInvited) override;
	virtual bool RegisterPlayers(FName SessionName, const TArray< FUniqueNetIdRef >& Players, bool bWasInvited = false) override;
	virtual bool UnregisterPlayer(FName SessionName, const FUniqueNetId& PlayerId) override;
	virtual bool UnregisterPlayers(FName SessionName, const TArray< FUniqueNetIdRef >& Players) override;
	virtual void RegisterLocalPlayer(const FUniqueNetId& PlayerId, FName SessionName, const FOnRegisterLocalPlayerCompleteDelegate& Delegate) override;
	virtual void UnregisterLocalPlayer(const FUniqueNetId& PlayerId, FName SessionName, const FOnUnregisterLocalPlayerCompleteDelegate& Delegate) override;
	virtual int32 GetNumSessions() override;
	virtual void DumpSessionState() override;

	virtual FUniqueNetIdPtr CreateSessionIdFromString(const FString& SessionIdStr) override;
	FNamedOnlineSession* GetNamedSession(FName SessionName) override;
	virtual void RemoveNamedSession(FName SessionName) override;
	virtual EOnlineSessionState::Type GetSessionState(FName SessionName) const override;
	virtual bool HasPresenceSession() override;
	class FNamedOnlineSession* AddNamedSession(FName SessionName, const FOnlineSessionSettings& SessionSettings) override;
	class FNamedOnlineSession* AddNamedSession(FName SessionName, const FOnlineSession& Session) override;


private:
	FString InitStateErrorMessage = FString("Error: InitSuccess is false");
	bool InitSuccess = false;
	bool OnUpdateRoomData(ppfRoomHandle Room, ppfID RoomId);
PACKAGE_SCOPE:

	void OnGetAccessTokenComplete(ppfMessageHandle Message, bool bIsError);
	void OnGameInitializeComplete(ppfMessageHandle Message, bool bIsError);

	FDelegateHandle OnNetNotificationConnectionHandle;
	void OnNetNotificationConnection(ppfMessageHandle Message, bool bIsError);

	FDelegateHandle OnNetNotificationRequestFailedHandle;
	void OnNetNotificationRequestFailed(ppfMessageHandle Message, bool bIsError);

	FDelegateHandle OnNetNotificationGameStateResetHandle;
	void OnNetNotificationGameStateReset(ppfMessageHandle Message, bool bIsError);

	FDelegateHandle OnMatchmakingNotificationCancel2Handle;
	void OnMatchmakingNotificationCancel2(ppfMessageHandle Message, bool bIsError);

	FDelegateHandle OnRoomNotificationLeaveHandle;
	void OnRoomNotificationLeave(ppfMessageHandle Message, bool bIsError);

	FDelegateHandle OnRoomNotificationJoin2Handle;
	void OnRoomNotificationJoin2(ppfMessageHandle Message, bool bIsError);

	FDelegateHandle OnRoomNotificationSetDescriptionHandle;
	void OnRoomNotificationSetDescription(ppfMessageHandle Message, bool bIsError);

	FDelegateHandle OnRoomNotificationKickUserHandle;
	void OnRoomNotificationKickUser(ppfMessageHandle Message, bool bIsError);

	FDelegateHandle OnRoomNotificationUpdateOwnerHandle;
	void OnRoomNotificationUpdateOwner(ppfMessageHandle Message, bool bIsError);

	FDelegateHandle OnRoomNotificationUpdateDataStoreHandle;
	void OnRoomNotificationUpdateDataStore(ppfMessageHandle Message, bool bIsError);

	FDelegateHandle OnRoomNotificationUpdateMembershipLockStatusHandle;
	void OnRoomNotificationUpdateMembershipLockStatus(ppfMessageHandle Message, bool bIsError);

	void LogRoomData(ppfRoomHandle Room) const;

public:
	/// @brief Game Module Initialize
	void Initialize();

	/// @brief Game Module Uninitialize
	/// @return always return true
	bool Uninitialize();

	/// @brief Set Game Module InitSuccess
	/// @param State true then set InitSuccess true or false set InitSuccess false
	void SetInitState(bool State);

	/// @brief Check current InitSuccess state
	/// @return InitSuccess
	bool IsInitSuccess() const;

	/// @brief force cancel matchmaking
	void OnForcedCancelMatchmaking();

	/// @brief force leave room
	/// @param RoomID the ID of the room you will force leave
	void OnForcedLeaveRoom(ppfID RoomID);

	/// @brief check if is in matchmaking progress
	/// @return true if InProgressMatchmakingSearch is valid and SearchState is EOnlineAsyncTaskState::InProgress, false otherwise
	bool IsInMatchmakingProgress();

	FOnRoomUpdateComplete RoomUpdateCallback;
	FOnRoomInviteAcceptedComplete RoomInviteAcceptedCallback;

	FOnGameConnectionComplete GameConnectionCallback;
	FOnGameRequestFailedComplete GameRequestFailedCallback;
	FOnGameStateResetComplete GameStateResetCallback;
	FOnMatchmakingCancel2Complete MatchmakingCancel2Callback;
	FOnRoomLeaveComplete RoomLeaveCallback;
	FOnRoomJoin2Complete RoomJoin2Callback;
	FOnRoomSetDescriptionComplete RoomSetDescriptionCallback;
	FOnRoomKickUserComplete RoomKickUserCallback;
	FOnRoomUpdateOwnerComplete RoomUpdateOwnerCallback;
	FOnRoomUpdateDataStoreComplete RoomUpdateDataStoreCallback;
	FOnRoomUpdateMembershipLockStatusComplete RoomUpdateMembershipLockStatusCallback;

	const char* JoinPolicyNames[6] = { "None", "Everyone", "FriendsOfMembers", "FriendsOfOwner", "InvitedUsers", "Unknown" };
	const char* RoomTypeNames[4] = { "Unknown", "Matchmaking", "Moderated", "Private" };
	const char* ConnectionResultNames[8] = { "Connected", "Closed", "Lost", "Resumed", "KickedByRelogin", "KickedByGameServer", "GameLogicError", "Unknown" };

	void TestDumpNamedSession(const FNamedOnlineSession* NamedSession) const;
	void TestDumpSession(const FOnlineSession* Session) const;
	void TestDumpSessionSettings(const FOnlineSessionSettings* SessionSettings) const;
};
/** @} */ // end of SessionInterface
typedef TSharedPtr<FOnlineSessionPico, ESPMode::ThreadSafe> FOnlineSessionPicoPtr;
