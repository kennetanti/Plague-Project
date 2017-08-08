// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "CustomBpNode.generated.h"

class UCrowdFollowingComponent;

/**
 * 
 */
UCLASS()
class COMBATSYSTEM_API UCustomBpNode : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	UFUNCTION(BlueprintPure, meta = (DisplayName = "One Left Shift", CompactNodeTitle = "1 <<"), Category = "MyBlueprintNode")
		static INT32 OneLeftShift(INT32 flag);
	
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Action Mappings Key"), Category = "MyBlueprintNode")
		static void GetActionMappingsKey(const  FName _ActionName, bool &_Success, TArray<FKey> &_Keys);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Set Crowd Obstacle Avoidance"), Category = "MyBlueprintNode")
		static void SetCrowdObstacleAvoidance(UCrowdFollowingComponent* crowdComponent, bool bEnable);
};
