// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AtomSelectorParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomSelectorParam() {}
// Cross Module References
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomSelectorParam();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
class UScriptStruct* FAtomSelectorParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CRIWARERUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAtomSelectorParam_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomSelectorParam, Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("AtomSelectorParam"), sizeof(FAtomSelectorParam), Get_Z_Construct_UScriptStruct_FAtomSelectorParam_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAtomSelectorParam(FAtomSelectorParam::StaticStruct, TEXT("/Script/CriWareRuntime"), TEXT("AtomSelectorParam"), false, nullptr, nullptr);
static struct FScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomSelectorParam
{
	FScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomSelectorParam()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AtomSelectorParam")),new UScriptStruct::TCppStructOps<FAtomSelectorParam>);
	}
} ScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomSelectorParam;
	UScriptStruct* Z_Construct_UScriptStruct_FAtomSelectorParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAtomSelectorParam_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_CriWareRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AtomSelectorParam"), sizeof(FAtomSelectorParam), Get_Z_Construct_UScriptStruct_FAtomSelectorParam_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/AtomSelectorParam.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomSelectorParam>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Label_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "AtomSelectorParam" },
				{ "ModuleRelativePath", "Public/AtomSelectorParam.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Label = { UE4CodeGen_Private::EPropertyClass::Str, "Label", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAtomSelectorParam, Label), METADATA_PARAMS(NewProp_Label_MetaData, ARRAY_COUNT(NewProp_Label_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_selector_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "AtomSelectorParam" },
				{ "ModuleRelativePath", "Public/AtomSelectorParam.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_selector = { UE4CodeGen_Private::EPropertyClass::Str, "selector", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAtomSelectorParam, selector), METADATA_PARAMS(NewProp_selector_MetaData, ARRAY_COUNT(NewProp_selector_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Label,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_selector,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AtomSelectorParam",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FAtomSelectorParam),
				alignof(FAtomSelectorParam),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAtomSelectorParam_CRC() { return 2057913071U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
