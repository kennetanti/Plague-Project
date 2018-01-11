// Crated by dorgon, All Rights Reserved.
// email: dorgonman@hotmail.com
// blog: dorgon.horizon-studio.net


#pragma once
#include "CanvasPanel.h"
#include "TextLayout.h"
#include "Tickable.h"
#include "HorizonDialogueMsgTextBlock.generated.h"

class FXmlNode;

class UHorizonFlipbookWidget;
class UPaperFlipbook;
class UTexture2D;
class UMaterial;
USTRUCT()
struct FHorizonDialogueBlockInfo {
	GENERATED_BODY()
	FHorizonDialogueBlockInfo()
	: CurrentCharIndex(0)
	, SegmentReferenceIndex(-1){};

	FString MsgText;
	TWeakObjectPtr<UWidget> WidgetWeakPtr;
	int CurrentCharIndex;
	int SegmentReferenceIndex;//index ref to TArray<FHorizonDialogueSegmentInfo> DialogueSegmentInfoList
	FName Name;
	FVector2D BlockSize;

};

USTRUCT()
struct FHorizonDialogueLineInfo{
	GENERATED_BODY()
		FHorizonDialogueLineInfo()
		: CurrentDialogueBlockIndex(0)
		, MaxLineHeight(0)
		, LineWidth(0)
		, Position(0, 0){};
	int CurrentDialogueBlockIndex;
	int MaxLineHeight;
	int LineWidth;
	TArray<FHorizonDialogueBlockInfo> DialogueBlockInfoList;
	FVector2D Position;
};


UENUM(BlueprintType)
enum class EHorizonDialogueSegmentType :uint8
{
	Invalidated = 0,
	Text,
	NewLine,
	Image,
	PaperFlipbook,
	Material
};

// Parse text segment and store it tag info, 
// If no supported tag in input text, then there will have only one segment.
USTRUCT()
struct FHorizonDialogueSegmentInfo {


	GENERATED_BODY()
		FHorizonDialogueSegmentInfo()
		: TypeEnum(EHorizonDialogueSegmentType::Invalidated)
		, DialogueMsgSpeed(0.01f)
		, DialogueMsgWait(0)
		, PaddingMargin(0,0,0,0)
		, SegmentStyleReferenceIndex(-1)
	{};
	EHorizonDialogueSegmentType TypeEnum;
	FString Text;
	FSlateColor ColorAndOpacity;
	FSlateFontInfo Font;
	FVector2D ShadowOffset;
	FSlateColor ShadowColorAndOpacity;
	//TEnumAsByte<ETextJustify::Type> Justification;
	float DialogueMsgSpeed;
	float DialogueMsgWait;
	FMargin PaddingMargin;//padding position for segment
	TOptional<FString> ImageFilePath;
	TOptional<FVector2D> ImageSize;
	int SegmentStyleReferenceIndex;

};



USTRUCT()
struct FHorizonDialogueSegmentInfoStyle {


	GENERATED_BODY()
	FHorizonDialogueSegmentInfoStyle() 
		: Texture2D(nullptr)
		, Material(nullptr)
		, PaperFlipbook(nullptr)
	{}
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HorizonPlugin|Style")
	FName StyleName;

public: 
	//Optional parameters. If not be set, will use parent's setting(or default)
	//Because TOptional can't be acceee from blueprint, so use TArray instead, will use TArray::Last() if num of array larger than 0
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HorizonPlugin|Style")
	TArray<FString> Text;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HorizonPlugin|Style")
	TArray<FSlateColor> ColorAndOpacity;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HorizonPlugin|Style")
	TArray<FSlateFontInfo> Font;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HorizonPlugin|Style")
		TArray<int> FontSize;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HorizonPlugin|Style")
		TArray<FName> TypefaceFontName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HorizonPlugin|Style")
	TArray<FVector2D> ShadowOffset;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HorizonPlugin|Style")
	TArray<FSlateColor> ShadowColorAndOpacity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HorizonPlugin|Style")
	TArray<float> DialogueMsgSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HorizonPlugin|Style")
	TArray<float> DialogueMsgWait;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HorizonPlugin|Style")
	TArray<FMargin> PaddingMargin;//padding position for segment


public: //for tag <img>, ignore case
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HorizonPlugin|Style", meta = (DisplayThumbnail = "true", AllowedClasses = "Texture2D"))
	UTexture2D* Texture2D;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HorizonPlugin|Style", meta = (DisplayThumbnail = "true", AllowedClasses = "Material"))
	UMaterial* Material;



public: //for tag <pfb> or <PaperFlipBook>, ignore case
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HorizonPlugin|Style", meta = (DisplayThumbnail = "true", DisplayName = "PaperFlipbook", AllowedClasses = "PaperFlipbook"))
	UPaperFlipbook* PaperFlipbook;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, AdvancedDisplay, Category = "HorizonPlugin|Style")
	TArray<FVector2D> PaperFlipbookSourceUV;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, AdvancedDisplay, Category = "HorizonPlugin|Style")
	TArray<FVector2D> PaperFlipbookSourceSize;

public:
	//image size for Texture2D, Material or PaperFlipbook
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HorizonPlugin|Style")
		TArray<FVector2D> ImageSize; 
};


UCLASS()
class HORIZONUI_API UHorizonDialogueMsgTextBlock :
	public UCanvasPanel,
	public FTickableGameObject
{
	GENERATED_BODY()
		UHorizonDialogueMsgTextBlock();
	virtual ~UHorizonDialogueMsgTextBlock();

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
	virtual bool IsTickable() const override { return bIsStartTickDialogueMsg; }
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
	UPROPERTY(EditAnywhere, Category = "HorizonPlugin|Content", meta = (MultiLine = "true"))
		FText Text;

	/** A bindable delegate to allow logic to drive the text of the widget */
	UPROPERTY()
		FGetText TextDelegate;

	/** The color of the text */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "HorizonPlugin|Appearance")
		FSlateColor ColorAndOpacity;
	/** The font to render the text with */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "HorizonPlugin|Appearance")
		FSlateFontInfo Font;

	/** The direction the shadow is cast */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "HorizonPlugin|Appearance")
		FVector2D ShadowOffset;

	/** The color of the shadow */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "HorizonPlugin|Appearance", meta = (DisplayName = "Shadow Color"))
		FLinearColor ShadowColorAndOpacity;

	/** The minimum desired size for the text */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "HorizonPlugin|Appearance", AdvancedDisplay)
		float MinDesiredWidth;

	/** If true, it will automatically wrap this text widget with an invalidation panel */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "HorizonPlugin|Performance", AdvancedDisplay)
		bool bWrapWithInvalidationPanel;

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
	UFUNCTION(BlueprintCallable, Category = "HorizonPlugin|Widget", meta = (DisplayName = "SetText (Text)"))
		void SetText(FText InText);

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
			FMargin LineMargin;

		

		/** margin for each line from canvas border */
		//FVector2D LineMargin;

public:

	/** if true, then try to parse Text xml tag*/
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "HorizonPlugin|Appearance")
		bool bIsRichText;
		void SetIsRichText(bool b);


	/** millisecond for a word */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "HorizonPlugin|Behavior")
		float DialogueMsgSpeed;
		void SetDialogueMsgSpeed(float speed);



	/** bIsDialogueMsgText*/
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "HorizonPlugin|Behavior")
		bool bIsDialogueMsgText;
		void SetIsDialogueMsgText(bool b);
	/** should we start tick dialogue*/
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "HorizonPlugin|Behavior")
		bool bIsStartTickDialogueMsg;
	void SetIsStartTickDialogueMsg(bool b);

	/** should we start tick dialogue*/
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "HorizonPlugin|Behavior")
		bool bIsRepeatDialogueMsg;
		void SetIsRepeatDialogueMsg(bool b);


	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "HorizonPlugin|Behavior")
		float RepeatDialogueMsgInterval;
		void SetRepeatDialogueMsgInterval(float interval);


	UFUNCTION(BlueprintCallable, Category = "HorizonPlugin|Behavior")
	virtual void StopDialogue();
	UFUNCTION(BlueprintCallable, Category = "HorizonPlugin|Behavior")
	virtual void StartDialogue();

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "HorizonPlugin|Style")
		TArray<FHorizonDialogueSegmentInfoStyle> SegmentStyleList;


public:


	virtual void ResetDialogueMsgText();

	virtual void RebuildDialogueMsgTextBlock();



	virtual void SkipDialogue();



	FORCEINLINE TArray<FHorizonDialogueLineInfo>& GetDialogueLineInfoList() { return DialogueLineInfoList; };

	FORCEINLINE TArray<FHorizonDialogueSegmentInfo>& GetDialogueSegmentInfoList(){ return DialogueSegmentInfoList; };

public: //callbacks
		typedef TFunction<void()> 				FOnMsgCallbackFunction;
	

		void SetDialogueMsgLoopCallback(const FOnMsgCallbackFunction& callback) {
			OnDialogueMsgLoopFunction = callback;
		};

		void SetDialoueMsgCompleteCallback(const FOnMsgCallbackFunction& callback) {
			OnDialogueMsgCompleteFunction = callback;
		};


private:
		TOptional<FOnMsgCallbackFunction> OnDialogueMsgLoopFunction;
		TOptional<FOnMsgCallbackFunction> OnDialogueMsgCompleteFunction;
protected:
	//~ Begin UWidget Interface
	virtual TSharedRef<SWidget> RebuildWidget() override;
	virtual void OnWidgetRebuilt() override;
	virtual void OnBindingChanged(const FName& Property) override;
	//~ End UWidget Interface

	virtual void RebuildSegmentInfoList();
	
	virtual void RebuildLineInfoList();
private:
	void RebuildSegmentInfoListImplement(const FHorizonDialogueSegmentInfo& parentSegParam, const FXmlNode* pCurrentNode);
	void AddTextSegmentInfo(const FString& text);

	FHorizonDialogueSegmentInfo CreateDefaultSegmentInfo(EHorizonDialogueSegmentType segmentType);
	FHorizonDialogueSegmentInfo CreateSegmentInfo(const FHorizonDialogueSegmentInfo& parentSegParam, const FXmlNode* pXmlNode);
	//void BuildSegmentInfoList(const FString& segmentStr);
	
	FHorizonDialogueBlockInfo CreateDialogueTextBlockInfo(int segmentIndex, int segTextStartIndex, int segTextEndIndex, const FVector2D& pos);
	FHorizonDialogueBlockInfo CreateDialogueImageBlockInfo(int segmentIndex, const FVector2D& pos);
	FHorizonDialogueBlockInfo CreateDialoguePaperFlipbookBlockInfo(int segmentIndex, const FVector2D& pos);
	void AddDialogueBlock(FHorizonDialogueLineInfo& lineInfo, FHorizonDialogueBlockInfo&& blockInfo);
protected:
	TArray<FHorizonDialogueLineInfo> DialogueLineInfoList;

	TArray<FHorizonDialogueSegmentInfo> DialogueSegmentInfoList;
	
	int CurrentDialogueLineIndex;
	float MsgDeltaTime;

	bool bCreationFromPalette;
};