//Unreal® Engine, Copyright 1998 – 2022, Epic Games, Inc. All rights reserved.

#pragma once
#include "CoreMinimal.h"
#include "SampleBuffer.h"
#include <AudioDevice.h>
#include "Sound/SampleBufferIO.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Components/CapsuleComponent.h"
#include "PXR_InputFunctionLibrary.generated.h"

UENUM(BlueprintType)
enum class EHandFinger :uint8
{
	Thumb = 0,
	Index = 1,
	Middle = 2,
	Ring = 3,
	Pinky = 4,
	Max = 5,
};
UENUM(BlueprintType)
enum  class EPicoXRHandedness :uint8
{
	LeftHand,
	RightHand,
};

UENUM(BlueprintType)
enum  class EPicoXRControllerType :uint8
{
	LeftHand    UMETA(DisplayName = "Pico LeftHand"),
    RightHand   UMETA(DisplayName = "Pico RightHand"),
    G2Hand      UMETA(DisplayName = "Pico G2 Hand"),
};

UENUM(BlueprintType)
enum class EPicoXRArmModelJoint : uint8
{
	Controller,
	Wrist,
	Elbow,
	Shoulder
};

UENUM(BlueprintType)
enum class EPicoXRGazeBehavior : uint8
{
	Never,
	DuringMotion,
	Always
};

UENUM(BlueprintType)
enum class EPicoXRControllerDeviceType : uint8
{
	UnKnown = 0  UMETA(DisplayName = "UnKnown Controller"),
	G2      = 3  UMETA(DisplayName = "Pico G2"),
    Neo2    = 4  UMETA(DisplayName = "Pico Neo2"),
	Neo3    = 5  UMETA(DisplayName = "Pico Neo3"),
	Phoenix    = 6  UMETA(DisplayName = "Pico Phoenix"),
};
UENUM(BlueprintType)
enum class EPicoXRActiveInputDevice: uint8
{
	NoneActive,
	ControllerActive,
	HandTrackingActive,
};
UENUM(BlueprintType)
enum class EPicoXRHandType : uint8
{
	None,
	HandLeft,
	HandRight,
};

UENUM(BlueprintType)
enum class EPicoXRHandTrackingConfidence : uint8
{
	Low,
	High
};

/**
* EBone is enum representing the Bone Ids that come from the PicoXR Runtime.
*/
UENUM(BlueprintType)
enum class EBone : uint8
{
	Wrist_Root UMETA(DisplayName = "wrist"),
	Hand_Start = Wrist_Root UMETA(DisplayName = "Hand Start"),
	Forearm_Stub UMETA(DisplayName = "forearm_stub"),
	Thumb_0 UMETA(DisplayName = "thumb0"),
	Thumb_1 UMETA(DisplayName = "thumb1"),
	Thumb_2 UMETA(DisplayName = "thumb2"),
	Thumb_3 UMETA(DisplayName = "thumb3"),
	Index_1 UMETA(DisplayName = "index1"),
	Index_2 UMETA(DisplayName = "index2"),
	Index_3 UMETA(DisplayName = "index3"),
	Middle_1 UMETA(DisplayName = "middle1"),
	Middle_2 UMETA(DisplayName = "middle2"),
	Middle_3 UMETA(DisplayName = "middle3"),
	Ring_1 UMETA(DisplayName = "ring1"),
	Ring_2 UMETA(DisplayName = "ring2"),
	Ring_3 UMETA(DisplayName = "ring3"),
	Pinky_0 UMETA(DisplayName = "pinky0"),
	Pinky_1 UMETA(DisplayName = "pinky1"),
	Pinky_2 UMETA(DisplayName = "pinky2"),
	Pinky_3 UMETA(DisplayName = "pinky3"),
	Max_Skinnable UMETA(DisplayName = "Max Skinnable"),
	Hand_ThumbTip = Max_Skinnable + 0 UMETA(DisplayName = "Hand_ThumbTip"),
	Hand_IndexTip = Max_Skinnable + 1 UMETA(DisplayName = "Hand_IndexTip"),
	Hand_MiddleTip = Max_Skinnable + 2 UMETA(DisplayName = "Hand_MiddleTip"),
	Hand_RingTip = Max_Skinnable + 3 UMETA(DisplayName = "Hand_RingTip"),
	Hand_PinkyTip = Max_Skinnable + 4 UMETA(DisplayName = "Hand_PinkyTip"),
	Hand_Max = Max_Skinnable + 5 UMETA(DisplayName = "Hand_Max"),
	Hand_End = 	Hand_Max UMETA(DisplayName = "Hand_End"),
	Bone_Max =  Hand_End UMETA(DisplayName = "Bone_Max"),
	Invalid UMETA(DisplayName = "Invalid")
};
UENUM(BlueprintType)
enum class EHandStage : uint8
{
	None,
	LeftHandHomeStart = 4,
	LeftHandHomeEnd = 5,
	LeftHandHomeStop = 6,

	RightHandHomeStart = 7,
	RightHandHomeEnd = 8,
	RightHandHomeStop = 9,

	LeftHandResetStart = 14,
	LeftHandResetEnd = 15,
	LeftHandResetStop = 16,

	RightHandResetStart = 17,
	RightHandResetEnd = 18,
	RightHandResetStop = 19,
};

UENUM(BlueprintType)
enum class EHandPoseType: uint8
{
	None,
	Global = (1 << 0),
	Local = (1 << 1)
};

UENUM(BlueprintType)
enum class EPxrControllerKeyMap : uint8
{
	PXR_CONTROLLER_KEY_HOME = 0,
	PXR_CONTROLLER_KEY_AX = 1,
	PXR_CONTROLLER_KEY_BY = 2,
	PXR_CONTROLLER_KEY_BACK = 3,
	PXR_CONTROLLER_KEY_TRIGGER = 4,
	PXR_CONTROLLER_KEY_VOL_UP = 5,
	PXR_CONTROLLER_KEY_VOL_DOWN = 6,
	PXR_CONTROLLER_KEY_ROCKER = 7,
	PXR_CONTROLLER_KEY_GRIP = 8,
	PXR_CONTROLLER_KEY_TOUCHPAD = 9,
	PXR_CONTROLLER_KEY_LASTONE = 127,

	PXR_CONTROLLER_TOUCH_AX = 128,
	PXR_CONTROLLER_TOUCH_BY = 129,
	PXR_CONTROLLER_TOUCH_ROCKER = 130,
	PXR_CONTROLLER_TOUCH_TRIGGER = 131,
	PXR_CONTROLLER_TOUCH_THUMB = 132,
	PXR_CONTROLLER_TOUCH_LASTONE = 255
};

USTRUCT(BlueprintType)
struct PICOXRINPUT_API FHandTrackingStage
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadOnly, Category = "PicoXR|PicoXRHandTracking")
	EHandStage TrackingStage;
	UPROPERTY(BlueprintReadOnly, Category = "PicoXR|PicoXRHandTracking")
	int TrackingStageProgress;
};
USTRUCT(BlueprintType)
struct PICOXRINPUT_API FPicoXRCapsuleCollider
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadOnly, Category = "PicoXR|PicoXRHandTracking")
	UCapsuleComponent* Capsule { nullptr };

	UPROPERTY(BlueprintReadOnly, Category = "PicoXR|PicoXRHandTracking")
	EBone BoneId = EBone::Wrist_Root;;
};
USTRUCT(BlueprintType)
struct FAudioClipData {
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PXR|PXRSystemAPI")
		int32 delaytag;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PXR|PXRSystemAPI")
		int32 slot;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PXR|PXRSystemAPI")
		int32 buffersize;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PXR|PXRSystemAPI")
		int32 sampleRate;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PXR|PXRSystemAPI")
		int32 channelMask;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PXR|PXRSystemAPI")
		int32 bitrate;
};
UCLASS()
class PICOXRINPUT_API UPicoXRInputFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:

	/**
	* Get controller power.
	* @param ControllerType   (In) The controller type(G2 controller/Neo LeftController/Neo RightController).
	* @param Power           (Out) The power of controller.
	*/
	UFUNCTION(BlueprintCallable,Category="PXR|PXRInput")
		static bool PXR_GetControllerPower(EPicoXRControllerType ControllerType,int32 &Power);

	/**
	* Get controller connect state.
	* @param ControllerType   (In) The controller type(G2 controller/Neo LeftController/Neo RightController).
	* @param Status          (Out) Connect state,true:Connected,false:DisConnected.
	*/
	UFUNCTION(BlueprintCallable,Category="PXR|PXRInput")
        static bool PXR_GetControllerConnectionState(EPicoXRControllerType ControllerType,bool &Status);

	/**
	* Get the main controller.
	* @param Handedness     (Out) Main handedness(Neo LeftController/Neo RightController).
	*/
	UFUNCTION(BlueprintCallable,Category="PXR|PXRInput")
        static bool PXR_GetMainControllerHandle(EPicoXRHandedness &Handedness);

	/**
	* Set the main controller.
	* @param Handedness     (In) Main handedness(Neo LeftController/Neo RightController).
	*/
	UFUNCTION(BlueprintCallable, Category = "PXR|PXRInput")
		static bool PXR_SetMainControllerHandle(EPicoXRHandedness Handedness);

	/**
	* Get controller angular velocity.
	* @param ControllerType     (In) The controller type(G2 controller/Neo LeftController/Neo RightController).
	* @param AngularVelocity   (Out) Controller angular velocity.
	*/
	UFUNCTION(BlueprintCallable,Category="PXR|PXRInput")
        static bool PXR_GetControllerAngularVelocity(EPicoXRControllerType ControllerType,FVector &AngularVelocity);

	/**
	* Get controller acceleration.
	* @param ControllerType    (In) The controller type(G2 controller/Neo LeftController/Neo RightController).
	* @param Acceleration     (Out) Controller acceleration.
	*/
	UFUNCTION(BlueprintCallable,Category="PXR|PXRInput")
        static bool PXR_GetControllerAcceleration(EPicoXRControllerType ControllerType,FVector &Acceleration);

	/**
	* Get controller linear velocity.
	* @param ControllerType     (In) The controller type(G2 controller/Neo LeftController/Neo RightController).
	* @param LinearVelocity    (Out) Controller linear velocity.
	*/
	UFUNCTION(BlueprintCallable,Category="PXR|PXRInput")
        static bool PXR_GetControllerLinearVelocity(EPicoXRControllerType ControllerType,FVector &LinearVelocity);

	/**
	* Vibration the controller.
	* @param ControllerType    (In) The controller type(G2 controller/Neo LeftController/Neo RightController).
	* @param Strength          (In) Vibration strength.
	* @param Time              (In) Vibration time.
	*/
	UFUNCTION(BlueprintCallable,Category="PXR|PXRInput")
        static bool PXR_VibrateController(EPicoXRControllerType ControllerType,float Strength, int Time);

	/**
	* Get the controller type.
	* @param ControllerType    (Out) The controller type(G2 /Neo).
	*/
	UFUNCTION(BlueprintCallable,Category="PXR|PXRInput")
        static void PXR_GetControllerDeviceType(EPicoXRControllerDeviceType &ControllerType);

	/**
	* Set controller arm model parameter.
	* @param Controller        (In) The controller type(G2 controller/Neo LeftController/Neo RightController).
	* @param Handness          (In) Determines if the controller is in the left hand or right hand.
	* @param ArmJoint          (In) The arm joint(Controller/Wrist/Elbow/Shoulder).
	* @param GazeType          (In) The gaze type(Never/DuringMotion/Always).
	* @param ElbowHeight       (In) The Height of the elbow..
	* @param ElbowDepth        (In) The Depth of the elbow.
	* @param PointerTiltAngle  (In) The Downward tilt or pitch of the laser pointer relative to the controller (degrees).
	*/
	UFUNCTION(BlueprintCallable, Category = "PXR|PXRInput", meta = (ArmJoint = "Controller", GazeType = "DuringMotion", ElbowHeight = "0.0", ElbowDepth = "0.0", PointerTiltAngle = "15.0"))
		static void PXR_SetControllerArmModelParam(EPicoXRControllerType Controller,EPicoXRHandedness Handness,EPicoXRArmModelJoint ArmJoint, EPicoXRGazeBehavior GazeType, float ElbowHeight, float ElbowDepth, float PointerTiltAngle);
	
	/**
	* Set controller arm model parameter.
	* @param Controller         (In) The controller type(G2 controller/Neo LeftController/Neo RightController).
	* @param Handness          (Out) Determines if the controller is in the left hand or right hand.
	* @param ArmJoint          (Out) The arm joint(Controller/Wrist/Elbow/Shoulder).
	* @param GazeType          (Out) The gaze type(Never/DuringMotion/Always).
	* @param ElbowHeight       (Out) The Height of the elbow..
	* @param ElbowDepth        (Out) The Depth of the elbow.
	* @param PointerTiltAngle  (Out) The Downward tilt or pitch of the laser pointer relative to the controller (degrees).
	*/
	UFUNCTION(BlueprintCallable, Category = "PXR|PXRInput")
        static void PXR_GetControllerArmModelParam(EPicoXRControllerType Controller,EPicoXRHandedness& Handness,EPicoXRArmModelJoint & ArmJoint, EPicoXRGazeBehavior & GazeType, float & ElbowHeight, float & ElbowDepth, float & PointerTiltAngle);

	/**
	* Get handedness.
	* @param  Handedness        (Out) Handedness.
	* @return True if get succeed.
	*/
	UFUNCTION(BlueprintCallable, Category = "PXR|PXRInput")
		static bool PXR_GetHandedness(EPicoXRHandedness &Handedness);

	/**
	* Get controller enable homeKey.
	* @return True if home key enable.
	*/
	UFUNCTION(BlueprintCallable, Category = "PXR|PXRInput")
		static bool PXR_GetControllerEnableHomekey();

	/**
	* Set controller origin offset.
	* @param Controller      (In) Controller type.
	* @param Offset          (In) Origin offset.   
	*/
	UFUNCTION(BlueprintCallable, Category = "PXR|PXRInput")
		static void PXR_SetControllerOriginOffset(EPicoXRControllerType Controller, FVector Offset);

	 /**
	 * Get controller location and rotation with predicted time.
	 * @param DeviceHand      (In) Select the left or right handle.
	 * @param PredictedTime   (In) Prediction time (ms).
	 * @param OutLocation    (Out) Location with predicted time.
	 * @param OutRotation    (Out) Rotation with predicted time.
	 */
	UFUNCTION(BlueprintCallable,Category="PXR|PXRInput")
	static void PXR_GetControllerPredictedLocationAndRotation(EControllerHand DeviceHand,float PredictedTime, FVector& OutLocation,FRotator &OutRotation);
	
	UFUNCTION(BlueprintCallable, Category = "PXR|PXRInput")
	static int PXR_StartControllerVCMotor(FString file, int slot, int slotconfig);

	UFUNCTION(BlueprintCallable, Category = "PXR|PXRInput")
	static int PXR_SetControllerAmp(float mode);

	UFUNCTION(BlueprintCallable, Category = "PXR|PXRInput")
	static int PXR_StopControllerVCMotor(int clientId);

	UFUNCTION(BlueprintCallable, Category = "PXR|PXRInput")
	static int PXR_SetControllerVibrationEvent(int deviceID, int frequency, float strength, int time);

	UFUNCTION(BlueprintCallable, Category = "PXR|PXRInput")
	static int PXR_StartVibrateBySharem(USoundWave* InSoundWave, int slot , int slotConfig);

	//UFUNCTION(BlueprintCallable, Category = "PXR|PXRInput")
	static void PXR_GetVibrateDelayTime(FString &data);
	/**
	 * Get the rotation of a specific bone
	 *
	 * @param DeviceHand				(in) The hand to get the rotations from
	 * @param BoneId					(in) The specific bone to get the rotation from
	 */
	UFUNCTION(BlueprintPure, Category = "PicoXR|PicoXRHandTracking")
		static FQuat GetBoneRotation(const EPicoXRHandType DeviceHand, const EBone BoneId);

	/**
	 * Get the pointer pose
	 *
	 * @param DeviceHand				(in) The hand to get the pointer pose from
	 */
	UFUNCTION(BlueprintPure, Category = "PicoXR|PicoXRHandTracking")
		static FTransform GetPointerPose(const EPicoXRHandType DeviceHand);

	/**
	 * Check if the hand is tracked
	 *
	 * @param DeviceHand				(in) The hand to get the hand status from
	 */
	UFUNCTION(BlueprintPure, Category = "PicoXR|PicoXRHandTracking")
		static bool IsHandTracked(const EPicoXRHandType DeviceHand);
	/**
	 * Check if the input state is valid
	 *
	 * @param DeviceHand				(in) The hand to get the input state from
	 */
	UFUNCTION(BlueprintPure, Category = "PicoXR|PicoXRHandTracking")
	static bool IsInputStateValid(const EPicoXRHandType DeviceHand);
	/**
	 * Check if the ray is a valid
	 *
	 * @param DeviceHand				(in) The hand to get the ray status from
	 */
	UFUNCTION(BlueprintPure, Category = "PicoXR|PicoXRHandTracking")
	static bool IsRayValid(const EPicoXRHandType DeviceHand);
	/**
	 * Check if the system gesture is in progress
	 *
	 * @param DeviceHand				(in) The hand to get the pointer status from
	 */
	UFUNCTION(BlueprintPure, Category = "PicoXR|PicoXRHandTracking")
	static bool IsSystemGestureInProgress(const EPicoXRHandType DeviceHand);
	/**
	 * Check if the hand is dominant
	 *
	 * @param DeviceHand				(in) The hand to get the hand status from
	 */
	UFUNCTION(BlueprintPure, Category = "PicoXR|PicoXRHandTracking")
	static bool IsDominantHand(const EPicoXRHandType DeviceHand);
	/**
	 * Check if the menu pressed
	 *
	 * @param DeviceHand				(in) The hand to get the menu status from
	 */
	UFUNCTION(BlueprintPure, Category = "PicoXR|PicoXRHandTracking")
	static bool IsMenuPressed(const EPicoXRHandType DeviceHand);
	/**
	 * Get the tracking confidence of the hand
	 *
	 * @param DeviceHand				(in) The hand to get tracking confidence of
	 */
	UFUNCTION(BlueprintPure, Category = "PicoXR|PicoXRHandTracking")
		static EPicoXRHandTrackingConfidence GetTrackingConfidence(const EPicoXRHandType DeviceHand);
	/**
	 * Get the scale of the hand
	 *
	 * @param DeviceHand				(in) The hand to get scale of
	 */
	UFUNCTION(BlueprintPure, Category = "PicoXR|PicoXRHandTracking")
		static float GetHandScale(const EPicoXRHandType DeviceHand);
	/**
	 * Get the click strength of the hand
	 *
	 * @param DeviceHand				(in) The hand to get click strength of
	 */
	UFUNCTION(BlueprintPure, Category = "PicoXR|PicoXRHandTracking")
		static float GetClickStrength(const EPicoXRHandType DeviceHand);
	/**
	 * Get the user's dominant hand
	 *
	 */
	UFUNCTION(BlueprintPure, Category = "PicoXR|PicoXRHandTracking")
		static EPicoXRHandType GetDominantHand();
	/**
	 * Check if hand tracking is enabled currently
	 */
	UFUNCTION(BlueprintPure, Category = "PicoXR|PicoXRHandTracking")
		static bool IsHandTrackingEnabled();
	/**
	 * Get the bone name from the bone index
	 *
	 */
	UFUNCTION(BlueprintPure, Category = "PicoXR|PicoXRHandTracking")
		static FString GetBoneName(EBone BoneId);
	/**
	 * Get the active input device
	 */
	UFUNCTION(BlueprintPure, Category = "PicoXR|PicoXRHandTracking")
		static EPicoXRActiveInputDevice GetActiveInputDevice();
	/**
	 * Check if the specific finger is pinching
	 *
	 * @param DeviceHand
	 * @param Finger
	 */
	UFUNCTION(BlueprintPure, Category = "PicoXR|PicoXRHandTracking")
	static bool GetFingerIsPinching(const EPicoXRHandType DeviceHand,EHandFinger Finger);
	/**
	 * Get finger pinch strength of the specific finger
	 *
	 * @param DeviceHand
	 * @param Finger
	 */
	UFUNCTION(BlueprintPure, Category = "PicoXR|PicoXRHandTracking")
	static float GetFingerPinchStrength(const EPicoXRHandType DeviceHand,EHandFinger Finger);
	/**
	 * Get finger confidence of the specific finger
	 *
	 * @param DeviceHand
	 * @param Finger
	 */
	UFUNCTION(BlueprintPure, Category = "PicoXR|PicoXRHandTracking")
	static EPicoXRHandTrackingConfidence GetFingerConfidence(const EPicoXRHandType DeviceHand,EHandFinger Finger);
	

	UFUNCTION(BlueprintCallable, Category = "PXR|PXRInput")
	static int  PXR_SetControllerEnableKey(bool isEnable, EPxrControllerKeyMap Key);
};
