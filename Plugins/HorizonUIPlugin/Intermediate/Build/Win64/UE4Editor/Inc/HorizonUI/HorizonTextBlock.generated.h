// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HORIZONUI_HorizonTextBlock_generated_h
#error "HorizonTextBlock.generated.h already included, missing '#pragma once' in HorizonTextBlock.h"
#endif
#define HORIZONUI_HorizonTextBlock_generated_h

#define Plague_Project_Plugins_HorizonUIPlugin_Source_Runtime_HorizonUI_Public_Widget_HorizonTextBlock_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetJustification) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<ETextJustify::Type>*)Z_Param__Result=P_THIS->GetJustification(); \
		P_NATIVE_END; \
	}


#define Plague_Project_Plugins_HorizonUIPlugin_Source_Runtime_HorizonUI_Public_Widget_HorizonTextBlock_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetJustification) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<ETextJustify::Type>*)Z_Param__Result=P_THIS->GetJustification(); \
		P_NATIVE_END; \
	}


#define Plague_Project_Plugins_HorizonUIPlugin_Source_Runtime_HorizonUI_Public_Widget_HorizonTextBlock_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHorizonTextBlock(); \
	friend HORIZONUI_API class UClass* Z_Construct_UClass_UHorizonTextBlock(); \
public: \
	DECLARE_CLASS(UHorizonTextBlock, UTextBlock, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/HorizonUI"), NO_API) \
	DECLARE_SERIALIZER(UHorizonTextBlock) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Plague_Project_Plugins_HorizonUIPlugin_Source_Runtime_HorizonUI_Public_Widget_HorizonTextBlock_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUHorizonTextBlock(); \
	friend HORIZONUI_API class UClass* Z_Construct_UClass_UHorizonTextBlock(); \
public: \
	DECLARE_CLASS(UHorizonTextBlock, UTextBlock, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/HorizonUI"), NO_API) \
	DECLARE_SERIALIZER(UHorizonTextBlock) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Plague_Project_Plugins_HorizonUIPlugin_Source_Runtime_HorizonUI_Public_Widget_HorizonTextBlock_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHorizonTextBlock(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHorizonTextBlock) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHorizonTextBlock); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHorizonTextBlock); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHorizonTextBlock(UHorizonTextBlock&&); \
	NO_API UHorizonTextBlock(const UHorizonTextBlock&); \
public:


#define Plague_Project_Plugins_HorizonUIPlugin_Source_Runtime_HorizonUI_Public_Widget_HorizonTextBlock_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHorizonTextBlock(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHorizonTextBlock(UHorizonTextBlock&&); \
	NO_API UHorizonTextBlock(const UHorizonTextBlock&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHorizonTextBlock); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHorizonTextBlock); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHorizonTextBlock)


#define Plague_Project_Plugins_HorizonUIPlugin_Source_Runtime_HorizonUI_Public_Widget_HorizonTextBlock_h_15_PRIVATE_PROPERTY_OFFSET
#define Plague_Project_Plugins_HorizonUIPlugin_Source_Runtime_HorizonUI_Public_Widget_HorizonTextBlock_h_12_PROLOG
#define Plague_Project_Plugins_HorizonUIPlugin_Source_Runtime_HorizonUI_Public_Widget_HorizonTextBlock_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Plague_Project_Plugins_HorizonUIPlugin_Source_Runtime_HorizonUI_Public_Widget_HorizonTextBlock_h_15_PRIVATE_PROPERTY_OFFSET \
	Plague_Project_Plugins_HorizonUIPlugin_Source_Runtime_HorizonUI_Public_Widget_HorizonTextBlock_h_15_RPC_WRAPPERS \
	Plague_Project_Plugins_HorizonUIPlugin_Source_Runtime_HorizonUI_Public_Widget_HorizonTextBlock_h_15_INCLASS \
	Plague_Project_Plugins_HorizonUIPlugin_Source_Runtime_HorizonUI_Public_Widget_HorizonTextBlock_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Plague_Project_Plugins_HorizonUIPlugin_Source_Runtime_HorizonUI_Public_Widget_HorizonTextBlock_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Plague_Project_Plugins_HorizonUIPlugin_Source_Runtime_HorizonUI_Public_Widget_HorizonTextBlock_h_15_PRIVATE_PROPERTY_OFFSET \
	Plague_Project_Plugins_HorizonUIPlugin_Source_Runtime_HorizonUI_Public_Widget_HorizonTextBlock_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Plague_Project_Plugins_HorizonUIPlugin_Source_Runtime_HorizonUI_Public_Widget_HorizonTextBlock_h_15_INCLASS_NO_PURE_DECLS \
	Plague_Project_Plugins_HorizonUIPlugin_Source_Runtime_HorizonUI_Public_Widget_HorizonTextBlock_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Plague_Project_Plugins_HorizonUIPlugin_Source_Runtime_HorizonUI_Public_Widget_HorizonTextBlock_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
