// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PXR_Hand2DAnimationActor.generated.h"

UENUM(BlueprintType)
enum class ELoadingType:uint8
{
	HomeGestureLoading,
	ResetGestureLoading
};

UCLASS()
class PICOXRINPUT_API APXR_HandUIAnimation2DActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APXR_HandUIAnimation2DActor();
	UFUNCTION(BlueprintImplementableEvent)
		void ActiveLoadingAnimation(ELoadingType In_LoadingType,float In_LoadingTime);
	UFUNCTION(BlueprintCallable,Category="PicoXR|PicoXRHandTracking")
	void SetCurrnetLoadingType(const ELoadingType CurrentLoadingType);
	ELoadingType GetCurrentLoadingType() const;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	ELoadingType CurrentLoadingType;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
