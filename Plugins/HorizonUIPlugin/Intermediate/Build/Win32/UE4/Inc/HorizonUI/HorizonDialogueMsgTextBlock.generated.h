// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSlateFontInfo;
struct FVector2D;
struct FLinearColor;
struct FSlateColor;
#ifdef HORIZONUI_HorizonDialogueMsgTextBlock_generated_h
#error "HorizonDialogueMsgTextBlock.generated.h already included, missing '#pragma once' in HorizonDialogueMsgTextBlock.h"
#endif
#define HORIZONUI_HorizonDialogueMsgTextBlock_generated_h

#define HostProject_Plugins_HorizonUIPlugin_Source_Runtime_HorizonUI_Public_Horizon_Widget_HorizonDialogueMsgTextBlock_h_97_GENERATED_BODY \
	friend HORIZONUI_API class UScriptStruct* Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfoStyle(); \
	HORIZONUI_API static class UScriptStruct* StaticStruct();


#define HostProject_Plugins_HorizonUIPlugin_Source_Runtime_HorizonUI_Public_Horizon_Widget_HorizonDialogueMsgTextBlock_h_67_GENERATED_BODY \
	friend HORIZONUI_API class UScriptStruct* Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfo(); \
	HORIZONUI_API static class UScriptStruct* StaticStruct();


#define HostProject_Plugins_HorizonUIPlugin_Source_Runtime_HorizonUI_Public_Horizon_Widget_HorizonDialogueMsgTextBlock_h_36_GENERATED_BODY \
	friend HORIZONUI_API class UScriptStruct* Z_Construct_UScriptStruct_FHorizonDialogueLineInfo(); \
	HORIZONUI_API static class UScriptStruct* StaticStruct();


#define HostProject_Plugins_HorizonUIPlugin_Source_Runtime_HorizonUI_Public_Horizon_Widget_HorizonDialogueMsgTextBlock_h_20_GENERATED_BODY \
	friend HORIZONUI_API class UScriptStruct* Z_Construct_UScriptStruct_FHorizonDialogueBlockInfo(); \
	HORIZONUI_API static class UScriptStruct* StaticStruct();


#define HostProject_Plugins_HorizonUIPlugin_Source_Runtime_HorizonUI_Public_Horizon_Widget_HorizonDialogueMsgTextBlock_h_163_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execStartDialogue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->StartDialogue(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopDialogue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->StopDialogue(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetText) \
	{ \
		P_GET_PROPERTY(UTextProperty,Z_Param_InText); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetText(Z_Param_InText); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetText) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=this->GetText(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetJustification) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<ETextJustify::Type>*)Z_Param__Result=this->GetJustification(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetJustification) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_InJustification); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetJustification(ETextJustify::Type(Z_Param_InJustification)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFontSize) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_fontSize); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetFontSize(Z_Param_fontSize); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFont) \
	{ \
		P_GET_STRUCT(FSlateFontInfo,Z_Param_InFontInfo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetFont(Z_Param_InFontInfo); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetShadowOffset) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_InShadowOffset); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetShadowOffset(Z_Param_InShadowOffset); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetShadowColorAndOpacity) \
	{ \
		P_GET_STRUCT(FLinearColor,Z_Param_InShadowColorAndOpacity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetShadowColorAndOpacity(Z_Param_InShadowColorAndOpacity); \
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


#define HostProject_Plugins_HorizonUIPlugin_Source_Runtime_HorizonUI_Public_Horizon_Widget_HorizonDialogueMsgTextBlock_h_163_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execStartDialogue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->StartDialogue(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopDialogue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->StopDialogue(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetText) \
	{ \
		P_GET_PROPERTY(UTextProperty,Z_Param_InText); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetText(Z_Param_InText); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetText) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=this->GetText(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetJustification) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<ETextJustify::Type>*)Z_Param__Result=this->GetJustification(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetJustification) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_InJustification); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetJustification(ETextJustify::Type(Z_Param_InJustification)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFontSize) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_fontSize); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetFontSize(Z_Param_fontSize); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFont) \
	{ \
		P_GET_STRUCT(FSlateFontInfo,Z_Param_InFontInfo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetFont(Z_Param_InFontInfo); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetShadowOffset) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_InShadowOffset); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetShadowOffset(Z_Param_InShadowOffset); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetShadowColorAndOpacity) \
	{ \
		P_GET_STRUCT(FLinearColor,Z_Param_InShadowColorAndOpacity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetShadowColorAndOpacity(Z_Param_InShadowColorAndOpacity); \
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


#define HostProject_Plugins_HorizonUIPlugin_Source_Runtime_HorizonUI_Public_Horizon_Widget_HorizonDialogueMsgTextBlock_h_163_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHorizonDialogueMsgTextBlock(); \
	friend HORIZONUI_API class UClass* Z_Construct_UClass_UHorizonDialogueMsgTextBlock(); \
public: \
	DECLARE_CLASS(UHorizonDialogueMsgTextBlock, UCanvasPanel, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/HorizonUI"), NO_API) \
	DECLARE_SERIALIZER(UHorizonDialogueMsgTextBlock) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define HostProject_Plugins_HorizonUIPlugin_Source_Runtime_HorizonUI_Public_Horizon_Widget_HorizonDialogueMsgTextBlock_h_163_INCLASS \
private: \
	static void StaticRegisterNativesUHorizonDialogueMsgTextBlock(); \
	friend HORIZONUI_API class UClass* Z_Construct_UClass_UHorizonDialogueMsgTextBlock(); \
public: \
	DECLARE_CLASS(UHorizonDialogueMsgTextBlock, UCanvasPanel, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/HorizonUI"), NO_API) \
	DECLARE_SERIALIZER(UHorizonDialogueMsgTextBlock) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define HostProject_Plugins_HorizonUIPlugin_Source_Runtime_HorizonUI_Public_Horizon_Widget_HorizonDialogueMsgTextBlock_h_163_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHorizonDialogueMsgTextBlock(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHorizonDialogueMsgTextBlock) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHorizonDialogueMsgTextBlock); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHorizonDialogueMsgTextBlock); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHorizonDialogueMsgTextBlock(UHorizonDialogueMsgTextBlock&&); \
	NO_API UHorizonDialogueMsgTextBlock(const UHorizonDialogueMsgTextBlock&); \
public:


#define HostProject_Plugins_HorizonUIPlugin_Source_Runtime_HorizonUI_Public_Horizon_Widget_HorizonDialogueMsgTextBlock_h_163_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHorizonDialogueMsgTextBlock(UHorizonDialogueMsgTextBlock&&); \
	NO_API UHorizonDialogueMsgTextBlock(const UHorizonDialogueMsgTextBlock&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHorizonDialogueMsgTextBlock); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHorizonDialogueMsgTextBlock); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHorizonDialogueMsgTextBlock)


#define HostProject_Plugins_HorizonUIPlugin_Source_Runtime_HorizonUI_Public_Horizon_Widget_HorizonDialogueMsgTextBlock_h_163_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_HorizonUIPlugin_Source_Runtime_HorizonUI_Public_Horizon_Widget_HorizonDialogueMsgTextBlock_h_158_PROLOG
#define HostProject_Plugins_HorizonUIPlugin_Source_Runtime_HorizonUI_Public_Horizon_Widget_HorizonDialogueMsgTextBlock_h_163_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_HorizonUIPlugin_Source_Runtime_HorizonUI_Public_Horizon_Widget_HorizonDialogueMsgTextBlock_h_163_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_HorizonUIPlugin_Source_Runtime_HorizonUI_Public_Horizon_Widget_HorizonDialogueMsgTextBlock_h_163_RPC_WRAPPERS \
	HostProject_Plugins_HorizonUIPlugin_Source_Runtime_HorizonUI_Public_Horizon_Widget_HorizonDialogueMsgTextBlock_h_163_INCLASS \
	HostProject_Plugins_HorizonUIPlugin_Source_Runtime_HorizonUI_Public_Horizon_Widget_HorizonDialogueMsgTextBlock_h_163_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_HorizonUIPlugin_Source_Runtime_HorizonUI_Public_Horizon_Widget_HorizonDialogueMsgTextBlock_h_163_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_HorizonUIPlugin_Source_Runtime_HorizonUI_Public_Horizon_Widget_HorizonDialogueMsgTextBlock_h_163_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_HorizonUIPlugin_Source_Runtime_HorizonUI_Public_Horizon_Widget_HorizonDialogueMsgTextBlock_h_163_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_HorizonUIPlugin_Source_Runtime_HorizonUI_Public_Horizon_Widget_HorizonDialogueMsgTextBlock_h_163_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_HorizonUIPlugin_Source_Runtime_HorizonUI_Public_Horizon_Widget_HorizonDialogueMsgTextBlock_h_163_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_HorizonUIPlugin_Source_Runtime_HorizonUI_Public_Horizon_Widget_HorizonDialogueMsgTextBlock_h


#define FOREACH_ENUM_EHORIZONDIALOGUESEGMENTTYPE(op) \
	op(EHorizonDialogueSegmentType::Invalidated) \
	op(EHorizonDialogueSegmentType::Text) \
	op(EHorizonDialogueSegmentType::NewLine) \
	op(EHorizonDialogueSegmentType::Image) \
	op(EHorizonDialogueSegmentType::PaperFlipbook) \
	op(EHorizonDialogueSegmentType::Material) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
