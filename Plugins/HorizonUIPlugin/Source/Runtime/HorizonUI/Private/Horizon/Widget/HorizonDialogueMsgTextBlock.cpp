// Crated by dorgon, All Rights Reserved.
// email: dorgonman@hotmail.com
// blog: dorgon.horizon-studio.net
#include "HorizonDialogueMsgTextBlock.h"
#include "HorizonTextBlock.h"

#include "HorizonFlipbookWidget.h"
#include "HorizonFileSystem.h"
#include "HorizonWidgetFunctionLibrary.h"


//UMG
#include "UMG.h"
#include "UMGStyle.h"

//#include "Regex.h"
#include "XmlParser.h"


//engine
#include "PaperFlipbook.h"
#define LOCTEXT_NAMESPACE "UMG"


/////////////////////////////////////////////////////

UHorizonDialogueMsgTextBlock::UHorizonDialogueMsgTextBlock()
	: ColorAndOpacity(FLinearColor::White)
	, ShadowOffset(1.0f, 1.0f)
	, ShadowColorAndOpacity(FLinearColor::Transparent)
    , bWrapWithInvalidationPanel(false)
    , LineMargin(30, 10, 30, 5)
	, bIsRichText(true)
	, DialogueMsgSpeed(0.01f)
	, bIsDialogueMsgText(false)
	, bIsStartTickDialogueMsg(false)
	, bIsRepeatDialogueMsg(false)
	, RepeatDialogueMsgInterval(1.0f)
    , CurrentDialogueLineIndex(0)
	, MsgDeltaTime(0.0f)
	, bCreationFromPalette(false)
{



	//bCanHaveMultipleChildren = false;
	//Justification = ETextJustify::Left;
	//AutoWrapText = false;
	//WrapTextAt = 0.0f;
	//Margin = FMargin(0.0f);
	//LineHeightPercentage = 1.0f;
	//bIsVariable = false;
	//bWrapWithInvalidationPanel = false;
	//ShadowOffset = FVector2D(1.0f, 1.0f);
	//ColorAndOpacity = FLinearColor::White;
	//ShadowColorAndOpacity = FLinearColor::Transparent;

	if (!UE_SERVER)
	{
		static ConstructorHelpers::FObjectFinder<UFont> RobotoFontObj(TEXT("/Engine/EngineFonts/Roboto"));
		Font = FSlateFontInfo(RobotoFontObj.Object, 24, FName("Bold"));
	}

}
UHorizonDialogueMsgTextBlock::~UHorizonDialogueMsgTextBlock() {
	//this->ClearChildren();
	DialogueLineInfoList.Empty();
	DialogueSegmentInfoList.Empty();

}
void UHorizonDialogueMsgTextBlock::ReleaseSlateResources(bool bReleaseChildren)
{
	Super::ReleaseSlateResources(bReleaseChildren);

	//MyTextBlock.Reset();
}

void UHorizonDialogueMsgTextBlock::SetColorAndOpacity(FSlateColor InColorAndOpacity)
{
	ColorAndOpacity = InColorAndOpacity;
	if (bIsRichText) {
		//RebuildWidget();
	}
	else {
		for (auto& lineInfoIt : DialogueLineInfoList) {
			for (auto& blockInfo : lineInfoIt.DialogueBlockInfoList) {

				if (blockInfo.WidgetWeakPtr.IsValid() && blockInfo.WidgetWeakPtr->IsA<UHorizonTextBlock>()) {
					auto pTextBlock = Cast<UHorizonTextBlock>(blockInfo.WidgetWeakPtr.Get());
					pTextBlock->SetColorAndOpacity(ColorAndOpacity);
				}
			}
		}
	}

}

void UHorizonDialogueMsgTextBlock::SetOpacity(float InOpacity)
{
	FLinearColor CurrentColor = ColorAndOpacity.GetSpecifiedColor();
	CurrentColor.A = InOpacity;

	SetColorAndOpacity(FSlateColor(CurrentColor));
}

void UHorizonDialogueMsgTextBlock::SetShadowColorAndOpacity(FLinearColor InShadowColorAndOpacity)
{
	ShadowColorAndOpacity = InShadowColorAndOpacity;
	if (bIsRichText) {
		//RebuildWidget();
	}
	else {
		for (auto& lineInfoIt : DialogueLineInfoList) {
			for (auto& blockInfo : lineInfoIt.DialogueBlockInfoList) {
				if (blockInfo.WidgetWeakPtr.IsValid() && blockInfo.WidgetWeakPtr->IsA<UHorizonTextBlock>()) {
					auto pTextBlock = Cast<UHorizonTextBlock>(blockInfo.WidgetWeakPtr.Get());
					pTextBlock->SetShadowColorAndOpacity(ShadowColorAndOpacity);
				}
			}
		}
	}
}

void UHorizonDialogueMsgTextBlock::SetShadowOffset(FVector2D InShadowOffset)
{
	ShadowOffset = InShadowOffset;
	if (bIsRichText) {
		//RebuildWidget();
	}
	else {
		for (auto& lineInfo : DialogueLineInfoList) {
			for (auto& blockInfo : lineInfo.DialogueBlockInfoList) {
				if (blockInfo.WidgetWeakPtr.IsValid() && blockInfo.WidgetWeakPtr->IsA<UHorizonTextBlock>()) {
					auto pTextBlock = Cast<UHorizonTextBlock>(blockInfo.WidgetWeakPtr.Get());
					pTextBlock->SetShadowOffset(ShadowOffset);
				}
			}
		}
	}
}

void UHorizonDialogueMsgTextBlock::SetFont(FSlateFontInfo InFontInfo)
{
	Font = InFontInfo;
	if (bIsRichText) {
		//RebuildWidget();
	}
	else {
		for (auto& lineInfo : DialogueLineInfoList) {
			for (auto& blockInfo : lineInfo.DialogueBlockInfoList) {
				if (blockInfo.WidgetWeakPtr.IsValid() && blockInfo.WidgetWeakPtr->IsA<UHorizonTextBlock>()) {
					auto pTextBlock = Cast<UHorizonTextBlock>(blockInfo.WidgetWeakPtr.Get());
					pTextBlock->SetFont(Font);
				}
		
			}
		}
	}
}

void  UHorizonDialogueMsgTextBlock::SetFontSize(int fontSize) {
	Font.Size = fontSize;
}

void UHorizonDialogueMsgTextBlock::SetJustification(ETextJustify::Type InJustification)
{
	Justification = InJustification;
	if (bIsRichText) {
		//RebuildWidget();
	}
	else {

		for (auto& lineInfo : DialogueLineInfoList) {
			for (auto& blockInfo : lineInfo.DialogueBlockInfoList) {
				if (blockInfo.WidgetWeakPtr.IsValid() && blockInfo.WidgetWeakPtr->IsA<UHorizonTextBlock>()) {
					auto pTextBlock = Cast<UHorizonTextBlock>(blockInfo.WidgetWeakPtr.Get());
					pTextBlock->SetJustification(Justification);
				}

			}
		}
	}
}
void UHorizonDialogueMsgTextBlock::RebuildDialogueMsgTextBlock() {
	RebuildSegmentInfoList();
	RebuildLineInfoList();
	MsgDeltaTime = 0.0f;
	if (bIsDialogueMsgText) {
		SetIsStartTickDialogueMsg(true);
	}
	else {
		SetIsStartTickDialogueMsg(false);
	}
}

TSharedRef<SWidget> UHorizonDialogueMsgTextBlock::RebuildWidget() {
	return Super::RebuildWidget();
}
void UHorizonDialogueMsgTextBlock::OnWidgetRebuilt()
{
	Super::OnWidgetRebuilt();
	if (!bCreationFromPalette) {
		RebuildDialogueMsgTextBlock();
	}
	else {
		bCreationFromPalette = false;
	}
	
}

void UHorizonDialogueMsgTextBlock::OnBindingChanged(const FName& Property)
{
	Super::OnBindingChanged(Property);

	
}

void UHorizonDialogueMsgTextBlock::SynchronizeProperties()
{

	Super::SynchronizeProperties();
	SetText(Text);
	SetColorAndOpacity(ColorAndOpacity);
	SetShadowColorAndOpacity(ShadowColorAndOpacity);
	SetShadowOffset(ShadowOffset);
	SetFont(Font);
	SetIsDialogueMsgText(bIsDialogueMsgText);
	SetIsStartTickDialogueMsg(bIsStartTickDialogueMsg);
	SetIsRepeatDialogueMsg(bIsRepeatDialogueMsg);
	SetDialogueMsgSpeed(DialogueMsgSpeed);
	SetIsRichText(bIsRichText);
	SetJustification(Justification);
	if (bIsRichText) {
		//OnWidgetRebuilt();
	}
}

FText UHorizonDialogueMsgTextBlock::GetText() const
{

	return Text;
}

void UHorizonDialogueMsgTextBlock::SetText(FText InText)
{
	Text = InText;
	//RebuildWidget();
}



void UHorizonDialogueMsgTextBlock::SetDialogueMsgSpeed(float speed) {
	DialogueMsgSpeed = speed;
	if (bIsRichText) {
		//RebuildWidget();
	}
	else {
		for (auto& segInfoIt : DialogueSegmentInfoList) {
			segInfoIt.DialogueMsgSpeed = speed;
			
		}
	}
}


void UHorizonDialogueMsgTextBlock::SetIsRichText(bool b) { 
	bIsRichText = b; 
}

FHorizonDialogueBlockInfo UHorizonDialogueMsgTextBlock::CreateDialogueTextBlockInfo(int segmentIndex, int startIndex, int endIndex, const FVector2D& pos) {
	const FHorizonDialogueSegmentInfo& segInfo = DialogueSegmentInfoList[segmentIndex];
	FName name = *FString::Printf(TEXT("%s.%d.%d.%d"), *FString(GetName()), segmentIndex, startIndex, endIndex);
	
	int count = (endIndex - startIndex);
	FHorizonDialogueBlockInfo info;
	info.MsgText = segInfo.Text.Mid(startIndex, count);

	info.WidgetWeakPtr = NewObject<UHorizonTextBlock>(GetOuter());
	if (info.WidgetWeakPtr.IsValid()) {
		UHorizonTextBlock* pTextBlock = Cast<UHorizonTextBlock>(info.WidgetWeakPtr.Get());
		RemoveChild(pTextBlock);
		AddChild(pTextBlock);
		const TSharedRef< FSlateFontMeasure >& FontMeasure = FSlateApplication::Get().GetRenderer()->GetFontMeasureService();
		info.BlockSize = FontMeasure->Measure(info.MsgText, segInfo.Font);

		pTextBlock->SetColorAndOpacity(segInfo.ColorAndOpacity);
		pTextBlock->SetShadowColorAndOpacity(segInfo.ShadowColorAndOpacity.GetSpecifiedColor());
		pTextBlock->SetShadowOffset(segInfo.ShadowOffset);
		pTextBlock->SetFont(segInfo.Font);
		pTextBlock->SetJustification(Justification);
		if (!bIsDialogueMsgText) {
			pTextBlock->SetText(FText::FromString(info.MsgText));
		}
		else {
			//info.TextBlock->SetText(FText::FromString(info.MsgText));
		}

		UCanvasPanelSlot* canvasPanelSlot = Cast<UCanvasPanelSlot>(pTextBlock->Slot);
		canvasPanelSlot->SetAutoSize(true);

		FVector2D paddingPos = pos + FVector2D(0, (int)segInfo.PaddingMargin.Top);
		canvasPanelSlot->SetPosition(paddingPos);
		UCanvasPanelSlot* pTextBlockCanvasPanelSlot = UHorizonWidgetFunctionLibrary::GetParentCanvasPanelSlot(this);
		verifyf(pTextBlockCanvasPanelSlot, TEXT("oops! something error"));
		canvasPanelSlot->SetSize(pTextBlockCanvasPanelSlot->GetSize());

		pTextBlock->SetVisibility(ESlateVisibility::HitTestInvisible); //should not have hit test in UMG editor
	}
	//pTextBlock->SetJustification(segInfo)

	info.Name = name;

	info.SegmentReferenceIndex = segmentIndex;
	return info;
}


FHorizonDialogueBlockInfo UHorizonDialogueMsgTextBlock::CreateDialogueImageBlockInfo(int segmentIndex, const FVector2D& pos) {
	const auto& segInfo = DialogueSegmentInfoList[segmentIndex];
	FHorizonDialogueSegmentInfoStyle segInfoStyle;
	if (segInfo.SegmentStyleReferenceIndex >= 0) {
		segInfoStyle = SegmentStyleList[segInfo.SegmentStyleReferenceIndex];
	}

	//const auto& segInfoStyle = SegmentStyleList[segInfo.SegmentStyleReferenceIndex];
	FName name = *FString::Printf(TEXT("%s.image%d"), *FString(GetName()), segmentIndex);

	FHorizonDialogueBlockInfo info;
	info.WidgetWeakPtr = NewObject<UHorizonImage>(GetOuter()); //NewObject<UHorizonImage>(this, name);
	if (info.WidgetWeakPtr.IsValid()){

		UHorizonImage* pImage = Cast<UHorizonImage>(info.WidgetWeakPtr.Get());
		AddChild(pImage);
		int width = 32;
		int height = 32;
		UTexture2D* pTexture = nullptr;
		UMaterial* material = nullptr;
		if (segInfo.ImageFilePath.IsSet()) {
			pTexture = UHorizonFileSystem::GetInstance()->LoadTexture2D(segInfo.ImageFilePath.GetValue(), width, height);
			if (nullptr == pTexture) {
				FStringAssetReference assetRef = segInfo.ImageFilePath.GetValue();
				material = Cast<UMaterial>(assetRef.TryLoad());
			}
		}
		else {
			pTexture = segInfoStyle.Texture2D;
			material = segInfoStyle.Material;
		}



		if (pTexture) {
			pImage->SetBrushFromTexture(pTexture, true);
		}
		

		if (material) {
			pImage->SetBrushFromMaterial(material);
		}
		
		UCanvasPanelSlot* canvasPanelSlot = Cast<UCanvasPanelSlot>(pImage->Slot);
		if (segInfo.ImageSize.IsSet()) {
			canvasPanelSlot->SetSize(segInfo.ImageSize.GetValue());
		}
		FVector2D paddingPos = pos + FVector2D(0, (int)segInfo.PaddingMargin.Top);
		canvasPanelSlot->SetPosition(paddingPos);
		pImage->SetColorAndOpacity(segInfo.ColorAndOpacity.GetSpecifiedColor());
		if (bIsDialogueMsgText) {
			pImage->SetVisibility(ESlateVisibility::Hidden);
		}
		else {
			pImage->SetVisibility(ESlateVisibility::HitTestInvisible);
		}
	}
	
	info.Name = name;
	info.SegmentReferenceIndex = segmentIndex;
	return info;
}

FHorizonDialogueBlockInfo UHorizonDialogueMsgTextBlock::CreateDialoguePaperFlipbookBlockInfo(int segmentIndex, const FVector2D& pos) {
	const auto& segInfo = DialogueSegmentInfoList[segmentIndex];
	FHorizonDialogueSegmentInfoStyle segInfoStyle;
	if (segInfo.SegmentStyleReferenceIndex >= 0) {
		segInfoStyle = SegmentStyleList[segInfo.SegmentStyleReferenceIndex];
	}
	FName name = *FString::Printf(TEXT("%s.PaperFlipbookWidget%d"), *FString(GetName()), segmentIndex);

	FHorizonDialogueBlockInfo info;
	info.WidgetWeakPtr = NewObject<UHorizonFlipbookWidget>(GetOuter()); //NewObject<UHorizonFlipbookWidget>(this, name);
	if (info.WidgetWeakPtr.IsValid()) {
		UHorizonFlipbookWidget* pWidget = Cast<UHorizonFlipbookWidget>(info.WidgetWeakPtr.Get());
		//FStringAssetReference assetRef = segInfo.ImageFilePath.GetValue();
		//UHorizonFileSystem::LoadPaperFlipbook
		UPaperFlipbook* flipbook = segInfoStyle.PaperFlipbook;//UHorizonFileSystem::GetInstance()->LoadPaperFlipbook(segInfo.ImageFilePath.GetValue());
		//FScopedFlipbookMutator
		if (flipbook) {
			AddChild(info.WidgetWeakPtr.Get());
			pWidget->SetFlipbook(flipbook);
			pWidget->SetFlipbookSourceSize(segInfoStyle.PaperFlipbookSourceSize);
			pWidget->SetFlipbookSourceUV(segInfoStyle.PaperFlipbookSourceUV);
			pWidget->SetColorAndOpacity(segInfo.ColorAndOpacity.GetSpecifiedColor());
			UCanvasPanelSlot* canvasPanelSlot = Cast<UCanvasPanelSlot>(pWidget->Slot);
			if (segInfo.ImageSize.IsSet()) {
				canvasPanelSlot->SetSize(segInfo.ImageSize.GetValue());
			}
			FVector2D paddingPos = pos + FVector2D(0, (int)segInfo.PaddingMargin.Top);
			canvasPanelSlot->SetPosition(paddingPos);
			pWidget->SetColorAndOpacity(segInfo.ColorAndOpacity.GetSpecifiedColor());
			if (bIsDialogueMsgText) {
				pWidget->SetVisibility(ESlateVisibility::Hidden);
			}
			else {
				pWidget->SetVisibility(ESlateVisibility::HitTestInvisible);
			}
			pWidget->SynchronizeProperties();
		}
		else {
			//UE_HORIZONUI_WARNING("CreateDialoguePaperFlipbookBlockInfo filePath can't load:%s", *segInfo.ImageFilePath.GetValue());
		}
	}

	info.Name = name;
	info.SegmentReferenceIndex = segmentIndex;

	return info;
}

void UHorizonDialogueMsgTextBlock::AddDialogueBlock(FHorizonDialogueLineInfo& lineInfo, FHorizonDialogueBlockInfo&& blockInfo) {

	UCanvasPanelSlot* canvasPanelSlot = Cast<UCanvasPanelSlot>(blockInfo.WidgetWeakPtr->Slot);
	verifyf(canvasPanelSlot, TEXT("oops! something error in UHorizonDialogueMsgTextBlock::AddDialogueBlock"));
	lineInfo.Position = FVector2D(LineMargin.Left, canvasPanelSlot->GetPosition().Y);
	lineInfo.DialogueBlockInfoList.Add(Forward<FHorizonDialogueBlockInfo>(blockInfo));
		
}


FHorizonDialogueSegmentInfo UHorizonDialogueMsgTextBlock::CreateDefaultSegmentInfo(EHorizonDialogueSegmentType segmentType) {
	FHorizonDialogueSegmentInfo info;
	info.TypeEnum = segmentType;
	info.ColorAndOpacity = ColorAndOpacity;
	info.DialogueMsgSpeed = DialogueMsgSpeed;
	info.DialogueMsgWait = 0.0f;
	info.Font = Font;
	info.ShadowColorAndOpacity = ShadowColorAndOpacity;
	info.ShadowOffset = ShadowOffset;
	return info;
}


FHorizonDialogueSegmentInfo UHorizonDialogueMsgTextBlock::CreateSegmentInfo(const FHorizonDialogueSegmentInfo& parentSegParam, const FXmlNode* pXmlNode) {
	
	FHorizonDialogueSegmentInfo segParam = parentSegParam;
	if (pXmlNode->GetTag().Equals(TEXT("text"), ESearchCase::IgnoreCase)) {
		segParam.TypeEnum = EHorizonDialogueSegmentType::Text;
	}
	if(pXmlNode->GetTag().Equals(TEXT("img"), ESearchCase::IgnoreCase)){
		segParam.TypeEnum = EHorizonDialogueSegmentType::Image;
	}

	if (pXmlNode->GetTag().Equals(TEXT("br"), ESearchCase::IgnoreCase)) {
		segParam.TypeEnum = EHorizonDialogueSegmentType::NewLine;
	}

	if (pXmlNode->GetTag().Equals(TEXT("PaperFlipBook"), ESearchCase::IgnoreCase) || 
		pXmlNode->GetTag().Equals(TEXT("PFB"), ESearchCase::IgnoreCase)) {
		segParam.TypeEnum = EHorizonDialogueSegmentType::PaperFlipbook;
	}

	if (pXmlNode->GetTag().Equals(TEXT("mat"), ESearchCase::IgnoreCase)) {
		segParam.TypeEnum = EHorizonDialogueSegmentType::Material;
	}
	const auto& attributeList = pXmlNode->GetAttributes();
	for (const auto& attrIt : attributeList) {
		const FString tag = attrIt.GetTag();
		FString value = attrIt.GetValue();

		//apply style first, and then replace with
		if (tag.Equals(TEXT("style"), ESearchCase::IgnoreCase)) {
			bool bStyleFound = false;
			//for (auto& it : SegmentStyleList) {
			for(int i = 0; i < SegmentStyleList.Num(); i ++){
				const auto& it = SegmentStyleList[i];
				if (value == it.StyleName.ToString()) {
					segParam.SegmentStyleReferenceIndex = i;
					bStyleFound = true;
					if (it.ColorAndOpacity.Num() > 0) {
						segParam.ColorAndOpacity = it.ColorAndOpacity.Last();
					}

					if (it.DialogueMsgSpeed.Num() > 0) {
						segParam.DialogueMsgSpeed = it.DialogueMsgSpeed.Last();
					}
					if (it.DialogueMsgWait.Num() > 0) {
						segParam.DialogueMsgWait = it.DialogueMsgWait.Last();
					}
					if (it.ShadowOffset.Num() > 0) {
						segParam.ShadowOffset = it.ShadowOffset.Last();
					}

					if (it.ShadowColorAndOpacity.Num() > 0) {
						segParam.ShadowColorAndOpacity = it.ShadowColorAndOpacity.Last();
					}
					if (it.Font.Num() > 0) {
						segParam.Font = it.Font.Last();
					}

					if (it.FontSize.Num() > 0) {
						segParam.Font.Size = it.FontSize.Last();
					}
					if (it.TypefaceFontName.Num() > 0) {
						segParam.Font.TypefaceFontName = it.TypefaceFontName.Last();
					}

					if (it.PaddingMargin.Num() > 0) {
						segParam.PaddingMargin = it.PaddingMargin.Last();
					}

					if (it.ImageSize.Num() > 0) {
						segParam.ImageSize = it.ImageSize.Last();
					}

				

					break;
				}
			}
			ensureMsgf(bStyleFound, TEXT("can't find style in SegmentStyleList: %s"), *value);
		}


		if (tag.Equals(TEXT("color"), ESearchCase::IgnoreCase)) {
			value.ReplaceInline(TEXT("0x"), TEXT("#"), ESearchCase::IgnoreCase);
			FColor color = FColor::FromHex(value);
			float colorBase = (float)255.0f;
			segParam.ColorAndOpacity = FLinearColor(color.R/colorBase, color.G/colorBase, color.B/colorBase, color.A/colorBase);
		}

		if (tag.Equals(TEXT("speed"), ESearchCase::IgnoreCase)) {
			if (value.IsNumeric()) {
				segParam.DialogueMsgSpeed = FCString::Atof(*value);
			}
		}

		if (tag.Equals(TEXT("sound"), ESearchCase::IgnoreCase)) {
		}

		if (tag.Equals(TEXT("wait"), ESearchCase::IgnoreCase)) {
			if (value.IsNumeric()) {
				segParam.DialogueMsgWait = FCString::Atof(*value);
			}
		}



		if (tag.Equals(TEXT("shadowColor"), ESearchCase::IgnoreCase) ||
			tag.Equals(TEXT("shadow_color"), ESearchCase::IgnoreCase)) {
			value.ReplaceInline(TEXT("0x"), TEXT("#"), ESearchCase::IgnoreCase);
			FColor color = FColor::FromHex(value);
			float colorBase = (float)255.0f;
			segParam.ShadowColorAndOpacity = FLinearColor(color.R / colorBase, color.G / colorBase, color.B / colorBase, color.A / colorBase);
		}

		//	FVector2D ShadowOffset;
		if (tag.Equals(TEXT("shadowOffset"), ESearchCase::IgnoreCase)||
			tag.Equals(TEXT("shadow_offset"), ESearchCase::IgnoreCase)) {
			value.ReplaceInline(TEXT("("), TEXT(" "));
			value.ReplaceInline(TEXT("{"), TEXT(" "));
			value.ReplaceInline(TEXT("["), TEXT(" "));
			value.ReplaceInline(TEXT(")"), TEXT(" "));
			value.ReplaceInline(TEXT("}"), TEXT(" "));
			value.ReplaceInline(TEXT("]"), TEXT(" "));

			value.Trim();
			value.TrimTrailing();
			TArray<FString> parse;

			value.ParseIntoArray(parse, TEXT(","), true);
			if (parse.Num() >= 2) {
				segParam.ShadowOffset = FVector2D(FCString::Atof(*parse[0]), FCString::Atof(*parse[1]));
			}
		}


		if (tag.Equals(TEXT("fontPath"), ESearchCase::IgnoreCase) ||
			tag.Equals(TEXT("font_path"), ESearchCase::IgnoreCase)) {
		
			//ConstructorHelpers::FObjectFinder<UFont> RobotoFontObj(*value);
			UFont* font = UHorizonFileSystem::GetInstance()->LoadFont(*value);
			segParam.Font = FSlateFontInfo(font, Font.Size, Font.TypefaceFontName);
			//segParam.Font.TypefaceFontName 
		}

		if (tag.Equals(TEXT("fontType"), ESearchCase::IgnoreCase) ||
			tag.Equals(TEXT("font_type"), ESearchCase::IgnoreCase)) {
				segParam.Font.TypefaceFontName = *value;
		}

		if (tag.Equals(TEXT("fontSize"), ESearchCase::IgnoreCase) ||
			tag.Equals(TEXT("font_size"), ESearchCase::IgnoreCase)) {
			if (value.IsNumeric()) {
				segParam.Font.Size = FCString::Atoi(*value);
			}
		}

		if (tag.Equals(TEXT("padding-left"), ESearchCase::IgnoreCase)) {
			if (value.IsNumeric()) {
				segParam.PaddingMargin.Left = FCString::Atof(*value);
			}
		}

		if (tag.Equals(TEXT("padding-right"), ESearchCase::IgnoreCase)) {
			if (value.IsNumeric()) {
				segParam.PaddingMargin.Right = FCString::Atof(*value);
			}
		}

		if (tag.Equals(TEXT("padding-top"), ESearchCase::IgnoreCase)) {
			if (value.IsNumeric()) {
				segParam.PaddingMargin.Top = FCString::Atof(*value);
			}
		}


		if (tag.Equals(TEXT("filePath"), ESearchCase::IgnoreCase) || 
			tag.Equals(TEXT("file_path"), ESearchCase::IgnoreCase)) {

			segParam.ImageFilePath = value;
		}

		if (tag.Equals(TEXT("size"), ESearchCase::IgnoreCase) ||
			tag.Equals(TEXT("size"), ESearchCase::IgnoreCase)) {
			value.ReplaceInline(TEXT("("), TEXT(" "));
			value.ReplaceInline(TEXT("{"), TEXT(" "));
			value.ReplaceInline(TEXT("["), TEXT(" "));
			value.ReplaceInline(TEXT(")"), TEXT(" "));
			value.ReplaceInline(TEXT("}"), TEXT(" "));
			value.ReplaceInline(TEXT("]"), TEXT(" "));

			value.Trim();
			value.TrimTrailing();
			TArray<FString> parse;

			value.ParseIntoArray(parse, TEXT(","), true);
			if (parse.Num() >= 2) {
				segParam.ImageSize = FVector2D(FCString::Atof(*parse[0]), FCString::Atof(*parse[1]));
			}
		}
	}

	return segParam;
}


void UHorizonDialogueMsgTextBlock::RebuildSegmentInfoListImplement(const FHorizonDialogueSegmentInfo& parentSegParam, const FXmlNode* pCurrentNode) {
	
	//depth first
	if (pCurrentNode && pCurrentNode->GetFirstChildNode()) {
		FHorizonDialogueSegmentInfo currentSegParam = CreateSegmentInfo(parentSegParam, pCurrentNode);
		RebuildSegmentInfoListImplement(currentSegParam, pCurrentNode->GetFirstChildNode());
	}

	if (pCurrentNode) {
		FHorizonDialogueSegmentInfo currentSegParam = CreateSegmentInfo(parentSegParam, pCurrentNode);

		//if (pCurrentNode->GetChildrenNodes().Num() == 0) {
			if (currentSegParam.TypeEnum == EHorizonDialogueSegmentType::Text) {
				//currentSegParam.
				currentSegParam.Text = pCurrentNode->GetContent();
				//Value.ReplaceInline(TEXT("&quot;"), TEXT("\""), ESearchCase::CaseSensitive);
				//Value.ReplaceInline(TEXT("&amp;"), TEXT("&"), ESearchCase::CaseSensitive);
				//Value.ReplaceInline(TEXT("&apos;"), TEXT("'"), ESearchCase::CaseSensitive);
				//Value.ReplaceInline(TEXT("&lt;"), TEXT("<"), ESearchCase::CaseSensitive);
				//Value.ReplaceInline(TEXT("&gt;"), TEXT(">"), ESearchCase::CaseSensitive);

				//handle special character
				currentSegParam.Text.ReplaceInline(TEXT("&nbsp;"), TEXT(" "));
				currentSegParam.Text.ReplaceInline(TEXT("&quot;"), TEXT("\""));
				currentSegParam.Text.ReplaceInline(TEXT("&amp;"), TEXT("&"));
				currentSegParam.Text.ReplaceInline(TEXT("&apos;"), TEXT("'"));
				currentSegParam.Text.ReplaceInline(TEXT("&lt;"), TEXT("<"));
				currentSegParam.Text.ReplaceInline(TEXT("&gt;"), TEXT(">"));
				//padding spcae
				if (currentSegParam.PaddingMargin.Left > 0) {
					currentSegParam.Text = currentSegParam.Text.LeftPad(currentSegParam.Text.Len() + (int)currentSegParam.PaddingMargin.Left);
				}
				if ((int)currentSegParam.PaddingMargin.Right > 0) {
					currentSegParam.Text = currentSegParam.Text.RightPad(currentSegParam.Text.Len() + (int)currentSegParam.PaddingMargin.Right);
				}
			}
			DialogueSegmentInfoList.Add(MoveTemp(currentSegParam));
		//}
		RebuildSegmentInfoListImplement(parentSegParam, pCurrentNode->GetNextNode());
	}


}

void UHorizonDialogueMsgTextBlock::AddTextSegmentInfo(const FString& text) {
	DialogueSegmentInfoList.Add(CreateDefaultSegmentInfo(EHorizonDialogueSegmentType::Text));
	FHorizonDialogueSegmentInfo& info = DialogueSegmentInfoList.Last();
	info.Text = text;
}
void UHorizonDialogueMsgTextBlock::RebuildSegmentInfoList() {
	//clear up
	DialogueSegmentInfoList.Empty();//DialogueSegmentInfoList.RemoveAll([](const FHorizonDialogueSegmentInfo& element) {return true; });

	if (bIsRichText) {
		FString segmentStr = FString::Printf(TEXT("%s%s%s"), TEXT("<text>"), *Text.ToString(), TEXT("</text>"));
		FXmlFile * xmlFile = new FXmlFile(segmentStr, EConstructMethod::ConstructFromBuffer);

	
		//const char* AAA = R"(C:\AAAA\BBB)";
		if (xmlFile->IsValid()) {
			const FXmlNode* pRootNode = xmlFile->GetRootNode();
			FHorizonDialogueSegmentInfo rootSegParam = CreateSegmentInfo(CreateDefaultSegmentInfo(EHorizonDialogueSegmentType::Invalidated), pRootNode);
			if (pRootNode) {
				RebuildSegmentInfoListImplement(rootSegParam, pRootNode);	
			}
			else {
				AddTextSegmentInfo(Text.ToString());
				verifyf(false, TEXT("oops! something error, should never go here"));
			}
		}
		else {
			AddTextSegmentInfo(Text.ToString());
		}
	}
	else {
		AddTextSegmentInfo(Text.ToString());
	}
	


	//BuildSegmentInfoList(segmentStr);
	
}
void UHorizonDialogueMsgTextBlock::RebuildLineInfoList() {
	//clear up
	this->ClearChildren();
	DialogueLineInfoList.Empty();
	
	// setup line init info
	UCanvasPanelSlot* pTextBlockCanvasPanelSlot = UHorizonWidgetFunctionLibrary::GetParentCanvasPanelSlot(this);
	const TSharedRef< FSlateFontMeasure >& FontMeasure = FSlateApplication::Get().GetRenderer()->GetFontMeasureService();
	float maxLineWidth = FMath::Max(Font.Size, (int)(pTextBlockCanvasPanelSlot->GetSize().X - (LineMargin.Left + LineMargin.Right)));
	float currentLineWidth = 0;

	DialogueLineInfoList.Add(FHorizonDialogueLineInfo());

	FVector2D blockPos(LineMargin.Left, 0);
	//int blockPosX = LineMargin.Left;
	//int blockPosY = 0;
	//parse segment into line and block
	//for (const auto& it : DialogueSegmentInfoList) {
	for(int i = 0; i < DialogueSegmentInfoList.Num(); i++){
		const auto& segInfo = DialogueSegmentInfoList[i];
		
		switch (segInfo.TypeEnum) {
			case EHorizonDialogueSegmentType::Text:
			{
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
					const bool IsNewline = (currentChar == '\n');
					if (IsNewline) {
						//float linePosY = (DialogueLineInfoList.Last().MaxLineHeight * (DialogueLineInfoList.Num()-1)) + lineOffsetY;
						AddDialogueBlock(DialogueLineInfoList.Last(),
							CreateDialogueTextBlockInfo(i, segStartCharIndex, segCharIndex, blockPos));

						//skip this char and advance for next line
					
						segCharIndex++;
						segStartCharIndex = segCharIndex;

						blockPos.X = LineMargin.Left;
						//new line
						DialogueLineInfoList.Last().LineWidth = currentLineWidth;
						DialogueLineInfoList.Add(FHorizonDialogueLineInfo());
						currentLineWidth = 0;
						continue;
					}

					FVector2D oneWordSize = FontMeasure->Measure(segInfo.Text, segCharIndex, segCharIndex + 1, segInfo.Font);

					if (currentChar == '\t') {
						oneWordSize.X = Font.Size * 2;
					}


					DialogueLineInfoList.Last().MaxLineHeight = FMath::Max(DialogueLineInfoList.Last().MaxLineHeight, (int)(oneWordSize.Y + segInfo.PaddingMargin.Top));
				
					if (currentLineWidth > (maxLineWidth - oneWordSize.X)) {
						AddDialogueBlock(DialogueLineInfoList.Last(),
							CreateDialogueTextBlockInfo(i, segStartCharIndex, segCharIndex, blockPos));
					
						segStartCharIndex = segCharIndex;

						blockPos.X = LineMargin.Left;
						//new line
						DialogueLineInfoList.Last().LineWidth = currentLineWidth;
						DialogueLineInfoList.Add(FHorizonDialogueLineInfo());				
						//don't skip this char and advance for next line
						currentLineWidth = 0;
						continue;
					}



					//advance for next char
					currentLineWidth += oneWordSize.X;
					segCharIndex++;


				};
				{
					//float linePosY = (DialogueLineInfoList.Last().MaxLineHeight * (DialogueLineInfoList.Num() - 1)) + lineOffsetY;
					DialogueLineInfoList.Last().LineWidth = currentLineWidth;
					AddDialogueBlock(DialogueLineInfoList.Last(),
						CreateDialogueTextBlockInfo(i, segStartCharIndex, segCharIndex, blockPos));
					blockPos.X = LineMargin.Left + currentLineWidth;
				}
			}
			break;
			case EHorizonDialogueSegmentType::NewLine:
			{
				
				blockPos.X = LineMargin.Left;
				DialogueLineInfoList.Last().LineWidth = currentLineWidth;
				//new line
				DialogueLineInfoList.Add(FHorizonDialogueLineInfo());		
				currentLineWidth = 0;
				continue;
			}
			break;
			case EHorizonDialogueSegmentType::Image:
			case EHorizonDialogueSegmentType::PaperFlipbook:
			case EHorizonDialogueSegmentType::Material:
			{
				//first line only calculate from top
				if (DialogueLineInfoList.Num() == 1) {
					blockPos.Y = LineMargin.Top;
				}
				else {
					blockPos.Y = DialogueLineInfoList.Last(1).Position.Y + DialogueLineInfoList.Last(1).MaxLineHeight + LineMargin.Bottom;
				}

				//auto& blockInfo = segInfo.TypeEnum == EHorizonDialogueSegmentType::Image ? CreateDialogueImageBlockInfo(i, blockPos) : CreateDialoguePaperFlipbookBlockInfo(i, blockPos);
				FHorizonDialogueBlockInfo blockInfo;
				if (segInfo.TypeEnum == EHorizonDialogueSegmentType::Image ||
					segInfo.TypeEnum == EHorizonDialogueSegmentType::Material){
					blockInfo = CreateDialogueImageBlockInfo(i, blockPos);
				}else if (segInfo.TypeEnum == EHorizonDialogueSegmentType::PaperFlipbook) {
					blockInfo = CreateDialoguePaperFlipbookBlockInfo(i, blockPos);
				}else {
					verifyf(false, TEXT("oops! something error"));
				}

				if (blockInfo.WidgetWeakPtr.IsValid())
				{

					UCanvasPanelSlot* canvasPanelSlot = Cast<UCanvasPanelSlot>(blockInfo.WidgetWeakPtr->Slot);
					if (canvasPanelSlot) {
						FVector2D size = canvasPanelSlot->GetSize();
						currentLineWidth += size.X;


						//if image size larger than maxLineWidth, then move the image to new line
						if (currentLineWidth > maxLineWidth ) {
							//setup prev line width
							DialogueLineInfoList.Last().LineWidth = currentLineWidth - size.X;

							//add new line
							DialogueLineInfoList.Add(FHorizonDialogueLineInfo());
							DialogueLineInfoList.Last().LineWidth = size.X;
							currentLineWidth = size.X;

							//blockPos calculate from new line
							{
								blockPos.X = LineMargin.Left;
								//first line only calculate from top
								if (DialogueLineInfoList.Num() == 1) {
									blockPos.Y = LineMargin.Top;
								}
								else {
									blockPos.Y = DialogueLineInfoList.Last(1).Position.Y + DialogueLineInfoList.Last(1).MaxLineHeight + LineMargin.Bottom;
								}
							}

							FVector2D paddingPos = blockPos + FVector2D(0, (int)segInfo.PaddingMargin.Top);
							canvasPanelSlot->SetPosition(paddingPos);
						}
				
						DialogueLineInfoList.Last().MaxLineHeight = FMath::Max(DialogueLineInfoList.Last().MaxLineHeight, (int)(size.Y + segInfo.PaddingMargin.Top));
						AddDialogueBlock(DialogueLineInfoList.Last(), MoveTemp(blockInfo));
					}
				}
				
				

				blockPos.X = LineMargin.Left + currentLineWidth;

			}
			break;

		};
	
		

	}
}

void UHorizonDialogueMsgTextBlock::SkipDialogue() {
	CurrentDialogueLineIndex = DialogueLineInfoList.Num();
	for (auto& lineInfo : DialogueLineInfoList) {
		lineInfo.CurrentDialogueBlockIndex = lineInfo.DialogueBlockInfoList.Num();
		for (auto& blockInfo : lineInfo.DialogueBlockInfoList) {

			if (blockInfo.WidgetWeakPtr.IsValid() && blockInfo.WidgetWeakPtr->IsA<UHorizonTextBlock>()) {
				auto pTextBlock = Cast<UHorizonTextBlock>(blockInfo.WidgetWeakPtr.Get());
				pTextBlock->SetText(FText::FromString(blockInfo.MsgText));
			}
		}
	}
}
void UHorizonDialogueMsgTextBlock::Tick(float DeltaTime) {
	MsgDeltaTime += DeltaTime;
	if (CurrentDialogueLineIndex < DialogueLineInfoList.Num()) {
		FHorizonDialogueLineInfo& lineInfo = DialogueLineInfoList[CurrentDialogueLineIndex];
		if (lineInfo.CurrentDialogueBlockIndex < lineInfo.DialogueBlockInfoList.Num()) {
			FHorizonDialogueBlockInfo& blockInfo = lineInfo.DialogueBlockInfoList[lineInfo.CurrentDialogueBlockIndex];
			const FHorizonDialogueSegmentInfo& segInfo = DialogueSegmentInfoList[blockInfo.SegmentReferenceIndex];
			switch (segInfo.TypeEnum) {
				case EHorizonDialogueSegmentType::Text:
				{
					if (blockInfo.CurrentCharIndex < blockInfo.MsgText.Len()) {

						if (MsgDeltaTime >= segInfo.DialogueMsgSpeed) {
							int numWord = FMath::FloorToInt(MsgDeltaTime / segInfo.DialogueMsgSpeed);
							blockInfo.CurrentCharIndex += numWord;
							auto subStr = blockInfo.MsgText.Mid(0, blockInfo.CurrentCharIndex);

							if (blockInfo.WidgetWeakPtr.IsValid() && blockInfo.WidgetWeakPtr->IsA<UTextBlock>()) {
								auto pTextBlock = Cast<UHorizonTextBlock>(blockInfo.WidgetWeakPtr.Get());
								pTextBlock->SetText(FText::FromString(subStr));
							}
							MsgDeltaTime = 0.0f;
						}
					}
					//advanced blockIndex
					if (blockInfo.CurrentCharIndex >= blockInfo.MsgText.Len()) {
						lineInfo.CurrentDialogueBlockIndex++;
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
					lineInfo.CurrentDialogueBlockIndex++;
				}
				break;
			}
			
		}
	
		//advanced line index
		if (lineInfo.CurrentDialogueBlockIndex >= lineInfo.DialogueBlockInfoList.Num()) {
			CurrentDialogueLineIndex++;
		}
	}
	else {

		
		
		if (bIsRepeatDialogueMsg) {
			//ResetDialogueText();
			if (MsgDeltaTime >= RepeatDialogueMsgInterval) {
				SetIsStartTickDialogueMsg(true);
				if (OnDialogueMsgLoopFunction.IsSet()) {
					OnDialogueMsgLoopFunction.GetValue()();
				}
				MsgDeltaTime = 0.0f;
			}
		}
		else {
			SetIsStartTickDialogueMsg(false);
			if (OnDialogueMsgCompleteFunction.IsSet()) {
				OnDialogueMsgCompleteFunction.GetValue()();
			}
		}

	
	}

	



}
void UHorizonDialogueMsgTextBlock::ResetDialogueMsgText() {
	if (bIsDialogueMsgText) {
		for (auto& lineInfoIt : DialogueLineInfoList) {
			lineInfoIt.CurrentDialogueBlockIndex = 0;
			for (auto& blockInfoIt : lineInfoIt.DialogueBlockInfoList) {
				blockInfoIt.CurrentCharIndex = 0;
				if (blockInfoIt.WidgetWeakPtr.IsValid()) {
					UHorizonTextBlock* pTextBlock = Cast<UHorizonTextBlock>(blockInfoIt.WidgetWeakPtr.Get());
					if (pTextBlock) {
						pTextBlock->SetText(FText::FromString(TEXT("")));
					}

					UHorizonImage* pImage = Cast<UHorizonImage>(blockInfoIt.WidgetWeakPtr.Get());
					if (pImage) {
						pImage->SetVisibility(ESlateVisibility::Hidden);
					}

					UHorizonFlipbookWidget* pFlipbookWidget = Cast<UHorizonFlipbookWidget>(blockInfoIt.WidgetWeakPtr.Get());
					if (pFlipbookWidget) {
						pFlipbookWidget->SetVisibility(ESlateVisibility::Hidden);
					}
				}
			}
		}
		//SetIsStartTickDialogue(true);
		CurrentDialogueLineIndex = 0;
	}
}

void UHorizonDialogueMsgTextBlock::SetIsDialogueMsgText(bool b) {
	bIsDialogueMsgText = b;
	if (!bIsDialogueMsgText) {
		for (auto& lineInfo : DialogueLineInfoList) {
			for (auto& blockInfo : lineInfo.DialogueBlockInfoList) {
				if (blockInfo.WidgetWeakPtr.IsValid() && blockInfo.WidgetWeakPtr->IsA<UHorizonTextBlock>()) {
					auto pTextBlock = Cast<UHorizonTextBlock>(blockInfo.WidgetWeakPtr.Get());
					pTextBlock->SetText(FText::FromString(blockInfo.MsgText));
				}
				
			}
		}
	}
}

void UHorizonDialogueMsgTextBlock::SetIsStartTickDialogueMsg(bool b) {
	bIsStartTickDialogueMsg = b;
	if (bIsStartTickDialogueMsg){
		ResetDialogueMsgText();
	}
}

void UHorizonDialogueMsgTextBlock::SetIsRepeatDialogueMsg(bool b) {
	bIsRepeatDialogueMsg = b;
}


void UHorizonDialogueMsgTextBlock::SetRepeatDialogueMsgInterval(float interval) {
	RepeatDialogueMsgInterval = interval;
}



void UHorizonDialogueMsgTextBlock::StopDialogue()
{
	//reset dialogue
	ResetDialogueMsgText();
	//stop tick
	SetIsStartTickDialogueMsg(false);
}

void UHorizonDialogueMsgTextBlock::StartDialogue()
{
	SetIsStartTickDialogueMsg(true);
};


#undef LOCTEXT_NAMESPACE
