// Copyright 2022 Pico Technology Co., Ltd.All rights reserved.
// This plugin incorporates portions of the Unreal® Engine. Unreal® is a trademark or registered trademark of Epic Games, Inc.In the United States of America and elsewhere.
// Unreal® Engine, Copyright 1998 – 2022, Epic Games, Inc.All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "OnlineSubsystemPico.h"
#include "Interfaces/OnlineFriendsInterface.h"
#include "Interfaces/OnlinePresenceInterface.h"
#include "OnlineSubsystemPicoTypes.h"
#include "OnlineSubsystemPicoPackage.h"


/// @file OnlineFriendsInterfacePico.h

/// @brief OnlinePicoFriend class inherited from FOnlineFriend(Unreal Engine)
class FOnlinePicoFriend : public FOnlineFriend
{
private:
    FUniqueNetIdPicoRef UserId;
    const FString StrUserId;
    const FString DisplayName;
    FOnlineUserPresence Presence;

    const FString InviteToken;
public:
    FOnlinePicoFriend(/*const ppfID ID*/const FString StrId, const FString& InDisplayName, ppfUserPresenceStatus FriendPresenceStatus, const FString& InInviteToken) :
        UserId(FUniqueNetIdPico::Create(StrId)),
        StrUserId(StrId),
        DisplayName(InDisplayName),
        InviteToken(InInviteToken)
    {
        Presence.bIsOnline = FriendPresenceStatus == ppfUserPresenceStatus_OnLine;
    }

    virtual FUniqueNetIdRef GetUserId() const override
    {
        return UserId;
    }
    
    FString GetUserStrId() const
    {
        return StrUserId;
    }

    virtual FString GetRealName() const override
    {
        return TEXT("");
    }

    virtual FString GetDisplayName(const FString& Platform = FString()) const override
    {
        return DisplayName;
    }

    virtual bool GetUserAttribute(const FString& AttrName, FString& OutAttrValue) const override
    {
        return false;
    }

    virtual EInviteStatus::Type GetInviteStatus() const override
    {
        return EInviteStatus::Accepted;
    }

    virtual const FOnlineUserPresence& GetPresence() const override
    {
        return Presence;
    }

    FString GetInviteToken() const
    {
        return InviteToken;
    }
};

/**
*	IOnlineFriends - Interface class for Friends
*/

/** @defgroup FriendsInterface FriendsInterface
 *  This is the FriendsInterface group
 *  @{
 */

/// @brief OnlineFriendsPico class inherited from IOnlineFriends(Unreal Engine)
class FOnlineFriendsPico : public IOnlineFriends
{
private:

    FOnlineSubsystemPico& PicoSubsystem;

    TMap<FString, TSharedRef<FOnlineFriend>> PlayerFriends;

    TMap<FString, TSharedRef<FOnlineFriend>> InvitableUsers;

PACKAGE_SCOPE:

   
   ////* INTERNAL///*
   /// Called when we get the results back from the MessageQueue
    void OnQueryFriendsComplete(ppfMessageHandle Message, bool bIsError, int32 LocalUserNum, const FString& ListName, TMap<FString, TSharedRef<FOnlineFriend>>& OutList, bool bAppendToExistingMap, const FOnReadFriendsListComplete& Delegate);

public:

    static const FString FriendsListInviteableUsers;

   
    /// @brief Constructor
    /// @param InSubsystem - A reference to the owning subsystem
    FOnlineFriendsPico(FOnlineSubsystemPico& InSubsystem);

   
    /// Default destructor
    virtual ~FOnlineFriendsPico() = default;

    // Begin IOnlineFriends interface

    /// @brief Starts an async task that reads the named friends list for the player
    /// @param LocalUserNum the user to read the friends list of
    /// @param ListName name of the friends list to read
    /// @return true if the read request was started successfully, false otherwise
    virtual bool ReadFriendsList(int32 LocalUserNum, const FString & ListName, const FOnReadFriendsListComplete & Delegate = FOnReadFriendsListComplete()) override;
   
    /// @brief To do(Not implement).Starts an async task that deletes the named friends list for the player
    /// @param LocalUserNum the user to delete the friends list for
    /// @param ListName name of the friends list to delete
    /// @return true if the delete request was started successfully, false otherwise
    virtual bool DeleteFriendsList(int32 LocalUserNum, const FString & ListName, const FOnDeleteFriendsListComplete & Delegate = FOnDeleteFriendsListComplete()) override;
     
    /// @brief To do(Not implement). Starts an async task that sends an invite to another player.
    /// @param LocalUserNum the user that is sending the invite
    /// @param FriendId player that is receiving the invite
    /// @param ListName name of the friends list to invite to
    /// @return true if the request was started successfully, false otherwise
    virtual bool SendInvite(int32 LocalUserNum, const FUniqueNetId & FriendId, const FString & ListName, const FOnSendInviteComplete & Delegate = FOnSendInviteComplete()) override;
     
    /// @brief To do(Not implement).Starts an async task that accepts an invite from another player.
    /// @param LocalUserNum the user that is accepting the invite
    /// @param FriendId player that had sent the pending invite
    /// @param ListName name of the friends list to operate on
    /// @return true if the request was started successfully, false otherwise
    virtual bool AcceptInvite(int32 LocalUserNum, const FUniqueNetId & FriendId, const FString & ListName, const FOnAcceptInviteComplete & Delegate = FOnAcceptInviteComplete()) override;
   
    /// @brief To do(Not implement).Starts an async task that rejects an invite from another player.
    /// @param LocalUserNum the user that is rejecting the invite
    /// @param FriendId player that had sent the pending invite
    /// @param ListName name of the friends list to operate on
    /// @return true if the request was started successfully, false otherwise
    virtual bool RejectInvite(int32 LocalUserNum, const FUniqueNetId & FriendId, const FString & ListName) override;
      
    /// @brief To do(Not implement).Starts an async task that sets an alias a to friend.
    /// @param LocalUserNum the user that is setting the alias
    /// @param FriendId player that will have the alias associated
    /// @param ListName name of the friends list to operate on
    /// @param Alias the alias associated to the player
    virtual void SetFriendAlias(int32 LocalUserNum, const FUniqueNetId & FriendId, const FString & ListName, const FString & Alias, const FOnSetFriendAliasComplete & Delegate = FOnSetFriendAliasComplete()) override;
   
    /// @brief To do(Not implement).Starts an async task that delete an alias from a friend.
    /// @param LocalUserNum the user that is setting the alias
    /// @param FriendId player that will have the alias deleted from
    /// @param ListName name of the friends list to operate on
    virtual void DeleteFriendAlias(int32 LocalUserNum, const FUniqueNetId & FriendId, const FString & ListName, const FOnDeleteFriendAliasComplete & Delegate = FOnDeleteFriendAliasComplete()) override;
   
    /// @brief To do(Not implement).Starts an async task that deletes a friend from the named friends list
    /// @param LocalUserNum the user that is making the request
    /// @param FriendId player that will be deleted
    /// @param ListName name of the friends list to operate on
    /// @return true if the request was started successfully, false otherwise
    virtual bool DeleteFriend(int32 LocalUserNum, const FUniqueNetId & FriendId, const FString & ListName) override;
  
    /// @brief Copies the list of friends for the player previously retrieved from the online service
    /// @param LocalUserNum the user to read the friends list of
    /// @param ListName name of the friends list to read
    /// @param OutFriends [out] array that receives the copied data
    /// @return true if friends list was found
    virtual bool GetFriendsList(int32 LocalUserNum, const FString & ListName, TArray< TSharedRef<FOnlineFriend> >&OutFriends) override;

    /// @brief Get the cached friend entry if found
    /// @param LocalUserNum the user to read the friends list of
    /// @param ListName name of the friends list to read
    /// @param OutFriends [out] array that receives the copied data
    /// @return null ptr if not found
    virtual TSharedPtr<FOnlineFriend> GetFriend(int32 LocalUserNum, const FUniqueNetId & FriendId, const FString & ListName) override;
   
    /// @brief Checks that a unique player id is part of the specified user's friends list
    /// @param LocalUserNum the controller number of the associated user that made the request
    /// @param FriendId the id of the player being checked for friendship
    /// @param ListName name of the friends list to read
    /// @return true if friends list was found and the friend was valid
    virtual bool IsFriend(int32 LocalUserNum, const FUniqueNetId & FriendId, const FString & ListName) override;
   
    /// @brief To do(Not implement).Query for recent players of the current user
    /// @param UserId user to query recent players for
    /// @param Namespace the recent players namespace to retrieve
    /// @return true if query was started
    virtual bool QueryRecentPlayers(const FUniqueNetId & UserId, const FString & Namespace) override;
   
    /// @brief To do(Not implement).Copies the cached list of recent players for a given user
    /// @param UserId user to retrieve recent players for
    /// @param Namespace the recent players namespace to retrieve (if empty retrieve all namespaces)
    /// @param OutRecentPlayers [out] array that receives the copied data
    /// @return true if recent players list was found for the given user
    virtual bool GetRecentPlayers(const FUniqueNetId & UserId, const FString & Namespace, TArray< TSharedRef<FOnlineRecentPlayer> >&OutRecentPlayers) override;
   
    /// To do(Not implement).@brief Dump state information about blocked players
    virtual void DumpRecentPlayers() const override;
      
    /// @brief To do(Not implement).Block a player
    /// @param LocalUserNum The user to check for
    /// @param PlayerId The player to block
    /// @return true if query was started
    virtual bool BlockPlayer(int32 LocalUserNum, const FUniqueNetId & PlayerId) override;   
   
    /// @brief To do(Not implement).Unblock a player
    /// @param LocalUserNum The user to check for
    /// @param PlayerId The player to unblock
    /// @return true if query was started
    virtual bool UnblockPlayer(int32 LocalUserNum, const FUniqueNetId & PlayerId) override; 
   
    /// @brief To do(Not implement).Query for blocked players
    /// @param UserId user to query blocked players for
    /// @return true if query was started
    virtual bool QueryBlockedPlayers(const FUniqueNetId & UserId) override;
     
    /// @brief To do(Not implement).Get the list of blocked players
    /// @param UserId user to retrieve blocked players for
    /// @param OuBlockedPlayers [out] array that receives the copied data
    /// @return true if blocked players list was found for the given user
    virtual bool GetBlockedPlayers(const FUniqueNetId & UserId, TArray< TSharedRef<FOnlineBlockedPlayer> >&OutBlockedPlayers) override;
  
    /// @brief To do(Not implement).Dump state information about blocked players
    virtual void DumpBlockedPlayers() const override;
    // End IOnlineFriends interface
};
/** @} */ // end of FriendsInterface