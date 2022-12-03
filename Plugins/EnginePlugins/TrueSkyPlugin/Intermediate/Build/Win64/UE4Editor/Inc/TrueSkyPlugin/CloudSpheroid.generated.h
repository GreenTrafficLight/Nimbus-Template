// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef TRUESKYPLUGIN_CloudSpheroid_generated_h
#error "CloudSpheroid.generated.h already included, missing '#pragma once' in CloudSpheroid.h"
#endif
#define TRUESKYPLUGIN_CloudSpheroid_generated_h

#define Nimbus_Template_Plugins_EnginePlugins_TrueSkyPlugin_Source_TrueSkyPlugin_Public_CloudSpheroid_h_9_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetScaledSpheroidRadii) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->GetScaledSpheroidRadii(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetShapeScale) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->GetShapeScale(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUnscaledSpheroidRadii) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->GetUnscaledSpheroidRadii(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSpheroidRadii) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_InSpheroidRadii); \
		P_GET_UBOOL(Z_Param_bUpdateOverlaps); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetSpheroidRadii(Z_Param_InSpheroidRadii,Z_Param_bUpdateOverlaps); \
		P_NATIVE_END; \
	}


#define Nimbus_Template_Plugins_EnginePlugins_TrueSkyPlugin_Source_TrueSkyPlugin_Public_CloudSpheroid_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetScaledSpheroidRadii) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->GetScaledSpheroidRadii(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetShapeScale) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->GetShapeScale(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUnscaledSpheroidRadii) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->GetUnscaledSpheroidRadii(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSpheroidRadii) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_InSpheroidRadii); \
		P_GET_UBOOL(Z_Param_bUpdateOverlaps); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetSpheroidRadii(Z_Param_InSpheroidRadii,Z_Param_bUpdateOverlaps); \
		P_NATIVE_END; \
	}


#define Nimbus_Template_Plugins_EnginePlugins_TrueSkyPlugin_Source_TrueSkyPlugin_Public_CloudSpheroid_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCloudSpheroid(); \
	friend TRUESKYPLUGIN_API class UClass* Z_Construct_UClass_UCloudSpheroid(); \
public: \
	DECLARE_CLASS(UCloudSpheroid, UShapeComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/TrueSkyPlugin"), NO_API) \
	DECLARE_SERIALIZER(UCloudSpheroid) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Nimbus_Template_Plugins_EnginePlugins_TrueSkyPlugin_Source_TrueSkyPlugin_Public_CloudSpheroid_h_9_INCLASS \
private: \
	static void StaticRegisterNativesUCloudSpheroid(); \
	friend TRUESKYPLUGIN_API class UClass* Z_Construct_UClass_UCloudSpheroid(); \
public: \
	DECLARE_CLASS(UCloudSpheroid, UShapeComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/TrueSkyPlugin"), NO_API) \
	DECLARE_SERIALIZER(UCloudSpheroid) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Nimbus_Template_Plugins_EnginePlugins_TrueSkyPlugin_Source_TrueSkyPlugin_Public_CloudSpheroid_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCloudSpheroid(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCloudSpheroid) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCloudSpheroid); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCloudSpheroid); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCloudSpheroid(UCloudSpheroid&&); \
	NO_API UCloudSpheroid(const UCloudSpheroid&); \
public:


#define Nimbus_Template_Plugins_EnginePlugins_TrueSkyPlugin_Source_TrueSkyPlugin_Public_CloudSpheroid_h_9_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCloudSpheroid(UCloudSpheroid&&); \
	NO_API UCloudSpheroid(const UCloudSpheroid&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCloudSpheroid); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCloudSpheroid); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCloudSpheroid)


#define Nimbus_Template_Plugins_EnginePlugins_TrueSkyPlugin_Source_TrueSkyPlugin_Public_CloudSpheroid_h_9_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SpheroidRadii() { return STRUCT_OFFSET(UCloudSpheroid, SpheroidRadii); }


#define Nimbus_Template_Plugins_EnginePlugins_TrueSkyPlugin_Source_TrueSkyPlugin_Public_CloudSpheroid_h_7_PROLOG
#define Nimbus_Template_Plugins_EnginePlugins_TrueSkyPlugin_Source_TrueSkyPlugin_Public_CloudSpheroid_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Nimbus_Template_Plugins_EnginePlugins_TrueSkyPlugin_Source_TrueSkyPlugin_Public_CloudSpheroid_h_9_PRIVATE_PROPERTY_OFFSET \
	Nimbus_Template_Plugins_EnginePlugins_TrueSkyPlugin_Source_TrueSkyPlugin_Public_CloudSpheroid_h_9_RPC_WRAPPERS \
	Nimbus_Template_Plugins_EnginePlugins_TrueSkyPlugin_Source_TrueSkyPlugin_Public_CloudSpheroid_h_9_INCLASS \
	Nimbus_Template_Plugins_EnginePlugins_TrueSkyPlugin_Source_TrueSkyPlugin_Public_CloudSpheroid_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Nimbus_Template_Plugins_EnginePlugins_TrueSkyPlugin_Source_TrueSkyPlugin_Public_CloudSpheroid_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Nimbus_Template_Plugins_EnginePlugins_TrueSkyPlugin_Source_TrueSkyPlugin_Public_CloudSpheroid_h_9_PRIVATE_PROPERTY_OFFSET \
	Nimbus_Template_Plugins_EnginePlugins_TrueSkyPlugin_Source_TrueSkyPlugin_Public_CloudSpheroid_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	Nimbus_Template_Plugins_EnginePlugins_TrueSkyPlugin_Source_TrueSkyPlugin_Public_CloudSpheroid_h_9_INCLASS_NO_PURE_DECLS \
	Nimbus_Template_Plugins_EnginePlugins_TrueSkyPlugin_Source_TrueSkyPlugin_Public_CloudSpheroid_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Nimbus_Template_Plugins_EnginePlugins_TrueSkyPlugin_Source_TrueSkyPlugin_Public_CloudSpheroid_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
