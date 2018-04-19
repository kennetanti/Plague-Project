// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UFont;
class USoundBase;
class UWorld;
class UUserWidget;
class UMaterial;
class UPaperFlipbook;
class UTexture2D;
class UHorizonFileSystem;
#ifdef HORIZONUI_HorizonFileSystem_generated_h
#error "HorizonFileSystem.generated.h already included, missing '#pragma once' in HorizonFileSystem.h"
#endif
#define HORIZONUI_HorizonFileSystem_generated_h

#define PlagueProject_Plugins_HorizonUIPlugin_Source_Runtime_HorizonUI_Public_FileSystem_HorizonFileSystem_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLoadUAsset) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_packageFilePath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UObject**)Z_Param__Result=P_THIS->LoadUAsset(Z_Param_packageFilePath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadFont) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_packageFilePath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFont**)Z_Param__Result=P_THIS->LoadFont(Z_Param_packageFilePath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadSound) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_packageFilePath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USoundBase**)Z_Param__Result=P_THIS->LoadSound(Z_Param_packageFilePath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadUserWidget) \
	{ \
		P_GET_OBJECT(UWorld,Z_Param_pWorld); \
		P_GET_PROPERTY(UStrProperty,Z_Param_packageFilePath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UUserWidget**)Z_Param__Result=P_THIS->LoadUserWidget(Z_Param_pWorld,Z_Param_packageFilePath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadMaterial) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_packageFilePath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMaterial**)Z_Param__Result=P_THIS->LoadMaterial(Z_Param_packageFilePath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadPaperFlipbook) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_packageFilePath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UPaperFlipbook**)Z_Param__Result=P_THIS->LoadPaperFlipbook(Z_Param_packageFilePath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadTexture2D) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_packageFilePath); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_OutWidth); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_OutHeight); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTexture2D**)Z_Param__Result=P_THIS->LoadTexture2D(Z_Param_packageFilePath,Z_Param_Out_OutWidth,Z_Param_Out_OutHeight); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateDirectoryRecursively) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FolderToMake); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CreateDirectoryRecursively(Z_Param_FolderToMake); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFileSearchPathList) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=P_THIS->GetFileSearchPathList(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRegisterFileSearchPath) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InLongPackageName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RegisterFileSearchPath(Z_Param_InLongPackageName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearFileSearchPathList) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearFileSearchPathList(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInstance) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UHorizonFileSystem**)Z_Param__Result=UHorizonFileSystem::GetInstance(); \
		P_NATIVE_END; \
	}


#define PlagueProject_Plugins_HorizonUIPlugin_Source_Runtime_HorizonUI_Public_FileSystem_HorizonFileSystem_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLoadUAsset) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_packageFilePath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UObject**)Z_Param__Result=P_THIS->LoadUAsset(Z_Param_packageFilePath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadFont) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_packageFilePath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFont**)Z_Param__Result=P_THIS->LoadFont(Z_Param_packageFilePath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadSound) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_packageFilePath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USoundBase**)Z_Param__Result=P_THIS->LoadSound(Z_Param_packageFilePath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadUserWidget) \
	{ \
		P_GET_OBJECT(UWorld,Z_Param_pWorld); \
		P_GET_PROPERTY(UStrProperty,Z_Param_packageFilePath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UUserWidget**)Z_Param__Result=P_THIS->LoadUserWidget(Z_Param_pWorld,Z_Param_packageFilePath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadMaterial) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_packageFilePath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMaterial**)Z_Param__Result=P_THIS->LoadMaterial(Z_Param_packageFilePath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadPaperFlipbook) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_packageFilePath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UPaperFlipbook**)Z_Param__Result=P_THIS->LoadPaperFlipbook(Z_Param_packageFilePath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadTexture2D) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_packageFilePath); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_OutWidth); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_OutHeight); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTexture2D**)Z_Param__Result=P_THIS->LoadTexture2D(Z_Param_packageFilePath,Z_Param_Out_OutWidth,Z_Param_Out_OutHeight); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateDirectoryRecursively) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FolderToMake); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CreateDirectoryRecursively(Z_Param_FolderToMake); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFileSearchPathList) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=P_THIS->GetFileSearchPathList(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRegisterFileSearchPath) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_InLongPackageName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RegisterFileSearchPath(Z_Param_InLongPackageName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearFileSearchPathList) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearFileSearchPathList(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInstance) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UHorizonFileSystem**)Z_Param__Result=UHorizonFileSystem::GetInstance(); \
		P_NATIVE_END; \
	}


#define PlagueProject_Plugins_HorizonUIPlugin_Source_Runtime_HorizonUI_Public_FileSystem_HorizonFileSystem_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHorizonFileSystem(); \
	friend HORIZONUI_API class UClass* Z_Construct_UClass_UHorizonFileSystem(); \
public: \
	DECLARE_CLASS(UHorizonFileSystem, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/HorizonUI"), NO_API) \
	DECLARE_SERIALIZER(UHorizonFileSystem) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("HorizonPlugin");} \



#define PlagueProject_Plugins_HorizonUIPlugin_Source_Runtime_HorizonUI_Public_FileSystem_HorizonFileSystem_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUHorizonFileSystem(); \
	friend HORIZONUI_API class UClass* Z_Construct_UClass_UHorizonFileSystem(); \
public: \
	DECLARE_CLASS(UHorizonFileSystem, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/HorizonUI"), NO_API) \
	DECLARE_SERIALIZER(UHorizonFileSystem) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("HorizonPlugin");} \



#define PlagueProject_Plugins_HorizonUIPlugin_Source_Runtime_HorizonUI_Public_FileSystem_HorizonFileSystem_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHorizonFileSystem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHorizonFileSystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHorizonFileSystem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHorizonFileSystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHorizonFileSystem(UHorizonFileSystem&&); \
	NO_API UHorizonFileSystem(const UHorizonFileSystem&); \
public:


#define PlagueProject_Plugins_HorizonUIPlugin_Source_Runtime_HorizonUI_Public_FileSystem_HorizonFileSystem_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHorizonFileSystem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHorizonFileSystem(UHorizonFileSystem&&); \
	NO_API UHorizonFileSystem(const UHorizonFileSystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHorizonFileSystem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHorizonFileSystem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHorizonFileSystem)


#define PlagueProject_Plugins_HorizonUIPlugin_Source_Runtime_HorizonUI_Public_FileSystem_HorizonFileSystem_h_16_PRIVATE_PROPERTY_OFFSET
#define PlagueProject_Plugins_HorizonUIPlugin_Source_Runtime_HorizonUI_Public_FileSystem_HorizonFileSystem_h_13_PROLOG
#define PlagueProject_Plugins_HorizonUIPlugin_Source_Runtime_HorizonUI_Public_FileSystem_HorizonFileSystem_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PlagueProject_Plugins_HorizonUIPlugin_Source_Runtime_HorizonUI_Public_FileSystem_HorizonFileSystem_h_16_PRIVATE_PROPERTY_OFFSET \
	PlagueProject_Plugins_HorizonUIPlugin_Source_Runtime_HorizonUI_Public_FileSystem_HorizonFileSystem_h_16_RPC_WRAPPERS \
	PlagueProject_Plugins_HorizonUIPlugin_Source_Runtime_HorizonUI_Public_FileSystem_HorizonFileSystem_h_16_INCLASS \
	PlagueProject_Plugins_HorizonUIPlugin_Source_Runtime_HorizonUI_Public_FileSystem_HorizonFileSystem_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PlagueProject_Plugins_HorizonUIPlugin_Source_Runtime_HorizonUI_Public_FileSystem_HorizonFileSystem_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PlagueProject_Plugins_HorizonUIPlugin_Source_Runtime_HorizonUI_Public_FileSystem_HorizonFileSystem_h_16_PRIVATE_PROPERTY_OFFSET \
	PlagueProject_Plugins_HorizonUIPlugin_Source_Runtime_HorizonUI_Public_FileSystem_HorizonFileSystem_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	PlagueProject_Plugins_HorizonUIPlugin_Source_Runtime_HorizonUI_Public_FileSystem_HorizonFileSystem_h_16_INCLASS_NO_PURE_DECLS \
	PlagueProject_Plugins_HorizonUIPlugin_Source_Runtime_HorizonUI_Public_FileSystem_HorizonFileSystem_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PlagueProject_Plugins_HorizonUIPlugin_Source_Runtime_HorizonUI_Public_FileSystem_HorizonFileSystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
