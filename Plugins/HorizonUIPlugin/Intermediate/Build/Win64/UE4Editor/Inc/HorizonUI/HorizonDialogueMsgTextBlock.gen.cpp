// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Widget/HorizonDialogueMsgTextBlock.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHorizonDialogueMsgTextBlock() {}
// Cross Module References
	HORIZONUI_API UFunction* Z_Construct_UDelegateFunction_HorizonUI_OnHorizonDialoguePageEvent__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_HorizonUI();
	HORIZONUI_API UScriptStruct* Z_Construct_UScriptStruct_FHorizonDialogueDialoguePageResult();
	HORIZONUI_API UFunction* Z_Construct_UDelegateFunction_HorizonUI_OnHorizonDialogueMsgEvent__DelegateSignature();
	HORIZONUI_API UFunction* Z_Construct_UDelegateFunction_HorizonUI_OnHorizonHypertextEvent__DelegateSignature();
	HORIZONUI_API UScriptStruct* Z_Construct_UScriptStruct_FHorizonDialogueHypertextResult();
	HORIZONUI_API UEnum* Z_Construct_UEnum_HorizonUI_EHorizonDialogueTextOverflowWarpMethod();
	HORIZONUI_API UEnum* Z_Construct_UEnum_HorizonUI_EHorizonDialogueSegmentType();
	HORIZONUI_API UClass* Z_Construct_UClass_UHorizonDialogueMsgTextBlock_NoRegister();
	HORIZONUI_API UScriptStruct* Z_Construct_UScriptStruct_FHorizonDialoguePageInfo();
	HORIZONUI_API UScriptStruct* Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfo();
	HORIZONUI_API UScriptStruct* Z_Construct_UScriptStruct_FHorizonDialogueLineInfo();
	HORIZONUI_API UScriptStruct* Z_Construct_UScriptStruct_FHorizonDialogueBlockInfo();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	HORIZONUI_API UClass* Z_Construct_UClass_UHorizonDialogueMsgTextBlock();
	UMG_API UClass* Z_Construct_UClass_UCanvasPanel();
	HORIZONUI_API UFunction* Z_Construct_UFunction_UHorizonDialogueMsgTextBlock_GetCurrentPageIndex();
	HORIZONUI_API UFunction* Z_Construct_UFunction_UHorizonDialogueMsgTextBlock_GetJustification();
	SLATE_API UEnum* Z_Construct_UEnum_Slate_ETextJustify();
	HORIZONUI_API UFunction* Z_Construct_UFunction_UHorizonDialogueMsgTextBlock_GetText();
	HORIZONUI_API UFunction* Z_Construct_UFunction_UHorizonDialogueMsgTextBlock_GetTextLength();
	HORIZONUI_API UFunction* Z_Construct_UFunction_UHorizonDialogueMsgTextBlock_NextDialogueMsgPage();
	HORIZONUI_API UFunction* Z_Construct_UFunction_UHorizonDialogueMsgTextBlock_SetAutoNextDialogueMsgPageIntervalRate();
	HORIZONUI_API UFunction* Z_Construct_UFunction_UHorizonDialogueMsgTextBlock_SetColorAndOpacity();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateColor();
	HORIZONUI_API UFunction* Z_Construct_UFunction_UHorizonDialogueMsgTextBlock_SetDialogueMsgPage();
	HORIZONUI_API UFunction* Z_Construct_UFunction_UHorizonDialogueMsgTextBlock_SetFont();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateFontInfo();
	HORIZONUI_API UFunction* Z_Construct_UFunction_UHorizonDialogueMsgTextBlock_SetFontSize();
	HORIZONUI_API UFunction* Z_Construct_UFunction_UHorizonDialogueMsgTextBlock_SetIsAutoNextDialogueMsgPage();
	HORIZONUI_API UFunction* Z_Construct_UFunction_UHorizonDialogueMsgTextBlock_SetIsDialogueMsgText();
	HORIZONUI_API UFunction* Z_Construct_UFunction_UHorizonDialogueMsgTextBlock_SetIsRepeatDialogueMsg();
	HORIZONUI_API UFunction* Z_Construct_UFunction_UHorizonDialogueMsgTextBlock_SetIsStartTickDialogueMsg();
	HORIZONUI_API UFunction* Z_Construct_UFunction_UHorizonDialogueMsgTextBlock_SetJustification();
	HORIZONUI_API UFunction* Z_Construct_UFunction_UHorizonDialogueMsgTextBlock_SetOpacity();
	HORIZONUI_API UFunction* Z_Construct_UFunction_UHorizonDialogueMsgTextBlock_SetShadowColorAndOpacity();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	HORIZONUI_API UFunction* Z_Construct_UFunction_UHorizonDialogueMsgTextBlock_SetShadowOffset();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	HORIZONUI_API UFunction* Z_Construct_UFunction_UHorizonDialogueMsgTextBlock_SetTextAndRebuildDialogue();
	HORIZONUI_API UFunction* Z_Construct_UFunction_UHorizonDialogueMsgTextBlock_StartDialogue();
	HORIZONUI_API UFunction* Z_Construct_UFunction_UHorizonDialogueMsgTextBlock_StopDialogue();
	HORIZONUI_API UClass* Z_Construct_UClass_UHorizonDialogueStyleInfo_NoRegister();
	HORIZONUI_API UScriptStruct* Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
	UMG_API UFunction* Z_Construct_UDelegateFunction_UWidget_GetText__DelegateSignature();
// End Cross Module References
	UFunction* Z_Construct_UDelegateFunction_HorizonUI_OnHorizonDialoguePageEvent__DelegateSignature()
	{
		struct _Script_HorizonUI_eventOnHorizonDialoguePageEvent_Parms
		{
			FHorizonDialogueDialoguePageResult InResult;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InResult_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InResult = { UE4CodeGen_Private::EPropertyClass::Struct, "InResult", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(_Script_HorizonUI_eventOnHorizonDialoguePageEvent_Parms, InResult), Z_Construct_UScriptStruct_FHorizonDialogueDialoguePageResult, METADATA_PARAMS(NewProp_InResult_MetaData, ARRAY_COUNT(NewProp_InResult_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InResult,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Widget/HorizonDialogueMsgTextBlock.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_HorizonUI, "OnHorizonDialoguePageEvent__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_HorizonUI_eventOnHorizonDialoguePageEvent_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UDelegateFunction_HorizonUI_OnHorizonDialogueMsgEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Widget/HorizonDialogueMsgTextBlock.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_HorizonUI, "OnHorizonDialogueMsgEvent__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UDelegateFunction_HorizonUI_OnHorizonHypertextEvent__DelegateSignature()
	{
		struct _Script_HorizonUI_eventOnHorizonHypertextEvent_Parms
		{
			FHorizonDialogueHypertextResult InResult;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InResult_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InResult = { UE4CodeGen_Private::EPropertyClass::Struct, "InResult", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008008000182, 1, nullptr, STRUCT_OFFSET(_Script_HorizonUI_eventOnHorizonHypertextEvent_Parms, InResult), Z_Construct_UScriptStruct_FHorizonDialogueHypertextResult, METADATA_PARAMS(NewProp_InResult_MetaData, ARRAY_COUNT(NewProp_InResult_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InResult,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Widget/HorizonDialogueMsgTextBlock.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_HorizonUI, "OnHorizonHypertextEvent__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_HorizonUI_eventOnHorizonHypertextEvent_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* EHorizonDialogueTextOverflowWarpMethod_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_HorizonUI_EHorizonDialogueTextOverflowWarpMethod, Z_Construct_UPackage__Script_HorizonUI(), TEXT("EHorizonDialogueTextOverflowWarpMethod"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHorizonDialogueTextOverflowWarpMethod(EHorizonDialogueTextOverflowWarpMethod_StaticEnum, TEXT("/Script/HorizonUI"), TEXT("EHorizonDialogueTextOverflowWarpMethod"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_HorizonUI_EHorizonDialogueTextOverflowWarpMethod_CRC() { return 2821384899U; }
	UEnum* Z_Construct_UEnum_HorizonUI_EHorizonDialogueTextOverflowWarpMethod()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_HorizonUI();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHorizonDialogueTextOverflowWarpMethod"), 0, Get_Z_Construct_UEnum_HorizonUI_EHorizonDialogueTextOverflowWarpMethod_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EHorizonDialogueTextOverflowWarpMethod::Normal", (int64)EHorizonDialogueTextOverflowWarpMethod::Normal },
				{ "EHorizonDialogueTextOverflowWarpMethod::BreakAll", (int64)EHorizonDialogueTextOverflowWarpMethod::BreakAll },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "BreakAll.ToolTip", "Try get a \"word\"(use space to determine, for both CJK and non-CJK) and check if can place at current line, if not, move to next line and use BreakAll rule in next line for the \"word\"" },
				{ "ModuleRelativePath", "Public/Widget/HorizonDialogueMsgTextBlock.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_HorizonUI,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EHorizonDialogueTextOverflowWarpMethod",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EHorizonDialogueTextOverflowWarpMethod",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EHorizonDialogueSegmentType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_HorizonUI_EHorizonDialogueSegmentType, Z_Construct_UPackage__Script_HorizonUI(), TEXT("EHorizonDialogueSegmentType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHorizonDialogueSegmentType(EHorizonDialogueSegmentType_StaticEnum, TEXT("/Script/HorizonUI"), TEXT("EHorizonDialogueSegmentType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_HorizonUI_EHorizonDialogueSegmentType_CRC() { return 504518815U; }
	UEnum* Z_Construct_UEnum_HorizonUI_EHorizonDialogueSegmentType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_HorizonUI();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHorizonDialogueSegmentType"), 0, Get_Z_Construct_UEnum_HorizonUI_EHorizonDialogueSegmentType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EHorizonDialogueSegmentType::Invalidated", (int64)EHorizonDialogueSegmentType::Invalidated },
				{ "EHorizonDialogueSegmentType::Text", (int64)EHorizonDialogueSegmentType::Text },
				{ "EHorizonDialogueSegmentType::NewLine", (int64)EHorizonDialogueSegmentType::NewLine },
				{ "EHorizonDialogueSegmentType::Image", (int64)EHorizonDialogueSegmentType::Image },
				{ "EHorizonDialogueSegmentType::PaperFlipbook", (int64)EHorizonDialogueSegmentType::PaperFlipbook },
				{ "EHorizonDialogueSegmentType::Material", (int64)EHorizonDialogueSegmentType::Material },
				{ "EHorizonDialogueSegmentType::HyperText", (int64)EHorizonDialogueSegmentType::HyperText },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/Widget/HorizonDialogueMsgTextBlock.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_HorizonUI,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EHorizonDialogueSegmentType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EHorizonDialogueSegmentType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FHorizonDialogueDialoguePageResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern HORIZONUI_API uint32 Get_Z_Construct_UScriptStruct_FHorizonDialogueDialoguePageResult_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FHorizonDialogueDialoguePageResult, Z_Construct_UPackage__Script_HorizonUI(), TEXT("HorizonDialogueDialoguePageResult"), sizeof(FHorizonDialogueDialoguePageResult), Get_Z_Construct_UScriptStruct_FHorizonDialogueDialoguePageResult_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FHorizonDialogueDialoguePageResult(FHorizonDialogueDialoguePageResult::StaticStruct, TEXT("/Script/HorizonUI"), TEXT("HorizonDialogueDialoguePageResult"), false, nullptr, nullptr);
static struct FScriptStruct_HorizonUI_StaticRegisterNativesFHorizonDialogueDialoguePageResult
{
	FScriptStruct_HorizonUI_StaticRegisterNativesFHorizonDialogueDialoguePageResult()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("HorizonDialogueDialoguePageResult")),new UScriptStruct::TCppStructOps<FHorizonDialogueDialoguePageResult>);
	}
} ScriptStruct_HorizonUI_StaticRegisterNativesFHorizonDialogueDialoguePageResult;
	UScriptStruct* Z_Construct_UScriptStruct_FHorizonDialogueDialoguePageResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FHorizonDialogueDialoguePageResult_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_HorizonUI();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("HorizonDialogueDialoguePageResult"), sizeof(FHorizonDialogueDialoguePageResult), Get_Z_Construct_UScriptStruct_FHorizonDialogueDialoguePageResult_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/Widget/HorizonDialogueMsgTextBlock.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHorizonDialogueDialoguePageResult>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PageIndex_MetaData[] = {
				{ "Category", "HorizonPlugin|DialogueMsgTextBlock" },
				{ "ModuleRelativePath", "Public/Widget/HorizonDialogueMsgTextBlock.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_PageIndex = { UE4CodeGen_Private::EPropertyClass::Int, "PageIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FHorizonDialogueDialoguePageResult, PageIndex), METADATA_PARAMS(NewProp_PageIndex_MetaData, ARRAY_COUNT(NewProp_PageIndex_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PageIndex,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_HorizonUI,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"HorizonDialogueDialoguePageResult",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FHorizonDialogueDialoguePageResult),
				alignof(FHorizonDialogueDialoguePageResult),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FHorizonDialogueDialoguePageResult_CRC() { return 2510054472U; }
class UScriptStruct* FHorizonDialogueHypertextResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern HORIZONUI_API uint32 Get_Z_Construct_UScriptStruct_FHorizonDialogueHypertextResult_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FHorizonDialogueHypertextResult, Z_Construct_UPackage__Script_HorizonUI(), TEXT("HorizonDialogueHypertextResult"), sizeof(FHorizonDialogueHypertextResult), Get_Z_Construct_UScriptStruct_FHorizonDialogueHypertextResult_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FHorizonDialogueHypertextResult(FHorizonDialogueHypertextResult::StaticStruct, TEXT("/Script/HorizonUI"), TEXT("HorizonDialogueHypertextResult"), false, nullptr, nullptr);
static struct FScriptStruct_HorizonUI_StaticRegisterNativesFHorizonDialogueHypertextResult
{
	FScriptStruct_HorizonUI_StaticRegisterNativesFHorizonDialogueHypertextResult()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("HorizonDialogueHypertextResult")),new UScriptStruct::TCppStructOps<FHorizonDialogueHypertextResult>);
	}
} ScriptStruct_HorizonUI_StaticRegisterNativesFHorizonDialogueHypertextResult;
	UScriptStruct* Z_Construct_UScriptStruct_FHorizonDialogueHypertextResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FHorizonDialogueHypertextResult_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_HorizonUI();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("HorizonDialogueHypertextResult"), sizeof(FHorizonDialogueHypertextResult), Get_Z_Construct_UScriptStruct_FHorizonDialogueHypertextResult_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/Widget/HorizonDialogueMsgTextBlock.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHorizonDialogueHypertextResult>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UrlEncodeMap_MetaData[] = {
				{ "Category", "HorizonPlugin|Hypertext" },
				{ "ModuleRelativePath", "Public/Widget/HorizonDialogueMsgTextBlock.h" },
				{ "ToolTip", "HypertextReference parsed map" },
			};
#endif
			static const UE4CodeGen_Private::FMapPropertyParams NewProp_UrlEncodeMap = { UE4CodeGen_Private::EPropertyClass::Map, "UrlEncodeMap", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FHorizonDialogueHypertextResult, UrlEncodeMap), METADATA_PARAMS(NewProp_UrlEncodeMap_MetaData, ARRAY_COUNT(NewProp_UrlEncodeMap_MetaData)) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_UrlEncodeMap_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Str, "UrlEncodeMap_Key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_UrlEncodeMap_ValueProp = { UE4CodeGen_Private::EPropertyClass::Str, "UrlEncodeMap", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HypertextReference_MetaData[] = {
				{ "Category", "HorizonPlugin|Hypertext" },
				{ "ModuleRelativePath", "Public/Widget/HorizonDialogueMsgTextBlock.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_HypertextReference = { UE4CodeGen_Private::EPropertyClass::Str, "HypertextReference", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FHorizonDialogueHypertextResult, HypertextReference), METADATA_PARAMS(NewProp_HypertextReference_MetaData, ARRAY_COUNT(NewProp_HypertextReference_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlockIndex_MetaData[] = {
				{ "Category", "HorizonPlugin|Hypertext" },
				{ "ModuleRelativePath", "Public/Widget/HorizonDialogueMsgTextBlock.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_BlockIndex = { UE4CodeGen_Private::EPropertyClass::Int, "BlockIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FHorizonDialogueHypertextResult, BlockIndex), METADATA_PARAMS(NewProp_BlockIndex_MetaData, ARRAY_COUNT(NewProp_BlockIndex_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LineIndex_MetaData[] = {
				{ "Category", "HorizonPlugin|Hypertext" },
				{ "ModuleRelativePath", "Public/Widget/HorizonDialogueMsgTextBlock.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_LineIndex = { UE4CodeGen_Private::EPropertyClass::Int, "LineIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FHorizonDialogueHypertextResult, LineIndex), METADATA_PARAMS(NewProp_LineIndex_MetaData, ARRAY_COUNT(NewProp_LineIndex_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SegmentIndex_MetaData[] = {
				{ "Category", "HorizonPlugin|Hypertext" },
				{ "ModuleRelativePath", "Public/Widget/HorizonDialogueMsgTextBlock.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_SegmentIndex = { UE4CodeGen_Private::EPropertyClass::Int, "SegmentIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FHorizonDialogueHypertextResult, SegmentIndex), METADATA_PARAMS(NewProp_SegmentIndex_MetaData, ARRAY_COUNT(NewProp_SegmentIndex_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DialogueMsgTextBlock_MetaData[] = {
				{ "Category", "HorizonPlugin|Hypertext" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/Widget/HorizonDialogueMsgTextBlock.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DialogueMsgTextBlock = { UE4CodeGen_Private::EPropertyClass::Object, "DialogueMsgTextBlock", RF_Public|RF_Transient|RF_MarkAsNative, 0x001000000008000d, 1, nullptr, STRUCT_OFFSET(FHorizonDialogueHypertextResult, DialogueMsgTextBlock), Z_Construct_UClass_UHorizonDialogueMsgTextBlock_NoRegister, METADATA_PARAMS(NewProp_DialogueMsgTextBlock_MetaData, ARRAY_COUNT(NewProp_DialogueMsgTextBlock_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UrlEncodeMap,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UrlEncodeMap_Key_KeyProp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UrlEncodeMap_ValueProp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HypertextReference,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BlockIndex,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LineIndex,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SegmentIndex,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DialogueMsgTextBlock,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_HorizonUI,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"HorizonDialogueHypertextResult",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000005),
				sizeof(FHorizonDialogueHypertextResult),
				alignof(FHorizonDialogueHypertextResult),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FHorizonDialogueHypertextResult_CRC() { return 2167424714U; }
class UScriptStruct* FHorizonDialoguePageInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern HORIZONUI_API uint32 Get_Z_Construct_UScriptStruct_FHorizonDialoguePageInfo_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FHorizonDialoguePageInfo, Z_Construct_UPackage__Script_HorizonUI(), TEXT("HorizonDialoguePageInfo"), sizeof(FHorizonDialoguePageInfo), Get_Z_Construct_UScriptStruct_FHorizonDialoguePageInfo_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FHorizonDialoguePageInfo(FHorizonDialoguePageInfo::StaticStruct, TEXT("/Script/HorizonUI"), TEXT("HorizonDialoguePageInfo"), false, nullptr, nullptr);
static struct FScriptStruct_HorizonUI_StaticRegisterNativesFHorizonDialoguePageInfo
{
	FScriptStruct_HorizonUI_StaticRegisterNativesFHorizonDialoguePageInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("HorizonDialoguePageInfo")),new UScriptStruct::TCppStructOps<FHorizonDialoguePageInfo>);
	}
} ScriptStruct_HorizonUI_StaticRegisterNativesFHorizonDialoguePageInfo;
	UScriptStruct* Z_Construct_UScriptStruct_FHorizonDialoguePageInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FHorizonDialoguePageInfo_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_HorizonUI();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("HorizonDialoguePageInfo"), sizeof(FHorizonDialoguePageInfo), Get_Z_Construct_UScriptStruct_FHorizonDialoguePageInfo_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Widget/HorizonDialogueMsgTextBlock.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHorizonDialoguePageInfo>(); };
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_HorizonUI,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"HorizonDialoguePageInfo",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FHorizonDialoguePageInfo),
				alignof(FHorizonDialoguePageInfo),
				nullptr, 0,
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FHorizonDialoguePageInfo_CRC() { return 3160543191U; }
class UScriptStruct* FHorizonDialogueSegmentInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern HORIZONUI_API uint32 Get_Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfo_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfo, Z_Construct_UPackage__Script_HorizonUI(), TEXT("HorizonDialogueSegmentInfo"), sizeof(FHorizonDialogueSegmentInfo), Get_Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfo_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FHorizonDialogueSegmentInfo(FHorizonDialogueSegmentInfo::StaticStruct, TEXT("/Script/HorizonUI"), TEXT("HorizonDialogueSegmentInfo"), false, nullptr, nullptr);
static struct FScriptStruct_HorizonUI_StaticRegisterNativesFHorizonDialogueSegmentInfo
{
	FScriptStruct_HorizonUI_StaticRegisterNativesFHorizonDialogueSegmentInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("HorizonDialogueSegmentInfo")),new UScriptStruct::TCppStructOps<FHorizonDialogueSegmentInfo>);
	}
} ScriptStruct_HorizonUI_StaticRegisterNativesFHorizonDialogueSegmentInfo;
	UScriptStruct* Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfo_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_HorizonUI();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("HorizonDialogueSegmentInfo"), sizeof(FHorizonDialogueSegmentInfo), Get_Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfo_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Widget/HorizonDialogueMsgTextBlock.h" },
				{ "ToolTip", "Parse text segment and store it tag info,\nIf no supported tag in input text, then there will have only one segment." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHorizonDialogueSegmentInfo>(); };
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_HorizonUI,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"HorizonDialogueSegmentInfo",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FHorizonDialogueSegmentInfo),
				alignof(FHorizonDialogueSegmentInfo),
				nullptr, 0,
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfo_CRC() { return 2502873896U; }
class UScriptStruct* FHorizonDialogueLineInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern HORIZONUI_API uint32 Get_Z_Construct_UScriptStruct_FHorizonDialogueLineInfo_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FHorizonDialogueLineInfo, Z_Construct_UPackage__Script_HorizonUI(), TEXT("HorizonDialogueLineInfo"), sizeof(FHorizonDialogueLineInfo), Get_Z_Construct_UScriptStruct_FHorizonDialogueLineInfo_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FHorizonDialogueLineInfo(FHorizonDialogueLineInfo::StaticStruct, TEXT("/Script/HorizonUI"), TEXT("HorizonDialogueLineInfo"), false, nullptr, nullptr);
static struct FScriptStruct_HorizonUI_StaticRegisterNativesFHorizonDialogueLineInfo
{
	FScriptStruct_HorizonUI_StaticRegisterNativesFHorizonDialogueLineInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("HorizonDialogueLineInfo")),new UScriptStruct::TCppStructOps<FHorizonDialogueLineInfo>);
	}
} ScriptStruct_HorizonUI_StaticRegisterNativesFHorizonDialogueLineInfo;
	UScriptStruct* Z_Construct_UScriptStruct_FHorizonDialogueLineInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FHorizonDialogueLineInfo_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_HorizonUI();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("HorizonDialogueLineInfo"), sizeof(FHorizonDialogueLineInfo), Get_Z_Construct_UScriptStruct_FHorizonDialogueLineInfo_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Widget/HorizonDialogueMsgTextBlock.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHorizonDialogueLineInfo>(); };
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_HorizonUI,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"HorizonDialogueLineInfo",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FHorizonDialogueLineInfo),
				alignof(FHorizonDialogueLineInfo),
				nullptr, 0,
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FHorizonDialogueLineInfo_CRC() { return 4210457799U; }
class UScriptStruct* FHorizonDialogueBlockInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern HORIZONUI_API uint32 Get_Z_Construct_UScriptStruct_FHorizonDialogueBlockInfo_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FHorizonDialogueBlockInfo, Z_Construct_UPackage__Script_HorizonUI(), TEXT("HorizonDialogueBlockInfo"), sizeof(FHorizonDialogueBlockInfo), Get_Z_Construct_UScriptStruct_FHorizonDialogueBlockInfo_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FHorizonDialogueBlockInfo(FHorizonDialogueBlockInfo::StaticStruct, TEXT("/Script/HorizonUI"), TEXT("HorizonDialogueBlockInfo"), false, nullptr, nullptr);
static struct FScriptStruct_HorizonUI_StaticRegisterNativesFHorizonDialogueBlockInfo
{
	FScriptStruct_HorizonUI_StaticRegisterNativesFHorizonDialogueBlockInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("HorizonDialogueBlockInfo")),new UScriptStruct::TCppStructOps<FHorizonDialogueBlockInfo>);
	}
} ScriptStruct_HorizonUI_StaticRegisterNativesFHorizonDialogueBlockInfo;
	UScriptStruct* Z_Construct_UScriptStruct_FHorizonDialogueBlockInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FHorizonDialogueBlockInfo_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_HorizonUI();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("HorizonDialogueBlockInfo"), sizeof(FHorizonDialogueBlockInfo), Get_Z_Construct_UScriptStruct_FHorizonDialogueBlockInfo_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Widget/HorizonDialogueMsgTextBlock.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHorizonDialogueBlockInfo>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DialogueSound_MetaData[] = {
				{ "ModuleRelativePath", "Public/Widget/HorizonDialogueMsgTextBlock.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DialogueSound = { UE4CodeGen_Private::EPropertyClass::Object, "DialogueSound", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FHorizonDialogueBlockInfo, DialogueSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(NewProp_DialogueSound_MetaData, ARRAY_COUNT(NewProp_DialogueSound_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DialogueSound,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_HorizonUI,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"HorizonDialogueBlockInfo",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FHorizonDialogueBlockInfo),
				alignof(FHorizonDialogueBlockInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FHorizonDialogueBlockInfo_CRC() { return 3119826727U; }
	void UHorizonDialogueMsgTextBlock::StaticRegisterNativesUHorizonDialogueMsgTextBlock()
	{
		UClass* Class = UHorizonDialogueMsgTextBlock::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurrentPageIndex", &UHorizonDialogueMsgTextBlock::execGetCurrentPageIndex },
			{ "GetJustification", &UHorizonDialogueMsgTextBlock::execGetJustification },
			{ "GetText", &UHorizonDialogueMsgTextBlock::execGetText },
			{ "GetTextLength", &UHorizonDialogueMsgTextBlock::execGetTextLength },
			{ "NextDialogueMsgPage", &UHorizonDialogueMsgTextBlock::execNextDialogueMsgPage },
			{ "SetAutoNextDialogueMsgPageIntervalRate", &UHorizonDialogueMsgTextBlock::execSetAutoNextDialogueMsgPageIntervalRate },
			{ "SetColorAndOpacity", &UHorizonDialogueMsgTextBlock::execSetColorAndOpacity },
			{ "SetDialogueMsgPage", &UHorizonDialogueMsgTextBlock::execSetDialogueMsgPage },
			{ "SetFont", &UHorizonDialogueMsgTextBlock::execSetFont },
			{ "SetFontSize", &UHorizonDialogueMsgTextBlock::execSetFontSize },
			{ "SetIsAutoNextDialogueMsgPage", &UHorizonDialogueMsgTextBlock::execSetIsAutoNextDialogueMsgPage },
			{ "SetIsDialogueMsgText", &UHorizonDialogueMsgTextBlock::execSetIsDialogueMsgText },
			{ "SetIsRepeatDialogueMsg", &UHorizonDialogueMsgTextBlock::execSetIsRepeatDialogueMsg },
			{ "SetIsStartTickDialogueMsg", &UHorizonDialogueMsgTextBlock::execSetIsStartTickDialogueMsg },
			{ "SetJustification", &UHorizonDialogueMsgTextBlock::execSetJustification },
			{ "SetOpacity", &UHorizonDialogueMsgTextBlock::execSetOpacity },
			{ "SetShadowColorAndOpacity", &UHorizonDialogueMsgTextBlock::execSetShadowColorAndOpacity },
			{ "SetShadowOffset", &UHorizonDialogueMsgTextBlock::execSetShadowOffset },
			{ "SetTextAndRebuildDialogue", &UHorizonDialogueMsgTextBlock::execSetTextAndRebuildDialogue },
			{ "StartDialogue", &UHorizonDialogueMsgTextBlock::execStartDialogue },
			{ "StopDialogue", &UHorizonDialogueMsgTextBlock::execStopDialogue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UHorizonDialogueMsgTextBlock_GetCurrentPageIndex()
	{
		struct HorizonDialogueMsgTextBlock_eventGetCurrentPageIndex_Parms
		{
			int32 ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(HorizonDialogueMsgTextBlock_eventGetCurrentPageIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "HorizonPlugin|Behavior" },
				{ "ModuleRelativePath", "Public/Widget/HorizonDialogueMsgTextBlock.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UHorizonDialogueMsgTextBlock, "GetCurrentPageIndex", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(HorizonDialogueMsgTextBlock_eventGetCurrentPageIndex_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UHorizonDialogueMsgTextBlock_GetJustification()
	{
		struct HorizonDialogueMsgTextBlock_eventGetJustification_Parms
		{
			TEnumAsByte<ETextJustify::Type> ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Byte, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(HorizonDialogueMsgTextBlock_eventGetJustification_Parms, ReturnValue), Z_Construct_UEnum_Slate_ETextJustify, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "HorizonPlugin|Appearance" },
				{ "ModuleRelativePath", "Public/Widget/HorizonDialogueMsgTextBlock.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UHorizonDialogueMsgTextBlock, "GetJustification", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(HorizonDialogueMsgTextBlock_eventGetJustification_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UHorizonDialogueMsgTextBlock_GetText()
	{
		struct HorizonDialogueMsgTextBlock_eventGetText_Parms
		{
			FText ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Text, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(HorizonDialogueMsgTextBlock_eventGetText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "HorizonPlugin|Widget" },
				{ "DisplayName", "GetText (Text)" },
				{ "ModuleRelativePath", "Public/Widget/HorizonDialogueMsgTextBlock.h" },
				{ "ToolTip", "Gets the widget text\n@return The widget text" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UHorizonDialogueMsgTextBlock, "GetText", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(HorizonDialogueMsgTextBlock_eventGetText_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UHorizonDialogueMsgTextBlock_GetTextLength()
	{
		struct HorizonDialogueMsgTextBlock_eventGetTextLength_Parms
		{
			int32 ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(HorizonDialogueMsgTextBlock_eventGetTextLength_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "HorizonPlugin|Behavior" },
				{ "ModuleRelativePath", "Public/Widget/HorizonDialogueMsgTextBlock.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UHorizonDialogueMsgTextBlock, "GetTextLength", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(HorizonDialogueMsgTextBlock_eventGetTextLength_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UHorizonDialogueMsgTextBlock_NextDialogueMsgPage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "HorizonPlugin|Behavior" },
				{ "ModuleRelativePath", "Public/Widget/HorizonDialogueMsgTextBlock.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UHorizonDialogueMsgTextBlock, "NextDialogueMsgPage", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UHorizonDialogueMsgTextBlock_SetAutoNextDialogueMsgPageIntervalRate()
	{
		struct HorizonDialogueMsgTextBlock_eventSetAutoNextDialogueMsgPageIntervalRate_Parms
		{
			float InAutoNextDialogueMsgPageIntervalRate;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InAutoNextDialogueMsgPageIntervalRate = { UE4CodeGen_Private::EPropertyClass::Float, "InAutoNextDialogueMsgPageIntervalRate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HorizonDialogueMsgTextBlock_eventSetAutoNextDialogueMsgPageIntervalRate_Parms, InAutoNextDialogueMsgPageIntervalRate), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InAutoNextDialogueMsgPageIntervalRate,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "HorizonPlugin|Behavior" },
				{ "ModuleRelativePath", "Public/Widget/HorizonDialogueMsgTextBlock.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UHorizonDialogueMsgTextBlock, "SetAutoNextDialogueMsgPageIntervalRate", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(HorizonDialogueMsgTextBlock_eventSetAutoNextDialogueMsgPageIntervalRate_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UHorizonDialogueMsgTextBlock_SetColorAndOpacity()
	{
		struct HorizonDialogueMsgTextBlock_eventSetColorAndOpacity_Parms
		{
			FSlateColor InColorAndOpacity;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InColorAndOpacity = { UE4CodeGen_Private::EPropertyClass::Struct, "InColorAndOpacity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HorizonDialogueMsgTextBlock_eventSetColorAndOpacity_Parms, InColorAndOpacity), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InColorAndOpacity,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "HorizonPlugin|Appearance" },
				{ "ModuleRelativePath", "Public/Widget/HorizonDialogueMsgTextBlock.h" },
				{ "ToolTip", "Sets the color and opacity of the text in this text block\n\n@param InColorAndOpacity              The new text color and opacity" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UHorizonDialogueMsgTextBlock, "SetColorAndOpacity", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(HorizonDialogueMsgTextBlock_eventSetColorAndOpacity_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UHorizonDialogueMsgTextBlock_SetDialogueMsgPage()
	{
		struct HorizonDialogueMsgTextBlock_eventSetDialogueMsgPage_Parms
		{
			int32 Page;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Page = { UE4CodeGen_Private::EPropertyClass::Int, "Page", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HorizonDialogueMsgTextBlock_eventSetDialogueMsgPage_Parms, Page), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Page,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "HorizonPlugin|Behavior" },
				{ "ModuleRelativePath", "Public/Widget/HorizonDialogueMsgTextBlock.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UHorizonDialogueMsgTextBlock, "SetDialogueMsgPage", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(HorizonDialogueMsgTextBlock_eventSetDialogueMsgPage_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UHorizonDialogueMsgTextBlock_SetFont()
	{
		struct HorizonDialogueMsgTextBlock_eventSetFont_Parms
		{
			FSlateFontInfo InFontInfo;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InFontInfo = { UE4CodeGen_Private::EPropertyClass::Struct, "InFontInfo", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HorizonDialogueMsgTextBlock_eventSetFont_Parms, InFontInfo), Z_Construct_UScriptStruct_FSlateFontInfo, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InFontInfo,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "HorizonPlugin|Appearance" },
				{ "ModuleRelativePath", "Public/Widget/HorizonDialogueMsgTextBlock.h" },
				{ "ToolTip", "Dynamically set the font info for this text block\n\n@param InFontInfo THe new font info" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UHorizonDialogueMsgTextBlock, "SetFont", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(HorizonDialogueMsgTextBlock_eventSetFont_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UHorizonDialogueMsgTextBlock_SetFontSize()
	{
		struct HorizonDialogueMsgTextBlock_eventSetFontSize_Parms
		{
			int32 fontSize;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_fontSize = { UE4CodeGen_Private::EPropertyClass::Int, "fontSize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HorizonDialogueMsgTextBlock_eventSetFontSize_Parms, fontSize), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_fontSize,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "HorizonPlugin|Appearance" },
				{ "ModuleRelativePath", "Public/Widget/HorizonDialogueMsgTextBlock.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UHorizonDialogueMsgTextBlock, "SetFontSize", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(HorizonDialogueMsgTextBlock_eventSetFontSize_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UHorizonDialogueMsgTextBlock_SetIsAutoNextDialogueMsgPage()
	{
		struct HorizonDialogueMsgTextBlock_eventSetIsAutoNextDialogueMsgPage_Parms
		{
			bool b;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_b_SetBit = [](void* Obj){ ((HorizonDialogueMsgTextBlock_eventSetIsAutoNextDialogueMsgPage_Parms*)Obj)->b = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b = { UE4CodeGen_Private::EPropertyClass::Bool, "b", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(HorizonDialogueMsgTextBlock_eventSetIsAutoNextDialogueMsgPage_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_b_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "HorizonPlugin|Behavior" },
				{ "ModuleRelativePath", "Public/Widget/HorizonDialogueMsgTextBlock.h" },
				{ "ToolTip", "Note: if false, user should call NextDialogueMsgPage or SetDialogueMsgPage in order to proceed to next page." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UHorizonDialogueMsgTextBlock, "SetIsAutoNextDialogueMsgPage", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(HorizonDialogueMsgTextBlock_eventSetIsAutoNextDialogueMsgPage_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UHorizonDialogueMsgTextBlock_SetIsDialogueMsgText()
	{
		struct HorizonDialogueMsgTextBlock_eventSetIsDialogueMsgText_Parms
		{
			bool b;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_b_SetBit = [](void* Obj){ ((HorizonDialogueMsgTextBlock_eventSetIsDialogueMsgText_Parms*)Obj)->b = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b = { UE4CodeGen_Private::EPropertyClass::Bool, "b", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(HorizonDialogueMsgTextBlock_eventSetIsDialogueMsgText_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_b_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "HorizonPlugin|Behavior" },
				{ "ModuleRelativePath", "Public/Widget/HorizonDialogueMsgTextBlock.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UHorizonDialogueMsgTextBlock, "SetIsDialogueMsgText", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(HorizonDialogueMsgTextBlock_eventSetIsDialogueMsgText_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UHorizonDialogueMsgTextBlock_SetIsRepeatDialogueMsg()
	{
		struct HorizonDialogueMsgTextBlock_eventSetIsRepeatDialogueMsg_Parms
		{
			bool b;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_b_SetBit = [](void* Obj){ ((HorizonDialogueMsgTextBlock_eventSetIsRepeatDialogueMsg_Parms*)Obj)->b = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b = { UE4CodeGen_Private::EPropertyClass::Bool, "b", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(HorizonDialogueMsgTextBlock_eventSetIsRepeatDialogueMsg_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_b_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "HorizonPlugin|Behavior" },
				{ "ModuleRelativePath", "Public/Widget/HorizonDialogueMsgTextBlock.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UHorizonDialogueMsgTextBlock, "SetIsRepeatDialogueMsg", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(HorizonDialogueMsgTextBlock_eventSetIsRepeatDialogueMsg_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UHorizonDialogueMsgTextBlock_SetIsStartTickDialogueMsg()
	{
		struct HorizonDialogueMsgTextBlock_eventSetIsStartTickDialogueMsg_Parms
		{
			bool b;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_b_SetBit = [](void* Obj){ ((HorizonDialogueMsgTextBlock_eventSetIsStartTickDialogueMsg_Parms*)Obj)->b = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b = { UE4CodeGen_Private::EPropertyClass::Bool, "b", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(HorizonDialogueMsgTextBlock_eventSetIsStartTickDialogueMsg_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_b_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_b,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "HorizonPlugin|Behavior" },
				{ "ModuleRelativePath", "Public/Widget/HorizonDialogueMsgTextBlock.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UHorizonDialogueMsgTextBlock, "SetIsStartTickDialogueMsg", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(HorizonDialogueMsgTextBlock_eventSetIsStartTickDialogueMsg_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UHorizonDialogueMsgTextBlock_SetJustification()
	{
		struct HorizonDialogueMsgTextBlock_eventSetJustification_Parms
		{
			TEnumAsByte<ETextJustify::Type> InJustification;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_InJustification = { UE4CodeGen_Private::EPropertyClass::Byte, "InJustification", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HorizonDialogueMsgTextBlock_eventSetJustification_Parms, InJustification), Z_Construct_UEnum_Slate_ETextJustify, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InJustification,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "HorizonPlugin|Appearance" },
				{ "ModuleRelativePath", "Public/Widget/HorizonDialogueMsgTextBlock.h" },
				{ "ToolTip", "Set the text justification for this text block\n\n@param Justification new justification" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UHorizonDialogueMsgTextBlock, "SetJustification", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(HorizonDialogueMsgTextBlock_eventSetJustification_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UHorizonDialogueMsgTextBlock_SetOpacity()
	{
		struct HorizonDialogueMsgTextBlock_eventSetOpacity_Parms
		{
			float InOpacity;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InOpacity = { UE4CodeGen_Private::EPropertyClass::Float, "InOpacity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HorizonDialogueMsgTextBlock_eventSetOpacity_Parms, InOpacity), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InOpacity,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "HorizonPlugin|Appearance" },
				{ "ModuleRelativePath", "Public/Widget/HorizonDialogueMsgTextBlock.h" },
				{ "ToolTip", "Sets the opacity of the text in this text block\n\n@param InOpacity              The new text opacity" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UHorizonDialogueMsgTextBlock, "SetOpacity", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(HorizonDialogueMsgTextBlock_eventSetOpacity_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UHorizonDialogueMsgTextBlock_SetShadowColorAndOpacity()
	{
		struct HorizonDialogueMsgTextBlock_eventSetShadowColorAndOpacity_Parms
		{
			FLinearColor InShadowColorAndOpacity;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InShadowColorAndOpacity = { UE4CodeGen_Private::EPropertyClass::Struct, "InShadowColorAndOpacity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HorizonDialogueMsgTextBlock_eventSetShadowColorAndOpacity_Parms, InShadowColorAndOpacity), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InShadowColorAndOpacity,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "HorizonPlugin|Appearance" },
				{ "ModuleRelativePath", "Public/Widget/HorizonDialogueMsgTextBlock.h" },
				{ "ToolTip", "Sets the color and opacity of the text drop shadow\nNote: if opacity is zero no shadow will be drawn\n\n@param InShadowColorAndOpacity                The new drop shadow color and opacity" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UHorizonDialogueMsgTextBlock, "SetShadowColorAndOpacity", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(HorizonDialogueMsgTextBlock_eventSetShadowColorAndOpacity_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UHorizonDialogueMsgTextBlock_SetShadowOffset()
	{
		struct HorizonDialogueMsgTextBlock_eventSetShadowOffset_Parms
		{
			FVector2D InShadowOffset;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InShadowOffset = { UE4CodeGen_Private::EPropertyClass::Struct, "InShadowOffset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HorizonDialogueMsgTextBlock_eventSetShadowOffset_Parms, InShadowOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InShadowOffset,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "HorizonPlugin|Appearance" },
				{ "ModuleRelativePath", "Public/Widget/HorizonDialogueMsgTextBlock.h" },
				{ "ToolTip", "Sets the offset that the text drop shadow should be drawn at\n\n@param InShadowOffset         The new offset" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UHorizonDialogueMsgTextBlock, "SetShadowOffset", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(HorizonDialogueMsgTextBlock_eventSetShadowOffset_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UHorizonDialogueMsgTextBlock_SetTextAndRebuildDialogue()
	{
		struct HorizonDialogueMsgTextBlock_eventSetTextAndRebuildDialogue_Parms
		{
			FText InText;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InText_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_InText = { UE4CodeGen_Private::EPropertyClass::Text, "InText", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(HorizonDialogueMsgTextBlock_eventSetTextAndRebuildDialogue_Parms, InText), METADATA_PARAMS(NewProp_InText_MetaData, ARRAY_COUNT(NewProp_InText_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InText,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "HorizonPlugin|Widget" },
				{ "ModuleRelativePath", "Public/Widget/HorizonDialogueMsgTextBlock.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UHorizonDialogueMsgTextBlock, "SetTextAndRebuildDialogue", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(HorizonDialogueMsgTextBlock_eventSetTextAndRebuildDialogue_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UHorizonDialogueMsgTextBlock_StartDialogue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "HorizonPlugin|Behavior" },
				{ "ModuleRelativePath", "Public/Widget/HorizonDialogueMsgTextBlock.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UHorizonDialogueMsgTextBlock, "StartDialogue", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UHorizonDialogueMsgTextBlock_StopDialogue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "HorizonPlugin|Behavior" },
				{ "ModuleRelativePath", "Public/Widget/HorizonDialogueMsgTextBlock.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UHorizonDialogueMsgTextBlock, "StopDialogue", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UHorizonDialogueMsgTextBlock_NoRegister()
	{
		return UHorizonDialogueMsgTextBlock::StaticClass();
	}
	UClass* Z_Construct_UClass_UHorizonDialogueMsgTextBlock()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UCanvasPanel,
				(UObject* (*)())Z_Construct_UPackage__Script_HorizonUI,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UHorizonDialogueMsgTextBlock_GetCurrentPageIndex, "GetCurrentPageIndex" }, // 1828643786
				{ &Z_Construct_UFunction_UHorizonDialogueMsgTextBlock_GetJustification, "GetJustification" }, // 2620401960
				{ &Z_Construct_UFunction_UHorizonDialogueMsgTextBlock_GetText, "GetText" }, // 272418739
				{ &Z_Construct_UFunction_UHorizonDialogueMsgTextBlock_GetTextLength, "GetTextLength" }, // 3301270856
				{ &Z_Construct_UFunction_UHorizonDialogueMsgTextBlock_NextDialogueMsgPage, "NextDialogueMsgPage" }, // 3375686822
				{ &Z_Construct_UFunction_UHorizonDialogueMsgTextBlock_SetAutoNextDialogueMsgPageIntervalRate, "SetAutoNextDialogueMsgPageIntervalRate" }, // 2497938426
				{ &Z_Construct_UFunction_UHorizonDialogueMsgTextBlock_SetColorAndOpacity, "SetColorAndOpacity" }, // 2786511921
				{ &Z_Construct_UFunction_UHorizonDialogueMsgTextBlock_SetDialogueMsgPage, "SetDialogueMsgPage" }, // 371274465
				{ &Z_Construct_UFunction_UHorizonDialogueMsgTextBlock_SetFont, "SetFont" }, // 3925564221
				{ &Z_Construct_UFunction_UHorizonDialogueMsgTextBlock_SetFontSize, "SetFontSize" }, // 986983107
				{ &Z_Construct_UFunction_UHorizonDialogueMsgTextBlock_SetIsAutoNextDialogueMsgPage, "SetIsAutoNextDialogueMsgPage" }, // 1832346890
				{ &Z_Construct_UFunction_UHorizonDialogueMsgTextBlock_SetIsDialogueMsgText, "SetIsDialogueMsgText" }, // 4131731279
				{ &Z_Construct_UFunction_UHorizonDialogueMsgTextBlock_SetIsRepeatDialogueMsg, "SetIsRepeatDialogueMsg" }, // 4228403722
				{ &Z_Construct_UFunction_UHorizonDialogueMsgTextBlock_SetIsStartTickDialogueMsg, "SetIsStartTickDialogueMsg" }, // 167266081
				{ &Z_Construct_UFunction_UHorizonDialogueMsgTextBlock_SetJustification, "SetJustification" }, // 124254455
				{ &Z_Construct_UFunction_UHorizonDialogueMsgTextBlock_SetOpacity, "SetOpacity" }, // 1852345051
				{ &Z_Construct_UFunction_UHorizonDialogueMsgTextBlock_SetShadowColorAndOpacity, "SetShadowColorAndOpacity" }, // 4018690773
				{ &Z_Construct_UFunction_UHorizonDialogueMsgTextBlock_SetShadowOffset, "SetShadowOffset" }, // 2472303040
				{ &Z_Construct_UFunction_UHorizonDialogueMsgTextBlock_SetTextAndRebuildDialogue, "SetTextAndRebuildDialogue" }, // 2217296738
				{ &Z_Construct_UFunction_UHorizonDialogueMsgTextBlock_StartDialogue, "StartDialogue" }, // 775805548
				{ &Z_Construct_UFunction_UHorizonDialogueMsgTextBlock_StopDialogue, "StopDialogue" }, // 3226171081
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Widget/HorizonDialogueMsgTextBlock.h" },
				{ "ModuleRelativePath", "Public/Widget/HorizonDialogueMsgTextBlock.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnDialoguePageEndFunction_MetaData[] = {
				{ "Category", "HorizonPlugin|Delegate" },
				{ "ModuleRelativePath", "Public/Widget/HorizonDialogueMsgTextBlock.h" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDialoguePageEndFunction = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnDialoguePageEndFunction", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UHorizonDialogueMsgTextBlock, OnDialoguePageEndFunction), Z_Construct_UDelegateFunction_HorizonUI_OnHorizonDialoguePageEvent__DelegateSignature, METADATA_PARAMS(NewProp_OnDialoguePageEndFunction_MetaData, ARRAY_COUNT(NewProp_OnDialoguePageEndFunction_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSetDialoguePageFunction_MetaData[] = {
				{ "Category", "HorizonPlugin|Delegate" },
				{ "ModuleRelativePath", "Public/Widget/HorizonDialogueMsgTextBlock.h" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSetDialoguePageFunction = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnSetDialoguePageFunction", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UHorizonDialogueMsgTextBlock, OnSetDialoguePageFunction), Z_Construct_UDelegateFunction_HorizonUI_OnHorizonDialoguePageEvent__DelegateSignature, METADATA_PARAMS(NewProp_OnSetDialoguePageFunction_MetaData, ARRAY_COUNT(NewProp_OnSetDialoguePageFunction_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnDialogueMsgCompleteFunction_MetaData[] = {
				{ "Category", "HorizonPlugin|Delegate" },
				{ "ModuleRelativePath", "Public/Widget/HorizonDialogueMsgTextBlock.h" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDialogueMsgCompleteFunction = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnDialogueMsgCompleteFunction", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UHorizonDialogueMsgTextBlock, OnDialogueMsgCompleteFunction), Z_Construct_UDelegateFunction_HorizonUI_OnHorizonDialogueMsgEvent__DelegateSignature, METADATA_PARAMS(NewProp_OnDialogueMsgCompleteFunction_MetaData, ARRAY_COUNT(NewProp_OnDialogueMsgCompleteFunction_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnDialogueMsgLoopFunction_MetaData[] = {
				{ "Category", "HorizonPlugin|Delegate" },
				{ "ModuleRelativePath", "Public/Widget/HorizonDialogueMsgTextBlock.h" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDialogueMsgLoopFunction = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnDialogueMsgLoopFunction", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UHorizonDialogueMsgTextBlock, OnDialogueMsgLoopFunction), Z_Construct_UDelegateFunction_HorizonUI_OnHorizonDialogueMsgEvent__DelegateSignature, METADATA_PARAMS(NewProp_OnDialogueMsgLoopFunction_MetaData, ARRAY_COUNT(NewProp_OnDialogueMsgLoopFunction_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnHypertextUnhoveredDelegate_MetaData[] = {
				{ "Category", "HorizonPlugin|Delegate" },
				{ "ModuleRelativePath", "Public/Widget/HorizonDialogueMsgTextBlock.h" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHypertextUnhoveredDelegate = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnHypertextUnhoveredDelegate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UHorizonDialogueMsgTextBlock, OnHypertextUnhoveredDelegate), Z_Construct_UDelegateFunction_HorizonUI_OnHorizonHypertextEvent__DelegateSignature, METADATA_PARAMS(NewProp_OnHypertextUnhoveredDelegate_MetaData, ARRAY_COUNT(NewProp_OnHypertextUnhoveredDelegate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnHypertextHoveredDelegate_MetaData[] = {
				{ "Category", "HorizonPlugin|Delegate" },
				{ "ModuleRelativePath", "Public/Widget/HorizonDialogueMsgTextBlock.h" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHypertextHoveredDelegate = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnHypertextHoveredDelegate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UHorizonDialogueMsgTextBlock, OnHypertextHoveredDelegate), Z_Construct_UDelegateFunction_HorizonUI_OnHorizonHypertextEvent__DelegateSignature, METADATA_PARAMS(NewProp_OnHypertextHoveredDelegate_MetaData, ARRAY_COUNT(NewProp_OnHypertextHoveredDelegate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnHypertextReleasedDelegate_MetaData[] = {
				{ "Category", "HorizonPlugin|Delegate" },
				{ "ModuleRelativePath", "Public/Widget/HorizonDialogueMsgTextBlock.h" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHypertextReleasedDelegate = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnHypertextReleasedDelegate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UHorizonDialogueMsgTextBlock, OnHypertextReleasedDelegate), Z_Construct_UDelegateFunction_HorizonUI_OnHorizonHypertextEvent__DelegateSignature, METADATA_PARAMS(NewProp_OnHypertextReleasedDelegate_MetaData, ARRAY_COUNT(NewProp_OnHypertextReleasedDelegate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnHypertextPressedDelegate_MetaData[] = {
				{ "Category", "HorizonPlugin|Delegate" },
				{ "ModuleRelativePath", "Public/Widget/HorizonDialogueMsgTextBlock.h" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHypertextPressedDelegate = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnHypertextPressedDelegate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UHorizonDialogueMsgTextBlock, OnHypertextPressedDelegate), Z_Construct_UDelegateFunction_HorizonUI_OnHorizonHypertextEvent__DelegateSignature, METADATA_PARAMS(NewProp_OnHypertextPressedDelegate_MetaData, ARRAY_COUNT(NewProp_OnHypertextPressedDelegate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnHypertextClickedDelegate_MetaData[] = {
				{ "Category", "HorizonPlugin|Delegate" },
				{ "ModuleRelativePath", "Public/Widget/HorizonDialogueMsgTextBlock.h" },
				{ "ToolTip", "for blueprint" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHypertextClickedDelegate = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnHypertextClickedDelegate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UHorizonDialogueMsgTextBlock, OnHypertextClickedDelegate), Z_Construct_UDelegateFunction_HorizonUI_OnHorizonHypertextEvent__DelegateSignature, METADATA_PARAMS(NewProp_OnHypertextClickedDelegate_MetaData, ARRAY_COUNT(NewProp_OnHypertextClickedDelegate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StyleInfoList_MetaData[] = {
				{ "ModuleRelativePath", "Public/Widget/HorizonDialogueMsgTextBlock.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StyleInfoList = { UE4CodeGen_Private::EPropertyClass::Array, "StyleInfoList", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UHorizonDialogueMsgTextBlock, StyleInfoList), METADATA_PARAMS(NewProp_StyleInfoList_MetaData, ARRAY_COUNT(NewProp_StyleInfoList_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StyleInfoList_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "StyleInfoList", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UHorizonDialogueStyleInfo_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoNextDialogueMsgPageIntervalMax_MetaData[] = {
				{ "Category", "HorizonPlugin|Behavior" },
				{ "EditCondition", "bIsAutoNextDialogueMsgPage" },
				{ "ModuleRelativePath", "Public/Widget/HorizonDialogueMsgTextBlock.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AutoNextDialogueMsgPageIntervalMax = { UE4CodeGen_Private::EPropertyClass::Float, "AutoNextDialogueMsgPageIntervalMax", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UHorizonDialogueMsgTextBlock, AutoNextDialogueMsgPageIntervalMax), METADATA_PARAMS(NewProp_AutoNextDialogueMsgPageIntervalMax_MetaData, ARRAY_COUNT(NewProp_AutoNextDialogueMsgPageIntervalMax_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoNextDialogueMsgPageIntervalMin_MetaData[] = {
				{ "Category", "HorizonPlugin|Behavior" },
				{ "EditCondition", "bIsAutoNextDialogueMsgPage" },
				{ "ModuleRelativePath", "Public/Widget/HorizonDialogueMsgTextBlock.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AutoNextDialogueMsgPageIntervalMin = { UE4CodeGen_Private::EPropertyClass::Float, "AutoNextDialogueMsgPageIntervalMin", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UHorizonDialogueMsgTextBlock, AutoNextDialogueMsgPageIntervalMin), METADATA_PARAMS(NewProp_AutoNextDialogueMsgPageIntervalMin_MetaData, ARRAY_COUNT(NewProp_AutoNextDialogueMsgPageIntervalMin_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoNextDialogueMsgPageIntervalRate_MetaData[] = {
				{ "BlueprintSetter", "SetAutoNextDialogueMsgPageIntervalRate" },
				{ "Category", "HorizonPlugin|Behavior" },
				{ "EditCondition", "bIsAutoNextDialogueMsgPage" },
				{ "ModuleRelativePath", "Public/Widget/HorizonDialogueMsgTextBlock.h" },
				{ "ToolTip", "AutoNextDialogueMsgPageInterval = AutoNextDialogueMsgPageIntervalRate * GetTextLength();\nThen clamp to Min, Max" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AutoNextDialogueMsgPageIntervalRate = { UE4CodeGen_Private::EPropertyClass::Float, "AutoNextDialogueMsgPageIntervalRate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UHorizonDialogueMsgTextBlock, AutoNextDialogueMsgPageIntervalRate), METADATA_PARAMS(NewProp_AutoNextDialogueMsgPageIntervalRate_MetaData, ARRAY_COUNT(NewProp_AutoNextDialogueMsgPageIntervalRate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsAutoNextDialogueMsgPage_MetaData[] = {
				{ "Category", "HorizonPlugin|Behavior" },
				{ "ModuleRelativePath", "Public/Widget/HorizonDialogueMsgTextBlock.h" },
			};
#endif
			auto NewProp_bIsAutoNextDialogueMsgPage_SetBit = [](void* Obj){ ((UHorizonDialogueMsgTextBlock*)Obj)->bIsAutoNextDialogueMsgPage = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsAutoNextDialogueMsgPage = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsAutoNextDialogueMsgPage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UHorizonDialogueMsgTextBlock), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsAutoNextDialogueMsgPage_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsAutoNextDialogueMsgPage_MetaData, ARRAY_COUNT(NewProp_bIsAutoNextDialogueMsgPage_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SegmentStyleList_MetaData[] = {
				{ "Category", "HorizonPlugin|Style" },
				{ "ModuleRelativePath", "Public/Widget/HorizonDialogueMsgTextBlock.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SegmentStyleList = { UE4CodeGen_Private::EPropertyClass::Array, "SegmentStyleList", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UHorizonDialogueMsgTextBlock, SegmentStyleList), METADATA_PARAMS(NewProp_SegmentStyleList_MetaData, ARRAY_COUNT(NewProp_SegmentStyleList_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SegmentStyleList_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "SegmentStyleList", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StyleInfoClassList_MetaData[] = {
				{ "Category", "HorizonPlugin|Style" },
				{ "ModuleRelativePath", "Public/Widget/HorizonDialogueMsgTextBlock.h" },
				{ "ToolTip", "Load SegmentStyles from seperate UHorizonDialogueStyleInfo class" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StyleInfoClassList = { UE4CodeGen_Private::EPropertyClass::Array, "StyleInfoClassList", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000005, 1, nullptr, STRUCT_OFFSET(UHorizonDialogueMsgTextBlock, StyleInfoClassList), METADATA_PARAMS(NewProp_StyleInfoClassList_MetaData, ARRAY_COUNT(NewProp_StyleInfoClassList_MetaData)) };
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_StyleInfoClassList_Inner = { UE4CodeGen_Private::EPropertyClass::Class, "StyleInfoClassList", RF_Public|RF_Transient|RF_MarkAsNative, 0x0004000000000000, 1, nullptr, 0, Z_Construct_UClass_UHorizonDialogueStyleInfo_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RepeatDialogueMsgInterval_MetaData[] = {
				{ "Category", "HorizonPlugin|Behavior" },
				{ "EditCondition", "bIsRepeatDialogueMsg" },
				{ "ModuleRelativePath", "Public/Widget/HorizonDialogueMsgTextBlock.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RepeatDialogueMsgInterval = { UE4CodeGen_Private::EPropertyClass::Float, "RepeatDialogueMsgInterval", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UHorizonDialogueMsgTextBlock, RepeatDialogueMsgInterval), METADATA_PARAMS(NewProp_RepeatDialogueMsgInterval_MetaData, ARRAY_COUNT(NewProp_RepeatDialogueMsgInterval_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsRepeatDialogueMsg_MetaData[] = {
				{ "Category", "HorizonPlugin|Behavior" },
				{ "EditCondition", "bIsDialogueMsgText" },
				{ "ModuleRelativePath", "Public/Widget/HorizonDialogueMsgTextBlock.h" },
			};
#endif
			auto NewProp_bIsRepeatDialogueMsg_SetBit = [](void* Obj){ ((UHorizonDialogueMsgTextBlock*)Obj)->bIsRepeatDialogueMsg = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsRepeatDialogueMsg = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsRepeatDialogueMsg", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UHorizonDialogueMsgTextBlock), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsRepeatDialogueMsg_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsRepeatDialogueMsg_MetaData, ARRAY_COUNT(NewProp_bIsRepeatDialogueMsg_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsStartTickDialogueMsg_MetaData[] = {
				{ "Category", "HorizonPlugin|Behavior" },
				{ "EditCondition", "bIsDialogueMsgText" },
				{ "ModuleRelativePath", "Public/Widget/HorizonDialogueMsgTextBlock.h" },
				{ "ToolTip", "should we start tick dialogue" },
			};
#endif
			auto NewProp_bIsStartTickDialogueMsg_SetBit = [](void* Obj){ ((UHorizonDialogueMsgTextBlock*)Obj)->bIsStartTickDialogueMsg = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsStartTickDialogueMsg = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsStartTickDialogueMsg", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UHorizonDialogueMsgTextBlock), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsStartTickDialogueMsg_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsStartTickDialogueMsg_MetaData, ARRAY_COUNT(NewProp_bIsStartTickDialogueMsg_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DialogueMsgSpeed_MetaData[] = {
				{ "Category", "HorizonPlugin|Behavior" },
				{ "EditCondition", "bIsDialogueMsgText" },
				{ "ModuleRelativePath", "Public/Widget/HorizonDialogueMsgTextBlock.h" },
				{ "ToolTip", "millisecond for a word" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DialogueMsgSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "DialogueMsgSpeed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UHorizonDialogueMsgTextBlock, DialogueMsgSpeed), METADATA_PARAMS(NewProp_DialogueMsgSpeed_MetaData, ARRAY_COUNT(NewProp_DialogueMsgSpeed_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsDialogueMsgText_MetaData[] = {
				{ "Category", "HorizonPlugin|Behavior" },
				{ "ModuleRelativePath", "Public/Widget/HorizonDialogueMsgTextBlock.h" },
			};
#endif
			auto NewProp_bIsDialogueMsgText_SetBit = [](void* Obj){ ((UHorizonDialogueMsgTextBlock*)Obj)->bIsDialogueMsgText = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsDialogueMsgText = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsDialogueMsgText", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UHorizonDialogueMsgTextBlock), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsDialogueMsgText_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsDialogueMsgText_MetaData, ARRAY_COUNT(NewProp_bIsDialogueMsgText_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsRichText_MetaData[] = {
				{ "Category", "HorizonPlugin|Appearance" },
				{ "ModuleRelativePath", "Public/Widget/HorizonDialogueMsgTextBlock.h" },
				{ "ToolTip", "if true, then try to parse Text xml tag" },
			};
#endif
			auto NewProp_bIsRichText_SetBit = [](void* Obj){ ((UHorizonDialogueMsgTextBlock*)Obj)->bIsRichText = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsRichText = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsRichText", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UHorizonDialogueMsgTextBlock), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsRichText_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsRichText_MetaData, ARRAY_COUNT(NewProp_bIsRichText_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LineMargin_MetaData[] = {
				{ "Category", "HorizonPlugin|Appearance" },
				{ "ModuleRelativePath", "Public/Widget/HorizonDialogueMsgTextBlock.h" },
				{ "ToolTip", "The amount of blank space left around the edges of this text line." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LineMargin = { UE4CodeGen_Private::EPropertyClass::Struct, "LineMargin", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000015, 1, nullptr, STRUCT_OFFSET(UHorizonDialogueMsgTextBlock, LineMargin), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(NewProp_LineMargin_MetaData, ARRAY_COUNT(NewProp_LineMargin_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Justification_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Widget/HorizonDialogueMsgTextBlock.h" },
				{ "ToolTip", "How the text should be aligned with the margin." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Justification = { UE4CodeGen_Private::EPropertyClass::Byte, "Justification", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UHorizonDialogueMsgTextBlock, Justification), Z_Construct_UEnum_Slate_ETextJustify, METADATA_PARAMS(NewProp_Justification_MetaData, ARRAY_COUNT(NewProp_Justification_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWrapWithInvalidationPanel_MetaData[] = {
				{ "Category", "HorizonPlugin|Performance" },
				{ "ModuleRelativePath", "Public/Widget/HorizonDialogueMsgTextBlock.h" },
				{ "ToolTip", "If true, it will automatically wrap this text widget with an invalidation panel" },
			};
#endif
			auto NewProp_bWrapWithInvalidationPanel_SetBit = [](void* Obj){ ((UHorizonDialogueMsgTextBlock*)Obj)->bWrapWithInvalidationPanel = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWrapWithInvalidationPanel = { UE4CodeGen_Private::EPropertyClass::Bool, "bWrapWithInvalidationPanel", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UHorizonDialogueMsgTextBlock), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bWrapWithInvalidationPanel_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bWrapWithInvalidationPanel_MetaData, ARRAY_COUNT(NewProp_bWrapWithInvalidationPanel_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShadowColorAndOpacity_MetaData[] = {
				{ "Category", "HorizonPlugin|Appearance" },
				{ "DisplayName", "Shadow Color" },
				{ "ModuleRelativePath", "Public/Widget/HorizonDialogueMsgTextBlock.h" },
				{ "ToolTip", "The color of the shadow" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ShadowColorAndOpacity = { UE4CodeGen_Private::EPropertyClass::Struct, "ShadowColorAndOpacity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UHorizonDialogueMsgTextBlock, ShadowColorAndOpacity), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(NewProp_ShadowColorAndOpacity_MetaData, ARRAY_COUNT(NewProp_ShadowColorAndOpacity_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShadowOffset_MetaData[] = {
				{ "Category", "HorizonPlugin|Appearance" },
				{ "ModuleRelativePath", "Public/Widget/HorizonDialogueMsgTextBlock.h" },
				{ "ToolTip", "The direction the shadow is cast" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ShadowOffset = { UE4CodeGen_Private::EPropertyClass::Struct, "ShadowOffset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UHorizonDialogueMsgTextBlock, ShadowOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(NewProp_ShadowOffset_MetaData, ARRAY_COUNT(NewProp_ShadowOffset_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Font_MetaData[] = {
				{ "Category", "HorizonPlugin|Appearance" },
				{ "ModuleRelativePath", "Public/Widget/HorizonDialogueMsgTextBlock.h" },
				{ "ToolTip", "The font to render the text with" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Font = { UE4CodeGen_Private::EPropertyClass::Struct, "Font", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UHorizonDialogueMsgTextBlock, Font), Z_Construct_UScriptStruct_FSlateFontInfo, METADATA_PARAMS(NewProp_Font_MetaData, ARRAY_COUNT(NewProp_Font_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorAndOpacity_MetaData[] = {
				{ "Category", "HorizonPlugin|Appearance" },
				{ "ModuleRelativePath", "Public/Widget/HorizonDialogueMsgTextBlock.h" },
				{ "ToolTip", "The color of the text" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorAndOpacity = { UE4CodeGen_Private::EPropertyClass::Struct, "ColorAndOpacity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UHorizonDialogueMsgTextBlock, ColorAndOpacity), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(NewProp_ColorAndOpacity_MetaData, ARRAY_COUNT(NewProp_ColorAndOpacity_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextDelegate_MetaData[] = {
				{ "ModuleRelativePath", "Public/Widget/HorizonDialogueMsgTextBlock.h" },
				{ "ToolTip", "A bindable delegate to allow logic to drive the text of the widget" },
			};
#endif
			static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_TextDelegate = { UE4CodeGen_Private::EPropertyClass::Delegate, "TextDelegate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080000, 1, nullptr, STRUCT_OFFSET(UHorizonDialogueMsgTextBlock, TextDelegate), Z_Construct_UDelegateFunction_UWidget_GetText__DelegateSignature, METADATA_PARAMS(NewProp_TextDelegate_MetaData, ARRAY_COUNT(NewProp_TextDelegate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextOverFlowWarpMethod_MetaData[] = {
				{ "Category", "HorizonPlugin|Content" },
				{ "ModuleRelativePath", "Public/Widget/HorizonDialogueMsgTextBlock.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TextOverFlowWarpMethod = { UE4CodeGen_Private::EPropertyClass::Enum, "TextOverFlowWarpMethod", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UHorizonDialogueMsgTextBlock, TextOverFlowWarpMethod), Z_Construct_UEnum_HorizonUI_EHorizonDialogueTextOverflowWarpMethod, METADATA_PARAMS(NewProp_TextOverFlowWarpMethod_MetaData, ARRAY_COUNT(NewProp_TextOverFlowWarpMethod_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_TextOverFlowWarpMethod_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[] = {
				{ "Category", "HorizonPlugin|Content" },
				{ "ModuleRelativePath", "Public/Widget/HorizonDialogueMsgTextBlock.h" },
				{ "MultiLine", "true" },
				{ "ToolTip", "The text to display" },
			};
#endif
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_Text = { UE4CodeGen_Private::EPropertyClass::Text, "Text", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UHorizonDialogueMsgTextBlock, Text), METADATA_PARAMS(NewProp_Text_MetaData, ARRAY_COUNT(NewProp_Text_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnDialoguePageEndFunction,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnSetDialoguePageFunction,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnDialogueMsgCompleteFunction,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnDialogueMsgLoopFunction,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnHypertextUnhoveredDelegate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnHypertextHoveredDelegate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnHypertextReleasedDelegate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnHypertextPressedDelegate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnHypertextClickedDelegate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StyleInfoList,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StyleInfoList_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AutoNextDialogueMsgPageIntervalMax,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AutoNextDialogueMsgPageIntervalMin,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AutoNextDialogueMsgPageIntervalRate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsAutoNextDialogueMsgPage,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SegmentStyleList,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SegmentStyleList_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StyleInfoClassList,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StyleInfoClassList_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RepeatDialogueMsgInterval,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsRepeatDialogueMsg,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsStartTickDialogueMsg,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DialogueMsgSpeed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsDialogueMsgText,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsRichText,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LineMargin,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Justification,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bWrapWithInvalidationPanel,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ShadowColorAndOpacity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ShadowOffset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Font,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ColorAndOpacity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TextDelegate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TextOverFlowWarpMethod,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TextOverFlowWarpMethod_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Text,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UHorizonDialogueMsgTextBlock>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UHorizonDialogueMsgTextBlock::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B00080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(UHorizonDialogueMsgTextBlock, 780090023);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHorizonDialogueMsgTextBlock(Z_Construct_UClass_UHorizonDialogueMsgTextBlock, &UHorizonDialogueMsgTextBlock::StaticClass, TEXT("/Script/HorizonUI"), TEXT("UHorizonDialogueMsgTextBlock"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHorizonDialogueMsgTextBlock);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
