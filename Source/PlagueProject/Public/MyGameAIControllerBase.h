// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "UObject/UObjectGlobals.h"
#include "AIController.h"
#include "MyGameAIControllerBase.generated.h"

/**
 * 
 */
UCLASS()
class AMyGameAIControllerBase : public AAIController
{
	GENERATED_BODY()
public:
	//DetourCrowd
	AMyGameAIControllerBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
};
