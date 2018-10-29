// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HorizonUI/Public/Widget/HorizonButton.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHorizonButton() {}
// Cross Module References
	HORIZONUI_API UFunction* Z_Construct_UDelegateFunction_HorizonUI_OnHorizonButtonEvent__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_HorizonUI();
	HORIZONUI_API UClass* Z_Construct_UClass_UHorizonButton_NoRegister();
	HORIZONUI_API UClass* Z_Construct_UClass_UHorizonButton();
	UMG_API UClass* Z_Construct_UClass_UButton();
	HORIZONUI_API UFunction* Z_Construct_UFunction_UHorizonButton_OnClickedButton();
	HORIZONUI_API UFunction* Z_Construct_UFunction_UHorizonButton_OnHoveredButton();
	HORIZONUI_API UFunction* Z_Construct_UFunction_UHorizonButton_OnPressedButton();
	HORIZONUI_API UFunction* Z_Construct_UFunction_UHorizonButton_OnReleasedButton();
	HORIZONUI_API UFunction* Z_Construct_UFunction_UHorizonButton_OnUnhoveredButton();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_HorizonUI_OnHorizonButtonEvent__DelegateSignature_Statics
	{
		struct _Script_HorizonUI_eventOnHorizonButtonEvent_Parms
		{
			UHorizonButton* pButton;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pButton;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_HorizonUI_OnHorizonButtonEvent__DelegateSignature_Statics::NewProp_pButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_HorizonUI_OnHorizonButtonEvent__DelegateSignature_Statics::NewProp_pButton = { UE4CodeGen_Private::EPropertyClass::Object, "pButton", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(_Script_HorizonUI_eventOnHorizonButtonEvent_Parms, pButton), Z_Construct_UClass_UHorizonButton_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_HorizonUI_OnHorizonButtonEvent__DelegateSignature_Statics::NewProp_pButton_MetaData, ARRAY_COUNT(Z_Construct_UDelegateFunction_HorizonUI_OnHorizonButtonEvent__DelegateSignature_Statics::NewProp_pButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_HorizonUI_OnHorizonButtonEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HorizonUI_OnHorizonButtonEvent__DelegateSignature_Statics::NewProp_pButton,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_HorizonUI_OnHorizonButtonEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widget/HorizonButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_HorizonUI_OnHorizonButtonEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_HorizonUI, "OnHorizonButtonEvent__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_HorizonUI_eventOnHorizonButtonEvent_Parms), Z_Construct_UDelegateFunction_HorizonUI_OnHorizonButtonEvent__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_HorizonUI_OnHorizonButtonEvent__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_HorizonUI_OnHorizonButtonEvent__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_HorizonUI_OnHorizonButtonEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_HorizonUI_OnHorizonButtonEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_HorizonUI_OnHorizonButtonEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void UHorizonButton::StaticRegisterNativesUHorizonButton()
	{
		UClass* Class = UHorizonButton::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnClickedButton", &UHorizonButton::execOnClickedButton },
			{ "OnHoveredButton", &UHorizonButton::execOnHoveredButton },
			{ "OnPressedButton", &UHorizonButton::execOnPressedButton },
			{ "OnReleasedButton", &UHorizonButton::execOnReleasedButton },
			{ "OnUnhoveredButton", &UHorizonButton::execOnUnhoveredButton },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHorizonButton_OnClickedButton_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHorizonButton_OnClickedButton_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widget/HorizonButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizonButton_OnClickedButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHorizonButton, "OnClickedButton", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHorizonButton_OnClickedButton_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UHorizonButton_OnClickedButton_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHorizonButton_OnClickedButton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHorizonButton_OnClickedButton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHorizonButton_OnHoveredButton_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHorizonButton_OnHoveredButton_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widget/HorizonButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizonButton_OnHoveredButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHorizonButton, "OnHoveredButton", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHorizonButton_OnHoveredButton_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UHorizonButton_OnHoveredButton_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHorizonButton_OnHoveredButton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHorizonButton_OnHoveredButton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHorizonButton_OnPressedButton_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHorizonButton_OnPressedButton_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widget/HorizonButton.h" },
		{ "ToolTip", "dynamic delegate" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizonButton_OnPressedButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHorizonButton, "OnPressedButton", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHorizonButton_OnPressedButton_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UHorizonButton_OnPressedButton_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHorizonButton_OnPressedButton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHorizonButton_OnPressedButton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHorizonButton_OnReleasedButton_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHorizonButton_OnReleasedButton_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widget/HorizonButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizonButton_OnReleasedButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHorizonButton, "OnReleasedButton", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHorizonButton_OnReleasedButton_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UHorizonButton_OnReleasedButton_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHorizonButton_OnReleasedButton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHorizonButton_OnReleasedButton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHorizonButton_OnUnhoveredButton_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHorizonButton_OnUnhoveredButton_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widget/HorizonButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizonButton_OnUnhoveredButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHorizonButton, "OnUnhoveredButton", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHorizonButton_OnUnhoveredButton_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UHorizonButton_OnUnhoveredButton_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHorizonButton_OnUnhoveredButton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHorizonButton_OnUnhoveredButton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UHorizonButton_NoRegister()
	{
		return UHorizonButton::StaticClass();
	}
	struct Z_Construct_UClass_UHorizonButton_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnUnhoveredDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnUnhoveredDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnHoveredDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHoveredDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnReleasedDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnReleasedDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPressedDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPressedDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnClickedDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnClickedDelegate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHorizonButton_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UButton,
		(UObject* (*)())Z_Construct_UPackage__Script_HorizonUI,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHorizonButton_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHorizonButton_OnClickedButton, "OnClickedButton" }, // 752988307
		{ &Z_Construct_UFunction_UHorizonButton_OnHoveredButton, "OnHoveredButton" }, // 2974602553
		{ &Z_Construct_UFunction_UHorizonButton_OnPressedButton, "OnPressedButton" }, // 2402018668
		{ &Z_Construct_UFunction_UHorizonButton_OnReleasedButton, "OnReleasedButton" }, // 1709470723
		{ &Z_Construct_UFunction_UHorizonButton_OnUnhoveredButton, "OnUnhoveredButton" }, // 3227256364
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHorizonButton_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Widget/HorizonButton.h" },
		{ "ModuleRelativePath", "Public/Widget/HorizonButton.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHorizonButton_Statics::NewProp_OnUnhoveredDelegate_MetaData[] = {
		{ "Category", "HorizonPlugin|Delegate" },
		{ "ModuleRelativePath", "Public/Widget/HorizonButton.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHorizonButton_Statics::NewProp_OnUnhoveredDelegate = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnUnhoveredDelegate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UHorizonButton, OnUnhoveredDelegate), Z_Construct_UDelegateFunction_HorizonUI_OnHorizonButtonEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UHorizonButton_Statics::NewProp_OnUnhoveredDelegate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHorizonButton_Statics::NewProp_OnUnhoveredDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHorizonButton_Statics::NewProp_OnHoveredDelegate_MetaData[] = {
		{ "Category", "HorizonPlugin|Delegate" },
		{ "ModuleRelativePath", "Public/Widget/HorizonButton.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHorizonButton_Statics::NewProp_OnHoveredDelegate = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnHoveredDelegate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UHorizonButton, OnHoveredDelegate), Z_Construct_UDelegateFunction_HorizonUI_OnHorizonButtonEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UHorizonButton_Statics::NewProp_OnHoveredDelegate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHorizonButton_Statics::NewProp_OnHoveredDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHorizonButton_Statics::NewProp_OnReleasedDelegate_MetaData[] = {
		{ "Category", "HorizonPlugin|Delegate" },
		{ "ModuleRelativePath", "Public/Widget/HorizonButton.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHorizonButton_Statics::NewProp_OnReleasedDelegate = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnReleasedDelegate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UHorizonButton, OnReleasedDelegate), Z_Construct_UDelegateFunction_HorizonUI_OnHorizonButtonEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UHorizonButton_Statics::NewProp_OnReleasedDelegate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHorizonButton_Statics::NewProp_OnReleasedDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHorizonButton_Statics::NewProp_OnPressedDelegate_MetaData[] = {
		{ "Category", "HorizonPlugin|Delegate" },
		{ "ModuleRelativePath", "Public/Widget/HorizonButton.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHorizonButton_Statics::NewProp_OnPressedDelegate = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnPressedDelegate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UHorizonButton, OnPressedDelegate), Z_Construct_UDelegateFunction_HorizonUI_OnHorizonButtonEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UHorizonButton_Statics::NewProp_OnPressedDelegate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHorizonButton_Statics::NewProp_OnPressedDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHorizonButton_Statics::NewProp_OnClickedDelegate_MetaData[] = {
		{ "Category", "HorizonPlugin|Delegate" },
		{ "ModuleRelativePath", "Public/Widget/HorizonButton.h" },
		{ "ToolTip", "for blueprint" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHorizonButton_Statics::NewProp_OnClickedDelegate = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnClickedDelegate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UHorizonButton, OnClickedDelegate), Z_Construct_UDelegateFunction_HorizonUI_OnHorizonButtonEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UHorizonButton_Statics::NewProp_OnClickedDelegate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHorizonButton_Statics::NewProp_OnClickedDelegate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHorizonButton_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorizonButton_Statics::NewProp_OnUnhoveredDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorizonButton_Statics::NewProp_OnHoveredDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorizonButton_Statics::NewProp_OnReleasedDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorizonButton_Statics::NewProp_OnPressedDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorizonButton_Statics::NewProp_OnClickedDelegate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHorizonButton_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHorizonButton>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHorizonButton_Statics::ClassParams = {
		&UHorizonButton::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UHorizonButton_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UHorizonButton_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UHorizonButton_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UHorizonButton_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHorizonButton()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHorizonButton_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHorizonButton, 1005456845);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHorizonButton(Z_Construct_UClass_UHorizonButton, &UHorizonButton::StaticClass, TEXT("/Script/HorizonUI"), TEXT("UHorizonButton"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHorizonButton);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
