// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UManaMovie;
#ifdef CRIWARERUNTIME_ManaPlaylist_generated_h
#error "ManaPlaylist.generated.h already included, missing '#pragma once' in ManaPlaylist.h"
#endif
#define CRIWARERUNTIME_ManaPlaylist_generated_h

#define Nimbus_Template_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaPlaylist_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAdd) \
	{ \
		P_GET_OBJECT(UManaMovie,Z_Param_ManaMovie); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Add(Z_Param_ManaMovie); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGet) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UManaMovie**)Z_Param__Result=this->Get(Z_Param_Index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNext) \
	{ \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_InOutIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UManaMovie**)Z_Param__Result=this->GetNext(Z_Param_Out_InOutIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPrevious) \
	{ \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_InOutIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UManaMovie**)Z_Param__Result=this->GetPrevious(Z_Param_Out_InOutIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRandom) \
	{ \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_InOutIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UManaMovie**)Z_Param__Result=this->GetRandom(Z_Param_Out_InOutIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInsert) \
	{ \
		P_GET_OBJECT(UManaMovie,Z_Param_ManaMovie); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Insert(Z_Param_ManaMovie,Z_Param_Index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsAlpha) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsAlpha(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsMixedTypes) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsMixedTypes(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsSeamless) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsSeamless(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNum) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->Num(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemove) \
	{ \
		P_GET_OBJECT(UManaMovie,Z_Param_ManaMovie); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Remove(Z_Param_ManaMovie); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveAt) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->RemoveAt(Z_Param_Index); \
		P_NATIVE_END; \
	}


#define Nimbus_Template_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaPlaylist_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAdd) \
	{ \
		P_GET_OBJECT(UManaMovie,Z_Param_ManaMovie); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Add(Z_Param_ManaMovie); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGet) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UManaMovie**)Z_Param__Result=this->Get(Z_Param_Index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNext) \
	{ \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_InOutIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UManaMovie**)Z_Param__Result=this->GetNext(Z_Param_Out_InOutIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPrevious) \
	{ \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_InOutIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UManaMovie**)Z_Param__Result=this->GetPrevious(Z_Param_Out_InOutIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRandom) \
	{ \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_InOutIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UManaMovie**)Z_Param__Result=this->GetRandom(Z_Param_Out_InOutIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInsert) \
	{ \
		P_GET_OBJECT(UManaMovie,Z_Param_ManaMovie); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Insert(Z_Param_ManaMovie,Z_Param_Index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsAlpha) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsAlpha(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsMixedTypes) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsMixedTypes(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsSeamless) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsSeamless(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNum) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->Num(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemove) \
	{ \
		P_GET_OBJECT(UManaMovie,Z_Param_ManaMovie); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Remove(Z_Param_ManaMovie); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveAt) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->RemoveAt(Z_Param_Index); \
		P_NATIVE_END; \
	}


#define Nimbus_Template_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaPlaylist_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUManaPlaylist(); \
	friend CRIWARERUNTIME_API class UClass* Z_Construct_UClass_UManaPlaylist(); \
public: \
	DECLARE_CLASS(UManaPlaylist, UManaSource, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/CriWareRuntime"), NO_API) \
	DECLARE_SERIALIZER(UManaPlaylist) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Nimbus_Template_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaPlaylist_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUManaPlaylist(); \
	friend CRIWARERUNTIME_API class UClass* Z_Construct_UClass_UManaPlaylist(); \
public: \
	DECLARE_CLASS(UManaPlaylist, UManaSource, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/CriWareRuntime"), NO_API) \
	DECLARE_SERIALIZER(UManaPlaylist) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Nimbus_Template_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaPlaylist_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UManaPlaylist(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UManaPlaylist) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UManaPlaylist); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UManaPlaylist); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UManaPlaylist(UManaPlaylist&&); \
	NO_API UManaPlaylist(const UManaPlaylist&); \
public:


#define Nimbus_Template_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaPlaylist_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UManaPlaylist(UManaPlaylist&&); \
	NO_API UManaPlaylist(const UManaPlaylist&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UManaPlaylist); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UManaPlaylist); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UManaPlaylist)


#define Nimbus_Template_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaPlaylist_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Movies() { return STRUCT_OFFSET(UManaPlaylist, Movies); } \
	FORCEINLINE static uint32 __PPO__bIsAlpha() { return STRUCT_OFFSET(UManaPlaylist, bIsAlpha); } \
	FORCEINLINE static uint32 __PPO__bIsMixedTypes() { return STRUCT_OFFSET(UManaPlaylist, bIsMixedTypes); } \
	FORCEINLINE static uint32 __PPO__bIsSeamless() { return STRUCT_OFFSET(UManaPlaylist, bIsSeamless); }


#define Nimbus_Template_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaPlaylist_h_8_PROLOG
#define Nimbus_Template_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaPlaylist_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Nimbus_Template_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaPlaylist_h_10_PRIVATE_PROPERTY_OFFSET \
	Nimbus_Template_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaPlaylist_h_10_RPC_WRAPPERS \
	Nimbus_Template_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaPlaylist_h_10_INCLASS \
	Nimbus_Template_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaPlaylist_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Nimbus_Template_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaPlaylist_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Nimbus_Template_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaPlaylist_h_10_PRIVATE_PROPERTY_OFFSET \
	Nimbus_Template_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaPlaylist_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	Nimbus_Template_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaPlaylist_h_10_INCLASS_NO_PURE_DECLS \
	Nimbus_Template_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaPlaylist_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Nimbus_Template_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaPlaylist_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
