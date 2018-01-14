// Crated by dorgon, All Rights Reserved.
// email: dorgonman@hotmail.com
// blog: dorgon.horizon-studio.net
#include "HorizonDialogueMsgTextBlock.h"
#include "HorizonUIPrivate.h"
#include "HorizonTextBlock.h"
#include "HorizonImage.h"
#include "HorizonFlipbookWidget.h"
bool UHorizonDialogueMsgTextBlock::IsTickable() const
{
	return (bIsStartTickDialogueMsg || bNeedRebuildDialogueMsgText) && MyCanvas.IsValid();
}



void UHorizonDialogueMsgTextBlock::Tick(float DeltaTime) {


	if (bNeedRebuildDialogueMsgText)
	{
		auto geometry = GetCachedGeometry();
		if (geometry.Size.X > 0 && geometry.Size.Y > 0)
		{
			bNeedRebuildDialogueMsgText = false;
			RebuildDialogueMsgTextBlock();
		}
		return;
	}




	if (CurrentPageIndex < DialoguePageInfoList.Num() && DialoguePageInfoList.Num() > 0)
	{
	
		auto currentPageInfo = DialoguePageInfoList[CurrentPageIndex];
		if (CurrentDialogueLineIndex < currentPageInfo.EndLineIndex)
		{
			MsgDeltaTime += DeltaTime;
			FHorizonDialogueLineInfo& lineInfo = DialogueLineInfoList[CurrentDialogueLineIndex];
			if (lineInfo.CurrentDialogueBlockIndex < lineInfo.DialogueBlockInfoList.Num()) {
				FHorizonDialogueBlockInfo& blockInfo = lineInfo.DialogueBlockInfoList[lineInfo.CurrentDialogueBlockIndex];
				const FHorizonDialogueSegmentInfo& segInfo = DialogueSegmentInfoList[blockInfo.SegmentReferenceIndex];
				switch (segInfo.TypeEnum) {
				case EHorizonDialogueSegmentType::Text:
				{
					if (blockInfo.DialogueSound && false == blockInfo.bDialogueSoundPlayed)
					{
						blockInfo.bDialogueSoundPlayed = true;

						UGameplayStatics::PlaySound2D(this, blockInfo.DialogueSound,
							segInfo.DialogueSoundVolumeMultiplier,
							segInfo.DialogueSoundPitchMultiplier, segInfo.DialogueSoundStartTime);
					}
					if (blockInfo.CurrentCharIndex < blockInfo.MsgText.Len()) {

						if (MsgDeltaTime >= segInfo.DialogueMsgSpeed) {
							int numWord = FMath::FloorToInt(MsgDeltaTime / segInfo.DialogueMsgSpeed);
							blockInfo.CurrentCharIndex += numWord;
							auto subStr = blockInfo.MsgText.Mid(0, blockInfo.CurrentCharIndex);

							if (blockInfo.WidgetWeakPtr.IsValid() && blockInfo.WidgetWeakPtr->IsA<UHorizonTextBlock>())
							{
								auto pTextBlock = Cast<UHorizonTextBlock>(blockInfo.WidgetWeakPtr.Get());
								pTextBlock->SetVisibility(ESlateVisibility::HitTestInvisible);
								pTextBlock->SetText(FText::FromString(subStr));
							}
							MsgDeltaTime = 0.0f;
						}
					}
					//advanced blockIndex
					if (blockInfo.CurrentCharIndex >= blockInfo.MsgText.Len()) {
						++lineInfo.CurrentDialogueBlockIndex;
					}

				}
				break;
				case EHorizonDialogueSegmentType::Image:
				case EHorizonDialogueSegmentType::PaperFlipbook:
				case EHorizonDialogueSegmentType::Material:
				{
					if (blockInfo.WidgetWeakPtr.IsValid()) {
						blockInfo.WidgetWeakPtr->SetVisibility(ESlateVisibility::HitTestInvisible);
					}

					if (blockInfo.DialogueSound && false == blockInfo.bDialogueSoundPlayed)
					{
						blockInfo.bDialogueSoundPlayed = true;

						UGameplayStatics::PlaySound2D(this, blockInfo.DialogueSound,
							segInfo.DialogueSoundVolumeMultiplier,
							segInfo.DialogueSoundPitchMultiplier, segInfo.DialogueSoundStartTime);
					}

					++lineInfo.CurrentDialogueBlockIndex;
				}
				break;
				case EHorizonDialogueSegmentType::HyperText:
				{
					++lineInfo.CurrentDialogueBlockIndex;
					
				}
				break;
				}

				
				UCanvasPanelSlot* canvasPanelSlot = Cast<UCanvasPanelSlot>(blockInfo.WidgetWeakPtr->Slot);
				auto currentPosition = canvasPanelSlot->GetPosition();
				if (CurrentPageIndex > 0)
				{
					currentPosition.Y = lineInfo.Position.Y - CurrentPageHeightOffset;
				}
				//Debug auto page position
				//if (currentPageInfo.StartLineIndex == CurrentDialogueLineIndex)
				//{
				//	UE_LOG(LogTemp, Log, TEXT("page %d, line: %d, %f"), CurrentPageIndex, CurrentDialogueLineIndex, currentPosition.Y);
				//}
				canvasPanelSlot->SetPosition(currentPosition);
				if (blockInfo.WidgetBackgroundWeakPtr.IsValid())
				{
					blockInfo.WidgetBackgroundWeakPtr->SetVisibility(ESlateVisibility::Visible);
					UCanvasPanelSlot* buttonCanvasPanelSlot = Cast<UCanvasPanelSlot>(blockInfo.WidgetBackgroundWeakPtr->Slot);
					if (buttonCanvasPanelSlot)
					{
						buttonCanvasPanelSlot->SetPosition(currentPosition);
					}
				}
			}


			

			//add line index if all Dialogue block shown
			if (lineInfo.CurrentDialogueBlockIndex >= lineInfo.DialogueBlockInfoList.Num())
			{
		
				CurrentDialogueLineIndex++;
			}
		}
		else 
		{
			if (DialoguePageInfoList.Num() > 1)
			{

				if (bAutoNextDialogueMsgPage)
				{
					AutoNextDialogueMsgPageDeltaTime += DeltaTime;
					if (AutoNextDialogueMsgPageDeltaTime >= AutoNextDialogueMsgPageInterval)
					{
						AutoNextDialogueMsgPageDeltaTime = 0.0f;
						NextDialogueMsgPage();
					}
				}
			}
			else
			{
				NextDialogueMsgPage();
			}

		
		}
	}
	else
	{
		if (CurrentDialogueLineIndex >= DialogueLineInfoList.Num())
		{
			if (bIsRepeatDialogueMsg) {
				//ResetDialogueText();
				RepeatDialogueMsgDeltaTime += DeltaTime;
				if (RepeatDialogueMsgDeltaTime >= RepeatDialogueMsgInterval) {
					SetIsStartTickDialogueMsg(true);
					OnDialogueMsgLoopFunction.Broadcast();
					OnDialogueMsgLoopFunctionNative.Broadcast();
					RepeatDialogueMsgDeltaTime = 0.0f;
				}
			}
			else {
				SetIsStartTickDialogueMsg(false);
				OnDialogueMsgCompleteFunction.Broadcast();
				OnDialogueMsgCompleteFunctionNative.Broadcast();

			}
		}

	}
}