// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UHorizonButton;
#ifdef HORIZONUI_HorizonButton_generated_h
#error "HorizonButton.generated.h already included, missing '#pragma once' in HorizonButton.h"
#endif
#define HORIZONUI_HorizonButton_generated_h

#define Plague_Project_Plugins_HorizonUIPlugin_Source_Runtime_HorizonUI_Public_Widget_HorizonButton_h_10_DELEGATE \
struct _Script_HorizonUI_eventOnHorizonButtonEvent_Parms \
{ \
	UHorizonButton* pButton; \
}; \
static inline void FOnHorizonButtonEvent_DelegateWrapper(const FMulticastScriptDelegate& OnHorizonButtonEvent, UHorizonButton* pButton) \
{ \
	_Script_HorizonUI_eventOnHorizonButtonEvent_Parms Parms; \
	Parms.pButton=pButton; \
	OnHorizonButtonEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Plague_Project_Plugins_HorizonUIPlugin_Source_Runtime_HorizonUI_Public_Widget_HorizonButton_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnUnhoveredButton) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnUnhoveredButton(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnHoveredButton) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHoveredButton(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnClickedButton) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnClickedButton(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnReleasedButton) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnReleasedButton(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnPressedButton) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnPressedButton(); \
		P_NATIVE_END; \
	}


#define Plague_Project_Plugins_HorizonUIPlugin_Source_Runtime_HorizonUI_Public_Widget_HorizonButton_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnUnhoveredButton) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnUnhoveredButton(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnHoveredButton) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHoveredButton(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnClickedButton) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnClickedButton(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnReleasedButton) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnReleasedButton(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnPressedButton) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnPressedButton(); \
		P_NATIVE_END; \
	}


#define Plague_Project_Plugins_HorizonUIPlugin_Source_Runtime_HorizonUI_Public_Widget_HorizonButton_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHorizonButton(); \
	friend HORIZONUI_API class UClass* Z_Construct_UClass_UHorizonButton(); \
public: \
	DECLARE_CLASS(UHorizonButton, UButton, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/HorizonUI"), NO_API) \
	DECLARE_SERIALIZER(UHorizonButton) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Plague_Project_Plugins_HorizonUIPlugin_Source_Runtime_HorizonUI_Public_Widget_HorizonButton_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUHorizonButton(); \
	friend HORIZONUI_API class UClass* Z_Construct_UClass_UHorizonButton(); \
public: \
	DECLARE_CLASS(UHorizonButton, UButton, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/HorizonUI"), NO_API) \
	DECLARE_SERIALIZER(UHorizonButton) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Plague_Project_Plugins_HorizonUIPlugin_Source_Runtime_HorizonUI_Public_Widget_HorizonButton_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHorizonButton(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHorizonButton) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHorizonButton); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHorizonButton); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHorizonButton(UHorizonButton&&); \
	NO_API UHorizonButton(const UHorizonButton&); \
public:


#define Plague_Project_Plugins_HorizonUIPlugin_Source_Runtime_HorizonUI_Public_Widget_HorizonButton_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHorizonButton(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHorizonButton(UHorizonButton&&); \
	NO_API UHorizonButton(const UHorizonButton&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHorizonButton); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHorizonButton); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHorizonButton)


#define Plague_Project_Plugins_HorizonUIPlugin_Source_Runtime_HorizonUI_Public_Widget_HorizonButton_h_18_PRIVATE_PROPERTY_OFFSET
#define Plague_Project_Plugins_HorizonUIPlugin_Source_Runtime_HorizonUI_Public_Widget_HorizonButton_h_15_PROLOG
#define Plague_Project_Plugins_HorizonUIPlugin_Source_Runtime_HorizonUI_Public_Widget_HorizonButton_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Plague_Project_Plugins_HorizonUIPlugin_Source_Runtime_HorizonUI_Public_Widget_HorizonButton_h_18_PRIVATE_PROPERTY_OFFSET \
	Plague_Project_Plugins_HorizonUIPlugin_Source_Runtime_HorizonUI_Public_Widget_HorizonButton_h_18_RPC_WRAPPERS \
	Plague_Project_Plugins_HorizonUIPlugin_Source_Runtime_HorizonUI_Public_Widget_HorizonButton_h_18_INCLASS \
	Plague_Project_Plugins_HorizonUIPlugin_Source_Runtime_HorizonUI_Public_Widget_HorizonButton_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Plague_Project_Plugins_HorizonUIPlugin_Source_Runtime_HorizonUI_Public_Widget_HorizonButton_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Plague_Project_Plugins_HorizonUIPlugin_Source_Runtime_HorizonUI_Public_Widget_HorizonButton_h_18_PRIVATE_PROPERTY_OFFSET \
	Plague_Project_Plugins_HorizonUIPlugin_Source_Runtime_HorizonUI_Public_Widget_HorizonButton_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	Plague_Project_Plugins_HorizonUIPlugin_Source_Runtime_HorizonUI_Public_Widget_HorizonButton_h_18_INCLASS_NO_PURE_DECLS \
	Plague_Project_Plugins_HorizonUIPlugin_Source_Runtime_HorizonUI_Public_Widget_HorizonButton_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Plague_Project_Plugins_HorizonUIPlugin_Source_Runtime_HorizonUI_Public_Widget_HorizonButton_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
