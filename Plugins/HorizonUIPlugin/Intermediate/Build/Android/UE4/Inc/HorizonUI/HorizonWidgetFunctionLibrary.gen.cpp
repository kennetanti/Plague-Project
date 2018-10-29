// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HorizonUI/Public/Widget/HorizonWidgetFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHorizonWidgetFunctionLibrary() {}
// Cross Module References
	HORIZONUI_API UClass* Z_Construct_UClass_UHorizonWidgetFunctionLibrary_NoRegister();
	HORIZONUI_API UClass* Z_Construct_UClass_UHorizonWidgetFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_HorizonUI();
	HORIZONUI_API UFunction* Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetParentCanvasPanelSlot();
	UMG_API UClass* Z_Construct_UClass_UCanvasPanelSlot_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
	HORIZONUI_API UFunction* Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetUserWidgetAnimation();
	UMG_API UClass* Z_Construct_UClass_UWidgetAnimation_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	HORIZONUI_API UFunction* Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetWidgetFromNameRecursively();
	HORIZONUI_API UFunction* Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_SetWidgetVisibility();
	UMG_API UEnum* Z_Construct_UEnum_UMG_ESlateVisibility();
// End Cross Module References
	void UHorizonWidgetFunctionLibrary::StaticRegisterNativesUHorizonWidgetFunctionLibrary()
	{
		UClass* Class = UHorizonWidgetFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetParentCanvasPanelSlot", &UHorizonWidgetFunctionLibrary::execGetParentCanvasPanelSlot },
			{ "GetUserWidgetAnimation", &UHorizonWidgetFunctionLibrary::execGetUserWidgetAnimation },
			{ "GetWidgetFromNameRecursively", &UHorizonWidgetFunctionLibrary::execGetWidgetFromNameRecursively },
			{ "SetWidgetVisibility", &UHorizonWidgetFunctionLibrary::execSetWidgetVisibility },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetParentCanvasPanelSlot_Statics
	{
		struct HorizonWidgetFunctionLibrary_eventGetParentCanvasPanelSlot_Parms
		{
			UWidget* pWidget;
			UCanvasPanelSlot* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetParentCanvasPanelSlot_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetParentCanvasPanelSlot_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080588, 1, nullptr, STRUCT_OFFSET(HorizonWidgetFunctionLibrary_eventGetParentCanvasPanelSlot_Parms, ReturnValue), Z_Construct_UClass_UCanvasPanelSlot_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetParentCanvasPanelSlot_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetParentCanvasPanelSlot_Statics::NewProp_ReturnValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetParentCanvasPanelSlot_Statics::NewProp_pWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetParentCanvasPanelSlot_Statics::NewProp_pWidget = { UE4CodeGen_Private::EPropertyClass::Object, "pWidget", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(HorizonWidgetFunctionLibrary_eventGetParentCanvasPanelSlot_Parms, pWidget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetParentCanvasPanelSlot_Statics::NewProp_pWidget_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetParentCanvasPanelSlot_Statics::NewProp_pWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetParentCanvasPanelSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetParentCanvasPanelSlot_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetParentCanvasPanelSlot_Statics::NewProp_pWidget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetParentCanvasPanelSlot_Statics::Function_MetaDataParams[] = {
		{ "Category", "HorizonPlugin|WidgetHelper" },
		{ "ModuleRelativePath", "Public/Widget/HorizonWidgetFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetParentCanvasPanelSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHorizonWidgetFunctionLibrary, "GetParentCanvasPanelSlot", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(HorizonWidgetFunctionLibrary_eventGetParentCanvasPanelSlot_Parms), Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetParentCanvasPanelSlot_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetParentCanvasPanelSlot_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetParentCanvasPanelSlot_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetParentCanvasPanelSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetParentCanvasPanelSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetParentCanvasPanelSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetUserWidgetAnimation_Statics
	{
		struct HorizonWidgetFunctionLibrary_eventGetUserWidgetAnimation_Parms
		{
			UUserWidget* pUserWidget;
			FName animeName;
			UWidgetAnimation* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_animeName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_animeName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pUserWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pUserWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetUserWidgetAnimation_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetUserWidgetAnimation_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080588, 1, nullptr, STRUCT_OFFSET(HorizonWidgetFunctionLibrary_eventGetUserWidgetAnimation_Parms, ReturnValue), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetUserWidgetAnimation_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetUserWidgetAnimation_Statics::NewProp_ReturnValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetUserWidgetAnimation_Statics::NewProp_animeName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetUserWidgetAnimation_Statics::NewProp_animeName = { UE4CodeGen_Private::EPropertyClass::Name, "animeName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(HorizonWidgetFunctionLibrary_eventGetUserWidgetAnimation_Parms, animeName), METADATA_PARAMS(Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetUserWidgetAnimation_Statics::NewProp_animeName_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetUserWidgetAnimation_Statics::NewProp_animeName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetUserWidgetAnimation_Statics::NewProp_pUserWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetUserWidgetAnimation_Statics::NewProp_pUserWidget = { UE4CodeGen_Private::EPropertyClass::Object, "pUserWidget", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(HorizonWidgetFunctionLibrary_eventGetUserWidgetAnimation_Parms, pUserWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetUserWidgetAnimation_Statics::NewProp_pUserWidget_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetUserWidgetAnimation_Statics::NewProp_pUserWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetUserWidgetAnimation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetUserWidgetAnimation_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetUserWidgetAnimation_Statics::NewProp_animeName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetUserWidgetAnimation_Statics::NewProp_pUserWidget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetUserWidgetAnimation_Statics::Function_MetaDataParams[] = {
		{ "Category", "HorizonPlugin|WidgetHelper" },
		{ "ModuleRelativePath", "Public/Widget/HorizonWidgetFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetUserWidgetAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHorizonWidgetFunctionLibrary, "GetUserWidgetAnimation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(HorizonWidgetFunctionLibrary_eventGetUserWidgetAnimation_Parms), Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetUserWidgetAnimation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetUserWidgetAnimation_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetUserWidgetAnimation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetUserWidgetAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetUserWidgetAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetUserWidgetAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetWidgetFromNameRecursively_Statics
	{
		struct HorizonWidgetFunctionLibrary_eventGetWidgetFromNameRecursively_Parms
		{
			UUserWidget* pUserWidget;
			FName InWidgetName;
			UWidget* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InWidgetName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InWidgetName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pUserWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pUserWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetWidgetFromNameRecursively_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetWidgetFromNameRecursively_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080588, 1, nullptr, STRUCT_OFFSET(HorizonWidgetFunctionLibrary_eventGetWidgetFromNameRecursively_Parms, ReturnValue), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetWidgetFromNameRecursively_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetWidgetFromNameRecursively_Statics::NewProp_ReturnValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetWidgetFromNameRecursively_Statics::NewProp_InWidgetName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetWidgetFromNameRecursively_Statics::NewProp_InWidgetName = { UE4CodeGen_Private::EPropertyClass::Name, "InWidgetName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(HorizonWidgetFunctionLibrary_eventGetWidgetFromNameRecursively_Parms, InWidgetName), METADATA_PARAMS(Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetWidgetFromNameRecursively_Statics::NewProp_InWidgetName_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetWidgetFromNameRecursively_Statics::NewProp_InWidgetName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetWidgetFromNameRecursively_Statics::NewProp_pUserWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetWidgetFromNameRecursively_Statics::NewProp_pUserWidget = { UE4CodeGen_Private::EPropertyClass::Object, "pUserWidget", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(HorizonWidgetFunctionLibrary_eventGetWidgetFromNameRecursively_Parms, pUserWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetWidgetFromNameRecursively_Statics::NewProp_pUserWidget_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetWidgetFromNameRecursively_Statics::NewProp_pUserWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetWidgetFromNameRecursively_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetWidgetFromNameRecursively_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetWidgetFromNameRecursively_Statics::NewProp_InWidgetName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetWidgetFromNameRecursively_Statics::NewProp_pUserWidget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetWidgetFromNameRecursively_Statics::Function_MetaDataParams[] = {
		{ "Category", "HorizonPlugin|WidgetHelper" },
		{ "ModuleRelativePath", "Public/Widget/HorizonWidgetFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetWidgetFromNameRecursively_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHorizonWidgetFunctionLibrary, "GetWidgetFromNameRecursively", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(HorizonWidgetFunctionLibrary_eventGetWidgetFromNameRecursively_Parms), Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetWidgetFromNameRecursively_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetWidgetFromNameRecursively_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetWidgetFromNameRecursively_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetWidgetFromNameRecursively_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetWidgetFromNameRecursively()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetWidgetFromNameRecursively_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_SetWidgetVisibility_Statics
	{
		struct HorizonWidgetFunctionLibrary_eventSetWidgetVisibility_Parms
		{
			UUserWidget* UserWidget;
			FName WidgetName;
			ESlateVisibility eVisiblity;
			UWidget* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_eVisiblity_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_eVisiblity;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_eVisiblity_Underlying;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_WidgetName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UserWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_SetWidgetVisibility_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_SetWidgetVisibility_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080588, 1, nullptr, STRUCT_OFFSET(HorizonWidgetFunctionLibrary_eventSetWidgetVisibility_Parms, ReturnValue), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_SetWidgetVisibility_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_SetWidgetVisibility_Statics::NewProp_ReturnValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_SetWidgetVisibility_Statics::NewProp_eVisiblity_MetaData[] = {
		{ "DisplayName", "SlateVisibility" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_SetWidgetVisibility_Statics::NewProp_eVisiblity = { UE4CodeGen_Private::EPropertyClass::Enum, "eVisiblity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HorizonWidgetFunctionLibrary_eventSetWidgetVisibility_Parms, eVisiblity), Z_Construct_UEnum_UMG_ESlateVisibility, METADATA_PARAMS(Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_SetWidgetVisibility_Statics::NewProp_eVisiblity_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_SetWidgetVisibility_Statics::NewProp_eVisiblity_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_SetWidgetVisibility_Statics::NewProp_eVisiblity_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_SetWidgetVisibility_Statics::NewProp_WidgetName = { UE4CodeGen_Private::EPropertyClass::Name, "WidgetName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HorizonWidgetFunctionLibrary_eventSetWidgetVisibility_Parms, WidgetName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_SetWidgetVisibility_Statics::NewProp_UserWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_SetWidgetVisibility_Statics::NewProp_UserWidget = { UE4CodeGen_Private::EPropertyClass::Object, "UserWidget", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(HorizonWidgetFunctionLibrary_eventSetWidgetVisibility_Parms, UserWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_SetWidgetVisibility_Statics::NewProp_UserWidget_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_SetWidgetVisibility_Statics::NewProp_UserWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_SetWidgetVisibility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_SetWidgetVisibility_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_SetWidgetVisibility_Statics::NewProp_eVisiblity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_SetWidgetVisibility_Statics::NewProp_eVisiblity_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_SetWidgetVisibility_Statics::NewProp_WidgetName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_SetWidgetVisibility_Statics::NewProp_UserWidget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_SetWidgetVisibility_Statics::Function_MetaDataParams[] = {
		{ "Category", "HorizonPlugin|WidgetHelper" },
		{ "ModuleRelativePath", "Public/Widget/HorizonWidgetFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_SetWidgetVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHorizonWidgetFunctionLibrary, "SetWidgetVisibility", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(HorizonWidgetFunctionLibrary_eventSetWidgetVisibility_Parms), Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_SetWidgetVisibility_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_SetWidgetVisibility_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_SetWidgetVisibility_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_SetWidgetVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_SetWidgetVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_SetWidgetVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UHorizonWidgetFunctionLibrary_NoRegister()
	{
		return UHorizonWidgetFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UHorizonWidgetFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHorizonWidgetFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_HorizonUI,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHorizonWidgetFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetParentCanvasPanelSlot, "GetParentCanvasPanelSlot" }, // 3780119855
		{ &Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetUserWidgetAnimation, "GetUserWidgetAnimation" }, // 2689690200
		{ &Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetWidgetFromNameRecursively, "GetWidgetFromNameRecursively" }, // 3326189799
		{ &Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_SetWidgetVisibility, "SetWidgetVisibility" }, // 2195661437
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHorizonWidgetFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Widget/HorizonWidgetFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/Widget/HorizonWidgetFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHorizonWidgetFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHorizonWidgetFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHorizonWidgetFunctionLibrary_Statics::ClassParams = {
		&UHorizonWidgetFunctionLibrary::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UHorizonWidgetFunctionLibrary_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UHorizonWidgetFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHorizonWidgetFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHorizonWidgetFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHorizonWidgetFunctionLibrary, 2633032811);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHorizonWidgetFunctionLibrary(Z_Construct_UClass_UHorizonWidgetFunctionLibrary, &UHorizonWidgetFunctionLibrary::StaticClass, TEXT("/Script/HorizonUI"), TEXT("UHorizonWidgetFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHorizonWidgetFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
