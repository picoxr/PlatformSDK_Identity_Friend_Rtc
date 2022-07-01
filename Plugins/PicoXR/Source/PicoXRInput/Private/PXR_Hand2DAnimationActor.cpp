// Fill out your copyright notice in the Description page of Project Settings.


#include "PXR_Hand2DAnimationActor.h"

// Sets default values
APXR_HandUIAnimation2DActor::APXR_HandUIAnimation2DActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void APXR_HandUIAnimation2DActor::SetCurrnetLoadingType(const ELoadingType In_CurrentLoadingType)
{
	this->CurrentLoadingType=In_CurrentLoadingType;
}

ELoadingType APXR_HandUIAnimation2DActor::GetCurrentLoadingType() const
{
	return this->CurrentLoadingType;
}

// Called when the game starts or when spawned
void APXR_HandUIAnimation2DActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APXR_HandUIAnimation2DActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

