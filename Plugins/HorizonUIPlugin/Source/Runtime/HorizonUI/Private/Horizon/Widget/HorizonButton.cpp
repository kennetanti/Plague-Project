// Fill out your copyright notice in the Description page of Project Settings.

#include "HorizonButton.h"




#if WITH_EDITOR

const FText UHorizonButton::GetPaletteCategory()
{
	return NSLOCTEXT("HorizonPlugin", "HorizonPlugin", "HorizonPlugin");
}





void UHorizonButton::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) {
	Super::PostEditChangeProperty(PropertyChangedEvent);

}
#endif //#if WITH_EDITOR

