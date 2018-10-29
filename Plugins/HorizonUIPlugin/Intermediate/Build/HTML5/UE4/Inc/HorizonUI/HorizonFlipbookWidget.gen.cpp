// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HorizonUI/Public/Widget/HorizonFlipbookWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHorizonFlipbookWidget() {}
// Cross Module References
	HORIZONUI_API UClass* Z_Construct_UClass_UHorizonFlipbookWidget_NoRegister();
	HORIZONUI_API UClass* Z_Construct_UClass_UHorizonFlipbookWidget();
	UMG_API UClass* Z_Construct_UClass_UCanvasPanel();
	UPackage* Z_Construct_UPackage__Script_HorizonUI();
	HORIZONUI_API UFunction* Z_Construct_UFunction_UHorizonFlipbookWidget_GetCurrentAnimationDuration();
	HORIZONUI_API UFunction* Z_Construct_UFunction_UHorizonFlipbookWidget_PauseAnimation();
	HORIZONUI_API UFunction* Z_Construct_UFunction_UHorizonFlipbookWidget_PlayAnimation();
	HORIZONUI_API UFunction* Z_Construct_UFunction_UHorizonFlipbookWidget_ResetAnimation();
	HORIZONUI_API UFunction* Z_Construct_UFunction_UHorizonFlipbookWidget_ResumeAnimation();
	HORIZONUI_API UFunction* Z_Construct_UFunction_UHorizonFlipbookWidget_SetColorAndOpacity();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateColor();
	HORIZONUI_API UFunction* Z_Construct_UFunction_UHorizonFlipbookWidget_SetCurrentAnimationDuration();
	HORIZONUI_API UFunction* Z_Construct_UFunction_UHorizonFlipbookWidget_SetFlipbookSource();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	HORIZONUI_API UFunction* Z_Construct_UFunction_UHorizonFlipbookWidget_SetOpacity();
	HORIZONUI_API UFunction* Z_Construct_UFunction_UHorizonFlipbookWidget_StopAnimation();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbook_NoRegister();
// End Cross Module References
	void UHorizonFlipbookWidget::StaticRegisterNativesUHorizonFlipbookWidget()
	{
		UClass* Class = UHorizonFlipbookWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurrentAnimationDuration", &UHorizonFlipbookWidget::execGetCurrentAnimationDuration },
			{ "PauseAnimation", &UHorizonFlipbookWidget::execPauseAnimation },
			{ "PlayAnimation", &UHorizonFlipbookWidget::execPlayAnimation },
			{ "ResetAnimation", &UHorizonFlipbookWidget::execResetAnimation },
			{ "ResumeAnimation", &UHorizonFlipbookWidget::execResumeAnimation },
			{ "SetColorAndOpacity", &UHorizonFlipbookWidget::execSetColorAndOpacity },
			{ "SetCurrentAnimationDuration", &UHorizonFlipbookWidget::execSetCurrentAnimationDuration },
			{ "SetFlipbookSource", &UHorizonFlipbookWidget::execSetFlipbookSource },
			{ "SetOpacity", &UHorizonFlipbookWidget::execSetOpacity },
			{ "StopAnimation", &UHorizonFlipbookWidget::execStopAnimation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHorizonFlipbookWidget_GetCurrentAnimationDuration_Statics
	{
		struct HorizonFlipbookWidget_eventGetCurrentAnimationDuration_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHorizonFlipbookWidget_GetCurrentAnimationDuration_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(HorizonFlipbookWidget_eventGetCurrentAnimationDuration_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHorizonFlipbookWidget_GetCurrentAnimationDuration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonFlipbookWidget_GetCurrentAnimationDuration_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHorizonFlipbookWidget_GetCurrentAnimationDuration_Statics::Function_MetaDataParams[] = {
		{ "Category", "HorizonPlugin|Behavior" },
		{ "ModuleRelativePath", "Public/Widget/HorizonFlipbookWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizonFlipbookWidget_GetCurrentAnimationDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHorizonFlipbookWidget, "GetCurrentAnimationDuration", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(HorizonFlipbookWidget_eventGetCurrentAnimationDuration_Parms), Z_Construct_UFunction_UHorizonFlipbookWidget_GetCurrentAnimationDuration_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UHorizonFlipbookWidget_GetCurrentAnimationDuration_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHorizonFlipbookWidget_GetCurrentAnimationDuration_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UHorizonFlipbookWidget_GetCurrentAnimationDuration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHorizonFlipbookWidget_GetCurrentAnimationDuration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHorizonFlipbookWidget_GetCurrentAnimationDuration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHorizonFlipbookWidget_PauseAnimation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHorizonFlipbookWidget_PauseAnimation_Statics::Function_MetaDataParams[] = {
		{ "Category", "HorizonPlugin|Behavior" },
		{ "ModuleRelativePath", "Public/Widget/HorizonFlipbookWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizonFlipbookWidget_PauseAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHorizonFlipbookWidget, "PauseAnimation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHorizonFlipbookWidget_PauseAnimation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UHorizonFlipbookWidget_PauseAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHorizonFlipbookWidget_PauseAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHorizonFlipbookWidget_PauseAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHorizonFlipbookWidget_PlayAnimation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHorizonFlipbookWidget_PlayAnimation_Statics::Function_MetaDataParams[] = {
		{ "Category", "HorizonPlugin|Behavior" },
		{ "ModuleRelativePath", "Public/Widget/HorizonFlipbookWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizonFlipbookWidget_PlayAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHorizonFlipbookWidget, "PlayAnimation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHorizonFlipbookWidget_PlayAnimation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UHorizonFlipbookWidget_PlayAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHorizonFlipbookWidget_PlayAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHorizonFlipbookWidget_PlayAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHorizonFlipbookWidget_ResetAnimation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHorizonFlipbookWidget_ResetAnimation_Statics::Function_MetaDataParams[] = {
		{ "Category", "HorizonPlugin|Behavior" },
		{ "ModuleRelativePath", "Public/Widget/HorizonFlipbookWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizonFlipbookWidget_ResetAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHorizonFlipbookWidget, "ResetAnimation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHorizonFlipbookWidget_ResetAnimation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UHorizonFlipbookWidget_ResetAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHorizonFlipbookWidget_ResetAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHorizonFlipbookWidget_ResetAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHorizonFlipbookWidget_ResumeAnimation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHorizonFlipbookWidget_ResumeAnimation_Statics::Function_MetaDataParams[] = {
		{ "Category", "HorizonPlugin|Behavior" },
		{ "ModuleRelativePath", "Public/Widget/HorizonFlipbookWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizonFlipbookWidget_ResumeAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHorizonFlipbookWidget, "ResumeAnimation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHorizonFlipbookWidget_ResumeAnimation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UHorizonFlipbookWidget_ResumeAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHorizonFlipbookWidget_ResumeAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHorizonFlipbookWidget_ResumeAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHorizonFlipbookWidget_SetColorAndOpacity_Statics
	{
		struct HorizonFlipbookWidget_eventSetColorAndOpacity_Parms
		{
			FSlateColor InColorAndOpacity;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InColorAndOpacity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHorizonFlipbookWidget_SetColorAndOpacity_Statics::NewProp_InColorAndOpacity = { UE4CodeGen_Private::EPropertyClass::Struct, "InColorAndOpacity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HorizonFlipbookWidget_eventSetColorAndOpacity_Parms, InColorAndOpacity), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHorizonFlipbookWidget_SetColorAndOpacity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonFlipbookWidget_SetColorAndOpacity_Statics::NewProp_InColorAndOpacity,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHorizonFlipbookWidget_SetColorAndOpacity_Statics::Function_MetaDataParams[] = {
		{ "Category", "HorizonPlugin|Appearance" },
		{ "ModuleRelativePath", "Public/Widget/HorizonFlipbookWidget.h" },
		{ "ToolTip", "Sets the color and opacity of the text in this text block\n\n@param InColorAndOpacity              The new text color and opacity" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizonFlipbookWidget_SetColorAndOpacity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHorizonFlipbookWidget, "SetColorAndOpacity", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(HorizonFlipbookWidget_eventSetColorAndOpacity_Parms), Z_Construct_UFunction_UHorizonFlipbookWidget_SetColorAndOpacity_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UHorizonFlipbookWidget_SetColorAndOpacity_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHorizonFlipbookWidget_SetColorAndOpacity_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UHorizonFlipbookWidget_SetColorAndOpacity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHorizonFlipbookWidget_SetColorAndOpacity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHorizonFlipbookWidget_SetColorAndOpacity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHorizonFlipbookWidget_SetCurrentAnimationDuration_Statics
	{
		struct HorizonFlipbookWidget_eventSetCurrentAnimationDuration_Parms
		{
			float duration;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_duration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHorizonFlipbookWidget_SetCurrentAnimationDuration_Statics::NewProp_duration = { UE4CodeGen_Private::EPropertyClass::Float, "duration", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HorizonFlipbookWidget_eventSetCurrentAnimationDuration_Parms, duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHorizonFlipbookWidget_SetCurrentAnimationDuration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonFlipbookWidget_SetCurrentAnimationDuration_Statics::NewProp_duration,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHorizonFlipbookWidget_SetCurrentAnimationDuration_Statics::Function_MetaDataParams[] = {
		{ "Category", "HorizonPlugin|Behavior" },
		{ "ModuleRelativePath", "Public/Widget/HorizonFlipbookWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizonFlipbookWidget_SetCurrentAnimationDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHorizonFlipbookWidget, "SetCurrentAnimationDuration", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(HorizonFlipbookWidget_eventSetCurrentAnimationDuration_Parms), Z_Construct_UFunction_UHorizonFlipbookWidget_SetCurrentAnimationDuration_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UHorizonFlipbookWidget_SetCurrentAnimationDuration_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHorizonFlipbookWidget_SetCurrentAnimationDuration_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UHorizonFlipbookWidget_SetCurrentAnimationDuration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHorizonFlipbookWidget_SetCurrentAnimationDuration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHorizonFlipbookWidget_SetCurrentAnimationDuration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHorizonFlipbookWidget_SetFlipbookSource_Statics
	{
		struct HorizonFlipbookWidget_eventSetFlipbookSource_Parms
		{
			TArray<FVector2D> sourceUV;
			TArray<FVector2D> sourceSize;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sourceSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_sourceSize;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_sourceSize_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sourceUV_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_sourceUV;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_sourceUV_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHorizonFlipbookWidget_SetFlipbookSource_Statics::NewProp_sourceSize_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHorizonFlipbookWidget_SetFlipbookSource_Statics::NewProp_sourceSize = { UE4CodeGen_Private::EPropertyClass::Array, "sourceSize", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(HorizonFlipbookWidget_eventSetFlipbookSource_Parms, sourceSize), METADATA_PARAMS(Z_Construct_UFunction_UHorizonFlipbookWidget_SetFlipbookSource_Statics::NewProp_sourceSize_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UHorizonFlipbookWidget_SetFlipbookSource_Statics::NewProp_sourceSize_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHorizonFlipbookWidget_SetFlipbookSource_Statics::NewProp_sourceSize_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "sourceSize", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHorizonFlipbookWidget_SetFlipbookSource_Statics::NewProp_sourceUV_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHorizonFlipbookWidget_SetFlipbookSource_Statics::NewProp_sourceUV = { UE4CodeGen_Private::EPropertyClass::Array, "sourceUV", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(HorizonFlipbookWidget_eventSetFlipbookSource_Parms, sourceUV), METADATA_PARAMS(Z_Construct_UFunction_UHorizonFlipbookWidget_SetFlipbookSource_Statics::NewProp_sourceUV_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UHorizonFlipbookWidget_SetFlipbookSource_Statics::NewProp_sourceUV_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHorizonFlipbookWidget_SetFlipbookSource_Statics::NewProp_sourceUV_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "sourceUV", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHorizonFlipbookWidget_SetFlipbookSource_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonFlipbookWidget_SetFlipbookSource_Statics::NewProp_sourceSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonFlipbookWidget_SetFlipbookSource_Statics::NewProp_sourceSize_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonFlipbookWidget_SetFlipbookSource_Statics::NewProp_sourceUV,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonFlipbookWidget_SetFlipbookSource_Statics::NewProp_sourceUV_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHorizonFlipbookWidget_SetFlipbookSource_Statics::Function_MetaDataParams[] = {
		{ "Category", "HorizonPlugin|Appearance" },
		{ "ModuleRelativePath", "Public/Widget/HorizonFlipbookWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizonFlipbookWidget_SetFlipbookSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHorizonFlipbookWidget, "SetFlipbookSource", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(HorizonFlipbookWidget_eventSetFlipbookSource_Parms), Z_Construct_UFunction_UHorizonFlipbookWidget_SetFlipbookSource_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UHorizonFlipbookWidget_SetFlipbookSource_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHorizonFlipbookWidget_SetFlipbookSource_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UHorizonFlipbookWidget_SetFlipbookSource_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHorizonFlipbookWidget_SetFlipbookSource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHorizonFlipbookWidget_SetFlipbookSource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHorizonFlipbookWidget_SetOpacity_Statics
	{
		struct HorizonFlipbookWidget_eventSetOpacity_Parms
		{
			float InOpacity;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InOpacity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHorizonFlipbookWidget_SetOpacity_Statics::NewProp_InOpacity = { UE4CodeGen_Private::EPropertyClass::Float, "InOpacity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HorizonFlipbookWidget_eventSetOpacity_Parms, InOpacity), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHorizonFlipbookWidget_SetOpacity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonFlipbookWidget_SetOpacity_Statics::NewProp_InOpacity,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHorizonFlipbookWidget_SetOpacity_Statics::Function_MetaDataParams[] = {
		{ "Category", "HorizonPlugin|Appearance" },
		{ "ModuleRelativePath", "Public/Widget/HorizonFlipbookWidget.h" },
		{ "ToolTip", "Sets the opacity of the text in this text block\n\n@param InOpacity              The new text opacity" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizonFlipbookWidget_SetOpacity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHorizonFlipbookWidget, "SetOpacity", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(HorizonFlipbookWidget_eventSetOpacity_Parms), Z_Construct_UFunction_UHorizonFlipbookWidget_SetOpacity_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UHorizonFlipbookWidget_SetOpacity_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHorizonFlipbookWidget_SetOpacity_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UHorizonFlipbookWidget_SetOpacity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHorizonFlipbookWidget_SetOpacity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHorizonFlipbookWidget_SetOpacity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHorizonFlipbookWidget_StopAnimation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHorizonFlipbookWidget_StopAnimation_Statics::Function_MetaDataParams[] = {
		{ "Category", "HorizonPlugin|Behavior" },
		{ "ModuleRelativePath", "Public/Widget/HorizonFlipbookWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizonFlipbookWidget_StopAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHorizonFlipbookWidget, "StopAnimation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHorizonFlipbookWidget_StopAnimation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UHorizonFlipbookWidget_StopAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHorizonFlipbookWidget_StopAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHorizonFlipbookWidget_StopAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UHorizonFlipbookWidget_NoRegister()
	{
		return UHorizonFlipbookWidget::StaticClass();
	}
	struct Z_Construct_UClass_UHorizonFlipbookWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SourceSize;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SourceSize_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceUV_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SourceUV;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SourceUV_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PaperFlipbook_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PaperFlipbook;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumOfLoop_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumOfLoop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsStartTick_MetaData[];
#endif
		static void NewProp_bIsStartTick_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsStartTick;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorAndOpacity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorAndOpacity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHorizonFlipbookWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCanvasPanel,
		(UObject* (*)())Z_Construct_UPackage__Script_HorizonUI,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHorizonFlipbookWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHorizonFlipbookWidget_GetCurrentAnimationDuration, "GetCurrentAnimationDuration" }, // 2900068251
		{ &Z_Construct_UFunction_UHorizonFlipbookWidget_PauseAnimation, "PauseAnimation" }, // 1225406155
		{ &Z_Construct_UFunction_UHorizonFlipbookWidget_PlayAnimation, "PlayAnimation" }, // 2684298357
		{ &Z_Construct_UFunction_UHorizonFlipbookWidget_ResetAnimation, "ResetAnimation" }, // 45533526
		{ &Z_Construct_UFunction_UHorizonFlipbookWidget_ResumeAnimation, "ResumeAnimation" }, // 2139508179
		{ &Z_Construct_UFunction_UHorizonFlipbookWidget_SetColorAndOpacity, "SetColorAndOpacity" }, // 1624133956
		{ &Z_Construct_UFunction_UHorizonFlipbookWidget_SetCurrentAnimationDuration, "SetCurrentAnimationDuration" }, // 3135208173
		{ &Z_Construct_UFunction_UHorizonFlipbookWidget_SetFlipbookSource, "SetFlipbookSource" }, // 2911391840
		{ &Z_Construct_UFunction_UHorizonFlipbookWidget_SetOpacity, "SetOpacity" }, // 1639722579
		{ &Z_Construct_UFunction_UHorizonFlipbookWidget_StopAnimation, "StopAnimation" }, // 1053654575
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHorizonFlipbookWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Widget/HorizonFlipbookWidget.h" },
		{ "ModuleRelativePath", "Public/Widget/HorizonFlipbookWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHorizonFlipbookWidget_Statics::NewProp_SourceSize_MetaData[] = {
		{ "Category", "HorizonPlugin|Brush" },
		{ "ModuleRelativePath", "Public/Widget/HorizonFlipbookWidget.h" },
		{ "ToolTip", "UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Brush)" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHorizonFlipbookWidget_Statics::NewProp_SourceSize = { UE4CodeGen_Private::EPropertyClass::Array, "SourceSize", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020015, 1, nullptr, STRUCT_OFFSET(UHorizonFlipbookWidget, SourceSize), METADATA_PARAMS(Z_Construct_UClass_UHorizonFlipbookWidget_Statics::NewProp_SourceSize_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHorizonFlipbookWidget_Statics::NewProp_SourceSize_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHorizonFlipbookWidget_Statics::NewProp_SourceSize_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "SourceSize", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000020000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHorizonFlipbookWidget_Statics::NewProp_SourceUV_MetaData[] = {
		{ "Category", "HorizonPlugin|Brush" },
		{ "ModuleRelativePath", "Public/Widget/HorizonFlipbookWidget.h" },
		{ "ToolTip", "UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Brush)" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHorizonFlipbookWidget_Statics::NewProp_SourceUV = { UE4CodeGen_Private::EPropertyClass::Array, "SourceUV", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020015, 1, nullptr, STRUCT_OFFSET(UHorizonFlipbookWidget, SourceUV), METADATA_PARAMS(Z_Construct_UClass_UHorizonFlipbookWidget_Statics::NewProp_SourceUV_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHorizonFlipbookWidget_Statics::NewProp_SourceUV_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHorizonFlipbookWidget_Statics::NewProp_SourceUV_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "SourceUV", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000020000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHorizonFlipbookWidget_Statics::NewProp_PaperFlipbook_MetaData[] = {
		{ "AllowedClasses", "PaperFlipbook" },
		{ "Category", "HorizonPlugin|Brush" },
		{ "DisplayName", "PaperFlipbook" },
		{ "DisplayThumbnail", "true" },
		{ "ModuleRelativePath", "Public/Widget/HorizonFlipbookWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHorizonFlipbookWidget_Statics::NewProp_PaperFlipbook = { UE4CodeGen_Private::EPropertyClass::Object, "PaperFlipbook", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UHorizonFlipbookWidget, PaperFlipbook), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHorizonFlipbookWidget_Statics::NewProp_PaperFlipbook_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHorizonFlipbookWidget_Statics::NewProp_PaperFlipbook_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHorizonFlipbookWidget_Statics::NewProp_NumOfLoop_MetaData[] = {
		{ "Category", "HorizonPlugin|Behavior" },
		{ "ModuleRelativePath", "Public/Widget/HorizonFlipbookWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHorizonFlipbookWidget_Statics::NewProp_NumOfLoop = { UE4CodeGen_Private::EPropertyClass::Int, "NumOfLoop", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UHorizonFlipbookWidget, NumOfLoop), METADATA_PARAMS(Z_Construct_UClass_UHorizonFlipbookWidget_Statics::NewProp_NumOfLoop_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHorizonFlipbookWidget_Statics::NewProp_NumOfLoop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHorizonFlipbookWidget_Statics::NewProp_bIsStartTick_MetaData[] = {
		{ "Category", "HorizonPlugin|Behavior" },
		{ "ModuleRelativePath", "Public/Widget/HorizonFlipbookWidget.h" },
	};
#endif
	void Z_Construct_UClass_UHorizonFlipbookWidget_Statics::NewProp_bIsStartTick_SetBit(void* Obj)
	{
		((UHorizonFlipbookWidget*)Obj)->bIsStartTick = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHorizonFlipbookWidget_Statics::NewProp_bIsStartTick = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsStartTick", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UHorizonFlipbookWidget), &Z_Construct_UClass_UHorizonFlipbookWidget_Statics::NewProp_bIsStartTick_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHorizonFlipbookWidget_Statics::NewProp_bIsStartTick_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHorizonFlipbookWidget_Statics::NewProp_bIsStartTick_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHorizonFlipbookWidget_Statics::NewProp_ColorAndOpacity_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Widget/HorizonFlipbookWidget.h" },
		{ "ToolTip", "The color of the text" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHorizonFlipbookWidget_Statics::NewProp_ColorAndOpacity = { UE4CodeGen_Private::EPropertyClass::Struct, "ColorAndOpacity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UHorizonFlipbookWidget, ColorAndOpacity), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(Z_Construct_UClass_UHorizonFlipbookWidget_Statics::NewProp_ColorAndOpacity_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHorizonFlipbookWidget_Statics::NewProp_ColorAndOpacity_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHorizonFlipbookWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorizonFlipbookWidget_Statics::NewProp_SourceSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorizonFlipbookWidget_Statics::NewProp_SourceSize_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorizonFlipbookWidget_Statics::NewProp_SourceUV,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorizonFlipbookWidget_Statics::NewProp_SourceUV_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorizonFlipbookWidget_Statics::NewProp_PaperFlipbook,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorizonFlipbookWidget_Statics::NewProp_NumOfLoop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorizonFlipbookWidget_Statics::NewProp_bIsStartTick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorizonFlipbookWidget_Statics::NewProp_ColorAndOpacity,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHorizonFlipbookWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHorizonFlipbookWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHorizonFlipbookWidget_Statics::ClassParams = {
		&UHorizonFlipbookWidget::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UHorizonFlipbookWidget_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UHorizonFlipbookWidget_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UHorizonFlipbookWidget_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UHorizonFlipbookWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHorizonFlipbookWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHorizonFlipbookWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHorizonFlipbookWidget, 3063414321);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHorizonFlipbookWidget(Z_Construct_UClass_UHorizonFlipbookWidget, &UHorizonFlipbookWidget::StaticClass, TEXT("/Script/HorizonUI"), TEXT("UHorizonFlipbookWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHorizonFlipbookWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
