// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/ManaVideoTrackInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeManaVideoTrackInfo() {}
// Cross Module References
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FManaVideoTrackInfo();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
	CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EManaMovieType();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
// End Cross Module References
class UScriptStruct* FManaVideoTrackInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CRIWARERUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FManaVideoTrackInfo_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FManaVideoTrackInfo, Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("ManaVideoTrackInfo"), sizeof(FManaVideoTrackInfo), Get_Z_Construct_UScriptStruct_FManaVideoTrackInfo_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FManaVideoTrackInfo(FManaVideoTrackInfo::StaticStruct, TEXT("/Script/CriWareRuntime"), TEXT("ManaVideoTrackInfo"), false, nullptr, nullptr);
static struct FScriptStruct_CriWareRuntime_StaticRegisterNativesFManaVideoTrackInfo
{
	FScriptStruct_CriWareRuntime_StaticRegisterNativesFManaVideoTrackInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ManaVideoTrackInfo")),new UScriptStruct::TCppStructOps<FManaVideoTrackInfo>);
	}
} ScriptStruct_CriWareRuntime_StaticRegisterNativesFManaVideoTrackInfo;
	UScriptStruct* Z_Construct_UScriptStruct_FManaVideoTrackInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FManaVideoTrackInfo_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_CriWareRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ManaVideoTrackInfo"), sizeof(FManaVideoTrackInfo), Get_Z_Construct_UScriptStruct_FManaVideoTrackInfo_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/ManaVideoTrackInfo.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FManaVideoTrackInfo>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "ManaVideoTrackInfo" },
				{ "ModuleRelativePath", "Public/ManaVideoTrackInfo.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type = { UE4CodeGen_Private::EPropertyClass::Enum, "Type", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FManaVideoTrackInfo, Type), Z_Construct_UEnum_CriWareRuntime_EManaMovieType, METADATA_PARAMS(NewProp_Type_MetaData, ARRAY_COUNT(NewProp_Type_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsAlpha_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "ManaVideoTrackInfo" },
				{ "ModuleRelativePath", "Public/ManaVideoTrackInfo.h" },
			};
#endif
			auto NewProp_bIsAlpha_SetBit = [](void* Obj){ ((FManaVideoTrackInfo*)Obj)->bIsAlpha = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsAlpha = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsAlpha", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FManaVideoTrackInfo), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsAlpha_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsAlpha_MetaData, ARRAY_COUNT(NewProp_bIsAlpha_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalFrames_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "ManaVideoTrackInfo" },
				{ "ModuleRelativePath", "Public/ManaVideoTrackInfo.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_TotalFrames = { UE4CodeGen_Private::EPropertyClass::Int, "TotalFrames", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FManaVideoTrackInfo, TotalFrames), METADATA_PARAMS(NewProp_TotalFrames_MetaData, ARRAY_COUNT(NewProp_TotalFrames_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrameRate_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "ManaVideoTrackInfo" },
				{ "ModuleRelativePath", "Public/ManaVideoTrackInfo.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FrameRate = { UE4CodeGen_Private::EPropertyClass::Float, "FrameRate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FManaVideoTrackInfo, FrameRate), METADATA_PARAMS(NewProp_FrameRate_MetaData, ARRAY_COUNT(NewProp_FrameRate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayDimensions_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "ManaVideoTrackInfo" },
				{ "ModuleRelativePath", "Public/ManaVideoTrackInfo.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_DisplayDimensions = { UE4CodeGen_Private::EPropertyClass::Struct, "DisplayDimensions", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FManaVideoTrackInfo, DisplayDimensions), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(NewProp_DisplayDimensions_MetaData, ARRAY_COUNT(NewProp_DisplayDimensions_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureDimensions_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "ManaVideoTrackInfo" },
				{ "ModuleRelativePath", "Public/ManaVideoTrackInfo.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TextureDimensions = { UE4CodeGen_Private::EPropertyClass::Struct, "TextureDimensions", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FManaVideoTrackInfo, TextureDimensions), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(NewProp_TextureDimensions_MetaData, ARRAY_COUNT(NewProp_TextureDimensions_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Type,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Type_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsAlpha,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TotalFrames,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FrameRate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DisplayDimensions,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TextureDimensions,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"ManaVideoTrackInfo",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FManaVideoTrackInfo),
				alignof(FManaVideoTrackInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FManaVideoTrackInfo_CRC() { return 3313719853U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
