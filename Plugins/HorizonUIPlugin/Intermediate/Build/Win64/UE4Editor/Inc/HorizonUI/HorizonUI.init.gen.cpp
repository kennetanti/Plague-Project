// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHorizonUI_init() {}
	HORIZONUI_API UFunction* Z_Construct_UDelegateFunction_HorizonUI_OnHorizonButtonEvent__DelegateSignature();
	HORIZONUI_API UFunction* Z_Construct_UDelegateFunction_HorizonUI_OnHorizonHypertextEvent__DelegateSignature();
	HORIZONUI_API UFunction* Z_Construct_UDelegateFunction_HorizonUI_OnHorizonDialogueMsgEvent__DelegateSignature();
	HORIZONUI_API UFunction* Z_Construct_UDelegateFunction_HorizonUI_OnHorizonDialoguePageEvent__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_HorizonUI()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_HorizonUI_OnHorizonButtonEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_HorizonUI_OnHorizonHypertextEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_HorizonUI_OnHorizonDialogueMsgEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_HorizonUI_OnHorizonDialoguePageEvent__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/HorizonUI",
				PKG_CompiledIn | 0x00000000,
				0xD971BD50,
				0xA9F72F97,
				SingletonFuncArray, ARRAY_COUNT(SingletonFuncArray),
				METADATA_PARAMS(nullptr, 0)
			};
			UE4CodeGen_Private::ConstructUPackage(ReturnPackage, PackageParams);
		}
		return ReturnPackage;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
