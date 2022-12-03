// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AtomSoundData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomSoundData() {}
// Cross Module References
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_AAtomSoundData_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_AAtomSoundData();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_USoundAtomCueSheet_NoRegister();
// End Cross Module References
	void AAtomSoundData::StaticRegisterNativesAAtomSoundData()
	{
	}
	UClass* Z_Construct_UClass_AAtomSoundData_NoRegister()
	{
		return AAtomSoundData::StaticClass();
	}
	UClass* Z_Construct_UClass_AAtomSoundData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "AtomSoundData.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/AtomSoundData.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CueSheet_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "AtomSoundData" },
				{ "ModuleRelativePath", "Public/AtomSoundData.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CueSheet = { UE4CodeGen_Private::EPropertyClass::Object, "CueSheet", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AAtomSoundData, CueSheet), Z_Construct_UClass_USoundAtomCueSheet_NoRegister, METADATA_PARAMS(NewProp_CueSheet_MetaData, ARRAY_COUNT(NewProp_CueSheet_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CueSheet,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AAtomSoundData>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AAtomSoundData::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00880080u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAtomSoundData, 3868956122);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAtomSoundData(Z_Construct_UClass_AAtomSoundData, &AAtomSoundData::StaticClass, TEXT("/Script/CriWareRuntime"), TEXT("AAtomSoundData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAtomSoundData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
