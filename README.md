# PlatformSDK_Identity_Friend_Rtc

- If you have any questions/comments, please visit [**Pico Developer Support Portal**](https://picodevsupport.freshdesk.com/support/home) and raise your question there.

## Unreal Engine 4 & SDK Version
Unreal Engine : 4.27.2

Pico Unreal XR SDK: 2.1.2

Pico Unreal Platform SDK : 1.0


## Description:
This demo demonstrates how to use Pico Unreal Platform SDK to integrate identity/friend list/RTC audio chat services for online games.

[Pico Identity & Friend service](https://developer.pico-interactive.com/docs/unreal/en/13156/identity_and_friend_/#application-scenarios) is based on Unreal OnlineSubsystem. Currently, the service provides some basic features, such as getting user accounts and getting friend lists. For more information, refer to Unreal documentation: [Identity Interface](https://docs.unrealengine.com/4.27/en-US/ProgrammingAndScripting/Online/IdentityInterface/) and [Friends Interface](https://docs.unrealengine.com/4.27/en-US/ProgrammingAndScripting/Online/FriendsInterface/).

Real-time communications (RTC) technology enables users in the same room to communicate with each other through voice chat.

[The RTC module](https://developer.pico-interactive.com/docs/unreal/en/13156/rtc_service/#basic-concepts) offered by the SDK Platform service uses a centralized communication structure instead of an end-to-end one. After users have joined a room and enabled voice chat, the microphone keeps capturing audio data from users and uploading the data to the RTC server. Then, the server transmits the audio data to each client in the room, and the client broadcasts the audio data received.



## Note:
- This project integrates v4.27 of PicoVR Unreal SDK, If you are using other version of the engine, you need to download the corresponding version of PicoVR Unreal SDK at [here.](https://developer.pico-interactive.com/sdk/index?id=5)
- Please note the PicoAppId used in the demo project is only for demo. It cannot be used for official release.
