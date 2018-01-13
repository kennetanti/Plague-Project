// Crated by dorgon, All Rights Reserved.
// email: dorgonman@hotmail.com
// blog: dorgon.horizon-studio.net
#include "HorizonDialogueMsgTextBlock.h"
#include "HorizonUIPrivate.h"
#include "HorizonWidgetFunctionLibrary.h"
void UHorizonDialogueMsgTextBlock::RebuildPageInfoList()
{
	DialoguePageInfoList.Empty();


	UCanvasPanelSlot* pTextBlockCanvasPanelSlot = UHorizonWidgetFunctionLibrary::GetParentCanvasPanelSlot(this);
	if (nullptr == pTextBlockCanvasPanelSlot)
	{
		return;
	}
	float canvasHeight = pTextBlockCanvasPanelSlot->GetSize().Y;
	auto pTextBlockCanvasPanelSlotAnchor = pTextBlockCanvasPanelSlot->GetAnchors();

	if (!FMath::IsNearlyEqual(pTextBlockCanvasPanelSlotAnchor.Maximum.Y, pTextBlockCanvasPanelSlotAnchor.Minimum.Y))
	{
		auto geometry = GetCachedGeometry();
		canvasHeight = geometry.Size.Y;
	}

	int startLineIndex = 0;
	int currentLineIndex = 0;
	float currentPageHeight = 0;
	while (currentLineIndex < DialogueLineInfoList.Num())
	{
		const auto& lineInfo = DialogueLineInfoList[currentLineIndex];
		float maxPageHeight = FMath::Max((float)Font.Size, canvasHeight - lineInfo.MaxLineHeight);
		if (currentPageHeight >= maxPageHeight)
		{
			//handle extreme case, just paging everyline if startLineIndex == (currentLineIndex - 1)
			if (startLineIndex != (currentLineIndex - 1) )
			{
				--currentLineIndex;
				currentPageHeight = currentPageHeight - (LineMargin.Bottom);
				currentPageHeight = currentPageHeight - lineInfo.MaxLineHeight;
			}
			DialoguePageInfoList.Add(FHorizonDialoguePageInfo(startLineIndex, currentLineIndex, currentPageHeight));
			startLineIndex = currentLineIndex;
			currentPageHeight = 0;
		}
		else
		{
			if (FMath::IsNearlyZero(currentPageHeight))
			{
				currentPageHeight += LineMargin.Top;
			}
			else
			{
				currentPageHeight += LineMargin.Bottom;
			}

			currentPageHeight = currentPageHeight + lineInfo.MaxLineHeight;
			++currentLineIndex;

		}

	}

	//last page
	DialoguePageInfoList.Add(FHorizonDialoguePageInfo(startLineIndex, currentLineIndex, currentPageHeight));

}

void UHorizonDialogueMsgTextBlock::SetPageVisiblity(bool bVisibility, const FHorizonDialoguePageInfo& InPageInfo)
{
	for (int i = InPageInfo.StartLineIndex; i < InPageInfo.EndLineIndex; ++i)
	{
		FHorizonDialogueLineInfo& lineInfo = DialogueLineInfoList[i];
		for (auto& blockInfo : lineInfo.DialogueBlockInfoList)
		{
			if (blockInfo.WidgetWeakPtr.IsValid()) {
				if (bVisibility)
				{
					blockInfo.WidgetWeakPtr->SetVisibility(ESlateVisibility::HitTestInvisible);
				}
				else
				{
					blockInfo.WidgetWeakPtr->SetVisibility(ESlateVisibility::Hidden);

				}
			}
			if (blockInfo.WidgetBackgroundWeakPtr.IsValid())
			{
				if (bVisibility)
				{
					blockInfo.WidgetBackgroundWeakPtr->SetVisibility(ESlateVisibility::Visible);
				}
				else
				{
					blockInfo.WidgetBackgroundWeakPtr->SetVisibility(ESlateVisibility::Hidden);
				}
			}
		}
	
	}

}



void UHorizonDialogueMsgTextBlock::NextDialogueMsgPage()
{
	++CurrentPageIndex;
	CurrentPageIndex = FMath::Min(CurrentPageIndex, DialoguePageInfoList.Num());
	SetDialogueMsgPage(CurrentPageIndex);
}


void UHorizonDialogueMsgTextBlock::SetDialogueMsgPage(int PageIndex)
{


	if (PageIndex < DialoguePageInfoList.Num())
	{
		for (auto& it : DialoguePageInfoList)
		{
			SetPageVisiblity(false, it);
		}
		CurrentPageHeightOffset = 0.0f;
		for (int i = 0; i < PageIndex; ++i)
		{
			CurrentPageHeightOffset += DialoguePageInfoList[i].PageHeight;	
			CurrentPageHeightOffset = CurrentPageHeightOffset + (LineMargin.Bottom - LineMargin.Top);
		}
		
		FHorizonDialogueSetDialoguePageResult result;
		result.PageIndex = PageIndex;
		OnSetDialoguePageFunction.Broadcast(result);
		OnSetDialoguePageFunctionNative.Broadcast(result);
	}
}
