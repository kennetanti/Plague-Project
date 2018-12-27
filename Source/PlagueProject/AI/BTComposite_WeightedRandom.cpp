// Fill out your copyright notice in the Description page of Project Settings.

#include "BTComposite_WeightedRandom.h"

UBTComposite_WeightedRandom::UBTComposite_WeightedRandom(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)// , LeftChildSelectingRate(1.0f)
{
	NodeName = "Random Selector";
	//OnNextChild.BindUObject(this, &UBTComposite_WeightedRandom::GetNextChildHandler);
}

int32 UBTComposite_WeightedRandom::GetNextChildHandler(FBehaviorTreeSearchData& SearchData, int32 PrevChild, EBTNodeResult::Type LastResult) const
{
	int32 NextChildIndex = BTSpecialChild::ReturnToParent;
	int32 ChildrenNum = GetChildrenNum();

	/*if (GetChildrenNum() == 2 && PrevChild == BTSpecialChild::NotInitialized)
	{
		const int32 LeftChildIndex = 0;
		const int32 RightChildIndex = 1;
		NextChildIndex = (FMath::FRand() <= LeftChildSelectingRate) ? LeftChildIndex : RightChildIndex;
	}
	return NextChildIndex;*/

	if (ChildrenNum > 0 && PrevChild == BTSpecialChild::NotInitialized)
	{
		NextChildIndex = FMath::RandRange(0, ChildrenNum - 1);
	}
	else if (LastResult == EBTNodeResult::Failed)
	{
		NextChildIndex = ((PrevChild + 1) < ChildrenNum) ? (PrevChild + 1) : 0;
	}
	return NextChildIndex;
}

FString UBTComposite_WeightedRandom::GetStaticDescription() const
{
	int32 ChildrenNum = GetChildrenNum();

	/*if (ChildrenNum == 2)
	{
		float LeftPercentage = LeftChildSelectingRate * 100;
		float RightPercentage = 100 - LeftPercentage;
		return FString::Printf(TEXT("Left : %.2f / Right : %.2f"), LeftPercentage, RightPercentage);
	}
	return FString::Printf(TEXT("Warning : Connect Just 2 Children Nodes (Currently %d Node(s))"), ChildrenNum);*/
	return FString::Printf(TEXT("Random %d Nodes"), ChildrenNum);
}
#if WITH_EDITOR
bool UBTComposite_WeightedRandom::CanAbortLowerPriority() const
{
	return false;
}
FName UBTComposite_WeightedRandom::GetNodeIconName() const
{
	return FName("BTEditor.Graph.BTNode.Composite.Selector.Icon");
}
#endif




