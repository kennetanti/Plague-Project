// Fill out your copyright notice in the Description page of Project Settings.

#include "MyGameAIControllerBase.h"
#include "Navigation/CrowdFollowingComponent.h"
#include "MyGameCharacterBase.h"

AMyGameAIControllerBase::AMyGameAIControllerBase(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer.SetDefaultSubobjectClass<UCrowdFollowingComponent>(TEXT("PathFollowingComponent")))
{

}

void AMyGameAIControllerBase::BeginPlay()
{
	auto pMyPawn = Cast<AMyGameCharacterBase>(GetPawn());
	if (pMyPawn)
	{
		SetGenericTeamId(FGenericTeamId(pMyPawn->TeamId));
	}

	Super::BeginPlay();
}


