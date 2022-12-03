// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef TRUESKYPLUGIN_CloudPlacementTexture_generated_h
#error "CloudPlacementTexture.generated.h already included, missing '#pragma once' in CloudPlacementTexture.h"
#endif
#define TRUESKYPLUGIN_CloudPlacementTexture_generated_h

#define Nimbus_Template_Plugins_EnginePlugins_TrueSkyPlugin_Source_TrueSkyPlugin_Public_CloudPlacementTexture_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetScaledBoxExtent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->GetScaledBoxExtent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUnscaledBoxExtent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->GetUnscaledBoxExtent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBoxExtent) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_InBoxExtent); \
		P_GET_UBOOL(Z_Param_bUpdateOverlaps); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetBoxExtent(Z_Param_InBoxExtent,Z_Param_bUpdateOverlaps); \
		P_NATIVE_END; \
	}


#define Nimbus_Template_Plugins_EnginePlugins_TrueSkyPlugin_Source_TrueSkyPlugin_Public_CloudPlacementTexture_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetScaledBoxExtent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->GetScaledBoxExtent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUnscaledBoxExtent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->GetUnscaledBoxExtent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBoxExtent) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_InBoxExtent); \
		P_GET_UBOOL(Z_Param_bUpdateOverlaps); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetBoxExtent(Z_Param_InBoxExtent,Z_Param_bUpdateOverlaps); \
		P_NATIVE_END; \
	}


#define Nimbus_Template_Plugins_EnginePlugins_TrueSkyPlugin_Source_TrueSkyPlugin_Public_CloudPlacementTexture_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCloudPlacementTexture(); \
	friend TRUESKYPLUGIN_API class UClass* Z_Construct_UClass_UCloudPlacementTexture(); \
public: \
	DECLARE_CLASS(UCloudPlacementTexture, UShapeComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/TrueSkyPlugin"), NO_API) \
	DECLARE_SERIALIZER(UCloudPlacementTexture) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Nimbus_Template_Plugins_EnginePlugins_TrueSkyPlugin_Source_TrueSkyPlugin_Public_CloudPlacementTexture_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUCloudPlacementTexture(); \
	friend TRUESKYPLUGIN_API class UClass* Z_Construct_UClass_UCloudPlacementTexture(); \
public: \
	DECLARE_CLASS(UCloudPlacementTexture, UShapeComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/TrueSkyPlugin"), NO_API) \
	DECLARE_SERIALIZER(UCloudPlacementTexture) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Nimbus_Template_Plugins_EnginePlugins_TrueSkyPlugin_Source_TrueSkyPlugin_Public_CloudPlacementTexture_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCloudPlacementTexture(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCloudPlacementTexture) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCloudPlacementTexture); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCloudPlacementTexture); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCloudPlacementTexture(UCloudPlacementTexture&&); \
	NO_API UCloudPlacementTexture(const UCloudPlacementTexture&); \
public:


#define Nimbus_Template_Plugins_EnginePlugins_TrueSkyPlugin_Source_TrueSkyPlugin_Public_CloudPlacementTexture_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCloudPlacementTexture(UCloudPlacementTexture&&); \
	NO_API UCloudPlacementTexture(const UCloudPlacementTexture&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCloudPlacementTexture); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCloudPlacementTexture); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCloudPlacementTexture)


#define Nimbus_Template_Plugins_EnginePlugins_TrueSkyPlugin_Source_TrueSkyPlugin_Public_CloudPlacementTexture_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BoxExtent() { return STRUCT_OFFSET(UCloudPlacementTexture, BoxExtent); }


#define Nimbus_Template_Plugins_EnginePlugins_TrueSkyPlugin_Source_TrueSkyPlugin_Public_CloudPlacementTexture_h_9_PROLOG
#define Nimbus_Template_Plugins_EnginePlugins_TrueSkyPlugin_Source_TrueSkyPlugin_Public_CloudPlacementTexture_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Nimbus_Template_Plugins_EnginePlugins_TrueSkyPlugin_Source_TrueSkyPlugin_Public_CloudPlacementTexture_h_11_PRIVATE_PROPERTY_OFFSET \
	Nimbus_Template_Plugins_EnginePlugins_TrueSkyPlugin_Source_TrueSkyPlugin_Public_CloudPlacementTexture_h_11_RPC_WRAPPERS \
	Nimbus_Template_Plugins_EnginePlugins_TrueSkyPlugin_Source_TrueSkyPlugin_Public_CloudPlacementTexture_h_11_INCLASS \
	Nimbus_Template_Plugins_EnginePlugins_TrueSkyPlugin_Source_TrueSkyPlugin_Public_CloudPlacementTexture_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Nimbus_Template_Plugins_EnginePlugins_TrueSkyPlugin_Source_TrueSkyPlugin_Public_CloudPlacementTexture_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Nimbus_Template_Plugins_EnginePlugins_TrueSkyPlugin_Source_TrueSkyPlugin_Public_CloudPlacementTexture_h_11_PRIVATE_PROPERTY_OFFSET \
	Nimbus_Template_Plugins_EnginePlugins_TrueSkyPlugin_Source_TrueSkyPlugin_Public_CloudPlacementTexture_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	Nimbus_Template_Plugins_EnginePlugins_TrueSkyPlugin_Source_TrueSkyPlugin_Public_CloudPlacementTexture_h_11_INCLASS_NO_PURE_DECLS \
	Nimbus_Template_Plugins_EnginePlugins_TrueSkyPlugin_Source_TrueSkyPlugin_Public_CloudPlacementTexture_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Nimbus_Template_Plugins_EnginePlugins_TrueSkyPlugin_Source_TrueSkyPlugin_Public_CloudPlacementTexture_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
