// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/ManaEventPointInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeManaEventPointInfo() {}
// Cross Module References
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FManaEventPointInfo();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
class UScriptStruct* FManaEventPointInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CRIWARERUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FManaEventPointInfo_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FManaEventPointInfo, Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("ManaEventPointInfo"), sizeof(FManaEventPointInfo), Get_Z_Construct_UScriptStruct_FManaEventPointInfo_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FManaEventPointInfo(FManaEventPointInfo::StaticStruct, TEXT("/Script/CriWareRuntime"), TEXT("ManaEventPointInfo"), false, nullptr, nullptr);
static struct FScriptStruct_CriWareRuntime_StaticRegisterNativesFManaEventPointInfo
{
	FScriptStruct_CriWareRuntime_StaticRegisterNativesFManaEventPointInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ManaEventPointInfo")),new UScriptStruct::TCppStructOps<FManaEventPointInfo>);
	}
} ScriptStruct_CriWareRuntime_StaticRegisterNativesFManaEventPointInfo;
	UScriptStruct* Z_Construct_UScriptStruct_FManaEventPointInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FManaEventPointInfo_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_CriWareRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ManaEventPointInfo"), sizeof(FManaEventPointInfo), Get_Z_Construct_UScriptStruct_FManaEventPointInfo_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/ManaEventPointInfo.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FManaEventPointInfo>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Parameter_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "ManaEventPointInfo" },
				{ "ModuleRelativePath", "Public/ManaEventPointInfo.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Parameter = { UE4CodeGen_Private::EPropertyClass::Str, "Parameter", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FManaEventPointInfo, Parameter), METADATA_PARAMS(NewProp_Parameter_MetaData, ARRAY_COUNT(NewProp_Parameter_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "ManaEventPointInfo" },
				{ "ModuleRelativePath", "Public/ManaEventPointInfo.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Type = { UE4CodeGen_Private::EPropertyClass::Int, "Type", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FManaEventPointInfo, Type), METADATA_PARAMS(NewProp_Type_MetaData, ARRAY_COUNT(NewProp_Type_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "ManaEventPointInfo" },
				{ "ModuleRelativePath", "Public/ManaEventPointInfo.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Time = { UE4CodeGen_Private::EPropertyClass::Float, "Time", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FManaEventPointInfo, Time), METADATA_PARAMS(NewProp_Time_MetaData, ARRAY_COUNT(NewProp_Time_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "ManaEventPointInfo" },
				{ "ModuleRelativePath", "Public/ManaEventPointInfo.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name = { UE4CodeGen_Private::EPropertyClass::Str, "Name", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FManaEventPointInfo, Name), METADATA_PARAMS(NewProp_Name_MetaData, ARRAY_COUNT(NewProp_Name_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Parameter,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Type,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Time,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Name,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"ManaEventPointInfo",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FManaEventPointInfo),
				alignof(FManaEventPointInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FManaEventPointInfo_CRC() { return 4113204149U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
