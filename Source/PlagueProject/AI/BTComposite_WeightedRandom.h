// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTCompositeNode.h"
#include "BTComposite_WeightedRandom.generated.h"

/**
 * 
 */
UCLASS()
class PLAGUEPROJECT_API UBTComposite_WeightedRandom : public UBTCompositeNode
{
	GENERATED_UCLASS_BODY()

	int32 GetNextChildHandler(struct FBehaviorTreeSearchData& SearchData, int32 PrevChild, EBTNodeResult::Type LastResult) const;
	virtual FString GetStaticDescription() const override;

#if WITH_EDITOR
	virtual bool CanAbortLowerPriority() const override;
	virtual FName GetNodeIconName() const override;
#endif

/*public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weighted Random")
	float LeftChildSelectingRate;*/

};
