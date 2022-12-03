// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/CustomKeyMouseBlueprintLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomKeyMouseBlueprintLibrary() {}
// Cross Module References
	CUSTOMKEYMOUSE_API UClass* Z_Construct_UClass_UCustomKeyMouseBlueprintLibrary_NoRegister();
	CUSTOMKEYMOUSE_API UClass* Z_Construct_UClass_UCustomKeyMouseBlueprintLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_CustomKeyMouse();
	CUSTOMKEYMOUSE_API UFunction* Z_Construct_UFunction_UCustomKeyMouseBlueprintLibrary_GetExternalCharacter();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	CUSTOMKEYMOUSE_API UFunction* Z_Construct_UFunction_UCustomKeyMouseBlueprintLibrary_GetExternalCharacterUnknown();
	CUSTOMKEYMOUSE_API UFunction* Z_Construct_UFunction_UCustomKeyMouseBlueprintLibrary_GetIconType();
	CUSTOMKEYMOUSE_API UEnum* Z_Construct_UEnum_CustomKeyMouse_ECustomKeyMouseIconType();
	CUSTOMKEYMOUSE_API UFunction* Z_Construct_UFunction_UCustomKeyMouseBlueprintLibrary_GetLanguage();
	CUSTOMKEYMOUSE_API UEnum* Z_Construct_UEnum_CustomKeyMouse_ECustomKeyMouseLanguage();
	CUSTOMKEYMOUSE_API UFunction* Z_Construct_UFunction_UCustomKeyMouseBlueprintLibrary_GetLastInputDevice();
	CUSTOMKEYMOUSE_API UEnum* Z_Construct_UEnum_CustomKeyMouse_ECustomKeyMouseDevice();
	CUSTOMKEYMOUSE_API UFunction* Z_Construct_UFunction_UCustomKeyMouseBlueprintLibrary_GetMouseLookAtModifyKey();
	CUSTOMKEYMOUSE_API UFunction* Z_Construct_UFunction_UCustomKeyMouseBlueprintLibrary_GetMouseLookAtSensitive();
	CUSTOMKEYMOUSE_API UFunction* Z_Construct_UFunction_UCustomKeyMouseBlueprintLibrary_GetMouseStickSensitive();
	CUSTOMKEYMOUSE_API UFunction* Z_Construct_UFunction_UCustomKeyMouseBlueprintLibrary_SetMouseLookAtModifyKey();
	CUSTOMKEYMOUSE_API UFunction* Z_Construct_UFunction_UCustomKeyMouseBlueprintLibrary_SetMouseLookAtSensitive();
	CUSTOMKEYMOUSE_API UFunction* Z_Construct_UFunction_UCustomKeyMouseBlueprintLibrary_SetMouseStickSensitive();
// End Cross Module References
	void UCustomKeyMouseBlueprintLibrary::StaticRegisterNativesUCustomKeyMouseBlueprintLibrary()
	{
		UClass* Class = UCustomKeyMouseBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetExternalCharacter", (Native)&UCustomKeyMouseBlueprintLibrary::execGetExternalCharacter },
			{ "GetExternalCharacterUnknown", (Native)&UCustomKeyMouseBlueprintLibrary::execGetExternalCharacterUnknown },
			{ "GetIconType", (Native)&UCustomKeyMouseBlueprintLibrary::execGetIconType },
			{ "GetLanguage", (Native)&UCustomKeyMouseBlueprintLibrary::execGetLanguage },
			{ "GetLastInputDevice", (Native)&UCustomKeyMouseBlueprintLibrary::execGetLastInputDevice },
			{ "GetMouseLookAtModifyKey", (Native)&UCustomKeyMouseBlueprintLibrary::execGetMouseLookAtModifyKey },
			{ "GetMouseLookAtSensitive", (Native)&UCustomKeyMouseBlueprintLibrary::execGetMouseLookAtSensitive },
			{ "GetMouseStickSensitive", (Native)&UCustomKeyMouseBlueprintLibrary::execGetMouseStickSensitive },
			{ "SetMouseLookAtModifyKey", (Native)&UCustomKeyMouseBlueprintLibrary::execSetMouseLookAtModifyKey },
			{ "SetMouseLookAtSensitive", (Native)&UCustomKeyMouseBlueprintLibrary::execSetMouseLookAtSensitive },
			{ "SetMouseStickSensitive", (Native)&UCustomKeyMouseBlueprintLibrary::execSetMouseStickSensitive },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UCustomKeyMouseBlueprintLibrary_GetExternalCharacter()
	{
		struct CustomKeyMouseBlueprintLibrary_eventGetExternalCharacter_Parms
		{
			FString OutString;
			FKey InKey;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InKey_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InKey = { UE4CodeGen_Private::EPropertyClass::Struct, "InKey", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(CustomKeyMouseBlueprintLibrary_eventGetExternalCharacter_Parms, InKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(NewProp_InKey_MetaData, ARRAY_COUNT(NewProp_InKey_MetaData)) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_OutString = { UE4CodeGen_Private::EPropertyClass::Str, "OutString", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(CustomKeyMouseBlueprintLibrary_eventGetExternalCharacter_Parms, OutString), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InKey,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutString,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/CustomKeyMouseBlueprintLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomKeyMouseBlueprintLibrary, "GetExternalCharacter", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(CustomKeyMouseBlueprintLibrary_eventGetExternalCharacter_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCustomKeyMouseBlueprintLibrary_GetExternalCharacterUnknown()
	{
		struct CustomKeyMouseBlueprintLibrary_eventGetExternalCharacterUnknown_Parms
		{
			FString OutString;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_OutString = { UE4CodeGen_Private::EPropertyClass::Str, "OutString", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(CustomKeyMouseBlueprintLibrary_eventGetExternalCharacterUnknown_Parms, OutString), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutString,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/CustomKeyMouseBlueprintLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomKeyMouseBlueprintLibrary, "GetExternalCharacterUnknown", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(CustomKeyMouseBlueprintLibrary_eventGetExternalCharacterUnknown_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCustomKeyMouseBlueprintLibrary_GetIconType()
	{
		struct CustomKeyMouseBlueprintLibrary_eventGetIconType_Parms
		{
			ECustomKeyMouseIconType OutIconType;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OutIconType = { UE4CodeGen_Private::EPropertyClass::Enum, "OutIconType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(CustomKeyMouseBlueprintLibrary_eventGetIconType_Parms, OutIconType), Z_Construct_UEnum_CustomKeyMouse_ECustomKeyMouseIconType, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_OutIconType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutIconType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutIconType_Underlying,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/CustomKeyMouseBlueprintLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomKeyMouseBlueprintLibrary, "GetIconType", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(CustomKeyMouseBlueprintLibrary_eventGetIconType_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCustomKeyMouseBlueprintLibrary_GetLanguage()
	{
		struct CustomKeyMouseBlueprintLibrary_eventGetLanguage_Parms
		{
			ECustomKeyMouseLanguage OutLanguege;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OutLanguege = { UE4CodeGen_Private::EPropertyClass::Enum, "OutLanguege", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(CustomKeyMouseBlueprintLibrary_eventGetLanguage_Parms, OutLanguege), Z_Construct_UEnum_CustomKeyMouse_ECustomKeyMouseLanguage, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_OutLanguege_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutLanguege,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutLanguege_Underlying,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/CustomKeyMouseBlueprintLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomKeyMouseBlueprintLibrary, "GetLanguage", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(CustomKeyMouseBlueprintLibrary_eventGetLanguage_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCustomKeyMouseBlueprintLibrary_GetLastInputDevice()
	{
		struct CustomKeyMouseBlueprintLibrary_eventGetLastInputDevice_Parms
		{
			ECustomKeyMouseDevice OutDevice;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OutDevice = { UE4CodeGen_Private::EPropertyClass::Enum, "OutDevice", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(CustomKeyMouseBlueprintLibrary_eventGetLastInputDevice_Parms, OutDevice), Z_Construct_UEnum_CustomKeyMouse_ECustomKeyMouseDevice, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_OutDevice_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutDevice,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutDevice_Underlying,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/CustomKeyMouseBlueprintLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomKeyMouseBlueprintLibrary, "GetLastInputDevice", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(CustomKeyMouseBlueprintLibrary_eventGetLastInputDevice_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCustomKeyMouseBlueprintLibrary_GetMouseLookAtModifyKey()
	{
		struct CustomKeyMouseBlueprintLibrary_eventGetMouseLookAtModifyKey_Parms
		{
			FKey OutKey;
			int32 InIndex;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_InIndex = { UE4CodeGen_Private::EPropertyClass::Int, "InIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CustomKeyMouseBlueprintLibrary_eventGetMouseLookAtModifyKey_Parms, InIndex), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutKey = { UE4CodeGen_Private::EPropertyClass::Struct, "OutKey", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(CustomKeyMouseBlueprintLibrary_eventGetMouseLookAtModifyKey_Parms, OutKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InIndex,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutKey,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/CustomKeyMouseBlueprintLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomKeyMouseBlueprintLibrary, "GetMouseLookAtModifyKey", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(CustomKeyMouseBlueprintLibrary_eventGetMouseLookAtModifyKey_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCustomKeyMouseBlueprintLibrary_GetMouseLookAtSensitive()
	{
		struct CustomKeyMouseBlueprintLibrary_eventGetMouseLookAtSensitive_Parms
		{
			float OutSensitive;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OutSensitive = { UE4CodeGen_Private::EPropertyClass::Float, "OutSensitive", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(CustomKeyMouseBlueprintLibrary_eventGetMouseLookAtSensitive_Parms, OutSensitive), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutSensitive,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/CustomKeyMouseBlueprintLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomKeyMouseBlueprintLibrary, "GetMouseLookAtSensitive", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(CustomKeyMouseBlueprintLibrary_eventGetMouseLookAtSensitive_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCustomKeyMouseBlueprintLibrary_GetMouseStickSensitive()
	{
		struct CustomKeyMouseBlueprintLibrary_eventGetMouseStickSensitive_Parms
		{
			float OutSensitive;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OutSensitive = { UE4CodeGen_Private::EPropertyClass::Float, "OutSensitive", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(CustomKeyMouseBlueprintLibrary_eventGetMouseStickSensitive_Parms, OutSensitive), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutSensitive,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/CustomKeyMouseBlueprintLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomKeyMouseBlueprintLibrary, "GetMouseStickSensitive", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(CustomKeyMouseBlueprintLibrary_eventGetMouseStickSensitive_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCustomKeyMouseBlueprintLibrary_SetMouseLookAtModifyKey()
	{
		struct CustomKeyMouseBlueprintLibrary_eventSetMouseLookAtModifyKey_Parms
		{
			int32 InIndex;
			FKey InKey;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InKey_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InKey = { UE4CodeGen_Private::EPropertyClass::Struct, "InKey", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(CustomKeyMouseBlueprintLibrary_eventSetMouseLookAtModifyKey_Parms, InKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(NewProp_InKey_MetaData, ARRAY_COUNT(NewProp_InKey_MetaData)) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_InIndex = { UE4CodeGen_Private::EPropertyClass::Int, "InIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CustomKeyMouseBlueprintLibrary_eventSetMouseLookAtModifyKey_Parms, InIndex), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InKey,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InIndex,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/CustomKeyMouseBlueprintLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomKeyMouseBlueprintLibrary, "SetMouseLookAtModifyKey", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(CustomKeyMouseBlueprintLibrary_eventSetMouseLookAtModifyKey_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCustomKeyMouseBlueprintLibrary_SetMouseLookAtSensitive()
	{
		struct CustomKeyMouseBlueprintLibrary_eventSetMouseLookAtSensitive_Parms
		{
			float InSensitvie;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InSensitvie = { UE4CodeGen_Private::EPropertyClass::Float, "InSensitvie", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CustomKeyMouseBlueprintLibrary_eventSetMouseLookAtSensitive_Parms, InSensitvie), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InSensitvie,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/CustomKeyMouseBlueprintLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomKeyMouseBlueprintLibrary, "SetMouseLookAtSensitive", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(CustomKeyMouseBlueprintLibrary_eventSetMouseLookAtSensitive_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCustomKeyMouseBlueprintLibrary_SetMouseStickSensitive()
	{
		struct CustomKeyMouseBlueprintLibrary_eventSetMouseStickSensitive_Parms
		{
			float InSensitvie;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InSensitvie = { UE4CodeGen_Private::EPropertyClass::Float, "InSensitvie", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CustomKeyMouseBlueprintLibrary_eventSetMouseStickSensitive_Parms, InSensitvie), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InSensitvie,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/CustomKeyMouseBlueprintLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomKeyMouseBlueprintLibrary, "SetMouseStickSensitive", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(CustomKeyMouseBlueprintLibrary_eventSetMouseStickSensitive_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCustomKeyMouseBlueprintLibrary_NoRegister()
	{
		return UCustomKeyMouseBlueprintLibrary::StaticClass();
	}
	UClass* Z_Construct_UClass_UCustomKeyMouseBlueprintLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
				(UObject* (*)())Z_Construct_UPackage__Script_CustomKeyMouse,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UCustomKeyMouseBlueprintLibrary_GetExternalCharacter, "GetExternalCharacter" }, // 3499234797
				{ &Z_Construct_UFunction_UCustomKeyMouseBlueprintLibrary_GetExternalCharacterUnknown, "GetExternalCharacterUnknown" }, // 1913271757
				{ &Z_Construct_UFunction_UCustomKeyMouseBlueprintLibrary_GetIconType, "GetIconType" }, // 1637062238
				{ &Z_Construct_UFunction_UCustomKeyMouseBlueprintLibrary_GetLanguage, "GetLanguage" }, // 587488078
				{ &Z_Construct_UFunction_UCustomKeyMouseBlueprintLibrary_GetLastInputDevice, "GetLastInputDevice" }, // 4184006621
				{ &Z_Construct_UFunction_UCustomKeyMouseBlueprintLibrary_GetMouseLookAtModifyKey, "GetMouseLookAtModifyKey" }, // 3853184473
				{ &Z_Construct_UFunction_UCustomKeyMouseBlueprintLibrary_GetMouseLookAtSensitive, "GetMouseLookAtSensitive" }, // 752215170
				{ &Z_Construct_UFunction_UCustomKeyMouseBlueprintLibrary_GetMouseStickSensitive, "GetMouseStickSensitive" }, // 1910710043
				{ &Z_Construct_UFunction_UCustomKeyMouseBlueprintLibrary_SetMouseLookAtModifyKey, "SetMouseLookAtModifyKey" }, // 2428721816
				{ &Z_Construct_UFunction_UCustomKeyMouseBlueprintLibrary_SetMouseLookAtSensitive, "SetMouseLookAtSensitive" }, // 782728359
				{ &Z_Construct_UFunction_UCustomKeyMouseBlueprintLibrary_SetMouseStickSensitive, "SetMouseStickSensitive" }, // 1737839075
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "CustomKeyMouseBlueprintLibrary.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/CustomKeyMouseBlueprintLibrary.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UCustomKeyMouseBlueprintLibrary>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UCustomKeyMouseBlueprintLibrary::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00000080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCustomKeyMouseBlueprintLibrary, 1587132537);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCustomKeyMouseBlueprintLibrary(Z_Construct_UClass_UCustomKeyMouseBlueprintLibrary, &UCustomKeyMouseBlueprintLibrary::StaticClass, TEXT("/Script/CustomKeyMouse"), TEXT("UCustomKeyMouseBlueprintLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomKeyMouseBlueprintLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
