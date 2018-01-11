// Crated by dorgon, All Rights Reserved.
// email: dorgonman@hotmail.com
// blog: dorgon.horizon-studio.net

#include "HorizonWidgetFunctionLibrary.h"

#include "PaperFlipbook.h"
#include "PaperFlipbookComponent.h"
#include "PaperSprite.h"

UCanvasPanelSlot* UHorizonWidgetFunctionLibrary::GetParentCanvasPanelSlot(UWidget* pWidget){
	UCanvasPanelSlot* pPanelSlot = nullptr;
	//try to find out UCanvasPanelSlot, search from current widget
	UWidget* pTargetWidget = pWidget;
	if (pTargetWidget) {
		do {

			pPanelSlot = Cast<UCanvasPanelSlot>(pTargetWidget->Slot);
			if (pPanelSlot) {
				break;
			}
			else {
				if (pTargetWidget) {
					pTargetWidget = pTargetWidget->GetParent();
					//verifyf(pTargetWidget, TEXT("oops! something error"));
				}
				else {
					break;
				}
			}

		} while (pPanelSlot == nullptr && pTargetWidget != nullptr);
	}

	return pPanelSlot;

}

#if WITH_EDITOR

void UHorizonWidgetFunctionLibrary::RebuildFlipbook(const UPaperFlipbook* PaperFlipbook, 
	TArray<FVector2D>& OutSourceUV, 
	TArray<FVector2D>& OutSourceSize)
{
	OutSourceUV.Empty();
	OutSourceSize.Empty();

	if (PaperFlipbook) {
		int numFrame = PaperFlipbook->GetNumFrames();
		int numKeyFrame = PaperFlipbook->GetNumKeyFrames();
		for (int i = 0; i < numKeyFrame; i++) {
			auto spriter = PaperFlipbook->GetSpriteAtFrame(i);
			if (spriter) {
				OutSourceUV.Add(spriter->GetSourceUV());
				OutSourceSize.Add(spriter->GetSourceSize());
	
			}

		}
	}
}
#endif //#if WITH_EDITOR


UWidgetAnimation* UHorizonWidgetFunctionLibrary::GetUserWidgetAnimation(UUserWidget* pUserWidget,
	const FName& animeName) 
{
	UWidgetBlueprintGeneratedClass* pBGClass = Cast<UWidgetBlueprintGeneratedClass>(pUserWidget->GetClass());
	return GetUserWidgetAnimation(pBGClass, animeName);
}

UWidgetAnimation* UHorizonWidgetFunctionLibrary::GetUserWidgetAnimation(
	UWidgetBlueprintGeneratedClass* pBGClass, 
	const FName& animeName) 
{
	if (pBGClass) {
		for (UWidgetAnimation* Animation : pBGClass->Animations)
		{
			if (Animation->MovieScene)
			{
				if (animeName.IsEqual(Animation->MovieScene->GetFName())) {
					return Animation;
				}
			}
		}
	}
	return nullptr;

}