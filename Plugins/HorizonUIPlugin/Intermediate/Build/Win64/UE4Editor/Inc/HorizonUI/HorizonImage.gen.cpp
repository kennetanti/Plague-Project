// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Widget/HorizonImage.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHorizonImage() {}
// Cross Module References
	HORIZONUI_API UClass* Z_Construct_UClass_UHorizonImage_NoRegister();
	HORIZONUI_API UClass* Z_Construct_UClass_UHorizonImage();
	UMG_API UClass* Z_Construct_UClass_UImage();
	UPackage* Z_Construct_UPackage__Script_HorizonUI();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox2D();
// End Cross Module References
	void UHorizonImage::StaticRegisterNativesUHorizonImage()
	{
	}
	UClass* Z_Construct_UClass_UHorizonImage_NoRegister()
	{
		return UHorizonImage::StaticClass();
	}
	UClass* Z_Construct_UClass_UHorizonImage()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UImage,
				(UObject* (*)())Z_Construct_UPackage__Script_HorizonUI,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "AutoExpandCategories", "HorizonPlugin|Appearance" },
				{ "IncludePath", "Widget/HorizonImage.h" },
				{ "ModuleRelativePath", "Public/Widget/HorizonImage.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UVRegion_MetaData[] = {
				{ "Category", "HorizonPlugin|Appearance" },
				{ "ModuleRelativePath", "Public/Widget/HorizonImage.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_UVRegion = { UE4CodeGen_Private::EPropertyClass::Struct, "UVRegion", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UHorizonImage, UVRegion), Z_Construct_UScriptStruct_FBox2D, METADATA_PARAMS(NewProp_UVRegion_MetaData, ARRAY_COUNT(NewProp_UVRegion_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UVRegion,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UHorizonImage>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UHorizonImage::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B00080u,
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
	IMPLEMENT_CLASS(UHorizonImage, 2459880670);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHorizonImage(Z_Construct_UClass_UHorizonImage, &UHorizonImage::StaticClass, TEXT("/Script/HorizonUI"), TEXT("UHorizonImage"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHorizonImage);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
