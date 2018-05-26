// Fill out your copyright notice in the Description page of Project Settings.

#include "MyGameCharacterBase.h"


// Sets default values
AMyGameCharacterBase::AMyGameCharacterBase()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyGameCharacterBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyGameCharacterBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMyGameCharacterBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

FGenericTeamId AMyGameCharacterBase::GetGenericTeamId() const
{
	return FGenericTeamId(TeamId);
}

