// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Widget/HorizonButton.h"
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
	UFunction* Z_Construct_UDelegateFunction_HorizonUI_OnHorizonButtonEvent__DelegateSignature()
	{
		struct _Script_HorizonUI_eventOnHorizonButtonEvent_Parms
		{
			UHorizonButton* pButton;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pButton_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pButton = { UE4CodeGen_Private::EPropertyClass::Object, "pButton", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(_Script_HorizonUI_eventOnHorizonButtonEvent_Parms, pButton), Z_Construct_UClass_UHorizonButton_NoRegister, METADATA_PARAMS(NewProp_pButton_MetaData, ARRAY_COUNT(NewProp_pButton_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_pButton,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Widget/HorizonButton.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_HorizonUI, "OnHorizonButtonEvent__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_HorizonUI_eventOnHorizonButtonEvent_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
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
	UFunction* Z_Construct_UFunction_UHorizonButton_OnClickedButton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Widget/HorizonButton.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UHorizonButton, "OnClickedButton", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UHorizonButton_OnHoveredButton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Widget/HorizonButton.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UHorizonButton, "OnHoveredButton", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UHorizonButton_OnPressedButton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Widget/HorizonButton.h" },
				{ "ToolTip", "dynamic delegate" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UHorizonButton, "OnPressedButton", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UHorizonButton_OnReleasedButton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Widget/HorizonButton.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UHorizonButton, "OnReleasedButton", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UHorizonButton_OnUnhoveredButton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Widget/HorizonButton.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UHorizonButton, "OnUnhoveredButton", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UHorizonButton_NoRegister()
	{
		return UHorizonButton::StaticClass();
	}
	UClass* Z_Construct_UClass_UHorizonButton()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UButton,
				(UObject* (*)())Z_Construct_UPackage__Script_HorizonUI,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UHorizonButton_OnClickedButton, "OnClickedButton" }, // 1983136967
				{ &Z_Construct_UFunction_UHorizonButton_OnHoveredButton, "OnHoveredButton" }, // 3288614686
				{ &Z_Construct_UFunction_UHorizonButton_OnPressedButton, "OnPressedButton" }, // 3548880575
				{ &Z_Construct_UFunction_UHorizonButton_OnReleasedButton, "OnReleasedButton" }, // 1400404221
				{ &Z_Construct_UFunction_UHorizonButton_OnUnhoveredButton, "OnUnhoveredButton" }, // 4250978534
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Widget/HorizonButton.h" },
				{ "ModuleRelativePath", "Public/Widget/HorizonButton.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnUnhoveredDelegate_MetaData[] = {
				{ "Category", "HorizonPlugin|Delegate" },
				{ "ModuleRelativePath", "Public/Widget/HorizonButton.h" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnUnhoveredDelegate = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnUnhoveredDelegate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UHorizonButton, OnUnhoveredDelegate), Z_Construct_UDelegateFunction_HorizonUI_OnHorizonButtonEvent__DelegateSignature, METADATA_PARAMS(NewProp_OnUnhoveredDelegate_MetaData, ARRAY_COUNT(NewProp_OnUnhoveredDelegate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnHoveredDelegate_MetaData[] = {
				{ "Category", "HorizonPlugin|Delegate" },
				{ "ModuleRelativePath", "Public/Widget/HorizonButton.h" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHoveredDelegate = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnHoveredDelegate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UHorizonButton, OnHoveredDelegate), Z_Construct_UDelegateFunction_HorizonUI_OnHorizonButtonEvent__DelegateSignature, METADATA_PARAMS(NewProp_OnHoveredDelegate_MetaData, ARRAY_COUNT(NewProp_OnHoveredDelegate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnReleasedDelegate_MetaData[] = {
				{ "Category", "HorizonPlugin|Delegate" },
				{ "ModuleRelativePath", "Public/Widget/HorizonButton.h" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnReleasedDelegate = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnReleasedDelegate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UHorizonButton, OnReleasedDelegate), Z_Construct_UDelegateFunction_HorizonUI_OnHorizonButtonEvent__DelegateSignature, METADATA_PARAMS(NewProp_OnReleasedDelegate_MetaData, ARRAY_COUNT(NewProp_OnReleasedDelegate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPressedDelegate_MetaData[] = {
				{ "Category", "HorizonPlugin|Delegate" },
				{ "ModuleRelativePath", "Public/Widget/HorizonButton.h" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPressedDelegate = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnPressedDelegate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UHorizonButton, OnPressedDelegate), Z_Construct_UDelegateFunction_HorizonUI_OnHorizonButtonEvent__DelegateSignature, METADATA_PARAMS(NewProp_OnPressedDelegate_MetaData, ARRAY_COUNT(NewProp_OnPressedDelegate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnClickedDelegate_MetaData[] = {
				{ "Category", "HorizonPlugin|Delegate" },
				{ "ModuleRelativePath", "Public/Widget/HorizonButton.h" },
				{ "ToolTip", "for blueprint" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnClickedDelegate = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnClickedDelegate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UHorizonButton, OnClickedDelegate), Z_Construct_UDelegateFunction_HorizonUI_OnHorizonButtonEvent__DelegateSignature, METADATA_PARAMS(NewProp_OnClickedDelegate_MetaData, ARRAY_COUNT(NewProp_OnClickedDelegate_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnUnhoveredDelegate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnHoveredDelegate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnReleasedDelegate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnPressedDelegate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnClickedDelegate,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UHorizonButton>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UHorizonButton::StaticClass,
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
	IMPLEMENT_CLASS(UHorizonButton, 330436409);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHorizonButton(Z_Construct_UClass_UHorizonButton, &UHorizonButton::StaticClass, TEXT("/Script/HorizonUI"), TEXT("UHorizonButton"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHorizonButton);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
