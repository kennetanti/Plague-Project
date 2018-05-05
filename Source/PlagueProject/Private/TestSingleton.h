// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TestSingleton.generated.h"

/**
 * 
 */
UCLASS(BlueprintType, Blueprintable)
class UTestSingleton : public UObject
{
private:
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintPure, Category = "TestSingleton", meta = (Keywords = "GetInstance"))
		static UTestSingleton* GetInstance();

	UFUNCTION(BlueprintCallable, Category = "TestSingleton", meta = (Keywords = "Instance"))
		UTestSingleton* Instance();
};
