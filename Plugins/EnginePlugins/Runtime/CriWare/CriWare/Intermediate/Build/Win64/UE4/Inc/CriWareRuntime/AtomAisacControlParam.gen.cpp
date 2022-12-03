// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AtomAisacControlParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomAisacControlParam() {}
// Cross Module References
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomAisacControlParam();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
class UScriptStruct* FAtomAisacControlParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CRIWARERUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAtomAisacControlParam_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomAisacControlParam, Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("AtomAisacControlParam"), sizeof(FAtomAisacControlParam), Get_Z_Construct_UScriptStruct_FAtomAisacControlParam_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAtomAisacControlParam(FAtomAisacControlParam::StaticStruct, TEXT("/Script/CriWareRuntime"), TEXT("AtomAisacControlParam"), false, nullptr, nullptr);
static struct FScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomAisacControlParam
{
	FScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomAisacControlParam()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AtomAisacControlParam")),new UScriptStruct::TCppStructOps<FAtomAisacControlParam>);
	}
} ScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomAisacControlParam;
	UScriptStruct* Z_Construct_UScriptStruct_FAtomAisacControlParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAtomAisacControlParam_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_CriWareRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AtomAisacControlParam"), sizeof(FAtomAisacControlParam), Get_Z_Construct_UScriptStruct_FAtomAisacControlParam_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/AtomAisacControlParam.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomAisacControlParam>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "AtomAisacControlParam" },
				{ "ModuleRelativePath", "Public/AtomAisacControlParam.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Float, "Value", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAtomAisacControlParam, Value), METADATA_PARAMS(NewProp_Value_MetaData, ARRAY_COUNT(NewProp_Value_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "AtomAisacControlParam" },
				{ "ModuleRelativePath", "Public/AtomAisacControlParam.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name = { UE4CodeGen_Private::EPropertyClass::Str, "Name", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAtomAisacControlParam, Name), METADATA_PARAMS(NewProp_Name_MetaData, ARRAY_COUNT(NewProp_Name_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Value,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Name,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AtomAisacControlParam",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FAtomAisacControlParam),
				alignof(FAtomAisacControlParam),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAtomAisacControlParam_CRC() { return 3174497532U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
