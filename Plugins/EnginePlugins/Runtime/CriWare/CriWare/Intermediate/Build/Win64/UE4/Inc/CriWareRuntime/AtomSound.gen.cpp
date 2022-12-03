// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AtomSound.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomSound() {}
// Cross Module References
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_AAtomSound_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_AAtomSound();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomComponent_NoRegister();
// End Cross Module References
	void AAtomSound::StaticRegisterNativesAAtomSound()
	{
	}
	UClass* Z_Construct_UClass_AAtomSound_NoRegister()
	{
		return AAtomSound::StaticClass();
	}
	UClass* Z_Construct_UClass_AAtomSound()
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
				{ "IncludePath", "AtomSound.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/AtomSound.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AtomComponent_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "AtomSound" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/AtomSound.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AtomComponent = { UE4CodeGen_Private::EPropertyClass::Object, "AtomComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x001200000008000d, 1, nullptr, STRUCT_OFFSET(AAtomSound, AtomComponent), Z_Construct_UClass_UAtomComponent_NoRegister, METADATA_PARAMS(NewProp_AtomComponent_MetaData, ARRAY_COUNT(NewProp_AtomComponent_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AtomComponent,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AAtomSound>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AAtomSound::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
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
	IMPLEMENT_CLASS(AAtomSound, 129835194);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAtomSound(Z_Construct_UClass_AAtomSound, &AAtomSound::StaticClass, TEXT("/Script/CriWareRuntime"), TEXT("AAtomSound"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAtomSound);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
