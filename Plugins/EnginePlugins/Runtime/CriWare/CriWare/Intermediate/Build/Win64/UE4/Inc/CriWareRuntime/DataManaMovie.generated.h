// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CRIWARERUNTIME_DataManaMovie_generated_h
#error "DataManaMovie.generated.h already included, missing '#pragma once' in DataManaMovie.h"
#endif
#define CRIWARERUNTIME_DataManaMovie_generated_h

#define Nimbus_Template_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_DataManaMovie_h_8_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetDataArray) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<uint8>*)Z_Param__Result=this->GetDataArray(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDataArray) \
	{ \
		P_GET_TARRAY_REF(uint8,Z_Param_Out_InDataArray); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetDataArray(Z_Param_Out_InDataArray); \
		P_NATIVE_END; \
	}


#define Nimbus_Template_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_DataManaMovie_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetDataArray) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<uint8>*)Z_Param__Result=this->GetDataArray(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDataArray) \
	{ \
		P_GET_TARRAY_REF(uint8,Z_Param_Out_InDataArray); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetDataArray(Z_Param_Out_InDataArray); \
		P_NATIVE_END; \
	}


#define Nimbus_Template_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_DataManaMovie_h_8_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDataManaMovie(); \
	friend CRIWARERUNTIME_API class UClass* Z_Construct_UClass_UDataManaMovie(); \
public: \
	DECLARE_CLASS(UDataManaMovie, UManaMovie, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/CriWareRuntime"), NO_API) \
	DECLARE_SERIALIZER(UDataManaMovie) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Nimbus_Template_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_DataManaMovie_h_8_INCLASS \
private: \
	static void StaticRegisterNativesUDataManaMovie(); \
	friend CRIWARERUNTIME_API class UClass* Z_Construct_UClass_UDataManaMovie(); \
public: \
	DECLARE_CLASS(UDataManaMovie, UManaMovie, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/CriWareRuntime"), NO_API) \
	DECLARE_SERIALIZER(UDataManaMovie) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Nimbus_Template_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_DataManaMovie_h_8_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDataManaMovie(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataManaMovie) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDataManaMovie); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataManaMovie); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDataManaMovie(UDataManaMovie&&); \
	NO_API UDataManaMovie(const UDataManaMovie&); \
public:


#define Nimbus_Template_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_DataManaMovie_h_8_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDataManaMovie(UDataManaMovie&&); \
	NO_API UDataManaMovie(const UDataManaMovie&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDataManaMovie); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataManaMovie); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDataManaMovie)


#define Nimbus_Template_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_DataManaMovie_h_8_PRIVATE_PROPERTY_OFFSET
#define Nimbus_Template_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_DataManaMovie_h_6_PROLOG
#define Nimbus_Template_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_DataManaMovie_h_8_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Nimbus_Template_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_DataManaMovie_h_8_PRIVATE_PROPERTY_OFFSET \
	Nimbus_Template_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_DataManaMovie_h_8_RPC_WRAPPERS \
	Nimbus_Template_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_DataManaMovie_h_8_INCLASS \
	Nimbus_Template_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_DataManaMovie_h_8_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Nimbus_Template_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_DataManaMovie_h_8_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Nimbus_Template_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_DataManaMovie_h_8_PRIVATE_PROPERTY_OFFSET \
	Nimbus_Template_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_DataManaMovie_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	Nimbus_Template_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_DataManaMovie_h_8_INCLASS_NO_PURE_DECLS \
	Nimbus_Template_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_DataManaMovie_h_8_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Nimbus_Template_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_DataManaMovie_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
