// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ECriFsLoaderStatus : uint8;
#ifdef CRIWARERUNTIME_CriFsLoaderComponent_generated_h
#error "CriFsLoaderComponent.generated.h already included, missing '#pragma once' in CriFsLoaderComponent.h"
#endif
#define CRIWARERUNTIME_CriFsLoaderComponent_generated_h

#define Nimbus_Template_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriFsLoaderComponent_h_12_DELEGATE \
static inline void FOnLoadCompleted_DelegateWrapper(const FScriptDelegate& OnLoadCompleted) \
{ \
	OnLoadCompleted.ProcessDelegate<UObject>(NULL); \
}


#define Nimbus_Template_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriFsLoaderComponent_h_11_DELEGATE \
static inline void FOnLoadError_DelegateWrapper(const FScriptDelegate& OnLoadError) \
{ \
	OnLoadError.ProcessDelegate<UObject>(NULL); \
}


#define Nimbus_Template_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriFsLoaderComponent_h_9_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetDataArray) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<uint8>*)Z_Param__Result=this->GetDataArray(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStatus) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ECriFsLoaderStatus*)Z_Param__Result=this->GetStatus(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoad) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Load(); \
		P_NATIVE_END; \
	}


#define Nimbus_Template_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriFsLoaderComponent_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetDataArray) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<uint8>*)Z_Param__Result=this->GetDataArray(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStatus) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ECriFsLoaderStatus*)Z_Param__Result=this->GetStatus(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoad) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Load(); \
		P_NATIVE_END; \
	}


#define Nimbus_Template_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriFsLoaderComponent_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCriFsLoaderComponent(); \
	friend CRIWARERUNTIME_API class UClass* Z_Construct_UClass_UCriFsLoaderComponent(); \
public: \
	DECLARE_CLASS(UCriFsLoaderComponent, USceneComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/CriWareRuntime"), NO_API) \
	DECLARE_SERIALIZER(UCriFsLoaderComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Nimbus_Template_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriFsLoaderComponent_h_9_INCLASS \
private: \
	static void StaticRegisterNativesUCriFsLoaderComponent(); \
	friend CRIWARERUNTIME_API class UClass* Z_Construct_UClass_UCriFsLoaderComponent(); \
public: \
	DECLARE_CLASS(UCriFsLoaderComponent, USceneComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/CriWareRuntime"), NO_API) \
	DECLARE_SERIALIZER(UCriFsLoaderComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Nimbus_Template_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriFsLoaderComponent_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCriFsLoaderComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCriFsLoaderComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCriFsLoaderComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCriFsLoaderComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCriFsLoaderComponent(UCriFsLoaderComponent&&); \
	NO_API UCriFsLoaderComponent(const UCriFsLoaderComponent&); \
public:


#define Nimbus_Template_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriFsLoaderComponent_h_9_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCriFsLoaderComponent(UCriFsLoaderComponent&&); \
	NO_API UCriFsLoaderComponent(const UCriFsLoaderComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCriFsLoaderComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCriFsLoaderComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCriFsLoaderComponent)


#define Nimbus_Template_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriFsLoaderComponent_h_9_PRIVATE_PROPERTY_OFFSET
#define Nimbus_Template_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriFsLoaderComponent_h_7_PROLOG
#define Nimbus_Template_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriFsLoaderComponent_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Nimbus_Template_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriFsLoaderComponent_h_9_PRIVATE_PROPERTY_OFFSET \
	Nimbus_Template_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriFsLoaderComponent_h_9_RPC_WRAPPERS \
	Nimbus_Template_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriFsLoaderComponent_h_9_INCLASS \
	Nimbus_Template_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriFsLoaderComponent_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Nimbus_Template_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriFsLoaderComponent_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Nimbus_Template_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriFsLoaderComponent_h_9_PRIVATE_PROPERTY_OFFSET \
	Nimbus_Template_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriFsLoaderComponent_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	Nimbus_Template_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriFsLoaderComponent_h_9_INCLASS_NO_PURE_DECLS \
	Nimbus_Template_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriFsLoaderComponent_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Nimbus_Template_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriFsLoaderComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
