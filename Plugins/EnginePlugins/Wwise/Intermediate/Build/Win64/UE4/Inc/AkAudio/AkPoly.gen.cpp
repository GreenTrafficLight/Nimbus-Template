// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AkPoly.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkPoly() {}
// Cross Module References
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkPoly();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAcousticTexture_NoRegister();
// End Cross Module References
class UScriptStruct* FAkPoly::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AKAUDIO_API uint32 Get_Z_Construct_UScriptStruct_FAkPoly_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkPoly, Z_Construct_UPackage__Script_AkAudio(), TEXT("AkPoly"), sizeof(FAkPoly), Get_Z_Construct_UScriptStruct_FAkPoly_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAkPoly(FAkPoly::StaticStruct, TEXT("/Script/AkAudio"), TEXT("AkPoly"), false, nullptr, nullptr);
static struct FScriptStruct_AkAudio_StaticRegisterNativesFAkPoly
{
	FScriptStruct_AkAudio_StaticRegisterNativesFAkPoly()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AkPoly")),new UScriptStruct::TCppStructOps<FAkPoly>);
	}
} ScriptStruct_AkAudio_StaticRegisterNativesFAkPoly;
	UScriptStruct* Z_Construct_UScriptStruct_FAkPoly()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAkPoly_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AkPoly"), sizeof(FAkPoly), Get_Z_Construct_UScriptStruct_FAkPoly_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/AkPoly.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkPoly>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnableSurface_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "AkPoly" },
				{ "ModuleRelativePath", "Public/AkPoly.h" },
			};
#endif
			auto NewProp_EnableSurface_SetBit = [](void* Obj){ ((FAkPoly*)Obj)->EnableSurface = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EnableSurface = { UE4CodeGen_Private::EPropertyClass::Bool, "EnableSurface", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FAkPoly), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_EnableSurface_SetBit)>::SetBit, METADATA_PARAMS(NewProp_EnableSurface_MetaData, ARRAY_COUNT(NewProp_EnableSurface_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "AkPoly" },
				{ "ModuleRelativePath", "Public/AkPoly.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Texture = { UE4CodeGen_Private::EPropertyClass::Object, "Texture", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAkPoly, Texture), Z_Construct_UClass_UAkAcousticTexture_NoRegister, METADATA_PARAMS(NewProp_Texture_MetaData, ARRAY_COUNT(NewProp_Texture_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EnableSurface,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Texture,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AkPoly",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FAkPoly),
				alignof(FAkPoly),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAkPoly_CRC() { return 3552381083U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
