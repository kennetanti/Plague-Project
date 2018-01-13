// Created by dorgon, All Rights Reserved.
// email: dorgonman@hotmail.com
// blog: dorgon.horizon-studio.net
#include "HorizonDialogueMsgTextBlock.h"

//HorizonUI
#include "HorizonWidgetFunctionLibrary.h"


//engine
#include "Kismet/KismetStringLibrary.h"


#define LOCTEXT_NAMESPACE "UMG"



bool UHorizonDialogueMsgTextBlock::TryAddNewLine(
	TCHAR currentChar, float& currentLineWidth, 
	FVector2D& blockPos,
	const int& currentSegInfoIndex, int& segStartCharIndex, int& segCharIndex)
{
	bool bResult = (currentChar == '\n');
	if (bResult) {
		//float linePosY = (DialogueLineInfoList.Last().MaxLineHeight * (DialogueLineInfoList.Num()-1)) + lineOffsetY;
		AddDialogueBlock(DialogueLineInfoList.Last(),
			CreateDialogueTextBlockInfo(currentSegInfoIndex, segStartCharIndex, segCharIndex, blockPos));

		//skip this char and advance for next line
		++segCharIndex;
		segStartCharIndex = segCharIndex;

		blockPos.X = LineMargin.Left;
		//new line
		DialogueLineInfoList.Last().LineWidth = currentLineWidth;
		DialogueLineInfoList.Add(FHorizonDialogueLineInfo());
		currentLineWidth = 0;
	}

	return bResult;

}

bool UHorizonDialogueMsgTextBlock::TryAddDialogueBlock(
	const float& maxLineWidth,
	const FVector2D& oneWordSize, float& currentLineWidth,
	FVector2D& blockPos,
	const int& currentSegInfoIndex, int& segStartCharIndex, int& segCharIndex,
	bool bWordBreakMode)
{
	bool bResult = false;

	if (currentLineWidth > (maxLineWidth - oneWordSize.X)) 
	{
		if (bWordBreakMode && currentLineWidth == 0)
		{
			//each line should has one char at least
			++segCharIndex;
		}


		AddDialogueBlock(DialogueLineInfoList.Last(),
			CreateDialogueTextBlockInfo(currentSegInfoIndex, segStartCharIndex, segCharIndex, blockPos));
		ensureMsgf(segStartCharIndex != segCharIndex, TEXT("oops! something error"));
		segStartCharIndex = segCharIndex;

		blockPos.X = LineMargin.Left;
		//new line
		DialogueLineInfoList.Last().LineWidth = currentLineWidth;
		DialogueLineInfoList.Add(FHorizonDialogueLineInfo());
		//don't skip this char and advance for next line
		currentLineWidth = 0;
		bResult = true;
		
	}
	return bResult;

}



void UHorizonDialogueMsgTextBlock::TextOverflowWarpNormal_WordBreakImplement(int& segCharIndex, int& segWordCharEndIndex, 
	float& currentLineWidth, FVector2D& blockPos, const int& currentSegInfoIndex,
	const float& maxLineWidth, const FHorizonDialogueSegmentInfo& segInfo)
{
	int segStartCharIndex = segCharIndex;
	//int segCharIndex = 0;
	const TSharedRef< FSlateFontMeasure >& FontMeasure = FSlateApplication::Get().GetRenderer()->GetFontMeasureService();
	while (segCharIndex < segWordCharEndIndex) {

		//first line only calculate from top
		if (DialogueLineInfoList.Num() == 1) {
			blockPos.Y = LineMargin.Top;
		}
		else {
			blockPos.Y = DialogueLineInfoList.Last(1).Position.Y + DialogueLineInfoList.Last(1).MaxLineHeight + LineMargin.Bottom;
		}




		FVector2D oneCharSize = FontMeasure->Measure(segInfo.Text, segCharIndex, segCharIndex + 1, segInfo.Font);

		DialogueLineInfoList.Last().MaxLineHeight = FMath::Max(DialogueLineInfoList.Last().MaxLineHeight, (int)(oneCharSize.Y + segInfo.PaddingMargin.Top));

		bool bEndOfLine = TryAddDialogueBlock(maxLineWidth, oneCharSize,
			currentLineWidth, blockPos,
			currentSegInfoIndex,
			segStartCharIndex, segCharIndex, true);
		if (bEndOfLine)
		{
			continue;
		}

		//advance for next char
		currentLineWidth += oneCharSize.X;
		++segCharIndex;


	};
	// Put rest text into next line block for Current long word
	segWordCharEndIndex = segStartCharIndex;


}

void  UHorizonDialogueMsgTextBlock::TextOverflowWarpNormal_Implement(float& currentLineWidth, FVector2D& blockPos, const int& currentSegInfoIndex,
	const float& maxLineWidth, const FHorizonDialogueSegmentInfo& segInfo)
{



	TArray<TCHAR> charList;
	charList.Add(' ');
	charList.Add('\t');
	charList.Add('\n');
	//TODO: implement
	const TSharedRef< FSlateFontMeasure >& FontMeasure = FSlateApplication::Get().GetRenderer()->GetFontMeasureService();
	int segStartCharIndex = 0;
	int segCharIndex = 0;
	while (segCharIndex < segInfo.Text.Len()) {
		//first line only calculate from top
		if (DialogueLineInfoList.Num() == 1) {
			blockPos.Y = LineMargin.Top;
		}
		else {
			blockPos.Y = DialogueLineInfoList.Last(1).Position.Y + DialogueLineInfoList.Last(1).MaxLineHeight + LineMargin.Bottom;
		}
		//segInfo.Text.fi
		//index to space

		
		TCHAR currentChar = segInfo.Text[segCharIndex];

		if (TryAddNewLine(currentChar,
			currentLineWidth, blockPos, 
			currentSegInfoIndex,
			segStartCharIndex, segCharIndex))
		{
			continue;
		}
	



		int segWordCharEndIndex = UHorizonWidgetFunctionLibrary::FindCharIndexFromStr(segCharIndex, charList, segInfo.Text);
		//plus 1 if current char is
		if (segWordCharEndIndex == segCharIndex)
		{
			++segWordCharEndIndex;
		}
		//segInfo.Text.
#if defined(UE_BUILD_DEBUG)
		auto oneWordDebug = UKismetStringLibrary::GetSubstring(segInfo.Text, segCharIndex, segWordCharEndIndex - segCharIndex);
#endif


		FVector2D oneWordSize = FontMeasure->Measure(segInfo.Text, segCharIndex, segWordCharEndIndex, segInfo.Font);
		if (currentChar == '\t') 
		{
			oneWordSize.X += Font.Size;
		}

	


		DialogueLineInfoList.Last().MaxLineHeight = FMath::Max(DialogueLineInfoList.Last().MaxLineHeight, (int)(oneWordSize.Y + segInfo.PaddingMargin.Top));

		//if (currentLineWidth != 0) 
		{
			if (segStartCharIndex == segCharIndex)
			{
				++segCharIndex;
			}
			bool bEndOfLine = TryAddDialogueBlock(maxLineWidth, oneWordSize,
				currentLineWidth, blockPos,
				currentSegInfoIndex,
				segStartCharIndex, segCharIndex);
			if (bEndOfLine)
			{
				if (' ' == currentChar && 0 == currentLineWidth)
				{
					++segCharIndex; //skip space char at beginning of line
				}

				if (0 == currentLineWidth && oneWordSize.X > maxLineWidth)
				{
					TextOverflowWarpNormal_WordBreakImplement(segCharIndex, segWordCharEndIndex, currentLineWidth, blockPos,
						currentSegInfoIndex, maxLineWidth, segInfo);
					segStartCharIndex = segWordCharEndIndex;
				}
				continue;
			}
		}

		currentLineWidth += oneWordSize.X;
		//process to next word

		segCharIndex += (segWordCharEndIndex - segCharIndex);
	};
	{
		//float linePosY = (DialogueLineInfoList.Last().MaxLineHeight * (DialogueLineInfoList.Num() - 1)) + lineOffsetY;
		DialogueLineInfoList.Last().LineWidth = currentLineWidth;
		AddDialogueBlock(DialogueLineInfoList.Last(),
			CreateDialogueTextBlockInfo(currentSegInfoIndex, segStartCharIndex, segCharIndex, blockPos));
		blockPos.X = LineMargin.Left + currentLineWidth;
	}
}

void UHorizonDialogueMsgTextBlock::TextOverflowWarpBreakAll_Implement(
	float& currentLineWidth, FVector2D& blockPos, const int& currentSegInfoIndex,
	const float& maxLineWidth, const FHorizonDialogueSegmentInfo& segInfo)
{

	const TSharedRef< FSlateFontMeasure >& FontMeasure = FSlateApplication::Get().GetRenderer()->GetFontMeasureService();
	int segStartCharIndex = 0;
	int segCharIndex = 0;
	while (segCharIndex < segInfo.Text.Len()) {

		//first line only calculate from top
		if (DialogueLineInfoList.Num() == 1) {
			blockPos.Y = LineMargin.Top;
		}
		else {
			blockPos.Y = DialogueLineInfoList.Last(1).Position.Y + DialogueLineInfoList.Last(1).MaxLineHeight + LineMargin.Bottom;
		}


		TCHAR currentChar = segInfo.Text[segCharIndex];

		if (TryAddNewLine(currentChar,
			currentLineWidth, blockPos,
			currentSegInfoIndex,
			segStartCharIndex, segCharIndex))
		{
			continue;
		}


		FVector2D oneWordSize = FontMeasure->Measure(segInfo.Text, segCharIndex, segCharIndex + 1, segInfo.Font);

		if (currentChar == '\t') {
			oneWordSize.X = Font.Size * 2;
		}


		DialogueLineInfoList.Last().MaxLineHeight = FMath::Max(DialogueLineInfoList.Last().MaxLineHeight, (int)(oneWordSize.Y + segInfo.PaddingMargin.Top));


		if (TryAddDialogueBlock(maxLineWidth, oneWordSize, 
			currentLineWidth, blockPos, 
			currentSegInfoIndex, 
			segStartCharIndex, segCharIndex, true))
		{
			continue;
		}
		
		//advance for next char
		currentLineWidth += oneWordSize.X;
		++segCharIndex;


	};
	{
		//float linePosY = (DialogueLineInfoList.Last().MaxLineHeight * (DialogueLineInfoList.Num() - 1)) + lineOffsetY;
		DialogueLineInfoList.Last().LineWidth = currentLineWidth;
		AddDialogueBlock(DialogueLineInfoList.Last(),
			CreateDialogueTextBlockInfo(currentSegInfoIndex, segStartCharIndex, segCharIndex, blockPos));
		blockPos.X = LineMargin.Left + currentLineWidth;
	}
}

#undef LOCTEXT_NAMESPACE
