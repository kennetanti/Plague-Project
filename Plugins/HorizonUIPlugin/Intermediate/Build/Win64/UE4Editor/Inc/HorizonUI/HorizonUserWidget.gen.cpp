// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Widget/HorizonUserWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHorizonUserWidget() {}
// Cross Module References
	HORIZONUI_API UClass* Z_Construct_UClass_UHorizonUserWidget_NoRegister();
	HORIZONUI_API UClass* Z_Construct_UClass_UHorizonUserWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_HorizonUI();
// End Cross Module References
	void UHorizonUserWidget::StaticRegisterNativesUHorizonUserWidget()
	{
	}
	UClass* Z_Construct_UClass_UHorizonUserWidget_NoRegister()
	{
		return UHorizonUserWidget::StaticClass();
	}
	UClass* Z_Construct_UClass_UHorizonUserWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UUserWidget,
				(UObject* (*)())Z_Construct_UPackage__Script_HorizonUI,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Widget/HorizonUserWidget.h" },
				{ "ModuleRelativePath", "Public/Widget/HorizonUserWidget.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UHorizonUserWidget>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UHorizonUserWidget::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B01080u,
				nullptr, 0,
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
	IMPLEMENT_CLASS(UHorizonUserWidget, 3503508503);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHorizonUserWidget(Z_Construct_UClass_UHorizonUserWidget, &UHorizonUserWidget::StaticClass, TEXT("/Script/HorizonUI"), TEXT("UHorizonUserWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHorizonUserWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
