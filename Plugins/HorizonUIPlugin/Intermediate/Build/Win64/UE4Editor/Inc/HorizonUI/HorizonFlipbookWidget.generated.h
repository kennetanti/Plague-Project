// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector2D;
struct FSlateColor;
#ifdef HORIZONUI_HorizonFlipbookWidget_generated_h
#error "HorizonFlipbookWidget.generated.h already included, missing '#pragma once' in HorizonFlipbookWidget.h"
#endif
#define HORIZONUI_HorizonFlipbookWidget_generated_h

#define CombatSystem_Plugins_HorizonUIPlugin_Source_Runtime_HorizonUI_Public_Horizon_Widget_HorizonFlipbookWidget_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCurrentAnimationDuration) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetCurrentAnimationDuration(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCurrentAnimationDuration) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_duration); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetCurrentAnimationDuration(Z_Param_duration); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResumeAnimation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ResumeAnimation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPauseAnimation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->PauseAnimation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopAnimation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->StopAnimation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayAnimation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->PlayAnimation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetAnimation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ResetAnimation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFlipbookSource) \
	{ \
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_sourceUV); \
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_sourceSize); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetFlipbookSource(Z_Param_Out_sourceUV,Z_Param_Out_sourceSize); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetOpacity) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InOpacity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetOpacity(Z_Param_InOpacity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetColorAndOpacity) \
	{ \
		P_GET_STRUCT(FSlateColor,Z_Param_InColorAndOpacity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetColorAndOpacity(Z_Param_InColorAndOpacity); \
		P_NATIVE_END; \
	}


#define CombatSystem_Plugins_HorizonUIPlugin_Source_Runtime_HorizonUI_Public_Horizon_Widget_HorizonFlipbookWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCurrentAnimationDuration) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetCurrentAnimationDuration(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCurrentAnimationDuration) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_duration); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetCurrentAnimationDuration(Z_Param_duration); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResumeAnimation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ResumeAnimation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPauseAnimation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->PauseAnimation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopAnimation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->StopAnimation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayAnimation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->PlayAnimation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetAnimation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ResetAnimation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFlipbookSource) \
	{ \
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_sourceUV); \
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_sourceSize); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetFlipbookSource(Z_Param_Out_sourceUV,Z_Param_Out_sourceSize); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetOpacity) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InOpacity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetOpacity(Z_Param_InOpacity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetColorAndOpacity) \
	{ \
		P_GET_STRUCT(FSlateColor,Z_Param_InColorAndOpacity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetColorAndOpacity(Z_Param_InColorAndOpacity); \
		P_NATIVE_END; \
	}


#define CombatSystem_Plugins_HorizonUIPlugin_Source_Runtime_HorizonUI_Public_Horizon_Widget_HorizonFlipbookWidget_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHorizonFlipbookWidget(); \
	friend HORIZONUI_API class UClass* Z_Construct_UClass_UHorizonFlipbookWidget(); \
public: \
	DECLARE_CLASS(UHorizonFlipbookWidget, UCanvasPanel, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/HorizonUI"), NO_API) \
	DECLARE_SERIALIZER(UHorizonFlipbookWidget) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define CombatSystem_Plugins_HorizonUIPlugin_Source_Runtime_HorizonUI_Public_Horizon_Widget_HorizonFlipbookWidget_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUHorizonFlipbookWidget(); \
	friend HORIZONUI_API class UClass* Z_Construct_UClass_UHorizonFlipbookWidget(); \
public: \
	DECLARE_CLASS(UHorizonFlipbookWidget, UCanvasPanel, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/HorizonUI"), NO_API) \
	DECLARE_SERIALIZER(UHorizonFlipbookWidget) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define CombatSystem_Plugins_HorizonUIPlugin_Source_Runtime_HorizonUI_Public_Horizon_Widget_HorizonFlipbookWidget_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHorizonFlipbookWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHorizonFlipbookWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHorizonFlipbookWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHorizonFlipbookWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHorizonFlipbookWidget(UHorizonFlipbookWidget&&); \
	NO_API UHorizonFlipbookWidget(const UHorizonFlipbookWidget&); \
public:


#define CombatSystem_Plugins_HorizonUIPlugin_Source_Runtime_HorizonUI_Public_Horizon_Widget_HorizonFlipbookWidget_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHorizonFlipbookWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHorizonFlipbookWidget(UHorizonFlipbookWidget&&); \
	NO_API UHorizonFlipbookWidget(const UHorizonFlipbookWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHorizonFlipbookWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHorizonFlipbookWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHorizonFlipbookWidget)


#define CombatSystem_Plugins_HorizonUIPlugin_Source_Runtime_HorizonUI_Public_Horizon_Widget_HorizonFlipbookWidget_h_15_PRIVATE_PROPERTY_OFFSET
#define CombatSystem_Plugins_HorizonUIPlugin_Source_Runtime_HorizonUI_Public_Horizon_Widget_HorizonFlipbookWidget_h_10_PROLOG
#define CombatSystem_Plugins_HorizonUIPlugin_Source_Runtime_HorizonUI_Public_Horizon_Widget_HorizonFlipbookWidget_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CombatSystem_Plugins_HorizonUIPlugin_Source_Runtime_HorizonUI_Public_Horizon_Widget_HorizonFlipbookWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	CombatSystem_Plugins_HorizonUIPlugin_Source_Runtime_HorizonUI_Public_Horizon_Widget_HorizonFlipbookWidget_h_15_RPC_WRAPPERS \
	CombatSystem_Plugins_HorizonUIPlugin_Source_Runtime_HorizonUI_Public_Horizon_Widget_HorizonFlipbookWidget_h_15_INCLASS \
	CombatSystem_Plugins_HorizonUIPlugin_Source_Runtime_HorizonUI_Public_Horizon_Widget_HorizonFlipbookWidget_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CombatSystem_Plugins_HorizonUIPlugin_Source_Runtime_HorizonUI_Public_Horizon_Widget_HorizonFlipbookWidget_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CombatSystem_Plugins_HorizonUIPlugin_Source_Runtime_HorizonUI_Public_Horizon_Widget_HorizonFlipbookWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	CombatSystem_Plugins_HorizonUIPlugin_Source_Runtime_HorizonUI_Public_Horizon_Widget_HorizonFlipbookWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	CombatSystem_Plugins_HorizonUIPlugin_Source_Runtime_HorizonUI_Public_Horizon_Widget_HorizonFlipbookWidget_h_15_INCLASS_NO_PURE_DECLS \
	CombatSystem_Plugins_HorizonUIPlugin_Source_Runtime_HorizonUI_Public_Horizon_Widget_HorizonFlipbookWidget_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CombatSystem_Plugins_HorizonUIPlugin_Source_Runtime_HorizonUI_Public_Horizon_Widget_HorizonFlipbookWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
