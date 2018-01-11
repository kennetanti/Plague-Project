// Crated by dorgon, All Rights Reserved.
// email: dorgonman@hotmail.com
// blog: dorgon.horizon-studio.net

#pragma once
#include "WidgetAnimation.h"
#include "MovieScene.h"
#include "UMG.h"
#include "HorizonWidgetFunctionLibrary.generated.h"

class UPaperFlipbook;
UCLASS()
class HORIZONUI_API UHorizonWidgetFunctionLibrary : public UBlueprintFunctionLibrary {
private:
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "HorizonPlugin|WidgetHelper")
		static UCanvasPanelSlot* GetParentCanvasPanelSlot(UWidget* pWidget);


#if WITH_EDITOR
	//UFUNCTION(BlueprintCallable, Category = "HorizonPlugin|WidgetHelper")
		static void RebuildFlipbook(const UPaperFlipbook* PaperFlipbook, 
			TArray<FVector2D>& OutSourceUV, 
			TArray<FVector2D>& OutSourceSize);
#endif //#if WITH_EDITOR


	UFUNCTION(BlueprintCallable, Category = "HorizonPlugin|WidgetHelper")
	static UWidgetAnimation* GetUserWidgetAnimation(UUserWidget* pUserWidget, 
		const FName& animeName);

	static UWidgetAnimation* GetUserWidgetAnimation(
		UWidgetBlueprintGeneratedClass* pBGClass,
		const FName& animeName);


};