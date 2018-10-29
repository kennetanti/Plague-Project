// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FHorizonDialogueDialoguePageResult;
struct FHorizonDialogueHypertextResult;
struct FSlateFontInfo;
struct FVector2D;
struct FLinearColor;
struct FSlateColor;
#ifdef HORIZONUI_HorizonDialogueMsgTextBlock_generated_h
#error "HorizonDialogueMsgTextBlock.generated.h already included, missing '#pragma once' in HorizonDialogueMsgTextBlock.h"
#endif
#define HORIZONUI_HorizonDialogueMsgTextBlock_generated_h

#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_Widget_HorizonDialogueMsgTextBlock_h_163_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHorizonDialogueDialoguePageResult_Statics; \
	HORIZONUI_API static class UScriptStruct* StaticStruct();


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_Widget_HorizonDialogueMsgTextBlock_h_137_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHorizonDialogueHypertextResult_Statics; \
	HORIZONUI_API static class UScriptStruct* StaticStruct();


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_Widget_HorizonDialogueMsgTextBlock_h_121_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHorizonDialoguePageInfo_Statics; \
	HORIZONUI_API static class UScriptStruct* StaticStruct();


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_Widget_HorizonDialogueMsgTextBlock_h_83_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfo_Statics; \
	HORIZONUI_API static class UScriptStruct* StaticStruct();


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_Widget_HorizonDialogueMsgTextBlock_h_69_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHorizonDialogueLineInfo_Statics; \
	HORIZONUI_API static class UScriptStruct* StaticStruct();


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_Widget_HorizonDialogueMsgTextBlock_h_49_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHorizonDialogueBlockInfo_Statics; \
	HORIZONUI_API static class UScriptStruct* StaticStruct();


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_Widget_HorizonDialogueMsgTextBlock_h_179_DELEGATE \
struct _Script_HorizonUI_eventOnHorizonDialoguePageEvent_Parms \
{ \
	FHorizonDialogueDialoguePageResult InResult; \
}; \
static inline void FOnHorizonDialoguePageEvent_DelegateWrapper(const FMulticastScriptDelegate& OnHorizonDialoguePageEvent, FHorizonDialogueDialoguePageResult const& InResult) \
{ \
	_Script_HorizonUI_eventOnHorizonDialoguePageEvent_Parms Parms; \
	Parms.InResult=InResult; \
	OnHorizonDialoguePageEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_Widget_HorizonDialogueMsgTextBlock_h_175_DELEGATE \
static inline void FOnHorizonDialogueMsgEvent_DelegateWrapper(const FMulticastScriptDelegate& OnHorizonDialogueMsgEvent) \
{ \
	OnHorizonDialogueMsgEvent.ProcessMulticastDelegate<UObject>(NULL); \
}


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_Widget_HorizonDialogueMsgTextBlock_h_171_DELEGATE \
struct _Script_HorizonUI_eventOnHorizonHypertextEvent_Parms \
{ \
	FHorizonDialogueHypertextResult InResult; \
}; \
static inline void FOnHorizonHypertextEvent_DelegateWrapper(const FMulticastScriptDelegate& OnHorizonHypertextEvent, FHorizonDialogueHypertextResult const& InResult) \
{ \
	_Script_HorizonUI_eventOnHorizonHypertextEvent_Parms Parms; \
	Parms.InResult=InResult; \
	OnHorizonHypertextEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_Widget_HorizonDialogueMsgTextBlock_h_188_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsDialogueMsgCompleted) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsDialogueMsgCompleted(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsDialogueMsgPageEnd) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsDialogueMsgPageEnd(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSkipCurrentDialogueMsgPageTick) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SkipCurrentDialogueMsgPageTick(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPageTextByIndex) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_PageIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=P_THIS->GetPageTextByIndex(Z_Param_PageIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentPageTextLength) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetCurrentPageTextLength(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTextLength) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetTextLength(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAutoNextDialogueMsgPageIntervalRate) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InAutoNextDialogueMsgPageIntervalRate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAutoNextDialogueMsgPageIntervalRate(Z_Param_InAutoNextDialogueMsgPageIntervalRate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetIsAutoNextDialogueMsgPage) \
	{ \
		P_GET_UBOOL(Z_Param_b); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetIsAutoNextDialogueMsgPage(Z_Param_b); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDialogueMsgPage) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Page); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDialogueMsgPage(Z_Param_Page); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentPageIndex) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetCurrentPageIndex(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNextDialogueMsgPage) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->NextDialogueMsgPage(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartDialogue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartDialogue(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopDialogue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopDialogue(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetIsRepeatDialogueMsg) \
	{ \
		P_GET_UBOOL(Z_Param_b); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetIsRepeatDialogueMsg(Z_Param_b); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetIsStartTickDialogueMsg) \
	{ \
		P_GET_UBOOL(Z_Param_b); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetIsStartTickDialogueMsg(Z_Param_b); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetIsDialogueMsgText) \
	{ \
		P_GET_UBOOL(Z_Param_b); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetIsDialogueMsgText(Z_Param_b); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTextAndRebuildDialogue) \
	{ \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_InText); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTextAndRebuildDialogue(Z_Param_Out_InText); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetText) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=P_THIS->GetText(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetJustification) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<ETextJustify::Type>*)Z_Param__Result=P_THIS->GetJustification(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetJustification) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_InJustification); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetJustification(ETextJustify::Type(Z_Param_InJustification)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFontSize) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_fontSize); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetFontSize(Z_Param_fontSize); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFont) \
	{ \
		P_GET_STRUCT(FSlateFontInfo,Z_Param_InFontInfo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetFont(Z_Param_InFontInfo); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetShadowOffset) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_InShadowOffset); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetShadowOffset(Z_Param_InShadowOffset); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetShadowColorAndOpacity) \
	{ \
		P_GET_STRUCT(FLinearColor,Z_Param_InShadowColorAndOpacity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetShadowColorAndOpacity(Z_Param_InShadowColorAndOpacity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetOpacity) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InOpacity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetOpacity(Z_Param_InOpacity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetColorAndOpacity) \
	{ \
		P_GET_STRUCT(FSlateColor,Z_Param_InColorAndOpacity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetColorAndOpacity(Z_Param_InColorAndOpacity); \
		P_NATIVE_END; \
	}


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_Widget_HorizonDialogueMsgTextBlock_h_188_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsDialogueMsgCompleted) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsDialogueMsgCompleted(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsDialogueMsgPageEnd) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsDialogueMsgPageEnd(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSkipCurrentDialogueMsgPageTick) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SkipCurrentDialogueMsgPageTick(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPageTextByIndex) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_PageIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=P_THIS->GetPageTextByIndex(Z_Param_PageIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentPageTextLength) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetCurrentPageTextLength(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTextLength) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetTextLength(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAutoNextDialogueMsgPageIntervalRate) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InAutoNextDialogueMsgPageIntervalRate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAutoNextDialogueMsgPageIntervalRate(Z_Param_InAutoNextDialogueMsgPageIntervalRate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetIsAutoNextDialogueMsgPage) \
	{ \
		P_GET_UBOOL(Z_Param_b); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetIsAutoNextDialogueMsgPage(Z_Param_b); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDialogueMsgPage) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Page); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDialogueMsgPage(Z_Param_Page); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentPageIndex) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetCurrentPageIndex(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNextDialogueMsgPage) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->NextDialogueMsgPage(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartDialogue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartDialogue(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopDialogue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopDialogue(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetIsRepeatDialogueMsg) \
	{ \
		P_GET_UBOOL(Z_Param_b); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetIsRepeatDialogueMsg(Z_Param_b); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetIsStartTickDialogueMsg) \
	{ \
		P_GET_UBOOL(Z_Param_b); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetIsStartTickDialogueMsg(Z_Param_b); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetIsDialogueMsgText) \
	{ \
		P_GET_UBOOL(Z_Param_b); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetIsDialogueMsgText(Z_Param_b); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTextAndRebuildDialogue) \
	{ \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_InText); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTextAndRebuildDialogue(Z_Param_Out_InText); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetText) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=P_THIS->GetText(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetJustification) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<ETextJustify::Type>*)Z_Param__Result=P_THIS->GetJustification(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetJustification) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_InJustification); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetJustification(ETextJustify::Type(Z_Param_InJustification)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFontSize) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_fontSize); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetFontSize(Z_Param_fontSize); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFont) \
	{ \
		P_GET_STRUCT(FSlateFontInfo,Z_Param_InFontInfo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetFont(Z_Param_InFontInfo); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetShadowOffset) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_InShadowOffset); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetShadowOffset(Z_Param_InShadowOffset); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetShadowColorAndOpacity) \
	{ \
		P_GET_STRUCT(FLinearColor,Z_Param_InShadowColorAndOpacity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetShadowColorAndOpacity(Z_Param_InShadowColorAndOpacity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetOpacity) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InOpacity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetOpacity(Z_Param_InOpacity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetColorAndOpacity) \
	{ \
		P_GET_STRUCT(FSlateColor,Z_Param_InColorAndOpacity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetColorAndOpacity(Z_Param_InColorAndOpacity); \
		P_NATIVE_END; \
	}


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_Widget_HorizonDialogueMsgTextBlock_h_188_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHorizonDialogueMsgTextBlock(); \
	friend struct Z_Construct_UClass_UHorizonDialogueMsgTextBlock_Statics; \
public: \
	DECLARE_CLASS(UHorizonDialogueMsgTextBlock, UCanvasPanel, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HorizonUI"), NO_API) \
	DECLARE_SERIALIZER(UHorizonDialogueMsgTextBlock)


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_Widget_HorizonDialogueMsgTextBlock_h_188_INCLASS \
private: \
	static void StaticRegisterNativesUHorizonDialogueMsgTextBlock(); \
	friend struct Z_Construct_UClass_UHorizonDialogueMsgTextBlock_Statics; \
public: \
	DECLARE_CLASS(UHorizonDialogueMsgTextBlock, UCanvasPanel, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HorizonUI"), NO_API) \
	DECLARE_SERIALIZER(UHorizonDialogueMsgTextBlock)


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_Widget_HorizonDialogueMsgTextBlock_h_188_STANDARD_CONSTRUCTORS \
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


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_Widget_HorizonDialogueMsgTextBlock_h_188_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHorizonDialogueMsgTextBlock(UHorizonDialogueMsgTextBlock&&); \
	NO_API UHorizonDialogueMsgTextBlock(const UHorizonDialogueMsgTextBlock&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHorizonDialogueMsgTextBlock); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHorizonDialogueMsgTextBlock); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHorizonDialogueMsgTextBlock)


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_Widget_HorizonDialogueMsgTextBlock_h_188_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__StyleInfoList() { return STRUCT_OFFSET(UHorizonDialogueMsgTextBlock, StyleInfoList); }


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_Widget_HorizonDialogueMsgTextBlock_h_183_PROLOG
#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_Widget_HorizonDialogueMsgTextBlock_h_188_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_Widget_HorizonDialogueMsgTextBlock_h_188_PRIVATE_PROPERTY_OFFSET \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_Widget_HorizonDialogueMsgTextBlock_h_188_RPC_WRAPPERS \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_Widget_HorizonDialogueMsgTextBlock_h_188_INCLASS \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_Widget_HorizonDialogueMsgTextBlock_h_188_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_Widget_HorizonDialogueMsgTextBlock_h_188_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_Widget_HorizonDialogueMsgTextBlock_h_188_PRIVATE_PROPERTY_OFFSET \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_Widget_HorizonDialogueMsgTextBlock_h_188_RPC_WRAPPERS_NO_PURE_DECLS \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_Widget_HorizonDialogueMsgTextBlock_h_188_INCLASS_NO_PURE_DECLS \
	Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_Widget_HorizonDialogueMsgTextBlock_h_188_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Build___Portal_Dev_Marketplace_Full_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_Widget_HorizonDialogueMsgTextBlock_h


#define FOREACH_ENUM_EHORIZONDIALOGUETEXTOVERFLOWWARPMETHOD(op) \
	op(EHorizonDialogueTextOverflowWarpMethod::Normal) \
	op(EHorizonDialogueTextOverflowWarpMethod::BreakAll) 
#define FOREACH_ENUM_EHORIZONDIALOGUESEGMENTTYPE(op) \
	op(EHorizonDialogueSegmentType::Invalidated) \
	op(EHorizonDialogueSegmentType::Text) \
	op(EHorizonDialogueSegmentType::NewLine) \
	op(EHorizonDialogueSegmentType::Image) \
	op(EHorizonDialogueSegmentType::PaperFlipbook) \
	op(EHorizonDialogueSegmentType::Material) \
	op(EHorizonDialogueSegmentType::HyperText) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
