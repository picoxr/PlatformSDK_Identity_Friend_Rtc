//Unreal® Engine, Copyright 1998 – 2022, Epic Games, Inc. All rights reserved.

#include "PXR_InputState.h"

#define LOCTEXT_NAMESPACE "PicoInputKeys"
//FPicoXRKeyNames
const FPicoKeyNames::Type FPicoKeyNames::PicoTouch_Left_X_Click("PicoTouch_Left_X_Click");
const FPicoKeyNames::Type FPicoKeyNames::PicoTouch_Left_Y_Click("PicoTouch_Left_Y_Click");
const FPicoKeyNames::Type FPicoKeyNames::PicoTouch_Left_X_Touch("PicoTouch_Left_X_Touch");
const FPicoKeyNames::Type FPicoKeyNames::PicoTouch_Left_Y_Touch("PicoTouch_Left_Y_Touch");
const FPicoKeyNames::Type FPicoKeyNames::PicoTouch_Left_Grip_Axis("PicoTouch_Left_Grip_Axis");
const FPicoKeyNames::Type FPicoKeyNames::PicoTouch_Left_Menu_Click("PicoTouch_Left_Menu_Click");
const FPicoKeyNames::Type FPicoKeyNames::PicoTouch_Left_Home_Click("PicoTouch_Left_Home_Click");
const FPicoKeyNames::Type FPicoKeyNames::PicoTouch_Left_Grip_Click("PicoTouch_Left_Grip_Click");
const FPicoKeyNames::Type FPicoKeyNames::PicoTouch_Left_Thumbstick_X("PicoTouch_Left_Thumbstick_X");
const FPicoKeyNames::Type FPicoKeyNames::PicoTouch_Left_Thumbstick_Y("PicoTouch_Left_Thumbstick_Y");
const FPicoKeyNames::Type FPicoKeyNames::PicoTouch_Left_Trigger_Axis("PicoTouch_Left_Trigger_Axis");
const FPicoKeyNames::Type FPicoKeyNames::PicoTouch_Left_Trigger_Touch("PicoTouch_Left_Trigger_Touch");
const FPicoKeyNames::Type FPicoKeyNames::PicoTouch_Left_Trigger_Click("PicoTouch_Left_Trigger_Click");
const FPicoKeyNames::Type FPicoKeyNames::PicoTouch_Left_VolumeUp_Click("PicoTouch_Left_VolumeUp_Click");
const FPicoKeyNames::Type FPicoKeyNames::PicoTouch_Left_VolumeDown_Click("PicoTouch_Left_VolumeDown_Click");
const FPicoKeyNames::Type FPicoKeyNames::PicoTouch_Left_Thumbstick_Click("PicoTouch_Left_Thumbstick_Click");
const FPicoKeyNames::Type FPicoKeyNames::PicoTouch_Left_Thumbstick_Touch("PicoTouch_Left_Thumbstick_Touch");
const FPicoKeyNames::Type FPicoKeyNames::PicoTouch_Left_Thumbrest_Touch("PicoTouch_Left_Thumbrest_Touch");
const FPicoKeyNames::Type FPicoKeyNames::PicoTouch_Left_Thumbstick_Up("PicoTouch_Left_Thumbstick_Up");
const FPicoKeyNames::Type FPicoKeyNames::PicoTouch_Left_Thumbstick_Down("PicoTouch_Left_Thumbstick_Down");
const FPicoKeyNames::Type FPicoKeyNames::PicoTouch_Left_Thumbstick_Left("PicoTouch_Left_Thumbstick_Left");
const FPicoKeyNames::Type FPicoKeyNames::PicoTouch_Left_Thumbstick_Right("PicoTouch_Left_Thumbstick_Right");

const FPicoKeyNames::Type FPicoKeyNames::PicoTouch_Right_A_Click("PicoTouch_Right_A_Click");
const FPicoKeyNames::Type FPicoKeyNames::PicoTouch_Right_B_Click("PicoTouch_Right_B_Click");
const FPicoKeyNames::Type FPicoKeyNames::PicoTouch_Right_A_Touch("PicoTouch_Right_A_Touch");
const FPicoKeyNames::Type FPicoKeyNames::PicoTouch_Right_B_Touch("PicoTouch_Right_B_Touch");
const FPicoKeyNames::Type FPicoKeyNames::PicoTouch_Right_System_Click("PicoTouch_Right_System_Click");
const FPicoKeyNames::Type FPicoKeyNames::PicoTouch_Right_Grip_Click("PicoTouch_Right_Grip_Click");
const FPicoKeyNames::Type FPicoKeyNames::PicoTouch_Right_Grip_Axis("PicoTouch_Right_Grip_Axis");
const FPicoKeyNames::Type FPicoKeyNames::PicoTouch_Right_Trigger_Click("PicoTouch_Right_Trigger_Click");
const FPicoKeyNames::Type FPicoKeyNames::PicoTouch_Right_Trigger_Axis("PicoTouch_Right_Trigger_Axis");
const FPicoKeyNames::Type FPicoKeyNames::PicoTouch_Right_Trigger_Touch("PicoTouch_Right_Trigger_Touch");
const FPicoKeyNames::Type FPicoKeyNames::PicoTouch_Right_Thumbstick_X("PicoTouch_Right_Thumbstick_X");
const FPicoKeyNames::Type FPicoKeyNames::PicoTouch_Right_Thumbstick_Y("PicoTouch_Right_Thumbstick_Y");
const FPicoKeyNames::Type FPicoKeyNames::PicoTouch_Right_Home_Click("PicoTouch_Right_Home_Click");
const FPicoKeyNames::Type FPicoKeyNames::PicoTouch_Right_VolumeUp_Click("PicoTouch_Right_VolumeUp_Click");
const FPicoKeyNames::Type FPicoKeyNames::PicoTouch_Right_VolumeDown_Click("PicoTouch_Right_VolumeDown_Click");	
const FPicoKeyNames::Type FPicoKeyNames::PicoTouch_Right_Thumbstick_Click("PicoTouch_Right_Thumbstick_Click");
const FPicoKeyNames::Type FPicoKeyNames::PicoTouch_Right_Thumbstick_Touch("PicoTouch_Right_Thumbstick_Touch");
const FPicoKeyNames::Type FPicoKeyNames::PicoTouch_Right_Thumbrest_Touch("PicoTouch_Right_Thumbrest_Touch");
const FPicoKeyNames::Type FPicoKeyNames::PicoTouch_Right_Thumbstick_Up("PicoTouch_Right_Thumbstick_Up");
const FPicoKeyNames::Type FPicoKeyNames::PicoTouch_Right_Thumbstick_Down("PicoTouch_Right_Thumbstick_Down");
const FPicoKeyNames::Type FPicoKeyNames::PicoTouch_Right_Thumbstick_Left("PicoTouch_Right_Thumbstick_Left");
const FPicoKeyNames::Type FPicoKeyNames::PicoTouch_Right_Thumbstick_Right("PicoTouch_Right_Thumbstick_Right");

const FPicoKeyNames::Type FPicoKeyNames::PicoHand_Left_ThumbPinch("PicoHand_Left_ThumbPinch");
const FPicoKeyNames::Type FPicoKeyNames::PicoHand_Left_IndexPinch("PicoHand_Left_IndexPinch");
const FPicoKeyNames::Type FPicoKeyNames::PicoHand_Left_MiddlePinch("PicoHand_Left_MiddlePinch");
const FPicoKeyNames::Type FPicoKeyNames::PicoHand_Left_RingPinch("PicoHand_Left_RingPinch");
const FPicoKeyNames::Type FPicoKeyNames::PicoHand_Left_PinkyPinch("PicoHand_Left_PinkPinch");

const FPicoKeyNames::Type FPicoKeyNames::PicoHand_Right_ThumbPinch("PicoHand_Right_ThumbPinch");
const FPicoKeyNames::Type FPicoKeyNames::PicoHand_Right_IndexPinch("PicoHand_Right_IndexPinch");
const FPicoKeyNames::Type FPicoKeyNames::PicoHand_Right_MiddlePinch("PicoHand_Right_MiddlePinch");
const FPicoKeyNames::Type FPicoKeyNames::PicoHand_Right_RingPinch("PicoHand_Right_RingPinch");
const FPicoKeyNames::Type FPicoKeyNames::PicoHand_Right_PinkyPinch("PicoHand_Right_PinkPinch");

const FPicoKeyNames::Type FPicoKeyNames::PicoHand_Left_SystemGesture("PicoHand_Left_SystemGesture");
const FPicoKeyNames::Type FPicoKeyNames::PicoHand_Right_SystemGesture("PicoHand_Right_SystemGesture");

const FPicoKeyNames::Type FPicoKeyNames::PicoHand_Left_ThumbPinchStrength("PicoHand_Left_ThumbPinchStrength");
const FPicoKeyNames::Type FPicoKeyNames::PicoHand_Left_IndexPinchStrength("PicoHand_Left_IndexPinchStrength");
const FPicoKeyNames::Type FPicoKeyNames::PicoHand_Left_MiddlePinchStrength("PicoHand_Left_MiddlePinchStrength");
const FPicoKeyNames::Type FPicoKeyNames::PicoHand_Left_RingPinchStrength("PicoHand_Left_RingPinchStrength");
const FPicoKeyNames::Type FPicoKeyNames::PicoHand_Left_PinkyPinchStrength("PicoHand_Left_PinkPinchStrength");

const FPicoKeyNames::Type FPicoKeyNames::PicoHand_Right_ThumbPinchStrength("PicoHand_Right_ThumbPinchStrength");
const FPicoKeyNames::Type FPicoKeyNames::PicoHand_Right_IndexPinchStrength("PicoHand_Right_IndexPinchStrength");
const FPicoKeyNames::Type FPicoKeyNames::PicoHand_Right_MiddlePinchStrength("PicoHand_Right_MiddlePinchStrength");
const FPicoKeyNames::Type FPicoKeyNames::PicoHand_Right_RingPinchStrength("PicoHand_Right_RingPinchStrength");
const FPicoKeyNames::Type FPicoKeyNames::PicoHand_Right_PinkyPinchStrength("PicoHand_Right_PinkPinchStrength");


const FKey FPicoTouchKey::PicoTouch_Left_Home_Click("PicoTouch_Left_Home_Click");
const FKey FPicoTouchKey::PicoTouch_Left_VolumeUp_Click("PicoTouch_Left_VolumeUp_Click");
const FKey FPicoTouchKey::PicoTouch_Left_VolumeDown_Click("PicoTouch_Left_VolumeDown_Click");
const FKey FPicoTouchKey::PicoTouch_Left_X_Click("PicoTouch_Left_X_Click");
const FKey FPicoTouchKey::PicoTouch_Left_Y_Click("PicoTouch_Left_Y_Click");
const FKey FPicoTouchKey::PicoTouch_Left_X_Touch("PicoTouch_Left_X_Touch");
const FKey FPicoTouchKey::PicoTouch_Left_Y_Touch("PicoTouch_Left_Y_Touch");
const FKey FPicoTouchKey::PicoTouch_Left_Menu_Click("PicoTouch_Left_Menu_Click");
const FKey FPicoTouchKey::PicoTouch_Left_Grip_Click("PicoTouch_Left_Grip_Click");
const FKey FPicoTouchKey::PicoTouch_Left_Grip_Axis("PicoTouch_Left_Grip_Axis");
const FKey FPicoTouchKey::PicoTouch_Left_Trigger_Click("PicoTouch_Left_Trigger_Click");
const FKey FPicoTouchKey::PicoTouch_Left_Trigger_Axis("PicoTouch_Left_Trigger_Axis");
const FKey FPicoTouchKey::PicoTouch_Left_Trigger_Touch("PicoTouch_Left_Trigger_Touch");
const FKey FPicoTouchKey::PicoTouch_Left_Thumbstick_X("PicoTouch_Left_Thumbstick_X");
const FKey FPicoTouchKey::PicoTouch_Left_Thumbstick_Y("PicoTouch_Left_Thumbstick_Y");
const FKey FPicoTouchKey::PicoTouch_Left_Thumbstick_Click("PicoTouch_Left_Thumbstick_Click");
const FKey FPicoTouchKey::PicoTouch_Left_Thumbstick_Touch("PicoTouch_Left_Thumbstick_Touch");
const FKey FPicoTouchKey::PicoTouch_Left_Thumbrest_Touch("PicoTouch_Left_Thumbrest_Touch");
const FKey FPicoTouchKey::PicoTouch_Left_Thumbstick_Up("PicoTouch_Left_Thumbstick_Up");
const FKey FPicoTouchKey::PicoTouch_Left_Thumbstick_Down("PicoTouch_Left_Thumbstick_Down");
const FKey FPicoTouchKey::PicoTouch_Left_Thumbstick_Left("PicoTouch_Left_Thumbstick_Left");
const FKey FPicoTouchKey::PicoTouch_Left_Thumbstick_Right("PicoTouch_Left_Thumbstick_Right");

const FKey FPicoTouchKey::PicoTouch_Right_Home_Click("PicoTouch_Right_Home_Click");
const FKey FPicoTouchKey::PicoTouch_Right_VolumeUp_Click("PicoTouch_Right_VolumeUp_Click");
const FKey FPicoTouchKey::PicoTouch_Right_VolumeDown_Click("PicoTouch_Right_VolumeDown_Click");
const FKey FPicoTouchKey::PicoTouch_Right_A_Click("PicoTouch_Right_A_Click");
const FKey FPicoTouchKey::PicoTouch_Right_B_Click("PicoTouch_Right_B_Click");
const FKey FPicoTouchKey::PicoTouch_Right_A_Touch("PicoTouch_Right_A_Touch");
const FKey FPicoTouchKey::PicoTouch_Right_B_Touch("PicoTouch_Right_B_Touch");
const FKey FPicoTouchKey::PicoTouch_Right_System_Click("PicoTouch_Right_System_Click");
const FKey FPicoTouchKey::PicoTouch_Right_Grip_Click("PicoTouch_Right_Grip_Click");
const FKey FPicoTouchKey::PicoTouch_Right_Grip_Axis("PicoTouch_Right_Grip_Axis");
const FKey FPicoTouchKey::PicoTouch_Right_Trigger_Click("PicoTouch_Right_Trigger_Click");
const FKey FPicoTouchKey::PicoTouch_Right_Trigger_Axis("PicoTouch_Right_Trigger_Axis");
const FKey FPicoTouchKey::PicoTouch_Right_Trigger_Touch("PicoTouch_Right_Trigger_Touch");
const FKey FPicoTouchKey::PicoTouch_Right_Thumbstick_X("PicoTouch_Right_Thumbstick_X");
const FKey FPicoTouchKey::PicoTouch_Right_Thumbstick_Y("PicoTouch_Right_Thumbstick_Y");
const FKey FPicoTouchKey::PicoTouch_Right_Thumbstick_Click("PicoTouch_Right_Thumbstick_Click");
const FKey FPicoTouchKey::PicoTouch_Right_Thumbstick_Touch("PicoTouch_Right_Thumbstick_Touch");
const FKey FPicoTouchKey::PicoTouch_Right_Thumbrest_Touch("PicoTouch_Right_Thumbrest_Touch");
const FKey FPicoTouchKey::PicoTouch_Right_Thumbstick_Up("PicoTouch_Right_Thumbstick_Up");
const FKey FPicoTouchKey::PicoTouch_Right_Thumbstick_Down("PicoTouch_Right_Thumbstick_Down");
const FKey FPicoTouchKey::PicoTouch_Right_Thumbstick_Left("PicoTouch_Right_Thumbstick_Left");
const FKey FPicoTouchKey::PicoTouch_Right_Thumbstick_Right("PicoTouch_Right_Thumbstick_Right");

const FKey FPicoTouchKey::PicoHand_Right_ThumbPinch("PicoHand_Right_ThumbPinch");
const FKey FPicoTouchKey::PicoHand_Right_IndexPinch("PicoHand_Right_IndexPinch");
const FKey FPicoTouchKey::PicoHand_Right_MiddlePinch("PicoHand_Right_MiddlePinch");
const FKey FPicoTouchKey::PicoHand_Right_RingPinch("PicoHand_Right_RingPinch");
const FKey FPicoTouchKey::PicoHand_Right_PinkyPinch("PicoHand_Right_PinkyPinch");

const FKey FPicoTouchKey::PicoHand_Left_ThumbPinch("PicoHand_Left_ThumbPinch");
const FKey FPicoTouchKey::PicoHand_Left_IndexPinch("PicoHand_Left_IndexPinch");
const FKey FPicoTouchKey::PicoHand_Left_MiddlePinch("PicoHand_Left_MiddlePinch");
const FKey FPicoTouchKey::PicoHand_Left_RingPinch("PicoHand_Left_RingPinch");
const FKey FPicoTouchKey::PicoHand_Left_PinkyPinch("PicoHand_Left_PinkyPinch");

const FKey FPicoTouchKey::PicoHand_Left_SystemGesture("PicoHand_Left_SystemGesture");
const FKey FPicoTouchKey::PicoHand_Right_SystemGesture("PicoHand_Right_SystemGesture");

const FKey FPicoTouchKey::PicoHand_Left_ThumbPinchStrength("PicoHand_Left_ThumbPinchStrength");
const FKey FPicoTouchKey::PicoHand_Left_IndexPinchStrength("PicoHand_Left_IndexPinchStrength");
const FKey FPicoTouchKey::PicoHand_Left_MiddlePinchStrength("PicoHand_Left_MiddlePinchStrength");
const FKey FPicoTouchKey::PicoHand_Left_RingPinchStrength("PicoHand_Left_RingPinchStrength");
const FKey FPicoTouchKey::PicoHand_Left_PinkyPinchStrength("PicoHand_Left_PinkyPinchStrength");

const FKey FPicoTouchKey::PicoHand_Right_ThumbPinchStrength("PicoHand_Right_ThumbPinchStrength");
const FKey FPicoTouchKey::PicoHand_Right_IndexPinchStrength("PicoHand_Right_IndexPinchStrength");
const FKey FPicoTouchKey::PicoHand_Right_MiddlePinchStrength("PicoHand_Right_MiddlePinchStrength");
const FKey FPicoTouchKey::PicoHand_Right_RingPinchStrength("PicoHand_Right_RingPinchStrength");
const FKey FPicoTouchKey::PicoHand_Right_PinkyPinchStrength("PicoHand_Right_PinkyPinchStrength");



#undef LOCTEXT_NAMESPACE