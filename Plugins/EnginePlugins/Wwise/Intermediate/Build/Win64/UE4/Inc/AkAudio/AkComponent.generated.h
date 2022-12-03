// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAkAudioEvent;
class UAkComponent;
class UAkAuxBus;
#ifdef AKAUDIO_AkComponent_generated_h
#error "AkComponent.generated.h already included, missing '#pragma once' in AkComponent.h"
#endif
#define AKAUDIO_AkComponent_generated_h

#define Nimbus_Template_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkComponent_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAttenuationRadius) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetAttenuationRadius(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPostAkEvent) \
	{ \
		P_GET_OBJECT(UAkAudioEvent,Z_Param_akevent); \
		P_GET_PROPERTY(UStrProperty,Z_Param_in_EventName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->PostAkEvent(Z_Param_akevent,Z_Param_in_EventName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPostAkEventByName) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_in_EventName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->PostAkEventByName(Z_Param_in_EventName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPostAssociatedAkEvent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->PostAssociatedAkEvent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPostTrigger) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Trigger); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->PostTrigger(Z_Param_Trigger); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAttenuationScalingFactor) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetAttenuationScalingFactor(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEarlyReflectionOrder) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewEarlyReflectionOrder); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetEarlyReflectionOrder(Z_Param_NewEarlyReflectionOrder); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetListeners) \
	{ \
		P_GET_TARRAY_REF(UAkComponent*,Z_Param_Out_Listeners); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetListeners(Z_Param_Out_Listeners); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetOutputBusVolume) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_BusVolume); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetOutputBusVolume(Z_Param_BusVolume); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetRTPCValue) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_RTPC); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_GET_PROPERTY(UIntProperty,Z_Param_InterpolationTimeMs); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetRTPCValue(Z_Param_RTPC,Z_Param_Value,Z_Param_InterpolationTimeMs); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetStopWhenOwnerDestroyed) \
	{ \
		P_GET_UBOOL(Z_Param_bStopWhenOwnerDestroyed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetStopWhenOwnerDestroyed(Z_Param_bStopWhenOwnerDestroyed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSwitch) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SwitchGroup); \
		P_GET_PROPERTY(UStrProperty,Z_Param_SwitchState); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetSwitch(Z_Param_SwitchGroup,Z_Param_SwitchState); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStop) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Stop(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUseEarlyReflections) \
	{ \
		P_GET_OBJECT(UAkAuxBus,Z_Param_AuxBus); \
		P_GET_UBOOL(Z_Param_Left); \
		P_GET_UBOOL(Z_Param_Right); \
		P_GET_UBOOL(Z_Param_Floor); \
		P_GET_UBOOL(Z_Param_Ceiling); \
		P_GET_UBOOL(Z_Param_Back); \
		P_GET_UBOOL(Z_Param_Front); \
		P_GET_UBOOL(Z_Param_SpotReflectors); \
		P_GET_PROPERTY(UStrProperty,Z_Param_AuxBusName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->UseEarlyReflections(Z_Param_AuxBus,Z_Param_Left,Z_Param_Right,Z_Param_Floor,Z_Param_Ceiling,Z_Param_Back,Z_Param_Front,Z_Param_SpotReflectors,Z_Param_AuxBusName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUseReverbVolumes) \
	{ \
		P_GET_UBOOL(Z_Param_inUseReverbVolumes); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->UseReverbVolumes(Z_Param_inUseReverbVolumes); \
		P_NATIVE_END; \
	}


#define Nimbus_Template_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAttenuationRadius) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetAttenuationRadius(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPostAkEvent) \
	{ \
		P_GET_OBJECT(UAkAudioEvent,Z_Param_akevent); \
		P_GET_PROPERTY(UStrProperty,Z_Param_in_EventName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->PostAkEvent(Z_Param_akevent,Z_Param_in_EventName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPostAkEventByName) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_in_EventName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->PostAkEventByName(Z_Param_in_EventName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPostAssociatedAkEvent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->PostAssociatedAkEvent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPostTrigger) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Trigger); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->PostTrigger(Z_Param_Trigger); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAttenuationScalingFactor) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetAttenuationScalingFactor(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEarlyReflectionOrder) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewEarlyReflectionOrder); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetEarlyReflectionOrder(Z_Param_NewEarlyReflectionOrder); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetListeners) \
	{ \
		P_GET_TARRAY_REF(UAkComponent*,Z_Param_Out_Listeners); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetListeners(Z_Param_Out_Listeners); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetOutputBusVolume) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_BusVolume); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetOutputBusVolume(Z_Param_BusVolume); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetRTPCValue) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_RTPC); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_GET_PROPERTY(UIntProperty,Z_Param_InterpolationTimeMs); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetRTPCValue(Z_Param_RTPC,Z_Param_Value,Z_Param_InterpolationTimeMs); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetStopWhenOwnerDestroyed) \
	{ \
		P_GET_UBOOL(Z_Param_bStopWhenOwnerDestroyed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetStopWhenOwnerDestroyed(Z_Param_bStopWhenOwnerDestroyed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSwitch) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SwitchGroup); \
		P_GET_PROPERTY(UStrProperty,Z_Param_SwitchState); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetSwitch(Z_Param_SwitchGroup,Z_Param_SwitchState); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStop) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Stop(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUseEarlyReflections) \
	{ \
		P_GET_OBJECT(UAkAuxBus,Z_Param_AuxBus); \
		P_GET_UBOOL(Z_Param_Left); \
		P_GET_UBOOL(Z_Param_Right); \
		P_GET_UBOOL(Z_Param_Floor); \
		P_GET_UBOOL(Z_Param_Ceiling); \
		P_GET_UBOOL(Z_Param_Back); \
		P_GET_UBOOL(Z_Param_Front); \
		P_GET_UBOOL(Z_Param_SpotReflectors); \
		P_GET_PROPERTY(UStrProperty,Z_Param_AuxBusName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->UseEarlyReflections(Z_Param_AuxBus,Z_Param_Left,Z_Param_Right,Z_Param_Floor,Z_Param_Ceiling,Z_Param_Back,Z_Param_Front,Z_Param_SpotReflectors,Z_Param_AuxBusName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUseReverbVolumes) \
	{ \
		P_GET_UBOOL(Z_Param_inUseReverbVolumes); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->UseReverbVolumes(Z_Param_inUseReverbVolumes); \
		P_NATIVE_END; \
	}


#define Nimbus_Template_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAkComponent(); \
	friend AKAUDIO_API class UClass* Z_Construct_UClass_UAkComponent(); \
public: \
	DECLARE_CLASS(UAkComponent, USceneComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Nimbus_Template_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkComponent_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUAkComponent(); \
	friend AKAUDIO_API class UClass* Z_Construct_UClass_UAkComponent(); \
public: \
	DECLARE_CLASS(UAkComponent, USceneComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Nimbus_Template_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkComponent_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAkComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkComponent(UAkComponent&&); \
	NO_API UAkComponent(const UAkComponent&); \
public:


#define Nimbus_Template_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkComponent(UAkComponent&&); \
	NO_API UAkComponent(const UAkComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAkComponent)


#define Nimbus_Template_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkComponent_h_13_PRIVATE_PROPERTY_OFFSET
#define Nimbus_Template_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkComponent_h_11_PROLOG
#define Nimbus_Template_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkComponent_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Nimbus_Template_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	Nimbus_Template_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkComponent_h_13_RPC_WRAPPERS \
	Nimbus_Template_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkComponent_h_13_INCLASS \
	Nimbus_Template_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkComponent_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Nimbus_Template_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Nimbus_Template_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	Nimbus_Template_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Nimbus_Template_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkComponent_h_13_INCLASS_NO_PURE_DECLS \
	Nimbus_Template_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Nimbus_Template_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
