// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FKey;
enum class ECustomKeyMouseIconType : uint8;
enum class ECustomKeyMouseLanguage : uint8;
enum class ECustomKeyMouseDevice : uint8;
#ifdef CUSTOMKEYMOUSE_CustomKeyMouseBlueprintLibrary_generated_h
#error "CustomKeyMouseBlueprintLibrary.generated.h already included, missing '#pragma once' in CustomKeyMouseBlueprintLibrary.h"
#endif
#define CUSTOMKEYMOUSE_CustomKeyMouseBlueprintLibrary_generated_h

#define Nimbus_Template_Plugins_CustomKeyMouse_Source_CustomKeyMouse_Public_CustomKeyMouseBlueprintLibrary_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetExternalCharacter) \
	{ \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_OutString); \
		P_GET_STRUCT_REF(FKey,Z_Param_Out_InKey); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UCustomKeyMouseBlueprintLibrary::GetExternalCharacter(Z_Param_Out_OutString,Z_Param_Out_InKey); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetExternalCharacterUnknown) \
	{ \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_OutString); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UCustomKeyMouseBlueprintLibrary::GetExternalCharacterUnknown(Z_Param_Out_OutString); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIconType) \
	{ \
		P_GET_ENUM_REF(ECustomKeyMouseIconType,Z_Param_Out_OutIconType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UCustomKeyMouseBlueprintLibrary::GetIconType((ECustomKeyMouseIconType&)(Z_Param_Out_OutIconType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLanguage) \
	{ \
		P_GET_ENUM_REF(ECustomKeyMouseLanguage,Z_Param_Out_OutLanguege); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UCustomKeyMouseBlueprintLibrary::GetLanguage((ECustomKeyMouseLanguage&)(Z_Param_Out_OutLanguege)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLastInputDevice) \
	{ \
		P_GET_ENUM_REF(ECustomKeyMouseDevice,Z_Param_Out_OutDevice); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UCustomKeyMouseBlueprintLibrary::GetLastInputDevice((ECustomKeyMouseDevice&)(Z_Param_Out_OutDevice)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMouseLookAtModifyKey) \
	{ \
		P_GET_STRUCT_REF(FKey,Z_Param_Out_OutKey); \
		P_GET_PROPERTY(UIntProperty,Z_Param_InIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UCustomKeyMouseBlueprintLibrary::GetMouseLookAtModifyKey(Z_Param_Out_OutKey,Z_Param_InIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMouseLookAtSensitive) \
	{ \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_OutSensitive); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UCustomKeyMouseBlueprintLibrary::GetMouseLookAtSensitive(Z_Param_Out_OutSensitive); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMouseStickSensitive) \
	{ \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_OutSensitive); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UCustomKeyMouseBlueprintLibrary::GetMouseStickSensitive(Z_Param_Out_OutSensitive); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMouseLookAtModifyKey) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_InIndex); \
		P_GET_STRUCT_REF(FKey,Z_Param_Out_InKey); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UCustomKeyMouseBlueprintLibrary::SetMouseLookAtModifyKey(Z_Param_InIndex,Z_Param_Out_InKey); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMouseLookAtSensitive) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InSensitvie); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UCustomKeyMouseBlueprintLibrary::SetMouseLookAtSensitive(Z_Param_InSensitvie); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMouseStickSensitive) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InSensitvie); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UCustomKeyMouseBlueprintLibrary::SetMouseStickSensitive(Z_Param_InSensitvie); \
		P_NATIVE_END; \
	}


#define Nimbus_Template_Plugins_CustomKeyMouse_Source_CustomKeyMouse_Public_CustomKeyMouseBlueprintLibrary_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetExternalCharacter) \
	{ \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_OutString); \
		P_GET_STRUCT_REF(FKey,Z_Param_Out_InKey); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UCustomKeyMouseBlueprintLibrary::GetExternalCharacter(Z_Param_Out_OutString,Z_Param_Out_InKey); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetExternalCharacterUnknown) \
	{ \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_OutString); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UCustomKeyMouseBlueprintLibrary::GetExternalCharacterUnknown(Z_Param_Out_OutString); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIconType) \
	{ \
		P_GET_ENUM_REF(ECustomKeyMouseIconType,Z_Param_Out_OutIconType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UCustomKeyMouseBlueprintLibrary::GetIconType((ECustomKeyMouseIconType&)(Z_Param_Out_OutIconType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLanguage) \
	{ \
		P_GET_ENUM_REF(ECustomKeyMouseLanguage,Z_Param_Out_OutLanguege); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UCustomKeyMouseBlueprintLibrary::GetLanguage((ECustomKeyMouseLanguage&)(Z_Param_Out_OutLanguege)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLastInputDevice) \
	{ \
		P_GET_ENUM_REF(ECustomKeyMouseDevice,Z_Param_Out_OutDevice); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UCustomKeyMouseBlueprintLibrary::GetLastInputDevice((ECustomKeyMouseDevice&)(Z_Param_Out_OutDevice)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMouseLookAtModifyKey) \
	{ \
		P_GET_STRUCT_REF(FKey,Z_Param_Out_OutKey); \
		P_GET_PROPERTY(UIntProperty,Z_Param_InIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UCustomKeyMouseBlueprintLibrary::GetMouseLookAtModifyKey(Z_Param_Out_OutKey,Z_Param_InIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMouseLookAtSensitive) \
	{ \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_OutSensitive); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UCustomKeyMouseBlueprintLibrary::GetMouseLookAtSensitive(Z_Param_Out_OutSensitive); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMouseStickSensitive) \
	{ \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_OutSensitive); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UCustomKeyMouseBlueprintLibrary::GetMouseStickSensitive(Z_Param_Out_OutSensitive); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMouseLookAtModifyKey) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_InIndex); \
		P_GET_STRUCT_REF(FKey,Z_Param_Out_InKey); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UCustomKeyMouseBlueprintLibrary::SetMouseLookAtModifyKey(Z_Param_InIndex,Z_Param_Out_InKey); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMouseLookAtSensitive) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InSensitvie); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UCustomKeyMouseBlueprintLibrary::SetMouseLookAtSensitive(Z_Param_InSensitvie); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMouseStickSensitive) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InSensitvie); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UCustomKeyMouseBlueprintLibrary::SetMouseStickSensitive(Z_Param_InSensitvie); \
		P_NATIVE_END; \
	}


#define Nimbus_Template_Plugins_CustomKeyMouse_Source_CustomKeyMouse_Public_CustomKeyMouseBlueprintLibrary_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCustomKeyMouseBlueprintLibrary(); \
	friend CUSTOMKEYMOUSE_API class UClass* Z_Construct_UClass_UCustomKeyMouseBlueprintLibrary(); \
public: \
	DECLARE_CLASS(UCustomKeyMouseBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/CustomKeyMouse"), NO_API) \
	DECLARE_SERIALIZER(UCustomKeyMouseBlueprintLibrary) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Nimbus_Template_Plugins_CustomKeyMouse_Source_CustomKeyMouse_Public_CustomKeyMouseBlueprintLibrary_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUCustomKeyMouseBlueprintLibrary(); \
	friend CUSTOMKEYMOUSE_API class UClass* Z_Construct_UClass_UCustomKeyMouseBlueprintLibrary(); \
public: \
	DECLARE_CLASS(UCustomKeyMouseBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/CustomKeyMouse"), NO_API) \
	DECLARE_SERIALIZER(UCustomKeyMouseBlueprintLibrary) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Nimbus_Template_Plugins_CustomKeyMouse_Source_CustomKeyMouse_Public_CustomKeyMouseBlueprintLibrary_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCustomKeyMouseBlueprintLibrary(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCustomKeyMouseBlueprintLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCustomKeyMouseBlueprintLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomKeyMouseBlueprintLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCustomKeyMouseBlueprintLibrary(UCustomKeyMouseBlueprintLibrary&&); \
	NO_API UCustomKeyMouseBlueprintLibrary(const UCustomKeyMouseBlueprintLibrary&); \
public:


#define Nimbus_Template_Plugins_CustomKeyMouse_Source_CustomKeyMouse_Public_CustomKeyMouseBlueprintLibrary_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCustomKeyMouseBlueprintLibrary(UCustomKeyMouseBlueprintLibrary&&); \
	NO_API UCustomKeyMouseBlueprintLibrary(const UCustomKeyMouseBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCustomKeyMouseBlueprintLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomKeyMouseBlueprintLibrary); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCustomKeyMouseBlueprintLibrary)


#define Nimbus_Template_Plugins_CustomKeyMouse_Source_CustomKeyMouse_Public_CustomKeyMouseBlueprintLibrary_h_12_PRIVATE_PROPERTY_OFFSET
#define Nimbus_Template_Plugins_CustomKeyMouse_Source_CustomKeyMouse_Public_CustomKeyMouseBlueprintLibrary_h_10_PROLOG
#define Nimbus_Template_Plugins_CustomKeyMouse_Source_CustomKeyMouse_Public_CustomKeyMouseBlueprintLibrary_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Nimbus_Template_Plugins_CustomKeyMouse_Source_CustomKeyMouse_Public_CustomKeyMouseBlueprintLibrary_h_12_PRIVATE_PROPERTY_OFFSET \
	Nimbus_Template_Plugins_CustomKeyMouse_Source_CustomKeyMouse_Public_CustomKeyMouseBlueprintLibrary_h_12_RPC_WRAPPERS \
	Nimbus_Template_Plugins_CustomKeyMouse_Source_CustomKeyMouse_Public_CustomKeyMouseBlueprintLibrary_h_12_INCLASS \
	Nimbus_Template_Plugins_CustomKeyMouse_Source_CustomKeyMouse_Public_CustomKeyMouseBlueprintLibrary_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Nimbus_Template_Plugins_CustomKeyMouse_Source_CustomKeyMouse_Public_CustomKeyMouseBlueprintLibrary_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Nimbus_Template_Plugins_CustomKeyMouse_Source_CustomKeyMouse_Public_CustomKeyMouseBlueprintLibrary_h_12_PRIVATE_PROPERTY_OFFSET \
	Nimbus_Template_Plugins_CustomKeyMouse_Source_CustomKeyMouse_Public_CustomKeyMouseBlueprintLibrary_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Nimbus_Template_Plugins_CustomKeyMouse_Source_CustomKeyMouse_Public_CustomKeyMouseBlueprintLibrary_h_12_INCLASS_NO_PURE_DECLS \
	Nimbus_Template_Plugins_CustomKeyMouse_Source_CustomKeyMouse_Public_CustomKeyMouseBlueprintLibrary_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Nimbus_Template_Plugins_CustomKeyMouse_Source_CustomKeyMouse_Public_CustomKeyMouseBlueprintLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
