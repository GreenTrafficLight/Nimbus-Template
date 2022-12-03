// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CRIWARERUNTIME_SoundAtomCue_generated_h
#error "SoundAtomCue.generated.h already included, missing '#pragma once' in SoundAtomCue.h"
#endif
#define CRIWARERUNTIME_SoundAtomCue_generated_h

#define Nimbus_Template_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_SoundAtomCue_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetLength) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->GetLength(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUserData) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=this->GetUserData(); \
		P_NATIVE_END; \
	}


#define Nimbus_Template_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_SoundAtomCue_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetLength) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->GetLength(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUserData) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=this->GetUserData(); \
		P_NATIVE_END; \
	}


#define Nimbus_Template_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_SoundAtomCue_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSoundAtomCue(); \
	friend CRIWARERUNTIME_API class UClass* Z_Construct_UClass_USoundAtomCue(); \
public: \
	DECLARE_CLASS(USoundAtomCue, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/CriWareRuntime"), NO_API) \
	DECLARE_SERIALIZER(USoundAtomCue) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Nimbus_Template_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_SoundAtomCue_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUSoundAtomCue(); \
	friend CRIWARERUNTIME_API class UClass* Z_Construct_UClass_USoundAtomCue(); \
public: \
	DECLARE_CLASS(USoundAtomCue, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/CriWareRuntime"), NO_API) \
	DECLARE_SERIALIZER(USoundAtomCue) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Nimbus_Template_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_SoundAtomCue_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USoundAtomCue(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundAtomCue) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USoundAtomCue); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundAtomCue); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USoundAtomCue(USoundAtomCue&&); \
	NO_API USoundAtomCue(const USoundAtomCue&); \
public:


#define Nimbus_Template_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_SoundAtomCue_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USoundAtomCue(USoundAtomCue&&); \
	NO_API USoundAtomCue(const USoundAtomCue&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USoundAtomCue); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundAtomCue); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USoundAtomCue)


#define Nimbus_Template_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_SoundAtomCue_h_10_PRIVATE_PROPERTY_OFFSET
#define Nimbus_Template_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_SoundAtomCue_h_8_PROLOG
#define Nimbus_Template_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_SoundAtomCue_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Nimbus_Template_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_SoundAtomCue_h_10_PRIVATE_PROPERTY_OFFSET \
	Nimbus_Template_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_SoundAtomCue_h_10_RPC_WRAPPERS \
	Nimbus_Template_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_SoundAtomCue_h_10_INCLASS \
	Nimbus_Template_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_SoundAtomCue_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Nimbus_Template_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_SoundAtomCue_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Nimbus_Template_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_SoundAtomCue_h_10_PRIVATE_PROPERTY_OFFSET \
	Nimbus_Template_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_SoundAtomCue_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	Nimbus_Template_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_SoundAtomCue_h_10_INCLASS_NO_PURE_DECLS \
	Nimbus_Template_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_SoundAtomCue_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Nimbus_Template_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_SoundAtomCue_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
