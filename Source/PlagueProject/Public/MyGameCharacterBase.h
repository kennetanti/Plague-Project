// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "GenericTeamAgentInterface.h"
#include "MyGameCharacterBase.generated.h"

UCLASS()
class PLAGUEPROJECT_API AMyGameCharacterBase : public ACharacter, public IGenericTeamAgentInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMyGameCharacterBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character Team")
	uint8 TeamId;

	UFUNCTION(BlueprintCallable, Category = "Character Team", meta = (Keywords = "Team"))
	virtual FGenericTeamId GetGenericTeamId() const override;
	
};
