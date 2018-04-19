// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Widget/HorizonWidgetFunctionLibrary.h"
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
	UFunction* Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetParentCanvasPanelSlot()
	{
		struct HorizonWidgetFunctionLibrary_eventGetParentCanvasPanelSlot_Parms
		{
			UWidget* pWidget;
			UCanvasPanelSlot* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080588, 1, nullptr, STRUCT_OFFSET(HorizonWidgetFunctionLibrary_eventGetParentCanvasPanelSlot_Parms, ReturnValue), Z_Construct_UClass_UCanvasPanelSlot_NoRegister, METADATA_PARAMS(NewProp_ReturnValue_MetaData, ARRAY_COUNT(NewProp_ReturnValue_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pWidget_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pWidget = { UE4CodeGen_Private::EPropertyClass::Object, "pWidget", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(HorizonWidgetFunctionLibrary_eventGetParentCanvasPanelSlot_Parms, pWidget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(NewProp_pWidget_MetaData, ARRAY_COUNT(NewProp_pWidget_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_pWidget,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "HorizonPlugin|WidgetHelper" },
				{ "ModuleRelativePath", "Public/Widget/HorizonWidgetFunctionLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UHorizonWidgetFunctionLibrary, "GetParentCanvasPanelSlot", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(HorizonWidgetFunctionLibrary_eventGetParentCanvasPanelSlot_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetUserWidgetAnimation()
	{
		struct HorizonWidgetFunctionLibrary_eventGetUserWidgetAnimation_Parms
		{
			UUserWidget* pUserWidget;
			FName animeName;
			UWidgetAnimation* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080588, 1, nullptr, STRUCT_OFFSET(HorizonWidgetFunctionLibrary_eventGetUserWidgetAnimation_Parms, ReturnValue), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(NewProp_ReturnValue_MetaData, ARRAY_COUNT(NewProp_ReturnValue_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_animeName_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_animeName = { UE4CodeGen_Private::EPropertyClass::Name, "animeName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(HorizonWidgetFunctionLibrary_eventGetUserWidgetAnimation_Parms, animeName), METADATA_PARAMS(NewProp_animeName_MetaData, ARRAY_COUNT(NewProp_animeName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pUserWidget_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pUserWidget = { UE4CodeGen_Private::EPropertyClass::Object, "pUserWidget", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(HorizonWidgetFunctionLibrary_eventGetUserWidgetAnimation_Parms, pUserWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(NewProp_pUserWidget_MetaData, ARRAY_COUNT(NewProp_pUserWidget_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_animeName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_pUserWidget,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "HorizonPlugin|WidgetHelper" },
				{ "ModuleRelativePath", "Public/Widget/HorizonWidgetFunctionLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UHorizonWidgetFunctionLibrary, "GetUserWidgetAnimation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(HorizonWidgetFunctionLibrary_eventGetUserWidgetAnimation_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetWidgetFromNameRecursively()
	{
		struct HorizonWidgetFunctionLibrary_eventGetWidgetFromNameRecursively_Parms
		{
			UUserWidget* pUserWidget;
			FName InWidgetName;
			UWidget* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080588, 1, nullptr, STRUCT_OFFSET(HorizonWidgetFunctionLibrary_eventGetWidgetFromNameRecursively_Parms, ReturnValue), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(NewProp_ReturnValue_MetaData, ARRAY_COUNT(NewProp_ReturnValue_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InWidgetName_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_InWidgetName = { UE4CodeGen_Private::EPropertyClass::Name, "InWidgetName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(HorizonWidgetFunctionLibrary_eventGetWidgetFromNameRecursively_Parms, InWidgetName), METADATA_PARAMS(NewProp_InWidgetName_MetaData, ARRAY_COUNT(NewProp_InWidgetName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pUserWidget_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pUserWidget = { UE4CodeGen_Private::EPropertyClass::Object, "pUserWidget", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(HorizonWidgetFunctionLibrary_eventGetWidgetFromNameRecursively_Parms, pUserWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(NewProp_pUserWidget_MetaData, ARRAY_COUNT(NewProp_pUserWidget_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InWidgetName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_pUserWidget,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "HorizonPlugin|WidgetHelper" },
				{ "ModuleRelativePath", "Public/Widget/HorizonWidgetFunctionLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UHorizonWidgetFunctionLibrary, "GetWidgetFromNameRecursively", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(HorizonWidgetFunctionLibrary_eventGetWidgetFromNameRecursively_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_SetWidgetVisibility()
	{
		struct HorizonWidgetFunctionLibrary_eventSetWidgetVisibility_Parms
		{
			UUserWidget* UserWidget;
			FName WidgetName;
			ESlateVisibility eVisiblity;
			UWidget* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080588, 1, nullptr, STRUCT_OFFSET(HorizonWidgetFunctionLibrary_eventSetWidgetVisibility_Parms, ReturnValue), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(NewProp_ReturnValue_MetaData, ARRAY_COUNT(NewProp_ReturnValue_MetaData)) };
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_eVisiblity = { UE4CodeGen_Private::EPropertyClass::Enum, "eVisiblity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HorizonWidgetFunctionLibrary_eventSetWidgetVisibility_Parms, eVisiblity), Z_Construct_UEnum_UMG_ESlateVisibility, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_eVisiblity_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_WidgetName = { UE4CodeGen_Private::EPropertyClass::Name, "WidgetName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HorizonWidgetFunctionLibrary_eventSetWidgetVisibility_Parms, WidgetName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserWidget_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UserWidget = { UE4CodeGen_Private::EPropertyClass::Object, "UserWidget", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(HorizonWidgetFunctionLibrary_eventSetWidgetVisibility_Parms, UserWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(NewProp_UserWidget_MetaData, ARRAY_COUNT(NewProp_UserWidget_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_eVisiblity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_eVisiblity_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WidgetName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UserWidget,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "HorizonPlugin|WidgetHelper" },
				{ "ModuleRelativePath", "Public/Widget/HorizonWidgetFunctionLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UHorizonWidgetFunctionLibrary, "SetWidgetVisibility", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(HorizonWidgetFunctionLibrary_eventSetWidgetVisibility_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UHorizonWidgetFunctionLibrary_NoRegister()
	{
		return UHorizonWidgetFunctionLibrary::StaticClass();
	}
	UClass* Z_Construct_UClass_UHorizonWidgetFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
				(UObject* (*)())Z_Construct_UPackage__Script_HorizonUI,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetParentCanvasPanelSlot, "GetParentCanvasPanelSlot" }, // 3977306684
				{ &Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetUserWidgetAnimation, "GetUserWidgetAnimation" }, // 2504768607
				{ &Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetWidgetFromNameRecursively, "GetWidgetFromNameRecursively" }, // 2815708606
				{ &Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_SetWidgetVisibility, "SetWidgetVisibility" }, // 3414460606
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Widget/HorizonWidgetFunctionLibrary.h" },
				{ "ModuleRelativePath", "Public/Widget/HorizonWidgetFunctionLibrary.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UHorizonWidgetFunctionLibrary>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UHorizonWidgetFunctionLibrary::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHorizonWidgetFunctionLibrary, 86497848);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHorizonWidgetFunctionLibrary(Z_Construct_UClass_UHorizonWidgetFunctionLibrary, &UHorizonWidgetFunctionLibrary::StaticClass, TEXT("/Script/HorizonUI"), TEXT("UHorizonWidgetFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHorizonWidgetFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
