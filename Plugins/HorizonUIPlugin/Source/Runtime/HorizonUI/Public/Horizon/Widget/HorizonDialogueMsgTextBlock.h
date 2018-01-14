// Crated by dorgon, All Rights Reserved.
// email: dorgonman@hotmail.com
// blog: dorgon.horizon-studio.net


#pragma once
#include "CanvasPanel.h"
#include "TextLayout.h"
#include "Tickable.h"
#include "HorizonButton.h"
#include "HorizonDialogueStyleInfo.h"
#include "DelegateCombinations.h"
#include "HorizonDialogueMsgTextBlock.generated.h"


USTRUCT()
struct FHorizonDialogueBlockInfo 
{
	GENERATED_BODY()
public:
	FString MsgText;
	TWeakObjectPtr<UWidget> WidgetWeakPtr;
	TWeakObjectPtr<UWidget> WidgetBackgroundWeakPtr;
	int CurrentCharIndex = 0;
	int SegmentReferenceIndex = -1;//index ref to TArray<FHorizonDialogueSegmentInfo> DialogueSegmentInfoList
	FName Name;
	FVector2D BlockSize;


	UPROPERTY()
	USoundBase* DialogueSound = nullptr;
	bool bDialogueSoundPlayed = false;

};

USTRUCT()
struct FHorizonDialogueLineInfo
{
	GENERATED_BODY()
public:
	int CurrentDialogueBlockIndex = 0;
	int MaxLineHeight = 0;
	int LineWidth = 0;
	TArray<FHorizonDialogueBlockInfo> DialogueBlockInfoList;
	FVector2D Position = FVector2D(0, 0);
};


UENUM(BlueprintType)
enum class EHorizonDialogueSegmentType :uint8
{
	Invalidated = 0,
	Text,
	NewLine,
	Image,
	PaperFlipbook,
	Material,
	HyperText
};



UENUM(BlueprintType)
enum class EHorizonDialogueTextOverflowWarpMethod :uint8
{
	Normal,    // Try get a "word"(use space to determine, for both CJK and non-CJK) and check if can place at current line, if not, move to next line and use BreakAll rule in next line for the "word"
	BreakAll, //  break all word at any place
};


// Parse text segment and store it tag info, 
// If no supported tag in input text, then there will have only one segment.
USTRUCT()
struct FHorizonDialogueSegmentInfo {
	GENERATED_BODY()
	FHorizonDialogueSegmentInfo();

public:
	EHorizonDialogueSegmentType TypeEnum = EHorizonDialogueSegmentType::Invalidated;
	FString Text;
	FSlateColor ColorAndOpacity;
	FSlateFontInfo Font;
	FVector2D ShadowOffset;
	FSlateColor ShadowColorAndOpacity;
	//TEnumAsByte<ETextJustify::Type> Justification;
	float DialogueMsgSpeed = 0.01f;
	float DialogueMsgWait = 0.0f;
	FMargin PaddingMargin;//padding position for segment
	TOptional<FString> FilePath;
	TOptional<FString> DialogueSoundPath;
	TOptional<FVector2D> ImageSize;
	TOptional<FString> HypertextReference;
	FSlateColor HypertextHoveredColor = FLinearColor(1.0f, 0.0f, 0.0f, 1.0f); //color after clicked
	FSlateColor HypertextVisitedColor = FLinearColor(0.5f, 0.0f, 0.5f, 1.0f); //color after clicked
	TSubclassOf<UHorizonButton> BackgroundButtonClass;// = UHorizonButton::StaticClass();


	int StyleInfoReferenceIndex = -1; //if not -1, will use style in SegmentStyleListFromStyleClass
	int SegmentStyleReferenceIndex = -1;

	bool bHypertextVisited = false;

	float DialogueSoundVolumeMultiplier = 1.0f;
	float DialogueSoundPitchMultiplier = 1.0f;
	float DialogueSoundStartTime = 0.0f;

};


USTRUCT()
struct FHorizonDialoguePageInfo
{
	GENERATED_BODY()
public:
	FHorizonDialoguePageInfo() {};
	FHorizonDialoguePageInfo(int InStartLineIndex, int InEndLineIndex, float InPageHeight)
	: StartLineIndex(InStartLineIndex)
	, EndLineIndex(InEndLineIndex)
	, PageHeight(InPageHeight){}
public:
	int StartLineIndex = -1;
	int EndLineIndex = -1;
	float PageHeight = 0.0f;
};


class UHorizonDialogueMsgTextBlock;
USTRUCT(BlueprintType)
struct FHorizonDialogueHypertextResult
{
	GENERATED_BODY()
public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HorizonPlugin|Hypertext")
	UHorizonDialogueMsgTextBlock* DialogueMsgTextBlock = nullptr;

	UPROPERTY(BlueprintReadOnly, Category = "HorizonPlugin|Hypertext")
	int SegmentIndex = -1;

	UPROPERTY(BlueprintReadOnly, Category = "HorizonPlugin|Hypertext")
	int LineIndex = -1;

	UPROPERTY(BlueprintReadOnly, Category = "HorizonPlugin|Hypertext")
	int BlockIndex = -1;

	UPROPERTY(BlueprintReadOnly, Category = "HorizonPlugin|Hypertext")
	FString HypertextReference;
	//HypertextReference parsed map
	UPROPERTY(BlueprintReadOnly, Category = "HorizonPlugin|Hypertext")
	TMap<FString, FString> UrlEncodeMap;
};


USTRUCT(BlueprintType)
struct FHorizonDialogueSetDialoguePageResult
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadOnly, Category = "HorizonPlugin|DialogueMsgTextBlock")
	int PageIndex = -1;
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHorizonHypertextEvent, FHorizonDialogueHypertextResult, InResult);
DECLARE_MULTICAST_DELEGATE_OneParam(FOnHorizonHypertextEventNative, FHorizonDialogueHypertextResult);


DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnHorizonDialogueMsgEvent);
DECLARE_MULTICAST_DELEGATE(FOnHorizonDialogueMsgEventNative);


DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHorizonSetDialoguePageEvent, FHorizonDialogueSetDialoguePageResult, InResult);
DECLARE_MULTICAST_DELEGATE_OneParam(FOnHorizonSetDialoguePageEventNative, FHorizonDialogueSetDialoguePageResult);


UCLASS()
class HORIZONUI_API UHorizonDialogueMsgTextBlock :
	public UCanvasPanel,
	public FTickableGameObject
{
	GENERATED_BODY()
public:
	UHorizonDialogueMsgTextBlock();


public:
#if WITH_EDITOR
	//~ Begin UWidget Interface
	//#if (ENGINE_MAJOR_VERSION <= 4) && (ENGINE_MINOR_VERSION <= 12)
	//virtual const FSlateBrush* GetEditorIcon() override;
	//#endif //#if (ENGINE_MAJOR_VERSION <= 4) && (ENGINE_MINOR_VERSION <= 12)
	virtual const FText GetPaletteCategory() override;
	virtual void OnCreationFromPalette() override;
	//~ End UWidget Interface

	virtual FString GetLabelMetadata() const override;

	void HandleTextCommitted(const FText& InText, ETextCommit::Type CommitteType);

	//~ Begin UObject Interface
	virtual void PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent) override;
	virtual void PostEditChangeChainProperty(struct FPropertyChangedChainEvent& PropertyChangedEvent) override;
	//~ End UObject Interface
#endif
protected://FTickableGameObject implement
	virtual TStatId GetStatId() const override { RETURN_QUICK_DECLARE_CYCLE_STAT(UHorizonDialogueMsgTextBlock, STATGROUP_Tickables); }
	virtual bool IsTickable() const override;
	virtual void Tick(float DeltaTime) override;
	virtual bool IsTickableInEditor() const override { return true; }
public: //UText
	/**
	* Sets the color and opacity of the text in this text block
	*
	* @param InColorAndOpacity		The new text color and opacity
	*/
	UFUNCTION(BlueprintCallable, Category = "HorizonPlugin|Appearance")
		void SetColorAndOpacity(FSlateColor InColorAndOpacity);

	/**
	* Sets the opacity of the text in this text block
	*
	* @param InOpacity		The new text opacity
	*/
	UFUNCTION(BlueprintCallable, Category = "HorizonPlugin|Appearance")
		void SetOpacity(float InOpacity);

	/**
	* Sets the color and opacity of the text drop shadow
	* Note: if opacity is zero no shadow will be drawn
	*
	* @param InShadowColorAndOpacity		The new drop shadow color and opacity
	*/
	UFUNCTION(BlueprintCallable, Category = "HorizonPlugin|Appearance")
		void SetShadowColorAndOpacity(FLinearColor InShadowColorAndOpacity);

	/**
	* Sets the offset that the text drop shadow should be drawn at
	*
	* @param InShadowOffset		The new offset
	*/
	UFUNCTION(BlueprintCallable, Category = "HorizonPlugin|Appearance")
		void SetShadowOffset(FVector2D InShadowOffset);

	/**
	* Dynamically set the font info for this text block
	*
	* @param InFontInfo THe new font info
	*/
	UFUNCTION(BlueprintCallable, Category = "HorizonPlugin|Appearance")
		void SetFont(FSlateFontInfo InFontInfo);

	UFUNCTION(BlueprintCallable, Category = "HorizonPlugin|Appearance")
		void SetFontSize(int fontSize);

	/**
	*  Set the text justification for this text block
	*
	*  @param Justification new justification
	*/
	UFUNCTION(BlueprintCallable, Category = "HorizonPlugin|Appearance")
		void SetJustification(ETextJustify::Type InJustification);
	UFUNCTION(BlueprintCallable, Category = "HorizonPlugin|Appearance")
		FORCEINLINE TEnumAsByte<ETextJustify::Type> GetJustification() const { return Justification; }

public:
	/** The text to display */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "HorizonPlugin|Content", meta = (MultiLine = "true"))
	FText Text;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "HorizonPlugin|Content")
		EHorizonDialogueTextOverflowWarpMethod TextOverFlowWarpMethod = EHorizonDialogueTextOverflowWarpMethod::Normal;

	/** A bindable delegate to allow logic to drive the text of the widget */
	UPROPERTY()
		FGetText TextDelegate;

	/** The color of the text */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "HorizonPlugin|Appearance")
	FSlateColor ColorAndOpacity = FLinearColor::White;

	/** The font to render the text with */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "HorizonPlugin|Appearance")
	FSlateFontInfo Font;

	/** The direction the shadow is cast */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "HorizonPlugin|Appearance")
	FVector2D ShadowOffset = FVector2D(1.0f, 1.0f);

	/** The color of the shadow */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "HorizonPlugin|Appearance", meta = (DisplayName = "Shadow Color"))
	FLinearColor ShadowColorAndOpacity = FLinearColor::Transparent;


	/** If true, it will automatically wrap this text widget with an invalidation panel */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "HorizonPlugin|Performance", AdvancedDisplay)
	bool bWrapWithInvalidationPanel = false;

	///** Called when this text is double clicked */
	//SLATE_EVENT(FOnClicked, OnDoubleClicked)

	/**
	* Gets the widget text
	* @return The widget text
	*/
	UFUNCTION(BlueprintCallable, Category = "HorizonPlugin|Widget", meta = (DisplayName = "GetText (Text)"))
		FText GetText() const;

	/**
	* Directly sets the widget text.
	* Warning: This will wipe any binding created for the Text property!
	* @param InText The text to assign to the widget
	*/
	//UFUNCTION(BlueprintCallable, Category = "HorizonPlugin|Widget", meta = (DisplayName = "SetText (Text)"))
	void SetText(FText InText);

	UFUNCTION(BlueprintCallable, Category = "HorizonPlugin|Widget")
	void SetTextAndRebuildDialogue(const FText& InText);

	//~ Begin UWidget Interface
	virtual void SynchronizeProperties() override;
	//~ End UWidget Interface

	//~ Begin UVisual Interface
	virtual void ReleaseSlateResources(bool bReleaseChildren) override;
	//~ End UVisual Interface


	

public:  // UTextLayoutWidget 


		/** How the text should be aligned with the margin. */
		UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Appearance)
		TEnumAsByte<ETextJustify::Type> Justification;

		/** The amount of blank space left around the edges of this text line. */
		UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "HorizonPlugin|Appearance", AdvancedDisplay)
		FMargin LineMargin = FMargin(30, 10, 30, 5);

		
		/** margin for each line from canvas border */
		//FVector2D LineMargin;

public:

	/** if true, then try to parse Text xml tag*/
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "HorizonPlugin|Appearance")
	bool bIsRichText = true;
	void SetIsRichText(bool b);


	/** millisecond for a word */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HorizonPlugin|Behavior", meta = (EditCondition = "bIsDialogueMsgText"))
	float DialogueMsgSpeed = 0.01f;
	void SetDialogueMsgSpeed(float speed);
	UPROPERTY()
	bool bIsDialogueMsgText = false;
	UFUNCTION(BlueprintCallable, Category = "HorizonPlugin|Behavior")
	void SetIsDialogueMsgText(bool b);

	/** should we start tick dialogue*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HorizonPlugin|Behavior", meta = (EditCondition = "bIsDialogueMsgText"))
	bool bIsStartTickDialogueMsg = false;

	UFUNCTION(BlueprintCallable, Category = "HorizonPlugin|Behavior")
	void SetIsStartTickDialogueMsg(bool b);
	UFUNCTION(BlueprintCallable, Category = "HorizonPlugin|Behavior")
	void SetIsRepeatDialogueMsg(bool b);

	UPROPERTY()
	bool bIsRepeatDialogueMsg = false;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HorizonPlugin|Behavior", meta = (EditCondition = "bIsRepeatDialogueMsg"))
	float RepeatDialogueMsgInterval = 1.0f;
	void SetRepeatDialogueMsgInterval(float interval);


	UFUNCTION(BlueprintCallable, Category = "HorizonPlugin|Behavior")
	virtual void StopDialogue();
	UFUNCTION(BlueprintCallable, Category = "HorizonPlugin|Behavior")
	virtual void StartDialogue();



	//Load SegmentStyles from seperate UHorizonDialogueStyleInfo class
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HorizonPlugin|Style")
	TArray<TSubclassOf<UHorizonDialogueStyleInfo>> StyleInfoClassList;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HorizonPlugin|Style")
	TArray<FHorizonDialogueSegmentInfoStyle> SegmentStyleList;


	UFUNCTION(BlueprintCallable, Category = "HorizonPlugin|Behavior")
	virtual void NextDialogueMsgPage();
	UFUNCTION(BlueprintCallable, Category = "HorizonPlugin|Behavior")
	FORCEINLINE int GetCurrentPageIndex() { return CurrentPageIndex; };
	UFUNCTION(BlueprintCallable, Category = "HorizonPlugin|Behavior")
	virtual void SetDialogueMsgPage(int Page);

	// Note: if false, user should call NextDialogueMsgPage or SetDialogueMsgPage in order to proceed to next page.
	UPROPERTY()
	bool bAutoNextDialogueMsgPage = true;
	UPROPERTY(EditAnywhere, BlueprintReadWrite,Category = "HorizonPlugin|Behavior", meta = (EditCondition = "bAutoNextDialogueMsgPage"))
	float AutoNextDialogueMsgPageInterval = 1.0f;
private:
	float AutoNextDialogueMsgPageDeltaTime = 0.0f;
private:
	UPROPERTY()
	TArray<UHorizonDialogueStyleInfo*> StyleInfoList;
	
public:


	virtual void ResetDialogueMsgText();

	virtual void RebuildDialogueMsgTextBlock();



	virtual void SkipDialogue();



	FORCEINLINE TArray<FHorizonDialogueLineInfo>& GetDialogueLineInfoList() { return DialogueLineInfoList; };

	FORCEINLINE TArray<FHorizonDialogueSegmentInfo>& GetDialogueSegmentInfoList(){ return DialogueSegmentInfoList; };



public: //delegate

	// for blueprint
	UPROPERTY(BlueprintAssignable, Category = "HorizonPlugin|Delegate")
	FOnHorizonHypertextEvent OnHypertextClickedDelegate;
	UPROPERTY(BlueprintAssignable, Category = "HorizonPlugin|Delegate")
	FOnHorizonHypertextEvent OnHypertextPressedDelegate;
	UPROPERTY(BlueprintAssignable, Category = "HorizonPlugin|Delegate")
	FOnHorizonHypertextEvent OnHypertextReleasedDelegate;
	UPROPERTY(BlueprintAssignable, Category = "HorizonPlugin|Delegate")
	FOnHorizonHypertextEvent OnHypertextHoveredDelegate;
	UPROPERTY(BlueprintAssignable, Category = "HorizonPlugin|Delegate")
	FOnHorizonHypertextEvent OnHypertextUnhoveredDelegate;
	UPROPERTY(BlueprintAssignable, Category = "HorizonPlugin|Delegate")
	FOnHorizonDialogueMsgEvent OnDialogueMsgLoopFunction;
	UPROPERTY(BlueprintAssignable, Category = "HorizonPlugin|Delegate")
	FOnHorizonDialogueMsgEvent OnDialogueMsgCompleteFunction;

	UPROPERTY(BlueprintAssignable, Category = "HorizonPlugin|Delegate")
	FOnHorizonSetDialoguePageEvent OnSetDialoguePageFunction;
	


	// for c++ callback binding
	FOnHorizonHypertextEventNative OnHypertextClickedDelegateNative;
	FOnHorizonHypertextEventNative OnHypertextPressedDelegateNative;
	FOnHorizonHypertextEventNative OnHypertextReleasedDelegateNative;
	FOnHorizonHypertextEventNative OnHypertextHoveredDelegateNative;
	FOnHorizonHypertextEventNative OnHypertextUnhoveredDelegateNative;

	FOnHorizonDialogueMsgEventNative OnDialogueMsgLoopFunctionNative;
	FOnHorizonDialogueMsgEventNative OnDialogueMsgCompleteFunctionNative;
	FOnHorizonSetDialoguePageEventNative OnSetDialoguePageFunctionNative;

protected:
	//~ Begin UWidget Interface
	virtual TSharedRef<SWidget> RebuildWidget() override;
	virtual void OnWidgetRebuilt() override;
	virtual void OnBindingChanged(const FName& Property) override;
	//~ End UWidget Interface

	virtual void RebuildSegmentInfoList();
	
	virtual void RebuildLineInfoList();

	virtual void RebuildPageInfoList();

private:
	void RebuildSegmentInfoListImplement(const FHorizonDialogueSegmentInfo& parentSegParam, const FXmlNode* pCurrentNode);
	void AddTextSegmentInfo(const FString& text);

	FHorizonDialogueSegmentInfo CreateDefaultSegmentInfo(EHorizonDialogueSegmentType segmentType);
	FHorizonDialogueSegmentInfo CreateSegmentInfo(const FHorizonDialogueSegmentInfo& parentSegParam, const FXmlNode* pXmlNode);
	//void BuildSegmentInfoList(const FString& segmentStr);
	
	FHorizonDialogueBlockInfo CreateDialogueTextBlockInfo(int segmentIndex, int segTextStartIndex, int segTextEndIndex, const FVector2D& pos);
	FHorizonDialogueBlockInfo CreateDialogueImageBlockInfo(int segmentIndex, const FVector2D& pos);
	FHorizonDialogueBlockInfo CreateDialoguePaperFlipbookBlockInfo(int segmentIndex, const FVector2D& pos);

	//add BG button to Block
	void AddBackgroundButton(int segmentIndex,
		FHorizonDialogueBlockInfo& blockInfo, 
		UCanvasPanelSlot* pCanvasPanelSlot, const FVector2D& paddingPos);
	void AddDialogueBlock(FHorizonDialogueLineInfo& lineInfo, FHorizonDialogueBlockInfo&& blockInfo);

	void LoadSound(FHorizonDialogueSegmentInfo& segInfo, FHorizonDialogueBlockInfo& blockInfo);
private://text overflow warp method implement

	bool TryAddNewLine(TCHAR currentChar, float& currentLineWidth, FVector2D& blockPos,
		const int& currentSegInfoIndex, int& segStartCharIndex, int& segCharIndex);


	bool TryAddDialogueBlock(const float& maxLineWidth,
		const FVector2D& oneWordSize, float& currentLineWidth,
		FVector2D& blockPos,
		const int& currentSegInfoIndex, int& segStartCharIndex, int& segCharIndex,
		bool bWordBreakMode = false);




	
	void TextOverflowWarpNormal_Implement(float& currentLineWidth, FVector2D& blockPos, const int& currentSegInfoIndex,
		const float& maxLineWidth, const FHorizonDialogueSegmentInfo& segInfo);

	void TextOverflowWarpNormal_WordBreakImplement(int& segCharIndex, int& segWordCharEndIndex, float& currentLineWidth, FVector2D& blockPos, const int& currentSegInfoIndex,
		const float& maxLineWidth, const FHorizonDialogueSegmentInfo& segInfo);

	void TextOverflowWarpBreakAll_Implement(float& currentLineWidth, FVector2D& blockPos, const int& currentSegInfoIndex,
		const float& maxLineWidth, const FHorizonDialogueSegmentInfo& segInfo);

	virtual void SetSegmentColor(int segmentIndex, int lineIndex, const FSlateColor& InColor);
	

private:
	void SetPageVisiblity(bool b, const FHorizonDialoguePageInfo& InPageInfo);


protected:


	TArray<FHorizonDialoguePageInfo> DialoguePageInfoList;
	TArray<FHorizonDialogueLineInfo> DialogueLineInfoList;
	TArray<FHorizonDialogueSegmentInfo> DialogueSegmentInfoList;
	
	int CurrentDialogueLineIndex = 0;
	int CurrentPageIndex = 0;


	float MsgDeltaTime = 0.0f;

	float RepeatDialogueMsgDeltaTime = 0.0f;

	bool bCreationFromPalette = false;

private:
	bool bNeedRebuildDialogueMsgText = false;
	// off set for recalcuate position.Y for line's in other page
	float CurrentPageHeightOffset = 0.0f;
};