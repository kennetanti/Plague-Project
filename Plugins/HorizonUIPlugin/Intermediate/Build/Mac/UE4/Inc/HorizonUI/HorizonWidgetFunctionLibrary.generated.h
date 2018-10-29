// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UUserWidget;
enum class ESlateVisibility : uint8;
class UWidget;
class UWidgetAnimation;
class UCanvasPanelSlot;
#ifdef HORIZONUI_HorizonWidgetFunctionLibrary_generated_h
#error "HorizonWidgetFunctionLibrary.generated.h already included, missing '#pragma once' in HorizonWidgetFunctionLibrary.h"
#endif
#define HORIZONUI_HorizonWidgetFunctionLibrary_generated_h

#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_Widget_HorizonWidgetFunctionLibrary_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetWidgetVisibility) \
	{ \
		P_GET_OBJECT(UUserWidget,Z_Param_UserWidget); \
		P_GET_PROPERTY(UNameProperty,Z_Param_WidgetName); \
		P_GET_ENUM(ESlateVisibility,Z_Param_eVisiblity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UWidget**)Z_Param__Result=UHorizonWidgetFunctionLibrary::SetWidgetVisibility(Z_Param_UserWidget,Z_Param_WidgetName,ESlateVisibility(Z_Param_eVisiblity)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetWidgetFromNameRecursively) \
	{ \
		P_GET_OBJECT(UUserWidget,Z_Param_pUserWidget); \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_InWidgetName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UWidget**)Z_Param__Result=UHorizonWidgetFunctionLibrary::GetWidgetFromNameRecursively(Z_Param_pUserWidget,Z_Param_Out_InWidgetName); \
		P_NATIVE_END; \
	} \
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


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_Widget_HorizonWidgetFunctionLibrary_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetWidgetVisibility) \
	{ \
		P_GET_OBJECT(UUserWidget,Z_Param_UserWidget); \
		P_GET_PROPERTY(UNameProperty,Z_Param_WidgetName); \
		P_GET_ENUM(ESlateVisibility,Z_Param_eVisiblity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UWidget**)Z_Param__Result=UHorizonWidgetFunctionLibrary::SetWidgetVisibility(Z_Param_UserWidget,Z_Param_WidgetName,ESlateVisibility(Z_Param_eVisiblity)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetWidgetFromNameRecursively) \
	{ \
		P_GET_OBJECT(UUserWidget,Z_Param_pUserWidget); \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_InWidgetName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UWidget**)Z_Param__Result=UHorizonWidgetFunctionLibrary::GetWidgetFromNameRecursively(Z_Param_pUserWidget,Z_Param_Out_InWidgetName); \
		P_NATIVE_END; \
	} \
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


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_Widget_HorizonWidgetFunctionLibrary_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHorizonWidgetFunctionLibrary(); \
	friend struct Z_Construct_UClass_UHorizonWidgetFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UHorizonWidgetFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HorizonUI"), NO_API) \
	DECLARE_SERIALIZER(UHorizonWidgetFunctionLibrary)


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_Widget_HorizonWidgetFunctionLibrary_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUHorizonWidgetFunctionLibrary(); \
	friend struct Z_Construct_UClass_UHorizonWidgetFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UHorizonWidgetFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HorizonUI"), NO_API) \
	DECLARE_SERIALIZER(UHorizonWidgetFunctionLibrary)


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_Widget_HorizonWidgetFunctionLibrary_h_20_STANDARD_CONSTRUCTORS \
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


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_Widget_HorizonWidgetFunctionLibrary_h_20_ENHANCED_CONSTRUCTORS \
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


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_Widget_HorizonWidgetFunctionLibrary_h_20_PRIVATE_PROPERTY_OFFSET
#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_Widget_HorizonWidgetFunctionLibrary_h_17_PROLOG
#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_Widget_HorizonWidgetFunctionLibrary_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_Widget_HorizonWidgetFunctionLibrary_h_20_PRIVATE_PROPERTY_OFFSET \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_Widget_HorizonWidgetFunctionLibrary_h_20_RPC_WRAPPERS \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_Widget_HorizonWidgetFunctionLibrary_h_20_INCLASS \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_Widget_HorizonWidgetFunctionLibrary_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_Widget_HorizonWidgetFunctionLibrary_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_Widget_HorizonWidgetFunctionLibrary_h_20_PRIVATE_PROPERTY_OFFSET \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_Widget_HorizonWidgetFunctionLibrary_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_Widget_HorizonWidgetFunctionLibrary_h_20_INCLASS_NO_PURE_DECLS \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_Widget_HorizonWidgetFunctionLibrary_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_Widget_HorizonWidgetFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
