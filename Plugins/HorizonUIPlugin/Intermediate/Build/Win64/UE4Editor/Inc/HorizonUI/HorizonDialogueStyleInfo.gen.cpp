// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Widget/HorizonDialogueStyleInfo.h"
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
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/Widget/HorizonDialogueStyleInfo.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHorizonDialogueSegmentInfoStyle>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImageSize_MetaData[] = {
				{ "Category", "HorizonPlugin|Style|Image" },
				{ "ModuleRelativePath", "Public/Widget/HorizonDialogueStyleInfo.h" },
				{ "ToolTip", "image size for Texture2D, Material or PaperFlipbook" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ImageSize = { UE4CodeGen_Private::EPropertyClass::Array, "ImageSize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FHorizonDialogueSegmentInfoStyle, ImageSize), METADATA_PARAMS(NewProp_ImageSize_MetaData, ARRAY_COUNT(NewProp_ImageSize_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ImageSize_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ImageSize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PaperFlipbookSourceSize_MetaData[] = {
				{ "Category", "HorizonPlugin|Style|Image|Flipbook" },
				{ "ModuleRelativePath", "Public/Widget/HorizonDialogueStyleInfo.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PaperFlipbookSourceSize = { UE4CodeGen_Private::EPropertyClass::Array, "PaperFlipbookSourceSize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000020015, 1, nullptr, STRUCT_OFFSET(FHorizonDialogueSegmentInfoStyle, PaperFlipbookSourceSize), METADATA_PARAMS(NewProp_PaperFlipbookSourceSize_MetaData, ARRAY_COUNT(NewProp_PaperFlipbookSourceSize_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PaperFlipbookSourceSize_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "PaperFlipbookSourceSize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000020000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PaperFlipbookSourceUV_MetaData[] = {
				{ "Category", "HorizonPlugin|Style|Image|Flipbook" },
				{ "ModuleRelativePath", "Public/Widget/HorizonDialogueStyleInfo.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PaperFlipbookSourceUV = { UE4CodeGen_Private::EPropertyClass::Array, "PaperFlipbookSourceUV", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000020015, 1, nullptr, STRUCT_OFFSET(FHorizonDialogueSegmentInfoStyle, PaperFlipbookSourceUV), METADATA_PARAMS(NewProp_PaperFlipbookSourceUV_MetaData, ARRAY_COUNT(NewProp_PaperFlipbookSourceUV_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PaperFlipbookSourceUV_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "PaperFlipbookSourceUV", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000020000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PaperFlipbook_MetaData[] = {
				{ "AllowedClasses", "PaperFlipbook" },
				{ "Category", "HorizonPlugin|Style|Image|Flipbook" },
				{ "DisplayName", "PaperFlipbook" },
				{ "DisplayThumbnail", "true" },
				{ "ModuleRelativePath", "Public/Widget/HorizonDialogueStyleInfo.h" },
				{ "ToolTip", "for tag <pfb> or <PaperFlipBook>, ignore case" },
			};
#endif
			static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_PaperFlipbook = { UE4CodeGen_Private::EPropertyClass::SoftObject, "PaperFlipbook", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000005, 1, nullptr, STRUCT_OFFSET(FHorizonDialogueSegmentInfoStyle, PaperFlipbook), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(NewProp_PaperFlipbook_MetaData, ARRAY_COUNT(NewProp_PaperFlipbook_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DialogueSoundStartTime_MetaData[] = {
				{ "Category", "HorizonPlugin|Style|Sound" },
				{ "ModuleRelativePath", "Public/Widget/HorizonDialogueStyleInfo.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DialogueSoundStartTime = { UE4CodeGen_Private::EPropertyClass::Array, "DialogueSoundStartTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FHorizonDialogueSegmentInfoStyle, DialogueSoundStartTime), METADATA_PARAMS(NewProp_DialogueSoundStartTime_MetaData, ARRAY_COUNT(NewProp_DialogueSoundStartTime_MetaData)) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DialogueSoundStartTime_Inner = { UE4CodeGen_Private::EPropertyClass::Float, "DialogueSoundStartTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DialogueSoundPitchMultiplier_MetaData[] = {
				{ "Category", "HorizonPlugin|Style|Sound" },
				{ "ModuleRelativePath", "Public/Widget/HorizonDialogueStyleInfo.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DialogueSoundPitchMultiplier = { UE4CodeGen_Private::EPropertyClass::Array, "DialogueSoundPitchMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FHorizonDialogueSegmentInfoStyle, DialogueSoundPitchMultiplier), METADATA_PARAMS(NewProp_DialogueSoundPitchMultiplier_MetaData, ARRAY_COUNT(NewProp_DialogueSoundPitchMultiplier_MetaData)) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DialogueSoundPitchMultiplier_Inner = { UE4CodeGen_Private::EPropertyClass::Float, "DialogueSoundPitchMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DialogueSoundVolumeMultiplier_MetaData[] = {
				{ "Category", "HorizonPlugin|Style|Sound" },
				{ "ModuleRelativePath", "Public/Widget/HorizonDialogueStyleInfo.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DialogueSoundVolumeMultiplier = { UE4CodeGen_Private::EPropertyClass::Array, "DialogueSoundVolumeMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FHorizonDialogueSegmentInfoStyle, DialogueSoundVolumeMultiplier), METADATA_PARAMS(NewProp_DialogueSoundVolumeMultiplier_MetaData, ARRAY_COUNT(NewProp_DialogueSoundVolumeMultiplier_MetaData)) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DialogueSoundVolumeMultiplier_Inner = { UE4CodeGen_Private::EPropertyClass::Float, "DialogueSoundVolumeMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DialogueSound_MetaData[] = {
				{ "Category", "HorizonPlugin|Style|Sound" },
				{ "ModuleRelativePath", "Public/Widget/HorizonDialogueStyleInfo.h" },
			};
#endif
			static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_DialogueSound = { UE4CodeGen_Private::EPropertyClass::SoftObject, "DialogueSound", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000005, 1, nullptr, STRUCT_OFFSET(FHorizonDialogueSegmentInfoStyle, DialogueSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(NewProp_DialogueSound_MetaData, ARRAY_COUNT(NewProp_DialogueSound_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[] = {
				{ "AllowedClasses", "Material" },
				{ "Category", "HorizonPlugin|Style|Image" },
				{ "DisplayThumbnail", "true" },
				{ "ModuleRelativePath", "Public/Widget/HorizonDialogueStyleInfo.h" },
			};
#endif
			static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_Material = { UE4CodeGen_Private::EPropertyClass::SoftObject, "Material", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000005, 1, nullptr, STRUCT_OFFSET(FHorizonDialogueSegmentInfoStyle, Material), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(NewProp_Material_MetaData, ARRAY_COUNT(NewProp_Material_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Texture2D_MetaData[] = {
				{ "AllowedClasses", "Texture2D" },
				{ "Category", "HorizonPlugin|Style|Image" },
				{ "DisplayThumbnail", "true" },
				{ "ModuleRelativePath", "Public/Widget/HorizonDialogueStyleInfo.h" },
				{ "ToolTip", "for tag <img>, ignore case" },
			};
#endif
			static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_Texture2D = { UE4CodeGen_Private::EPropertyClass::SoftObject, "Texture2D", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000005, 1, nullptr, STRUCT_OFFSET(FHorizonDialogueSegmentInfoStyle, Texture2D), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(NewProp_Texture2D_MetaData, ARRAY_COUNT(NewProp_Texture2D_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackgroundButtonClass_MetaData[] = {
				{ "Category", "HorizonPlugin|Style|HyperText" },
				{ "ModuleRelativePath", "Public/Widget/HorizonDialogueStyleInfo.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BackgroundButtonClass = { UE4CodeGen_Private::EPropertyClass::Array, "BackgroundButtonClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000005, 1, nullptr, STRUCT_OFFSET(FHorizonDialogueSegmentInfoStyle, BackgroundButtonClass), METADATA_PARAMS(NewProp_BackgroundButtonClass_MetaData, ARRAY_COUNT(NewProp_BackgroundButtonClass_MetaData)) };
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_BackgroundButtonClass_Inner = { UE4CodeGen_Private::EPropertyClass::Class, "BackgroundButtonClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0004000000000000, 1, nullptr, 0, Z_Construct_UClass_UHorizonButton_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HypertextVisitedColor_MetaData[] = {
				{ "Category", "HorizonPlugin|Style|HyperText" },
				{ "ModuleRelativePath", "Public/Widget/HorizonDialogueStyleInfo.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HypertextVisitedColor = { UE4CodeGen_Private::EPropertyClass::Array, "HypertextVisitedColor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FHorizonDialogueSegmentInfoStyle, HypertextVisitedColor), METADATA_PARAMS(NewProp_HypertextVisitedColor_MetaData, ARRAY_COUNT(NewProp_HypertextVisitedColor_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_HypertextVisitedColor_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "HypertextVisitedColor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HypertextHoveredColor_MetaData[] = {
				{ "Category", "HorizonPlugin|Style|HyperText" },
				{ "ModuleRelativePath", "Public/Widget/HorizonDialogueStyleInfo.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HypertextHoveredColor = { UE4CodeGen_Private::EPropertyClass::Array, "HypertextHoveredColor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FHorizonDialogueSegmentInfoStyle, HypertextHoveredColor), METADATA_PARAMS(NewProp_HypertextHoveredColor_MetaData, ARRAY_COUNT(NewProp_HypertextHoveredColor_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_HypertextHoveredColor_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "HypertextHoveredColor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HypertextReference_MetaData[] = {
				{ "Category", "HorizonPlugin|Style|HyperText" },
				{ "ModuleRelativePath", "Public/Widget/HorizonDialogueStyleInfo.h" },
				{ "ToolTip", "padding position for segment" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HypertextReference = { UE4CodeGen_Private::EPropertyClass::Array, "HypertextReference", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FHorizonDialogueSegmentInfoStyle, HypertextReference), METADATA_PARAMS(NewProp_HypertextReference_MetaData, ARRAY_COUNT(NewProp_HypertextReference_MetaData)) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_HypertextReference_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "HypertextReference", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PaddingMargin_MetaData[] = {
				{ "Category", "HorizonPlugin|Style|Layout" },
				{ "ModuleRelativePath", "Public/Widget/HorizonDialogueStyleInfo.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PaddingMargin = { UE4CodeGen_Private::EPropertyClass::Array, "PaddingMargin", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FHorizonDialogueSegmentInfoStyle, PaddingMargin), METADATA_PARAMS(NewProp_PaddingMargin_MetaData, ARRAY_COUNT(NewProp_PaddingMargin_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PaddingMargin_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "PaddingMargin", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DialogueMsgWait_MetaData[] = {
				{ "Category", "HorizonPlugin|Style|Text" },
				{ "ModuleRelativePath", "Public/Widget/HorizonDialogueStyleInfo.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DialogueMsgWait = { UE4CodeGen_Private::EPropertyClass::Array, "DialogueMsgWait", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FHorizonDialogueSegmentInfoStyle, DialogueMsgWait), METADATA_PARAMS(NewProp_DialogueMsgWait_MetaData, ARRAY_COUNT(NewProp_DialogueMsgWait_MetaData)) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DialogueMsgWait_Inner = { UE4CodeGen_Private::EPropertyClass::Float, "DialogueMsgWait", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DialogueMsgSpeed_MetaData[] = {
				{ "Category", "HorizonPlugin|Style|Text" },
				{ "ModuleRelativePath", "Public/Widget/HorizonDialogueStyleInfo.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DialogueMsgSpeed = { UE4CodeGen_Private::EPropertyClass::Array, "DialogueMsgSpeed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FHorizonDialogueSegmentInfoStyle, DialogueMsgSpeed), METADATA_PARAMS(NewProp_DialogueMsgSpeed_MetaData, ARRAY_COUNT(NewProp_DialogueMsgSpeed_MetaData)) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DialogueMsgSpeed_Inner = { UE4CodeGen_Private::EPropertyClass::Float, "DialogueMsgSpeed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShadowColorAndOpacity_MetaData[] = {
				{ "Category", "HorizonPlugin|Style|Text" },
				{ "ModuleRelativePath", "Public/Widget/HorizonDialogueStyleInfo.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ShadowColorAndOpacity = { UE4CodeGen_Private::EPropertyClass::Array, "ShadowColorAndOpacity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FHorizonDialogueSegmentInfoStyle, ShadowColorAndOpacity), METADATA_PARAMS(NewProp_ShadowColorAndOpacity_MetaData, ARRAY_COUNT(NewProp_ShadowColorAndOpacity_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ShadowColorAndOpacity_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ShadowColorAndOpacity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShadowOffset_MetaData[] = {
				{ "Category", "HorizonPlugin|Style|Text" },
				{ "ModuleRelativePath", "Public/Widget/HorizonDialogueStyleInfo.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ShadowOffset = { UE4CodeGen_Private::EPropertyClass::Array, "ShadowOffset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FHorizonDialogueSegmentInfoStyle, ShadowOffset), METADATA_PARAMS(NewProp_ShadowOffset_MetaData, ARRAY_COUNT(NewProp_ShadowOffset_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ShadowOffset_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ShadowOffset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TypefaceFontName_MetaData[] = {
				{ "Category", "HorizonPlugin|Style|Font" },
				{ "ModuleRelativePath", "Public/Widget/HorizonDialogueStyleInfo.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TypefaceFontName = { UE4CodeGen_Private::EPropertyClass::Array, "TypefaceFontName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FHorizonDialogueSegmentInfoStyle, TypefaceFontName), METADATA_PARAMS(NewProp_TypefaceFontName_MetaData, ARRAY_COUNT(NewProp_TypefaceFontName_MetaData)) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_TypefaceFontName_Inner = { UE4CodeGen_Private::EPropertyClass::Name, "TypefaceFontName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FontSize_MetaData[] = {
				{ "Category", "HorizonPlugin|Style|Font" },
				{ "ModuleRelativePath", "Public/Widget/HorizonDialogueStyleInfo.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FontSize = { UE4CodeGen_Private::EPropertyClass::Array, "FontSize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FHorizonDialogueSegmentInfoStyle, FontSize), METADATA_PARAMS(NewProp_FontSize_MetaData, ARRAY_COUNT(NewProp_FontSize_MetaData)) };
			static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_FontSize_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "FontSize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Font_MetaData[] = {
				{ "Category", "HorizonPlugin|Style|Font" },
				{ "ModuleRelativePath", "Public/Widget/HorizonDialogueStyleInfo.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Font = { UE4CodeGen_Private::EPropertyClass::Array, "Font", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FHorizonDialogueSegmentInfoStyle, Font), METADATA_PARAMS(NewProp_Font_MetaData, ARRAY_COUNT(NewProp_Font_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Font_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Font", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FSlateFontInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorAndOpacity_MetaData[] = {
				{ "Category", "HorizonPlugin|Style|Widget" },
				{ "ModuleRelativePath", "Public/Widget/HorizonDialogueStyleInfo.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ColorAndOpacity = { UE4CodeGen_Private::EPropertyClass::Array, "ColorAndOpacity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FHorizonDialogueSegmentInfoStyle, ColorAndOpacity), METADATA_PARAMS(NewProp_ColorAndOpacity_MetaData, ARRAY_COUNT(NewProp_ColorAndOpacity_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorAndOpacity_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ColorAndOpacity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[] = {
				{ "Category", "HorizonPlugin|Style|Text" },
				{ "ModuleRelativePath", "Public/Widget/HorizonDialogueStyleInfo.h" },
				{ "ToolTip", "Optional parameters. If not be set, will use parent's setting(or default)\nBecause TOptional can't be acceee from blueprint, so use TArray instead, will use TArray::Last() if num of array larger than 0" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Text = { UE4CodeGen_Private::EPropertyClass::Array, "Text", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FHorizonDialogueSegmentInfoStyle, Text), METADATA_PARAMS(NewProp_Text_MetaData, ARRAY_COUNT(NewProp_Text_MetaData)) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Text_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "Text", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StyleName_MetaData[] = {
				{ "Category", "HorizonPlugin|Style|Basic" },
				{ "ModuleRelativePath", "Public/Widget/HorizonDialogueStyleInfo.h" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_StyleName = { UE4CodeGen_Private::EPropertyClass::Name, "StyleName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FHorizonDialogueSegmentInfoStyle, StyleName), METADATA_PARAMS(NewProp_StyleName_MetaData, ARRAY_COUNT(NewProp_StyleName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ImageSize,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ImageSize_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PaperFlipbookSourceSize,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PaperFlipbookSourceSize_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PaperFlipbookSourceUV,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PaperFlipbookSourceUV_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PaperFlipbook,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DialogueSoundStartTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DialogueSoundStartTime_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DialogueSoundPitchMultiplier,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DialogueSoundPitchMultiplier_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DialogueSoundVolumeMultiplier,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DialogueSoundVolumeMultiplier_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DialogueSound,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Material,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Texture2D,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BackgroundButtonClass,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BackgroundButtonClass_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HypertextVisitedColor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HypertextVisitedColor_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HypertextHoveredColor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HypertextHoveredColor_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HypertextReference,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HypertextReference_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PaddingMargin,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PaddingMargin_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DialogueMsgWait,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DialogueMsgWait_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DialogueMsgSpeed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DialogueMsgSpeed_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ShadowColorAndOpacity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ShadowColorAndOpacity_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ShadowOffset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ShadowOffset_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TypefaceFontName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TypefaceFontName_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FontSize,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FontSize_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Font,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Font_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ColorAndOpacity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ColorAndOpacity_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Text,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Text_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StyleName,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_HorizonUI,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"HorizonDialogueSegmentInfoStyle",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FHorizonDialogueSegmentInfoStyle),
				alignof(FHorizonDialogueSegmentInfoStyle),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle_CRC() { return 3703275960U; }
	void UHorizonDialogueStyleInfo::StaticRegisterNativesUHorizonDialogueStyleInfo()
	{
	}
	UClass* Z_Construct_UClass_UHorizonDialogueStyleInfo_NoRegister()
	{
		return UHorizonDialogueStyleInfo::StaticClass();
	}
	UClass* Z_Construct_UClass_UHorizonDialogueStyleInfo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_HorizonUI,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "Widget/HorizonDialogueStyleInfo.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/Widget/HorizonDialogueStyleInfo.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SegmentStyleList_MetaData[] = {
				{ "Category", "HorizonPlugin|StyleList" },
				{ "ModuleRelativePath", "Public/Widget/HorizonDialogueStyleInfo.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SegmentStyleList = { UE4CodeGen_Private::EPropertyClass::Array, "SegmentStyleList", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UHorizonDialogueStyleInfo, SegmentStyleList), METADATA_PARAMS(NewProp_SegmentStyleList_MetaData, ARRAY_COUNT(NewProp_SegmentStyleList_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SegmentStyleList_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "SegmentStyleList", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SegmentStyleList,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SegmentStyleList_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UHorizonDialogueStyleInfo>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UHorizonDialogueStyleInfo::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100080u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHorizonDialogueStyleInfo, 2342044542);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHorizonDialogueStyleInfo(Z_Construct_UClass_UHorizonDialogueStyleInfo, &UHorizonDialogueStyleInfo::StaticClass, TEXT("/Script/HorizonUI"), TEXT("UHorizonDialogueStyleInfo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHorizonDialogueStyleInfo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
