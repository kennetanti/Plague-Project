// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/FileSystem/HorizonFileSystem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHorizonFileSystem() {}
// Cross Module References
	HORIZONUI_API UClass* Z_Construct_UClass_UHorizonFileSystem_NoRegister();
	HORIZONUI_API UClass* Z_Construct_UClass_UHorizonFileSystem();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_HorizonUI();
	HORIZONUI_API UFunction* Z_Construct_UFunction_UHorizonFileSystem_ClearFileSearchPathList();
	HORIZONUI_API UFunction* Z_Construct_UFunction_UHorizonFileSystem_CreateDirectoryRecursively();
	HORIZONUI_API UFunction* Z_Construct_UFunction_UHorizonFileSystem_GetFileSearchPathList();
	HORIZONUI_API UFunction* Z_Construct_UFunction_UHorizonFileSystem_GetInstance();
	HORIZONUI_API UFunction* Z_Construct_UFunction_UHorizonFileSystem_LoadFont();
	ENGINE_API UClass* Z_Construct_UClass_UFont_NoRegister();
	HORIZONUI_API UFunction* Z_Construct_UFunction_UHorizonFileSystem_LoadMaterial();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	HORIZONUI_API UFunction* Z_Construct_UFunction_UHorizonFileSystem_LoadPaperFlipbook();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbook_NoRegister();
	HORIZONUI_API UFunction* Z_Construct_UFunction_UHorizonFileSystem_LoadSound();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	HORIZONUI_API UFunction* Z_Construct_UFunction_UHorizonFileSystem_LoadTexture2D();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	HORIZONUI_API UFunction* Z_Construct_UFunction_UHorizonFileSystem_LoadUAsset();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	HORIZONUI_API UFunction* Z_Construct_UFunction_UHorizonFileSystem_LoadUserWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	HORIZONUI_API UFunction* Z_Construct_UFunction_UHorizonFileSystem_RegisterFileSearchPath();
// End Cross Module References
	void UHorizonFileSystem::StaticRegisterNativesUHorizonFileSystem()
	{
		UClass* Class = UHorizonFileSystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearFileSearchPathList", &UHorizonFileSystem::execClearFileSearchPathList },
			{ "CreateDirectoryRecursively", &UHorizonFileSystem::execCreateDirectoryRecursively },
			{ "GetFileSearchPathList", &UHorizonFileSystem::execGetFileSearchPathList },
			{ "GetInstance", &UHorizonFileSystem::execGetInstance },
			{ "LoadFont", &UHorizonFileSystem::execLoadFont },
			{ "LoadMaterial", &UHorizonFileSystem::execLoadMaterial },
			{ "LoadPaperFlipbook", &UHorizonFileSystem::execLoadPaperFlipbook },
			{ "LoadSound", &UHorizonFileSystem::execLoadSound },
			{ "LoadTexture2D", &UHorizonFileSystem::execLoadTexture2D },
			{ "LoadUAsset", &UHorizonFileSystem::execLoadUAsset },
			{ "LoadUserWidget", &UHorizonFileSystem::execLoadUserWidget },
			{ "RegisterFileSearchPath", &UHorizonFileSystem::execRegisterFileSearchPath },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UHorizonFileSystem_ClearFileSearchPathList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "HorizonPlugin|FileSystem" },
				{ "Keywords", "Set File Search Path" },
				{ "ModuleRelativePath", "Public/FileSystem/HorizonFileSystem.h" },
				{ "ToolTip", "UFUNCTION(BlueprintCallable, Category = \"HorizonPlugin|FileSystem\", meta = (Keywords = \"DestroyInstance\"))\nstatic void DestroyInstance();" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UHorizonFileSystem, "ClearFileSearchPathList", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UHorizonFileSystem_CreateDirectoryRecursively()
	{
		struct HorizonFileSystem_eventCreateDirectoryRecursively_Parms
		{
			FString FolderToMake;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_FolderToMake = { UE4CodeGen_Private::EPropertyClass::Str, "FolderToMake", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HorizonFileSystem_eventCreateDirectoryRecursively_Parms, FolderToMake), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FolderToMake,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "HorizonPlugin|FileSystem" },
				{ "Keywords", "Create Folder recursively" },
				{ "ModuleRelativePath", "Public/FileSystem/HorizonFileSystem.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UHorizonFileSystem, "CreateDirectoryRecursively", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(HorizonFileSystem_eventCreateDirectoryRecursively_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UHorizonFileSystem_GetFileSearchPathList()
	{
		struct HorizonFileSystem_eventGetFileSearchPathList_Parms
		{
			TArray<FString> ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000582, 1, nullptr, STRUCT_OFFSET(HorizonFileSystem_eventGetFileSearchPathList_Parms, ReturnValue), METADATA_PARAMS(NewProp_ReturnValue_MetaData, ARRAY_COUNT(NewProp_ReturnValue_MetaData)) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue_Inner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "HorizonPlugin|FileSystem" },
				{ "Keywords", "Get File Search Path" },
				{ "ModuleRelativePath", "Public/FileSystem/HorizonFileSystem.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UHorizonFileSystem, "GetFileSearchPathList", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(HorizonFileSystem_eventGetFileSearchPathList_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UHorizonFileSystem_GetInstance()
	{
		struct HorizonFileSystem_eventGetInstance_Parms
		{
			UHorizonFileSystem* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(HorizonFileSystem_eventGetInstance_Parms, ReturnValue), Z_Construct_UClass_UHorizonFileSystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "HorizonPlugin|FileSystem" },
				{ "Keywords", "GetInstance" },
				{ "ModuleRelativePath", "Public/FileSystem/HorizonFileSystem.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UHorizonFileSystem, "GetInstance", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(HorizonFileSystem_eventGetInstance_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UHorizonFileSystem_LoadFont()
	{
		struct HorizonFileSystem_eventLoadFont_Parms
		{
			FString packageFilePath;
			UFont* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(HorizonFileSystem_eventLoadFont_Parms, ReturnValue), Z_Construct_UClass_UFont_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_packageFilePath_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_packageFilePath = { UE4CodeGen_Private::EPropertyClass::Str, "packageFilePath", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HorizonFileSystem_eventLoadFont_Parms, packageFilePath), METADATA_PARAMS(NewProp_packageFilePath_MetaData, ARRAY_COUNT(NewProp_packageFilePath_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_packageFilePath,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "HorizonPlugin|FileSystem" },
				{ "Keywords", "LoadSound" },
				{ "ModuleRelativePath", "Public/FileSystem/HorizonFileSystem.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UHorizonFileSystem, "LoadFont", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(HorizonFileSystem_eventLoadFont_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UHorizonFileSystem_LoadMaterial()
	{
		struct HorizonFileSystem_eventLoadMaterial_Parms
		{
			FString packageFilePath;
			UMaterial* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(HorizonFileSystem_eventLoadMaterial_Parms, ReturnValue), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_packageFilePath_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_packageFilePath = { UE4CodeGen_Private::EPropertyClass::Str, "packageFilePath", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HorizonFileSystem_eventLoadMaterial_Parms, packageFilePath), METADATA_PARAMS(NewProp_packageFilePath_MetaData, ARRAY_COUNT(NewProp_packageFilePath_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_packageFilePath,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "HorizonPlugin|FileSystem" },
				{ "Keywords", "LoadMaterial" },
				{ "ModuleRelativePath", "Public/FileSystem/HorizonFileSystem.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UHorizonFileSystem, "LoadMaterial", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(HorizonFileSystem_eventLoadMaterial_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UHorizonFileSystem_LoadPaperFlipbook()
	{
		struct HorizonFileSystem_eventLoadPaperFlipbook_Parms
		{
			FString packageFilePath;
			UPaperFlipbook* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(HorizonFileSystem_eventLoadPaperFlipbook_Parms, ReturnValue), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_packageFilePath_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_packageFilePath = { UE4CodeGen_Private::EPropertyClass::Str, "packageFilePath", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HorizonFileSystem_eventLoadPaperFlipbook_Parms, packageFilePath), METADATA_PARAMS(NewProp_packageFilePath_MetaData, ARRAY_COUNT(NewProp_packageFilePath_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_packageFilePath,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "HorizonPlugin|FileSystem" },
				{ "Keywords", "LoadFlipBook" },
				{ "ModuleRelativePath", "Public/FileSystem/HorizonFileSystem.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UHorizonFileSystem, "LoadPaperFlipbook", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(HorizonFileSystem_eventLoadPaperFlipbook_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UHorizonFileSystem_LoadSound()
	{
		struct HorizonFileSystem_eventLoadSound_Parms
		{
			FString packageFilePath;
			USoundBase* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(HorizonFileSystem_eventLoadSound_Parms, ReturnValue), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_packageFilePath_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_packageFilePath = { UE4CodeGen_Private::EPropertyClass::Str, "packageFilePath", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HorizonFileSystem_eventLoadSound_Parms, packageFilePath), METADATA_PARAMS(NewProp_packageFilePath_MetaData, ARRAY_COUNT(NewProp_packageFilePath_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_packageFilePath,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "HorizonPlugin|FileSystem" },
				{ "Keywords", "LoadFont" },
				{ "ModuleRelativePath", "Public/FileSystem/HorizonFileSystem.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UHorizonFileSystem, "LoadSound", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(HorizonFileSystem_eventLoadSound_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UHorizonFileSystem_LoadTexture2D()
	{
		struct HorizonFileSystem_eventLoadTexture2D_Parms
		{
			FString packageFilePath;
			int32 OutWidth;
			int32 OutHeight;
			UTexture2D* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(HorizonFileSystem_eventLoadTexture2D_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_OutHeight = { UE4CodeGen_Private::EPropertyClass::Int, "OutHeight", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(HorizonFileSystem_eventLoadTexture2D_Parms, OutHeight), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_OutWidth = { UE4CodeGen_Private::EPropertyClass::Int, "OutWidth", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(HorizonFileSystem_eventLoadTexture2D_Parms, OutWidth), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_packageFilePath_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_packageFilePath = { UE4CodeGen_Private::EPropertyClass::Str, "packageFilePath", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HorizonFileSystem_eventLoadTexture2D_Parms, packageFilePath), METADATA_PARAMS(NewProp_packageFilePath_MetaData, ARRAY_COUNT(NewProp_packageFilePath_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutHeight,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutWidth,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_packageFilePath,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "HorizonPlugin|FileSystem" },
				{ "Keywords", "LoadTexture2D" },
				{ "ModuleRelativePath", "Public/FileSystem/HorizonFileSystem.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UHorizonFileSystem, "LoadTexture2D", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(HorizonFileSystem_eventLoadTexture2D_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UHorizonFileSystem_LoadUAsset()
	{
		struct HorizonFileSystem_eventLoadUAsset_Parms
		{
			FString packageFilePath;
			UObject* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(HorizonFileSystem_eventLoadUAsset_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_packageFilePath_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_packageFilePath = { UE4CodeGen_Private::EPropertyClass::Str, "packageFilePath", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HorizonFileSystem_eventLoadUAsset_Parms, packageFilePath), METADATA_PARAMS(NewProp_packageFilePath_MetaData, ARRAY_COUNT(NewProp_packageFilePath_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_packageFilePath,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "HorizonPlugin|FileSystem" },
				{ "Keywords", "LoadUAsset" },
				{ "ModuleRelativePath", "Public/FileSystem/HorizonFileSystem.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UHorizonFileSystem, "LoadUAsset", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(HorizonFileSystem_eventLoadUAsset_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UHorizonFileSystem_LoadUserWidget()
	{
		struct HorizonFileSystem_eventLoadUserWidget_Parms
		{
			UWorld* pWorld;
			FString packageFilePath;
			UUserWidget* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080588, 1, nullptr, STRUCT_OFFSET(HorizonFileSystem_eventLoadUserWidget_Parms, ReturnValue), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(NewProp_ReturnValue_MetaData, ARRAY_COUNT(NewProp_ReturnValue_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_packageFilePath_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_packageFilePath = { UE4CodeGen_Private::EPropertyClass::Str, "packageFilePath", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HorizonFileSystem_eventLoadUserWidget_Parms, packageFilePath), METADATA_PARAMS(NewProp_packageFilePath_MetaData, ARRAY_COUNT(NewProp_packageFilePath_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pWorld = { UE4CodeGen_Private::EPropertyClass::Object, "pWorld", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HorizonFileSystem_eventLoadUserWidget_Parms, pWorld), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_packageFilePath,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_pWorld,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "HorizonPlugin|FileSystem" },
				{ "Keywords", "LoadUserWidget" },
				{ "ModuleRelativePath", "Public/FileSystem/HorizonFileSystem.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UHorizonFileSystem, "LoadUserWidget", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(HorizonFileSystem_eventLoadUserWidget_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UHorizonFileSystem_RegisterFileSearchPath()
	{
		struct HorizonFileSystem_eventRegisterFileSearchPath_Parms
		{
			FString InLongPackageName;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_InLongPackageName = { UE4CodeGen_Private::EPropertyClass::Str, "InLongPackageName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HorizonFileSystem_eventRegisterFileSearchPath_Parms, InLongPackageName), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InLongPackageName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "HorizonPlugin|FileSystem" },
				{ "Keywords", "Add File Search Path" },
				{ "ModuleRelativePath", "Public/FileSystem/HorizonFileSystem.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UHorizonFileSystem, "RegisterFileSearchPath", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(HorizonFileSystem_eventRegisterFileSearchPath_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UHorizonFileSystem_NoRegister()
	{
		return UHorizonFileSystem::StaticClass();
	}
	UClass* Z_Construct_UClass_UHorizonFileSystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_HorizonUI,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UHorizonFileSystem_ClearFileSearchPathList, "ClearFileSearchPathList" }, // 731206579
				{ &Z_Construct_UFunction_UHorizonFileSystem_CreateDirectoryRecursively, "CreateDirectoryRecursively" }, // 3042081964
				{ &Z_Construct_UFunction_UHorizonFileSystem_GetFileSearchPathList, "GetFileSearchPathList" }, // 2768420400
				{ &Z_Construct_UFunction_UHorizonFileSystem_GetInstance, "GetInstance" }, // 2612918789
				{ &Z_Construct_UFunction_UHorizonFileSystem_LoadFont, "LoadFont" }, // 2087696147
				{ &Z_Construct_UFunction_UHorizonFileSystem_LoadMaterial, "LoadMaterial" }, // 3003765290
				{ &Z_Construct_UFunction_UHorizonFileSystem_LoadPaperFlipbook, "LoadPaperFlipbook" }, // 4236463120
				{ &Z_Construct_UFunction_UHorizonFileSystem_LoadSound, "LoadSound" }, // 1228730527
				{ &Z_Construct_UFunction_UHorizonFileSystem_LoadTexture2D, "LoadTexture2D" }, // 4083004059
				{ &Z_Construct_UFunction_UHorizonFileSystem_LoadUAsset, "LoadUAsset" }, // 1969805013
				{ &Z_Construct_UFunction_UHorizonFileSystem_LoadUserWidget, "LoadUserWidget" }, // 4155131211
				{ &Z_Construct_UFunction_UHorizonFileSystem_RegisterFileSearchPath, "RegisterFileSearchPath" }, // 2453426505
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "FileSystem/HorizonFileSystem.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/FileSystem/HorizonFileSystem.h" },
				{ "ShortTooltip", "HorizonFileSystem" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UHorizonFileSystem>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UHorizonFileSystem::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				nullptr, 0,
				"HorizonPlugin",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHorizonFileSystem, 3067781421);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHorizonFileSystem(Z_Construct_UClass_UHorizonFileSystem, &UHorizonFileSystem::StaticClass, TEXT("/Script/HorizonUI"), TEXT("UHorizonFileSystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHorizonFileSystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
