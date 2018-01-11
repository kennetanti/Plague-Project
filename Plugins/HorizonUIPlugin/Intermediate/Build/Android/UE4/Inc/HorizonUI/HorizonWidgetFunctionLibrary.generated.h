// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UUserWidget;
class UWidgetAnimation;
class UWidget;
class UCanvasPanelSlot;
#ifdef HORIZONUI_HorizonWidgetFunctionLibrary_generated_h
#error "HorizonWidgetFunctionLibrary.generated.h already included, missing '#pragma once' in HorizonWidgetFunctionLibrary.h"
#endif
#define HORIZONUI_HorizonWidgetFunctionLibrary_generated_h

#define HostProject_Plugins_HorizonUIPlugin_Source_Runtime_HorizonUI_Public_Horizon_Widget_HorizonWidgetFunctionLibrary_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetUserWidgetAnimation) \
	{ \
		P_GET_OBJECT(UUserWidget,Z_Param_pUserWidget); \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_animeName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UWidgetAnimation**)Z_Param__Result=UHorizonWidgetFunctionLibrary::GetUserWidgetAnimation(Z_Param_pUserWidget,Z_Param_Out_animeName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetParentCanvasPanelSlot) \
	{ \
		P_GET_OBJECT(UWidget,Z_Param_pWidget); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UCanvasPanelSlot**)Z_Param__Result=UHorizonWidgetFunctionLibrary::GetParentCanvasPanelSlot(Z_Param_pWidget); \
		P_NATIVE_END; \
	}


#define HostProject_Plugins_HorizonUIPlugin_Source_Runtime_HorizonUI_Public_Horizon_Widget_HorizonWidgetFunctionLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetUserWidgetAnimation) \
	{ \
		P_GET_OBJECT(UUserWidget,Z_Param_pUserWidget); \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_animeName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UWidgetAnimation**)Z_Param__Result=UHorizonWidgetFunctionLibrary::GetUserWidgetAnimation(Z_Param_pUserWidget,Z_Param_Out_animeName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetParentCanvasPanelSlot) \
	{ \
		P_GET_OBJECT(UWidget,Z_Param_pWidget); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UCanvasPanelSlot**)Z_Param__Result=UHorizonWidgetFunctionLibrary::GetParentCanvasPanelSlot(Z_Param_pWidget); \
		P_NATIVE_END; \
	}


#define HostProject_Plugins_HorizonUIPlugin_Source_Runtime_HorizonUI_Public_Horizon_Widget_HorizonWidgetFunctionLibrary_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHorizonWidgetFunctionLibrary(); \
	friend HORIZONUI_API class UClass* Z_Construct_UClass_UHorizonWidgetFunctionLibrary(); \
public: \
	DECLARE_CLASS(UHorizonWidgetFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/HorizonUI"), NO_API) \
	DECLARE_SERIALIZER(UHorizonWidgetFunctionLibrary) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define HostProject_Plugins_HorizonUIPlugin_Source_Runtime_HorizonUI_Public_Horizon_Widget_HorizonWidgetFunctionLibrary_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUHorizonWidgetFunctionLibrary(); \
	friend HORIZONUI_API class UClass* Z_Construct_UClass_UHorizonWidgetFunctionLibrary(); \
public: \
	DECLARE_CLASS(UHorizonWidgetFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/HorizonUI"), NO_API) \
	DECLARE_SERIALIZER(UHorizonWidgetFunctionLibrary) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define HostProject_Plugins_HorizonUIPlugin_Source_Runtime_HorizonUI_Public_Horizon_Widget_HorizonWidgetFunctionLibrary_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHorizonWidgetFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHorizonWidgetFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHorizonWidgetFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHorizonWidgetFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHorizonWidgetFunctionLibrary(UHorizonWidgetFunctionLibrary&&); \
	NO_API UHorizonWidgetFunctionLibrary(const UHorizonWidgetFunctionLibrary&); \
public:


#define HostProject_Plugins_HorizonUIPlugin_Source_Runtime_HorizonUI_Public_Horizon_Widget_HorizonWidgetFunctionLibrary_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHorizonWidgetFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHorizonWidgetFunctionLibrary(UHorizonWidgetFunctionLibrary&&); \
	NO_API UHorizonWidgetFunctionLibrary(const UHorizonWidgetFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHorizonWidgetFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHorizonWidgetFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHorizonWidgetFunctionLibrary)


#define HostProject_Plugins_HorizonUIPlugin_Source_Runtime_HorizonUI_Public_Horizon_Widget_HorizonWidgetFunctionLibrary_h_15_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_HorizonUIPlugin_Source_Runtime_HorizonUI_Public_Horizon_Widget_HorizonWidgetFunctionLibrary_h_12_PROLOG
#define HostProject_Plugins_HorizonUIPlugin_Source_Runtime_HorizonUI_Public_Horizon_Widget_HorizonWidgetFunctionLibrary_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_HorizonUIPlugin_Source_Runtime_HorizonUI_Public_Horizon_Widget_HorizonWidgetFunctionLibrary_h_15_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_HorizonUIPlugin_Source_Runtime_HorizonUI_Public_Horizon_Widget_HorizonWidgetFunctionLibrary_h_15_RPC_WRAPPERS \
	HostProject_Plugins_HorizonUIPlugin_Source_Runtime_HorizonUI_Public_Horizon_Widget_HorizonWidgetFunctionLibrary_h_15_INCLASS \
	HostProject_Plugins_HorizonUIPlugin_Source_Runtime_HorizonUI_Public_Horizon_Widget_HorizonWidgetFunctionLibrary_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_HorizonUIPlugin_Source_Runtime_HorizonUI_Public_Horizon_Widget_HorizonWidgetFunctionLibrary_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_HorizonUIPlugin_Source_Runtime_HorizonUI_Public_Horizon_Widget_HorizonWidgetFunctionLibrary_h_15_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_HorizonUIPlugin_Source_Runtime_HorizonUI_Public_Horizon_Widget_HorizonWidgetFunctionLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_HorizonUIPlugin_Source_Runtime_HorizonUI_Public_Horizon_Widget_HorizonWidgetFunctionLibrary_h_15_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_HorizonUIPlugin_Source_Runtime_HorizonUI_Public_Horizon_Widget_HorizonWidgetFunctionLibrary_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_HorizonUIPlugin_Source_Runtime_HorizonUI_Public_Horizon_Widget_HorizonWidgetFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
