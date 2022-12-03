// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AKAUDIO_AkRoomComponent_generated_h
#error "AkRoomComponent.generated.h already included, missing '#pragma once' in AkRoomComponent.h"
#endif
#define AKAUDIO_AkRoomComponent_generated_h

#define Nimbus_Template_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkRoomComponent_h_8_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddSpatialAudioRoom) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->AddSpatialAudioRoom(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveSpatialAudioRoom) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->RemoveSpatialAudioRoom(); \
		P_NATIVE_END; \
	}


#define Nimbus_Template_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkRoomComponent_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddSpatialAudioRoom) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->AddSpatialAudioRoom(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveSpatialAudioRoom) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->RemoveSpatialAudioRoom(); \
		P_NATIVE_END; \
	}


#define Nimbus_Template_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkRoomComponent_h_8_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAkRoomComponent(); \
	friend AKAUDIO_API class UClass* Z_Construct_UClass_UAkRoomComponent(); \
public: \
	DECLARE_CLASS(UAkRoomComponent, USceneComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkRoomComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Nimbus_Template_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkRoomComponent_h_8_INCLASS \
private: \
	static void StaticRegisterNativesUAkRoomComponent(); \
	friend AKAUDIO_API class UClass* Z_Construct_UClass_UAkRoomComponent(); \
public: \
	DECLARE_CLASS(UAkRoomComponent, USceneComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkRoomComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Nimbus_Template_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkRoomComponent_h_8_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAkRoomComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkRoomComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkRoomComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkRoomComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkRoomComponent(UAkRoomComponent&&); \
	NO_API UAkRoomComponent(const UAkRoomComponent&); \
public:


#define Nimbus_Template_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkRoomComponent_h_8_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkRoomComponent(UAkRoomComponent&&); \
	NO_API UAkRoomComponent(const UAkRoomComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkRoomComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkRoomComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAkRoomComponent)


#define Nimbus_Template_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkRoomComponent_h_8_PRIVATE_PROPERTY_OFFSET
#define Nimbus_Template_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkRoomComponent_h_6_PROLOG
#define Nimbus_Template_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkRoomComponent_h_8_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Nimbus_Template_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkRoomComponent_h_8_PRIVATE_PROPERTY_OFFSET \
	Nimbus_Template_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkRoomComponent_h_8_RPC_WRAPPERS \
	Nimbus_Template_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkRoomComponent_h_8_INCLASS \
	Nimbus_Template_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkRoomComponent_h_8_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Nimbus_Template_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkRoomComponent_h_8_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Nimbus_Template_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkRoomComponent_h_8_PRIVATE_PROPERTY_OFFSET \
	Nimbus_Template_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkRoomComponent_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	Nimbus_Template_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkRoomComponent_h_8_INCLASS_NO_PURE_DECLS \
	Nimbus_Template_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkRoomComponent_h_8_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Nimbus_Template_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkRoomComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
