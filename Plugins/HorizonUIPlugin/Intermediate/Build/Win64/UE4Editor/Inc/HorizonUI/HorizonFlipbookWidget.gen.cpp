// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Widget/HorizonFlipbookWidget.h"
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
	UFunction* Z_Construct_UFunction_UHorizonFlipbookWidget_GetCurrentAnimationDuration()
	{
		struct HorizonFlipbookWidget_eventGetCurrentAnimationDuration_Parms
		{
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(HorizonFlipbookWidget_eventGetCurrentAnimationDuration_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "HorizonPlugin|Behavior" },
				{ "ModuleRelativePath", "Public/Widget/HorizonFlipbookWidget.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UHorizonFlipbookWidget, "GetCurrentAnimationDuration", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(HorizonFlipbookWidget_eventGetCurrentAnimationDuration_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UHorizonFlipbookWidget_PauseAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "HorizonPlugin|Behavior" },
				{ "ModuleRelativePath", "Public/Widget/HorizonFlipbookWidget.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UHorizonFlipbookWidget, "PauseAnimation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UHorizonFlipbookWidget_PlayAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "HorizonPlugin|Behavior" },
				{ "ModuleRelativePath", "Public/Widget/HorizonFlipbookWidget.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UHorizonFlipbookWidget, "PlayAnimation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UHorizonFlipbookWidget_ResetAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "HorizonPlugin|Behavior" },
				{ "ModuleRelativePath", "Public/Widget/HorizonFlipbookWidget.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UHorizonFlipbookWidget, "ResetAnimation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UHorizonFlipbookWidget_ResumeAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "HorizonPlugin|Behavior" },
				{ "ModuleRelativePath", "Public/Widget/HorizonFlipbookWidget.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UHorizonFlipbookWidget, "ResumeAnimation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UHorizonFlipbookWidget_SetColorAndOpacity()
	{
		struct HorizonFlipbookWidget_eventSetColorAndOpacity_Parms
		{
			FSlateColor InColorAndOpacity;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InColorAndOpacity = { UE4CodeGen_Private::EPropertyClass::Struct, "InColorAndOpacity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HorizonFlipbookWidget_eventSetColorAndOpacity_Parms, InColorAndOpacity), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InColorAndOpacity,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "HorizonPlugin|Appearance" },
				{ "ModuleRelativePath", "Public/Widget/HorizonFlipbookWidget.h" },
				{ "ToolTip", "Sets the color and opacity of the text in this text block\n\n@param InColorAndOpacity              The new text color and opacity" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UHorizonFlipbookWidget, "SetColorAndOpacity", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(HorizonFlipbookWidget_eventSetColorAndOpacity_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UHorizonFlipbookWidget_SetCurrentAnimationDuration()
	{
		struct HorizonFlipbookWidget_eventSetCurrentAnimationDuration_Parms
		{
			float duration;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_duration = { UE4CodeGen_Private::EPropertyClass::Float, "duration", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HorizonFlipbookWidget_eventSetCurrentAnimationDuration_Parms, duration), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_duration,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "HorizonPlugin|Behavior" },
				{ "ModuleRelativePath", "Public/Widget/HorizonFlipbookWidget.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UHorizonFlipbookWidget, "SetCurrentAnimationDuration", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(HorizonFlipbookWidget_eventSetCurrentAnimationDuration_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UHorizonFlipbookWidget_SetFlipbookSource()
	{
		struct HorizonFlipbookWidget_eventSetFlipbookSource_Parms
		{
			TArray<FVector2D> sourceUV;
			TArray<FVector2D> sourceSize;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sourceSize_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_sourceSize = { UE4CodeGen_Private::EPropertyClass::Array, "sourceSize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(HorizonFlipbookWidget_eventSetFlipbookSource_Parms, sourceSize), METADATA_PARAMS(NewProp_sourceSize_MetaData, ARRAY_COUNT(NewProp_sourceSize_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_sourceSize_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "sourceSize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sourceUV_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_sourceUV = { UE4CodeGen_Private::EPropertyClass::Array, "sourceUV", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(HorizonFlipbookWidget_eventSetFlipbookSource_Parms, sourceUV), METADATA_PARAMS(NewProp_sourceUV_MetaData, ARRAY_COUNT(NewProp_sourceUV_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_sourceUV_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "sourceUV", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_sourceSize,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_sourceSize_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_sourceUV,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_sourceUV_Inner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "HorizonPlugin|Appearance" },
				{ "ModuleRelativePath", "Public/Widget/HorizonFlipbookWidget.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UHorizonFlipbookWidget, "SetFlipbookSource", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(HorizonFlipbookWidget_eventSetFlipbookSource_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UHorizonFlipbookWidget_SetOpacity()
	{
		struct HorizonFlipbookWidget_eventSetOpacity_Parms
		{
			float InOpacity;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InOpacity = { UE4CodeGen_Private::EPropertyClass::Float, "InOpacity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HorizonFlipbookWidget_eventSetOpacity_Parms, InOpacity), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InOpacity,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "HorizonPlugin|Appearance" },
				{ "ModuleRelativePath", "Public/Widget/HorizonFlipbookWidget.h" },
				{ "ToolTip", "Sets the opacity of the text in this text block\n\n@param InOpacity              The new text opacity" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UHorizonFlipbookWidget, "SetOpacity", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(HorizonFlipbookWidget_eventSetOpacity_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UHorizonFlipbookWidget_StopAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "HorizonPlugin|Behavior" },
				{ "ModuleRelativePath", "Public/Widget/HorizonFlipbookWidget.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UHorizonFlipbookWidget, "StopAnimation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UHorizonFlipbookWidget_NoRegister()
	{
		return UHorizonFlipbookWidget::StaticClass();
	}
	UClass* Z_Construct_UClass_UHorizonFlipbookWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UCanvasPanel,
				(UObject* (*)())Z_Construct_UPackage__Script_HorizonUI,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UHorizonFlipbookWidget_GetCurrentAnimationDuration, "GetCurrentAnimationDuration" }, // 1289306477
				{ &Z_Construct_UFunction_UHorizonFlipbookWidget_PauseAnimation, "PauseAnimation" }, // 1858637733
				{ &Z_Construct_UFunction_UHorizonFlipbookWidget_PlayAnimation, "PlayAnimation" }, // 2152268920
				{ &Z_Construct_UFunction_UHorizonFlipbookWidget_ResetAnimation, "ResetAnimation" }, // 3172488450
				{ &Z_Construct_UFunction_UHorizonFlipbookWidget_ResumeAnimation, "ResumeAnimation" }, // 1085605645
				{ &Z_Construct_UFunction_UHorizonFlipbookWidget_SetColorAndOpacity, "SetColorAndOpacity" }, // 3476740883
				{ &Z_Construct_UFunction_UHorizonFlipbookWidget_SetCurrentAnimationDuration, "SetCurrentAnimationDuration" }, // 2453175316
				{ &Z_Construct_UFunction_UHorizonFlipbookWidget_SetFlipbookSource, "SetFlipbookSource" }, // 2297698340
				{ &Z_Construct_UFunction_UHorizonFlipbookWidget_SetOpacity, "SetOpacity" }, // 437630231
				{ &Z_Construct_UFunction_UHorizonFlipbookWidget_StopAnimation, "StopAnimation" }, // 1210198788
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Widget/HorizonFlipbookWidget.h" },
				{ "ModuleRelativePath", "Public/Widget/HorizonFlipbookWidget.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceSize_MetaData[] = {
				{ "Category", "HorizonPlugin|Brush" },
				{ "ModuleRelativePath", "Public/Widget/HorizonFlipbookWidget.h" },
				{ "ToolTip", "UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Brush)" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SourceSize = { UE4CodeGen_Private::EPropertyClass::Array, "SourceSize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020015, 1, nullptr, STRUCT_OFFSET(UHorizonFlipbookWidget, SourceSize), METADATA_PARAMS(NewProp_SourceSize_MetaData, ARRAY_COUNT(NewProp_SourceSize_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SourceSize_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "SourceSize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000020000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceUV_MetaData[] = {
				{ "Category", "HorizonPlugin|Brush" },
				{ "ModuleRelativePath", "Public/Widget/HorizonFlipbookWidget.h" },
				{ "ToolTip", "UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Brush)" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SourceUV = { UE4CodeGen_Private::EPropertyClass::Array, "SourceUV", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020015, 1, nullptr, STRUCT_OFFSET(UHorizonFlipbookWidget, SourceUV), METADATA_PARAMS(NewProp_SourceUV_MetaData, ARRAY_COUNT(NewProp_SourceUV_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SourceUV_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "SourceUV", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000020000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PaperFlipbook_MetaData[] = {
				{ "AllowedClasses", "PaperFlipbook" },
				{ "Category", "HorizonPlugin|Brush" },
				{ "DisplayName", "PaperFlipbook" },
				{ "DisplayThumbnail", "true" },
				{ "ModuleRelativePath", "Public/Widget/HorizonFlipbookWidget.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PaperFlipbook = { UE4CodeGen_Private::EPropertyClass::Object, "PaperFlipbook", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UHorizonFlipbookWidget, PaperFlipbook), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(NewProp_PaperFlipbook_MetaData, ARRAY_COUNT(NewProp_PaperFlipbook_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumOfLoop_MetaData[] = {
				{ "Category", "HorizonPlugin|Behavior" },
				{ "ModuleRelativePath", "Public/Widget/HorizonFlipbookWidget.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumOfLoop = { UE4CodeGen_Private::EPropertyClass::Int, "NumOfLoop", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UHorizonFlipbookWidget, NumOfLoop), METADATA_PARAMS(NewProp_NumOfLoop_MetaData, ARRAY_COUNT(NewProp_NumOfLoop_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsStartTick_MetaData[] = {
				{ "Category", "HorizonPlugin|Behavior" },
				{ "ModuleRelativePath", "Public/Widget/HorizonFlipbookWidget.h" },
			};
#endif
			auto NewProp_bIsStartTick_SetBit = [](void* Obj){ ((UHorizonFlipbookWidget*)Obj)->bIsStartTick = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsStartTick = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsStartTick", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UHorizonFlipbookWidget), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsStartTick_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsStartTick_MetaData, ARRAY_COUNT(NewProp_bIsStartTick_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorAndOpacity_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/Widget/HorizonFlipbookWidget.h" },
				{ "ToolTip", "The color of the text" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorAndOpacity = { UE4CodeGen_Private::EPropertyClass::Struct, "ColorAndOpacity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UHorizonFlipbookWidget, ColorAndOpacity), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(NewProp_ColorAndOpacity_MetaData, ARRAY_COUNT(NewProp_ColorAndOpacity_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SourceSize,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SourceSize_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SourceUV,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SourceUV_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PaperFlipbook,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NumOfLoop,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsStartTick,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ColorAndOpacity,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UHorizonFlipbookWidget>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UHorizonFlipbookWidget::StaticClass,
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
	IMPLEMENT_CLASS(UHorizonFlipbookWidget, 2908107200);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHorizonFlipbookWidget(Z_Construct_UClass_UHorizonFlipbookWidget, &UHorizonFlipbookWidget::StaticClass, TEXT("/Script/HorizonUI"), TEXT("UHorizonFlipbookWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHorizonFlipbookWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
