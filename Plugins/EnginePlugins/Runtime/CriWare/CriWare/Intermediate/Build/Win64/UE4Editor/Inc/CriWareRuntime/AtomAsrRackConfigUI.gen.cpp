// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AtomAsrRackConfigUI.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomAsrRackConfigUI() {}
// Cross Module References
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomAsrRackConfigUI();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
	CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EAtomSoundRendererType();
// End Cross Module References
class UScriptStruct* FAtomAsrRackConfigUI::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CRIWARERUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAtomAsrRackConfigUI_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomAsrRackConfigUI, Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("AtomAsrRackConfigUI"), sizeof(FAtomAsrRackConfigUI), Get_Z_Construct_UScriptStruct_FAtomAsrRackConfigUI_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAtomAsrRackConfigUI(FAtomAsrRackConfigUI::StaticStruct, TEXT("/Script/CriWareRuntime"), TEXT("AtomAsrRackConfigUI"), false, nullptr, nullptr);
static struct FScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomAsrRackConfigUI
{
	FScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomAsrRackConfigUI()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AtomAsrRackConfigUI")),new UScriptStruct::TCppStructOps<FAtomAsrRackConfigUI>);
	}
} ScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomAsrRackConfigUI;
	UScriptStruct* Z_Construct_UScriptStruct_FAtomAsrRackConfigUI()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAtomAsrRackConfigUI_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_CriWareRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AtomAsrRackConfigUI"), sizeof(FAtomAsrRackConfigUI), Get_Z_Construct_UScriptStruct_FAtomAsrRackConfigUI_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/AtomAsrRackConfigUI.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomAsrRackConfigUI>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ElementID_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "AtomAsrRackConfigUI" },
				{ "ModuleRelativePath", "Public/AtomAsrRackConfigUI.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ElementID = { UE4CodeGen_Private::EPropertyClass::Int, "ElementID", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAtomAsrRackConfigUI, ElementID), METADATA_PARAMS(NewProp_ElementID_MetaData, ARRAY_COUNT(NewProp_ElementID_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundRendererTypeUI_MetaData[] = {
				{ "Category", "AtomAsrRackConfigUI" },
				{ "ModuleRelativePath", "Public/AtomAsrRackConfigUI.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_SoundRendererTypeUI = { UE4CodeGen_Private::EPropertyClass::Byte, "SoundRendererTypeUI", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAtomAsrRackConfigUI, SoundRendererTypeUI), Z_Construct_UEnum_CriWareRuntime_EAtomSoundRendererType, METADATA_PARAMS(NewProp_SoundRendererTypeUI_MetaData, ARRAY_COUNT(NewProp_SoundRendererTypeUI_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ElementID,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SoundRendererTypeUI,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AtomAsrRackConfigUI",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FAtomAsrRackConfigUI),
				alignof(FAtomAsrRackConfigUI),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAtomAsrRackConfigUI_CRC() { return 420940344U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
