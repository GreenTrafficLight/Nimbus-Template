// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UManaSource;
#ifdef CRIWARERUNTIME_ManaTexture_generated_h
#error "ManaTexture.generated.h already included, missing '#pragma once' in ManaTexture.h"
#endif
#define CRIWARERUNTIME_ManaTexture_generated_h

#define Nimbus_Template_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaTexture_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetMovieSource) \
	{ \
		P_GET_OBJECT(UManaSource,Z_Param_InSource); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetMovieSource(Z_Param_InSource); \
		P_NATIVE_END; \
	}


#define Nimbus_Template_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaTexture_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetMovieSource) \
	{ \
		P_GET_OBJECT(UManaSource,Z_Param_InSource); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetMovieSource(Z_Param_InSource); \
		P_NATIVE_END; \
	}


#define Nimbus_Template_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaTexture_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUManaTexture(); \
	friend CRIWARERUNTIME_API class UClass* Z_Construct_UClass_UManaTexture(); \
public: \
	DECLARE_CLASS(UManaTexture, UTexture, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/CriWareRuntime"), CRIWARERUNTIME_API) \
	DECLARE_SERIALIZER(UManaTexture) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Nimbus_Template_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaTexture_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUManaTexture(); \
	friend CRIWARERUNTIME_API class UClass* Z_Construct_UClass_UManaTexture(); \
public: \
	DECLARE_CLASS(UManaTexture, UTexture, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/CriWareRuntime"), CRIWARERUNTIME_API) \
	DECLARE_SERIALIZER(UManaTexture) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Nimbus_Template_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaTexture_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CRIWARERUNTIME_API UManaTexture(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UManaTexture) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CRIWARERUNTIME_API, UManaTexture); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UManaTexture); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	CRIWARERUNTIME_API UManaTexture(UManaTexture&&); \
	CRIWARERUNTIME_API UManaTexture(const UManaTexture&); \
public:


#define Nimbus_Template_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaTexture_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	CRIWARERUNTIME_API UManaTexture(UManaTexture&&); \
	CRIWARERUNTIME_API UManaTexture(const UManaTexture&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CRIWARERUNTIME_API, UManaTexture); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UManaTexture); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UManaTexture)


#define Nimbus_Template_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaTexture_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MovieSource() { return STRUCT_OFFSET(UManaTexture, MovieSource); } \
	FORCEINLINE static uint32 __PPO__ComponentTextures() { return STRUCT_OFFSET(UManaTexture, ComponentTextures); }


#define Nimbus_Template_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaTexture_h_14_PROLOG
#define Nimbus_Template_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaTexture_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Nimbus_Template_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaTexture_h_16_PRIVATE_PROPERTY_OFFSET \
	Nimbus_Template_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaTexture_h_16_RPC_WRAPPERS \
	Nimbus_Template_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaTexture_h_16_INCLASS \
	Nimbus_Template_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaTexture_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Nimbus_Template_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaTexture_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Nimbus_Template_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaTexture_h_16_PRIVATE_PROPERTY_OFFSET \
	Nimbus_Template_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaTexture_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Nimbus_Template_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaTexture_h_16_INCLASS_NO_PURE_DECLS \
	Nimbus_Template_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaTexture_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Nimbus_Template_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaTexture_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
