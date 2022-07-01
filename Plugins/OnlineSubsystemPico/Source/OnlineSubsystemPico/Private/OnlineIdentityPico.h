// Copyright 2022 Pico Technology Co., Ltd.All rights reserved.
// This plugin incorporates portions of the Unreal® Engine. Unreal® is a trademark or registered trademark of Epic Games, Inc.In the United States of America and elsewhere.
// Unreal® Engine, Copyright 1998 – 2022, Epic Games, Inc.All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "OnlineSubsystemPico.h"
#include "Interfaces/OnlineIdentityInterface.h"
#include "OnlineSubsystemPicoTypes.h"
#include "PPF_Platform.h"
/**
/// 
 */

 /// @file OnlineIdentityPico.h

/// @brief User gender
enum class EUserGender : uint8
{
    Unknow,
    Male,
    Female
};

/// @brief User presence state
enum class EUserPresenceStatus : uint8
{
    Unknow,
    OnLine,
    OffLine
};

/// @brief User information include user id, image url, display name, gender, presence state.
struct FUserInformation  
{
    EUserGender Gender;
    FString UserId;
    FString ImageUrl;
    FString DisplayName;
    EUserPresenceStatus UserPresenceStatus;
};

DECLARE_DELEGATE_ThreeParams(FOnGetUserAndRoomDelegate, const FString& /**/, bool /*IsError*/, const FString& /*Error Message*/);

/// @brief UserOnlineAccountPico class inherited from FUserOnlineAccount(Unreal Engine)
class FUserOnlineAccountPico : public FUserOnlineAccount
{
public:


    FUserOnlineAccountPico(const FUniqueNetIdRef& InUserId, const FString& InName)
        : UserId(InUserId),
        Name(InName)
    { }

    virtual ~FUserOnlineAccountPico()
    {
    }


    /** User Id represented as a FUniqueNetId */
    FUniqueNetIdRef UserId;

    /** Additional key/value pair data related to auth */
    TMap<FString, FString> AdditionalAuthData;
    /** Additional key/value pair data related to user attribution */
    TMap<FString, FString> UserAttributes;


    // FOnlineUser

    /**
    /// @return Id associated with the user account provided by the online service during registration
     */
    virtual FUniqueNetIdRef GetUserId() const override { return UserId; };
    /**
    /// @return the real name for the user if known
     */
    virtual FString GetRealName() const override { return Name; }

    /**
    /// @return the nickname of the user if known
     */
    virtual FString GetDisplayName(const FString& Platform = FString()) const override { return Name; }

    /**
    /// @return Any additional user data associated with a registered user
     */
    virtual bool GetUserAttribute(const FString& AttrName, FString& OutAttrValue) const override;

    /**
    /// @return Whether a local attribute for a user was successfully set.
     */
    virtual bool SetUserAttribute(const FString& AttrName, const FString& AttrValue) override;

    // FUserOnlineAccount

    /**
    /// To do
    /// @return Access token which is provided to user once authenticated by the online service
     */
    virtual FString GetAccessToken() const override { return TEXT("ACCESSTOKEN"); }

    /**
    /// To do
    /// @return Any additional auth data associated with a registered user
     */
    virtual bool GetAuthAttribute(const FString& AttrName, FString& OutAttrValue) const override;

private:
    FString Name;
    FString AccessToken;
};

/**
* Pico service implementation of the online identity interface
*/

/** @defgroup IdentityInterface IdentityInterface
 *  This is the IdentityInterface group
 *  @{
 */

/// @brief OnlineIdentityPico class inherited from IOnlineIdentity(Unreal Engine)
class FOnlineIdentityPico : public IOnlineIdentity
{
public:

    /// @brief Request function. Account login is not supported, the function obtains the current device login account information.
    /// Will call OnLoginComplete() delegate when async task completes
    /// @param LocalUserNum the controller number of the associated user
    /// @param AccountCredentials user account credentials needed to sign in to the online service
    /// @return true if login task was started
    virtual bool Login(int32 LocalUserNum, const FOnlineAccountCredentials& AccountCredentials) override;

    /// @brief Not Supported.Signs the player out of the online service
    /// Will call OnLogoutComplete() delegate when async task completes
    /// @param LocalUserNum the controller number of the associated user
    /// @return true if logout task was started
    virtual bool Logout(int32 LocalUserNum) override;

    /// @brief Not Supported.
    /// @param LocalUserNum the controller number of the associated user
    /// @return true if the async call started ok, false otherwise
    virtual bool AutoLogin(int32 LocalUserNum) override;

    /// @brief Obtain online account info for a user that has been registered
    /// @param UserId user to search for
    /// @return info about the user if found, NULL otherwise
    virtual TSharedPtr<FUserOnlineAccount> GetUserAccount(const FUniqueNetId& UserId) const override;

    /// @brief Obtain list of all known/registered user accounts
    /// @return info about the users if found, NULL otherwise
    virtual TArray<TSharedPtr<FUserOnlineAccount> > GetAllUserAccounts() const override;

    /// @brief Gets the platform specific unique id for the specified player
    /// @param LocalUserNum the controller number of the associated user
    /// @return Valid player id object if the call succeeded, NULL otherwise
    virtual FUniqueNetIdPtr GetUniquePlayerId(int32 LocalUserNum) const override;

    /// @brief Create a unique id from binary data (used during replication)
    /// @param Bytes opaque data from appropriate platform
    /// @param Size size of opaque data
    /// @return UniqueId from the given data, NULL otherwise
    virtual FUniqueNetIdPtr CreateUniquePlayerId(uint8* Bytes, int32 Size) override;

    /// @brief Create a unique id from string
    /// @param Str string holding textual representation of an Id
    /// @return UniqueId from the given data, NULL otherwise
    virtual FUniqueNetIdPtr CreateUniquePlayerId(const FString& Str) override;

    /// @brief Fetches the login status for a given player
    /// @param LocalUserNum the controller number of the associated user
    /// @return the enum value of their status
    virtual ELoginStatus::Type GetLoginStatus(int32 LocalUserNum) const override;

    /// @brief Fetches the login status for a given player
    /// @param UserId the unique net id of the associated user
    /// @return the enum value of their status
    virtual ELoginStatus::Type GetLoginStatus(const FUniqueNetId& UserId) const override;

    /// @brief Reads the player's nick name from the online service
    /// @param LocalUserNum the controller number of the associated user
    /// @return a string containing the players nick name
    virtual FString GetPlayerNickname(int32 LocalUserNum) const override;

    /// @brief Reads the player's nick name from the online service
    /// @param UserId the unique net of the associated user
    /// @return a string containing the players nick name
    virtual FString GetPlayerNickname(const FUniqueNetId& UserId) const override;

    /// @brief Not Supported.Gets a user's platform specific authentication token to verify their identity
    /// @param LocalUserNum the controller number of the associated user
    /// @return String representing the authentication token
    virtual FString GetAuthToken(int32 LocalUserNum) const override;

    /// @brief Not Supported.Revoke the user's registered auth token.
    /// @param LocalUserId the unique net of the associated user
    /// @param Delegate delegate to execute when the async task completes
    virtual void RevokeAuthToken(const FUniqueNetId& UserId, const FOnRevokeAuthTokenCompleteDelegate& Delegate) override;


    /// @brief Not Supported.Gets the status of a user's privilege.
    /// @param LocalUserId the unique id of the user to query
    /// @param Privilege the privilege you want to know about
    /// @param Delegate delegate to execute when the async task completes
    virtual void GetUserPrivilege(const FUniqueNetId& UserId, EUserPrivileges::Type Privilege, const FOnGetUserPrivilegeCompleteDelegate& Delegate) override;
    
    /// @brief Not Supported.Temporary hack to get a corresponding FUniqueNetId from a PlatformUserId
    /// @param UniqueNetId The unique id to look up
    /// @return The corresponding id or PLATFORMID_NONE if not found
    virtual FPlatformUserId GetPlatformUserIdFromUniqueNetId(const FUniqueNetId& UniqueNetId) const override;

    /// @brief Get the auth type associated with accounts for this platform
    /// @return The auth type associated with accounts for this platform
    virtual FString GetAuthType() const override;

    /// To do.
    /// 
    /// 
    bool GetLoginUserAndRoom(int32 LocalUserNum, const FOnGetUserAndRoomDelegate& Delegate = FOnGetUserAndRoomDelegate());




    // FOnlineIdentityPico

    /// Constructor
    /// @param InSubsystem online subsystem being used
    FOnlineIdentityPico(FOnlineSubsystemPico& InSubsystem);

    /// Default destructor
    virtual ~FOnlineIdentityPico() = default;

PACKAGE_SCOPE:

    /**
    /// ** INTERNAL **
    /// Called when we get the results back from the MessageQueue
    */
    void OnLoginComplete(ppfMessageHandle Message, bool bIsError, int32 LocalUserNum);

    void OnGetUserAndroomComplete(ppfMessageHandle Message, bool bIsError, int32 LcoalUserNum, const FOnGetUserAndRoomDelegate& Delegate);

    // Not implemented
    void OnGetAccessTokenComplete(ppfMessageHandle Message, bool bIsError, int32 LocalUserNum);


private:

    /** Reference to the owning subsystem */
    FOnlineSubsystemPico& PicoSubsystem;

    /** Ids mapped to locally registered users */
    TMap<int32, FUniqueNetIdRef> UserIds;



    /** Ids mapped to locally registered users */
    TUniqueNetIdMap<TSharedRef<FUserOnlineAccountPico>> UserAccounts;

public:
    //
    TMap<int32, FUserInformation> UserInfos;
};
/** @} */ // end of IdentityInterface
typedef TSharedPtr<FOnlineIdentityPico, ESPMode::ThreadSafe> FOnlineIdentityPicoPtr;