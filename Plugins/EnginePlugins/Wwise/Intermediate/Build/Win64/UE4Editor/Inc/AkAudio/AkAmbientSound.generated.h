// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AKAUDIO_AkAmbientSound_generated_h
#error "AkAmbientSound.generated.h already included, missing '#pragma once' in AkAmbientSound.h"
#endif
#define AKAUDIO_AkAmbientSound_generated_h

#define Nimbus_Template_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkAmbientSound_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execStartAmbientSound) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->StartAmbientSound(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopAmbientSound) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->StopAmbientSound(); \
		P_NATIVE_END; \
	}


#define Nimbus_Template_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkAmbientSound_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execStartAmbientSound) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->StartAmbientSound(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopAmbientSound) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->StopAmbientSound(); \
		P_NATIVE_END; \
	}


#define Nimbus_Template_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkAmbientSound_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAkAmbientSound(); \
	friend AKAUDIO_API class UClass* Z_Construct_UClass_AAkAmbientSound(); \
public: \
	DECLARE_CLASS(AAkAmbientSound, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(AAkAmbientSound) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Nimbus_Template_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkAmbientSound_h_11_INCLASS \
private: \
	static void StaticRegisterNativesAAkAmbientSound(); \
	friend AKAUDIO_API class UClass* Z_Construct_UClass_AAkAmbientSound(); \
public: \
	DECLARE_CLASS(AAkAmbientSound, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(AAkAmbientSound) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Nimbus_Template_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkAmbientSound_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAkAmbientSound(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAkAmbientSound) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAkAmbientSound); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAkAmbientSound); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAkAmbientSound(AAkAmbientSound&&); \
	NO_API AAkAmbientSound(const AAkAmbientSound&); \
public:


#define Nimbus_Template_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkAmbientSound_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAkAmbientSound(AAkAmbientSound&&); \
	NO_API AAkAmbientSound(const AAkAmbientSound&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAkAmbientSound); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAkAmbientSound); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAkAmbientSound)


#define Nimbus_Template_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkAmbientSound_h_11_PRIVATE_PROPERTY_OFFSET
#define Nimbus_Template_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkAmbientSound_h_9_PROLOG
#define Nimbus_Template_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkAmbientSound_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Nimbus_Template_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkAmbientSound_h_11_PRIVATE_PROPERTY_OFFSET \
	Nimbus_Template_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkAmbientSound_h_11_RPC_WRAPPERS \
	Nimbus_Template_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkAmbientSound_h_11_INCLASS \
	Nimbus_Template_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkAmbientSound_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Nimbus_Template_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkAmbientSound_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Nimbus_Template_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkAmbientSound_h_11_PRIVATE_PROPERTY_OFFSET \
	Nimbus_Template_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkAmbientSound_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	Nimbus_Template_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkAmbientSound_h_11_INCLASS_NO_PURE_DECLS \
	Nimbus_Template_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkAmbientSound_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Nimbus_Template_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkAmbientSound_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
