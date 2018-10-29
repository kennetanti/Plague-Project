// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HorizonUI/Public/Widget/HorizonDialogueStyleInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHorizonDialogueStyleInfo() {}
// Cross Module References
	HORIZONUI_API UScriptStruct* Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle();
	UPackage* Z_Construct_UPackage__Script_HorizonUI();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbook_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperSprite_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	HORIZONUI_API UClass* Z_Construct_UClass_UHorizonButton_NoRegister();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateColor();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateFontInfo();
	HORIZONUI_API UClass* Z_Construct_UClass_UHorizonDialogueStyleInfo_NoRegister();
	HORIZONUI_API UClass* Z_Construct_UClass_UHorizonDialogueStyleInfo();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
class UScriptStruct* FHorizonDialogueSegmentInfoStyle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern HORIZONUI_API uint32 Get_Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle, Z_Construct_UPackage__Script_HorizonUI(), TEXT("HorizonDialogueSegmentInfoStyle"), sizeof(FHorizonDialogueSegmentInfoStyle), Get_Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FHorizonDialogueSegmentInfoStyle(FHorizonDialogueSegmentInfoStyle::StaticStruct, TEXT("/Script/HorizonUI"), TEXT("HorizonDialogueSegmentInfoStyle"), false, nullptr, nullptr);
static struct FScriptStruct_HorizonUI_StaticRegisterNativesFHorizonDialogueSegmentInfoStyle
{
	FScriptStruct_HorizonUI_StaticRegisterNativesFHorizonDialogueSegmentInfoStyle()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("HorizonDialogueSegmentInfoStyle")),new UScriptStruct::TCppStructOps<FHorizonDialogueSegmentInfoStyle>);
	}
} ScriptStruct_HorizonUI_StaticRegisterNativesFHorizonDialogueSegmentInfoStyle;
	struct Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImageSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ImageSize;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ImageSize_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PaperFlipbookSourceSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PaperFlipbookSourceSize;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PaperFlipbookSourceSize_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PaperFlipbookSourceUV_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PaperFlipbookSourceUV;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PaperFlipbookSourceUV_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PaperFlipbook_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_PaperFlipbook;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DialogueSoundStartTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DialogueSoundStartTime;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DialogueSoundStartTime_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DialogueSoundPitchMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DialogueSoundPitchMultiplier;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DialogueSoundPitchMultiplier_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DialogueSoundVolumeMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DialogueSoundVolumeMultiplier;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DialogueSoundVolumeMultiplier_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DialogueSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_DialogueSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PaperSprite_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_PaperSprite;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_Material;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Texture2D_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_Texture2D;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackgroundButtonClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BackgroundButtonClass;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_BackgroundButtonClass_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HypertextVisitedColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HypertextVisitedColor;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HypertextVisitedColor_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HypertextHoveredColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HypertextHoveredColor;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HypertextHoveredColor_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HypertextReference_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HypertextReference;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_HypertextReference_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PaddingMargin_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PaddingMargin;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PaddingMargin_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DialogueMsgWait_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DialogueMsgWait;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DialogueMsgWait_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DialogueMsgSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DialogueMsgSpeed;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DialogueMsgSpeed_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShadowColorAndOpacity_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ShadowColorAndOpacity;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ShadowColorAndOpacity_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShadowOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ShadowOffset;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ShadowOffset_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TypefaceFontName_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TypefaceFontName;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TypefaceFontName_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FontSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FontSize;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_FontSize_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Font_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Font;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Font_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorAndOpacity_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ColorAndOpacity;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorAndOpacity_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Text;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Text_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StyleName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_StyleName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Widget/HorizonDialogueStyleInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHorizonDialogueSegmentInfoStyle>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_ImageSize_MetaData[] = {
		{ "Category", "HorizonPlugin|Style|Image" },
		{ "ModuleRelativePath", "Public/Widget/HorizonDialogueStyleInfo.h" },
		{ "ToolTip", "image size for Texture2D, Material or PaperFlipbook" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_ImageSize = { UE4CodeGen_Private::EPropertyClass::Array, "ImageSize", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FHorizonDialogueSegmentInfoStyle, ImageSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_ImageSize_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_ImageSize_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_ImageSize_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ImageSize", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_PaperFlipbookSourceSize_MetaData[] = {
		{ "Category", "HorizonPlugin|Style|Image|Flipbook" },
		{ "ModuleRelativePath", "Public/Widget/HorizonDialogueStyleInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_PaperFlipbookSourceSize = { UE4CodeGen_Private::EPropertyClass::Array, "PaperFlipbookSourceSize", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000020015, 1, nullptr, STRUCT_OFFSET(FHorizonDialogueSegmentInfoStyle, PaperFlipbookSourceSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_PaperFlipbookSourceSize_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_PaperFlipbookSourceSize_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_PaperFlipbookSourceSize_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "PaperFlipbookSourceSize", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000020000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_PaperFlipbookSourceUV_MetaData[] = {
		{ "Category", "HorizonPlugin|Style|Image|Flipbook" },
		{ "ModuleRelativePath", "Public/Widget/HorizonDialogueStyleInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_PaperFlipbookSourceUV = { UE4CodeGen_Private::EPropertyClass::Array, "PaperFlipbookSourceUV", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000020015, 1, nullptr, STRUCT_OFFSET(FHorizonDialogueSegmentInfoStyle, PaperFlipbookSourceUV), METADATA_PARAMS(Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_PaperFlipbookSourceUV_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_PaperFlipbookSourceUV_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_PaperFlipbookSourceUV_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "PaperFlipbookSourceUV", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000020000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_PaperFlipbook_MetaData[] = {
		{ "AllowedClasses", "PaperFlipbook" },
		{ "Category", "HorizonPlugin|Style|Image|Flipbook" },
		{ "DisplayName", "PaperFlipbook" },
		{ "DisplayThumbnail", "true" },
		{ "ModuleRelativePath", "Public/Widget/HorizonDialogueStyleInfo.h" },
		{ "ToolTip", "for tag <pfb> or <PaperFlipBook>, ignore case" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_PaperFlipbook = { UE4CodeGen_Private::EPropertyClass::SoftObject, "PaperFlipbook", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000005, 1, nullptr, STRUCT_OFFSET(FHorizonDialogueSegmentInfoStyle, PaperFlipbook), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_PaperFlipbook_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_PaperFlipbook_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_DialogueSoundStartTime_MetaData[] = {
		{ "Category", "HorizonPlugin|Style|Sound" },
		{ "ModuleRelativePath", "Public/Widget/HorizonDialogueStyleInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_DialogueSoundStartTime = { UE4CodeGen_Private::EPropertyClass::Array, "DialogueSoundStartTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FHorizonDialogueSegmentInfoStyle, DialogueSoundStartTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_DialogueSoundStartTime_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_DialogueSoundStartTime_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_DialogueSoundStartTime_Inner = { UE4CodeGen_Private::EPropertyClass::Float, "DialogueSoundStartTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_DialogueSoundPitchMultiplier_MetaData[] = {
		{ "Category", "HorizonPlugin|Style|Sound" },
		{ "ModuleRelativePath", "Public/Widget/HorizonDialogueStyleInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_DialogueSoundPitchMultiplier = { UE4CodeGen_Private::EPropertyClass::Array, "DialogueSoundPitchMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FHorizonDialogueSegmentInfoStyle, DialogueSoundPitchMultiplier), METADATA_PARAMS(Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_DialogueSoundPitchMultiplier_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_DialogueSoundPitchMultiplier_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_DialogueSoundPitchMultiplier_Inner = { UE4CodeGen_Private::EPropertyClass::Float, "DialogueSoundPitchMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_DialogueSoundVolumeMultiplier_MetaData[] = {
		{ "Category", "HorizonPlugin|Style|Sound" },
		{ "ModuleRelativePath", "Public/Widget/HorizonDialogueStyleInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_DialogueSoundVolumeMultiplier = { UE4CodeGen_Private::EPropertyClass::Array, "DialogueSoundVolumeMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FHorizonDialogueSegmentInfoStyle, DialogueSoundVolumeMultiplier), METADATA_PARAMS(Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_DialogueSoundVolumeMultiplier_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_DialogueSoundVolumeMultiplier_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_DialogueSoundVolumeMultiplier_Inner = { UE4CodeGen_Private::EPropertyClass::Float, "DialogueSoundVolumeMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_DialogueSound_MetaData[] = {
		{ "Category", "HorizonPlugin|Style|Sound" },
		{ "ModuleRelativePath", "Public/Widget/HorizonDialogueStyleInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_DialogueSound = { UE4CodeGen_Private::EPropertyClass::SoftObject, "DialogueSound", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000005, 1, nullptr, STRUCT_OFFSET(FHorizonDialogueSegmentInfoStyle, DialogueSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_DialogueSound_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_DialogueSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_PaperSprite_MetaData[] = {
		{ "Category", "HorizonPlugin|Style|Image" },
		{ "DisplayThumbnail", "true" },
		{ "ModuleRelativePath", "Public/Widget/HorizonDialogueStyleInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_PaperSprite = { UE4CodeGen_Private::EPropertyClass::SoftObject, "PaperSprite", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000005, 1, nullptr, STRUCT_OFFSET(FHorizonDialogueSegmentInfoStyle, PaperSprite), Z_Construct_UClass_UPaperSprite_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_PaperSprite_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_PaperSprite_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_Material_MetaData[] = {
		{ "AllowedClasses", "Material" },
		{ "Category", "HorizonPlugin|Style|Image" },
		{ "DisplayThumbnail", "true" },
		{ "ModuleRelativePath", "Public/Widget/HorizonDialogueStyleInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_Material = { UE4CodeGen_Private::EPropertyClass::SoftObject, "Material", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000005, 1, nullptr, STRUCT_OFFSET(FHorizonDialogueSegmentInfoStyle, Material), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_Material_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_Material_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_Texture2D_MetaData[] = {
		{ "AllowedClasses", "Texture2D" },
		{ "Category", "HorizonPlugin|Style|Image" },
		{ "DisplayThumbnail", "true" },
		{ "ModuleRelativePath", "Public/Widget/HorizonDialogueStyleInfo.h" },
		{ "ToolTip", "for tag <img>, ignore case" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_Texture2D = { UE4CodeGen_Private::EPropertyClass::SoftObject, "Texture2D", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000005, 1, nullptr, STRUCT_OFFSET(FHorizonDialogueSegmentInfoStyle, Texture2D), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_Texture2D_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_Texture2D_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_BackgroundButtonClass_MetaData[] = {
		{ "Category", "HorizonPlugin|Style|HyperText" },
		{ "ModuleRelativePath", "Public/Widget/HorizonDialogueStyleInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_BackgroundButtonClass = { UE4CodeGen_Private::EPropertyClass::Array, "BackgroundButtonClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000005, 1, nullptr, STRUCT_OFFSET(FHorizonDialogueSegmentInfoStyle, BackgroundButtonClass), METADATA_PARAMS(Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_BackgroundButtonClass_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_BackgroundButtonClass_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_BackgroundButtonClass_Inner = { UE4CodeGen_Private::EPropertyClass::Class, "BackgroundButtonClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0004000000000000, 1, nullptr, 0, Z_Construct_UClass_UHorizonButton_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_HypertextVisitedColor_MetaData[] = {
		{ "Category", "HorizonPlugin|Style|HyperText" },
		{ "ModuleRelativePath", "Public/Widget/HorizonDialogueStyleInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_HypertextVisitedColor = { UE4CodeGen_Private::EPropertyClass::Array, "HypertextVisitedColor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FHorizonDialogueSegmentInfoStyle, HypertextVisitedColor), METADATA_PARAMS(Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_HypertextVisitedColor_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_HypertextVisitedColor_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_HypertextVisitedColor_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "HypertextVisitedColor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_HypertextHoveredColor_MetaData[] = {
		{ "Category", "HorizonPlugin|Style|HyperText" },
		{ "ModuleRelativePath", "Public/Widget/HorizonDialogueStyleInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_HypertextHoveredColor = { UE4CodeGen_Private::EPropertyClass::Array, "HypertextHoveredColor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FHorizonDialogueSegmentInfoStyle, HypertextHoveredColor), METADATA_PARAMS(Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_HypertextHoveredColor_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_HypertextHoveredColor_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_HypertextHoveredColor_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "HypertextHoveredColor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_HypertextReference_MetaData[] = {
		{ "Category", "HorizonPlugin|Style|HyperText" },
		{ "ModuleRelativePath", "Public/Widget/HorizonDialogueStyleInfo.h" },
		{ "ToolTip", "padding position for segment" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_HypertextReference = { UE4CodeGen_Private::EPropertyClass::Array, "HypertextReference", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FHorizonDialogueSegmentInfoStyle, HypertextReference), METADATA_PARAMS(Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_HypertextReference_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_HypertextReference_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_HypertextReference_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "HypertextReference", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_PaddingMargin_MetaData[] = {
		{ "Category", "HorizonPlugin|Style|Layout" },
		{ "ModuleRelativePath", "Public/Widget/HorizonDialogueStyleInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_PaddingMargin = { UE4CodeGen_Private::EPropertyClass::Array, "PaddingMargin", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FHorizonDialogueSegmentInfoStyle, PaddingMargin), METADATA_PARAMS(Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_PaddingMargin_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_PaddingMargin_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_PaddingMargin_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "PaddingMargin", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_DialogueMsgWait_MetaData[] = {
		{ "Category", "HorizonPlugin|Style|Text" },
		{ "ModuleRelativePath", "Public/Widget/HorizonDialogueStyleInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_DialogueMsgWait = { UE4CodeGen_Private::EPropertyClass::Array, "DialogueMsgWait", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FHorizonDialogueSegmentInfoStyle, DialogueMsgWait), METADATA_PARAMS(Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_DialogueMsgWait_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_DialogueMsgWait_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_DialogueMsgWait_Inner = { UE4CodeGen_Private::EPropertyClass::Float, "DialogueMsgWait", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_DialogueMsgSpeed_MetaData[] = {
		{ "Category", "HorizonPlugin|Style|Text" },
		{ "ModuleRelativePath", "Public/Widget/HorizonDialogueStyleInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_DialogueMsgSpeed = { UE4CodeGen_Private::EPropertyClass::Array, "DialogueMsgSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FHorizonDialogueSegmentInfoStyle, DialogueMsgSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_DialogueMsgSpeed_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_DialogueMsgSpeed_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_DialogueMsgSpeed_Inner = { UE4CodeGen_Private::EPropertyClass::Float, "DialogueMsgSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_ShadowColorAndOpacity_MetaData[] = {
		{ "Category", "HorizonPlugin|Style|Text" },
		{ "ModuleRelativePath", "Public/Widget/HorizonDialogueStyleInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_ShadowColorAndOpacity = { UE4CodeGen_Private::EPropertyClass::Array, "ShadowColorAndOpacity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FHorizonDialogueSegmentInfoStyle, ShadowColorAndOpacity), METADATA_PARAMS(Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_ShadowColorAndOpacity_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_ShadowColorAndOpacity_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_ShadowColorAndOpacity_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ShadowColorAndOpacity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_ShadowOffset_MetaData[] = {
		{ "Category", "HorizonPlugin|Style|Text" },
		{ "ModuleRelativePath", "Public/Widget/HorizonDialogueStyleInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_ShadowOffset = { UE4CodeGen_Private::EPropertyClass::Array, "ShadowOffset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FHorizonDialogueSegmentInfoStyle, ShadowOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_ShadowOffset_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_ShadowOffset_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_ShadowOffset_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ShadowOffset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_TypefaceFontName_MetaData[] = {
		{ "Category", "HorizonPlugin|Style|Font" },
		{ "ModuleRelativePath", "Public/Widget/HorizonDialogueStyleInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_TypefaceFontName = { UE4CodeGen_Private::EPropertyClass::Array, "TypefaceFontName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FHorizonDialogueSegmentInfoStyle, TypefaceFontName), METADATA_PARAMS(Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_TypefaceFontName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_TypefaceFontName_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_TypefaceFontName_Inner = { UE4CodeGen_Private::EPropertyClass::Name, "TypefaceFontName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_FontSize_MetaData[] = {
		{ "Category", "HorizonPlugin|Style|Font" },
		{ "ModuleRelativePath", "Public/Widget/HorizonDialogueStyleInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_FontSize = { UE4CodeGen_Private::EPropertyClass::Array, "FontSize", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FHorizonDialogueSegmentInfoStyle, FontSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_FontSize_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_FontSize_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_FontSize_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "FontSize", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_Font_MetaData[] = {
		{ "Category", "HorizonPlugin|Style|Font" },
		{ "ModuleRelativePath", "Public/Widget/HorizonDialogueStyleInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_Font = { UE4CodeGen_Private::EPropertyClass::Array, "Font", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FHorizonDialogueSegmentInfoStyle, Font), METADATA_PARAMS(Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_Font_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_Font_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_Font_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Font", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FSlateFontInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_ColorAndOpacity_MetaData[] = {
		{ "Category", "HorizonPlugin|Style|Widget" },
		{ "ModuleRelativePath", "Public/Widget/HorizonDialogueStyleInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_ColorAndOpacity = { UE4CodeGen_Private::EPropertyClass::Array, "ColorAndOpacity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FHorizonDialogueSegmentInfoStyle, ColorAndOpacity), METADATA_PARAMS(Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_ColorAndOpacity_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_ColorAndOpacity_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_ColorAndOpacity_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ColorAndOpacity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_Text_MetaData[] = {
		{ "Category", "HorizonPlugin|Style|Text" },
		{ "ModuleRelativePath", "Public/Widget/HorizonDialogueStyleInfo.h" },
		{ "ToolTip", "Optional parameters. If not be set, will use parent's setting(or default)\nBecause TOptional can't be acceee from blueprint, so use TArray instead, will use TArray::Last() if num of array larger than 0" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_Text = { UE4CodeGen_Private::EPropertyClass::Array, "Text", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FHorizonDialogueSegmentInfoStyle, Text), METADATA_PARAMS(Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_Text_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_Text_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_Text_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "Text", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_StyleName_MetaData[] = {
		{ "Category", "HorizonPlugin|Style|Basic" },
		{ "ModuleRelativePath", "Public/Widget/HorizonDialogueStyleInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_StyleName = { UE4CodeGen_Private::EPropertyClass::Name, "StyleName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FHorizonDialogueSegmentInfoStyle, StyleName), METADATA_PARAMS(Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_StyleName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_StyleName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_ImageSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_ImageSize_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_PaperFlipbookSourceSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_PaperFlipbookSourceSize_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_PaperFlipbookSourceUV,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_PaperFlipbookSourceUV_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_PaperFlipbook,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_DialogueSoundStartTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_DialogueSoundStartTime_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_DialogueSoundPitchMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_DialogueSoundPitchMultiplier_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_DialogueSoundVolumeMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_DialogueSoundVolumeMultiplier_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_DialogueSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_PaperSprite,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_Material,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_Texture2D,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_BackgroundButtonClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_BackgroundButtonClass_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_HypertextVisitedColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_HypertextVisitedColor_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_HypertextHoveredColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_HypertextHoveredColor_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_HypertextReference,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_HypertextReference_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_PaddingMargin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_PaddingMargin_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_DialogueMsgWait,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_DialogueMsgWait_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_DialogueMsgSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_DialogueMsgSpeed_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_ShadowColorAndOpacity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_ShadowColorAndOpacity_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_ShadowOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_ShadowOffset_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_TypefaceFontName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_TypefaceFontName_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_FontSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_FontSize_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_Font,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_Font_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_ColorAndOpacity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_ColorAndOpacity_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_Text,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_Text_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::NewProp_StyleName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HorizonUI,
		nullptr,
		&NewStructOps,
		"HorizonDialogueSegmentInfoStyle",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FHorizonDialogueSegmentInfoStyle),
		alignof(FHorizonDialogueSegmentInfoStyle),
		Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_HorizonUI();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("HorizonDialogueSegmentInfoStyle"), sizeof(FHorizonDialogueSegmentInfoStyle), Get_Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_CRC() { return 1876134961U; }
	void UHorizonDialogueStyleInfo::StaticRegisterNativesUHorizonDialogueStyleInfo()
	{
	}
	UClass* Z_Construct_UClass_UHorizonDialogueStyleInfo_NoRegister()
	{
		return UHorizonDialogueStyleInfo::StaticClass();
	}
	struct Z_Construct_UClass_UHorizonDialogueStyleInfo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SegmentStyleList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SegmentStyleList;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SegmentStyleList_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHorizonDialogueStyleInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_HorizonUI,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHorizonDialogueStyleInfo_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Widget/HorizonDialogueStyleInfo.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Widget/HorizonDialogueStyleInfo.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHorizonDialogueStyleInfo_Statics::NewProp_SegmentStyleList_MetaData[] = {
		{ "Category", "HorizonPlugin|StyleList" },
		{ "ModuleRelativePath", "Public/Widget/HorizonDialogueStyleInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHorizonDialogueStyleInfo_Statics::NewProp_SegmentStyleList = { UE4CodeGen_Private::EPropertyClass::Array, "SegmentStyleList", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UHorizonDialogueStyleInfo, SegmentStyleList), METADATA_PARAMS(Z_Construct_UClass_UHorizonDialogueStyleInfo_Statics::NewProp_SegmentStyleList_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHorizonDialogueStyleInfo_Statics::NewProp_SegmentStyleList_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHorizonDialogueStyleInfo_Statics::NewProp_SegmentStyleList_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "SegmentStyleList", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHorizonDialogueStyleInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorizonDialogueStyleInfo_Statics::NewProp_SegmentStyleList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorizonDialogueStyleInfo_Statics::NewProp_SegmentStyleList_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHorizonDialogueStyleInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHorizonDialogueStyleInfo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHorizonDialogueStyleInfo_Statics::ClassParams = {
		&UHorizonDialogueStyleInfo::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		nullptr, 0,
		Z_Construct_UClass_UHorizonDialogueStyleInfo_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UHorizonDialogueStyleInfo_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UHorizonDialogueStyleInfo_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UHorizonDialogueStyleInfo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHorizonDialogueStyleInfo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHorizonDialogueStyleInfo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHorizonDialogueStyleInfo, 3338889574);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHorizonDialogueStyleInfo(Z_Construct_UClass_UHorizonDialogueStyleInfo, &UHorizonDialogueStyleInfo::StaticClass, TEXT("/Script/HorizonUI"), TEXT("UHorizonDialogueStyleInfo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHorizonDialogueStyleInfo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
