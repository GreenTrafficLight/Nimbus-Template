// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDataTable;
struct FAtomTriggerRow;
#ifdef CRIWARERUNTIME_AtomTriggerTableFunctionLibrary_generated_h
#error "AtomTriggerTableFunctionLibrary.generated.h already included, missing '#pragma once' in AtomTriggerTableFunctionLibrary.h"
#endif
#define CRIWARERUNTIME_AtomTriggerTableFunctionLibrary_generated_h

#define Nimbus_Template_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomTriggerTableFunctionLibrary_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetDataTableRowFromName) \
	{ \
		P_GET_OBJECT(UDataTable,Z_Param_Table); \
		P_GET_PROPERTY(UNameProperty,Z_Param_RowName); \
		P_GET_STRUCT_REF(FAtomTriggerRow,Z_Param_Out_OutRow); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UAtomTriggerTableFunctionLibrary::GetDataTableRowFromName(Z_Param_Table,Z_Param_RowName,Z_Param_Out_OutRow); \
		P_NATIVE_END; \
	}


#define Nimbus_Template_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomTriggerTableFunctionLibrary_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetDataTableRowFromName) \
	{ \
		P_GET_OBJECT(UDataTable,Z_Param_Table); \
		P_GET_PROPERTY(UNameProperty,Z_Param_RowName); \
		P_GET_STRUCT_REF(FAtomTriggerRow,Z_Param_Out_OutRow); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UAtomTriggerTableFunctionLibrary::GetDataTableRowFromName(Z_Param_Table,Z_Param_RowName,Z_Param_Out_OutRow); \
		P_NATIVE_END; \
	}


#define Nimbus_Template_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomTriggerTableFunctionLibrary_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAtomTriggerTableFunctionLibrary(); \
	friend CRIWARERUNTIME_API class UClass* Z_Construct_UClass_UAtomTriggerTableFunctionLibrary(); \
public: \
	DECLARE_CLASS(UAtomTriggerTableFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/CriWareRuntime"), NO_API) \
	DECLARE_SERIALIZER(UAtomTriggerTableFunctionLibrary) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Nimbus_Template_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomTriggerTableFunctionLibrary_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUAtomTriggerTableFunctionLibrary(); \
	friend CRIWARERUNTIME_API class UClass* Z_Construct_UClass_UAtomTriggerTableFunctionLibrary(); \
public: \
	DECLARE_CLASS(UAtomTriggerTableFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/CriWareRuntime"), NO_API) \
	DECLARE_SERIALIZER(UAtomTriggerTableFunctionLibrary) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Nimbus_Template_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomTriggerTableFunctionLibrary_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAtomTriggerTableFunctionLibrary(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAtomTriggerTableFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAtomTriggerTableFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAtomTriggerTableFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAtomTriggerTableFunctionLibrary(UAtomTriggerTableFunctionLibrary&&); \
	NO_API UAtomTriggerTableFunctionLibrary(const UAtomTriggerTableFunctionLibrary&); \
public:


#define Nimbus_Template_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomTriggerTableFunctionLibrary_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAtomTriggerTableFunctionLibrary(UAtomTriggerTableFunctionLibrary&&); \
	NO_API UAtomTriggerTableFunctionLibrary(const UAtomTriggerTableFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAtomTriggerTableFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAtomTriggerTableFunctionLibrary); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAtomTriggerTableFunctionLibrary)


#define Nimbus_Template_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomTriggerTableFunctionLibrary_h_11_PRIVATE_PROPERTY_OFFSET
#define Nimbus_Template_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomTriggerTableFunctionLibrary_h_9_PROLOG
#define Nimbus_Template_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomTriggerTableFunctionLibrary_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Nimbus_Template_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomTriggerTableFunctionLibrary_h_11_PRIVATE_PROPERTY_OFFSET \
	Nimbus_Template_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomTriggerTableFunctionLibrary_h_11_RPC_WRAPPERS \
	Nimbus_Template_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomTriggerTableFunctionLibrary_h_11_INCLASS \
	Nimbus_Template_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomTriggerTableFunctionLibrary_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Nimbus_Template_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomTriggerTableFunctionLibrary_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Nimbus_Template_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomTriggerTableFunctionLibrary_h_11_PRIVATE_PROPERTY_OFFSET \
	Nimbus_Template_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomTriggerTableFunctionLibrary_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	Nimbus_Template_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomTriggerTableFunctionLibrary_h_11_INCLASS_NO_PURE_DECLS \
	Nimbus_Template_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomTriggerTableFunctionLibrary_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Nimbus_Template_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomTriggerTableFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
