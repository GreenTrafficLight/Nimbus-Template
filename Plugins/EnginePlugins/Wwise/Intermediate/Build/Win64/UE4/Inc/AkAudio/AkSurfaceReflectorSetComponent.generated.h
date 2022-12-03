// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AKAUDIO_AkSurfaceReflectorSetComponent_generated_h
#error "AkSurfaceReflectorSetComponent.generated.h already included, missing '#pragma once' in AkSurfaceReflectorSetComponent.h"
#endif
#define AKAUDIO_AkSurfaceReflectorSetComponent_generated_h

#define Nimbus_Template_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkSurfaceReflectorSetComponent_h_9_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRemoveSurfaceReflectorSet) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->RemoveSurfaceReflectorSet(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendSurfaceReflectorSet) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SendSurfaceReflectorSet(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateSurfaceReflectorSet) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->UpdateSurfaceReflectorSet(); \
		P_NATIVE_END; \
	}


#define Nimbus_Template_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkSurfaceReflectorSetComponent_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRemoveSurfaceReflectorSet) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->RemoveSurfaceReflectorSet(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendSurfaceReflectorSet) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SendSurfaceReflectorSet(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateSurfaceReflectorSet) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->UpdateSurfaceReflectorSet(); \
		P_NATIVE_END; \
	}


#define Nimbus_Template_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkSurfaceReflectorSetComponent_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAkSurfaceReflectorSetComponent(); \
	friend AKAUDIO_API class UClass* Z_Construct_UClass_UAkSurfaceReflectorSetComponent(); \
public: \
	DECLARE_CLASS(UAkSurfaceReflectorSetComponent, USceneComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkSurfaceReflectorSetComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Nimbus_Template_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkSurfaceReflectorSetComponent_h_9_INCLASS \
private: \
	static void StaticRegisterNativesUAkSurfaceReflectorSetComponent(); \
	friend AKAUDIO_API class UClass* Z_Construct_UClass_UAkSurfaceReflectorSetComponent(); \
public: \
	DECLARE_CLASS(UAkSurfaceReflectorSetComponent, USceneComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkSurfaceReflectorSetComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Nimbus_Template_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkSurfaceReflectorSetComponent_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAkSurfaceReflectorSetComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkSurfaceReflectorSetComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkSurfaceReflectorSetComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkSurfaceReflectorSetComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkSurfaceReflectorSetComponent(UAkSurfaceReflectorSetComponent&&); \
	NO_API UAkSurfaceReflectorSetComponent(const UAkSurfaceReflectorSetComponent&); \
public:


#define Nimbus_Template_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkSurfaceReflectorSetComponent_h_9_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkSurfaceReflectorSetComponent(UAkSurfaceReflectorSetComponent&&); \
	NO_API UAkSurfaceReflectorSetComponent(const UAkSurfaceReflectorSetComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkSurfaceReflectorSetComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkSurfaceReflectorSetComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAkSurfaceReflectorSetComponent)


#define Nimbus_Template_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkSurfaceReflectorSetComponent_h_9_PRIVATE_PROPERTY_OFFSET
#define Nimbus_Template_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkSurfaceReflectorSetComponent_h_7_PROLOG
#define Nimbus_Template_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkSurfaceReflectorSetComponent_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Nimbus_Template_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkSurfaceReflectorSetComponent_h_9_PRIVATE_PROPERTY_OFFSET \
	Nimbus_Template_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkSurfaceReflectorSetComponent_h_9_RPC_WRAPPERS \
	Nimbus_Template_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkSurfaceReflectorSetComponent_h_9_INCLASS \
	Nimbus_Template_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkSurfaceReflectorSetComponent_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Nimbus_Template_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkSurfaceReflectorSetComponent_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Nimbus_Template_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkSurfaceReflectorSetComponent_h_9_PRIVATE_PROPERTY_OFFSET \
	Nimbus_Template_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkSurfaceReflectorSetComponent_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	Nimbus_Template_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkSurfaceReflectorSetComponent_h_9_INCLASS_NO_PURE_DECLS \
	Nimbus_Template_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkSurfaceReflectorSetComponent_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Nimbus_Template_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkSurfaceReflectorSetComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
