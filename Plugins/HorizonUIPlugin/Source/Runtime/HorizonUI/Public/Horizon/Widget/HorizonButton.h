// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Components/Button.h"
#include "HorizonButton.generated.h"

/**
 * 
 */
UCLASS()
class UHorizonButton : public UButton
{
	GENERATED_BODY()
public:
#if WITH_EDITOR
		//~ Begin UWidget Interface
		//#if (ENGINE_MAJOR_VERSION <= 4) && (ENGINE_MINOR_VERSION <= 12)
		//virtual const FSlateBrush* GetEditorIcon() override;
		//#endif
	virtual const FText GetPaletteCategory() override;

	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif

	
	
};
