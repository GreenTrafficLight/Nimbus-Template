// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/MatineeTrackInstAtom.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMatineeTrackInstAtom() {}
// Cross Module References
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UMatineeTrackInstAtom_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UMatineeTrackInstAtom();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInst();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UMatineeTrackAtomSoundBase_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomComponent_NoRegister();
// End Cross Module References
	void UMatineeTrackInstAtom::StaticRegisterNativesUMatineeTrackInstAtom()
	{
	}
	UClass* Z_Construct_UClass_UMatineeTrackInstAtom_NoRegister()
	{
		return UMatineeTrackInstAtom::StaticClass();
	}
	UClass* Z_Construct_UClass_UMatineeTrackInstAtom()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UInterpTrackInst,
				(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "MatineeTrackInstAtom.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/MatineeTrackInstAtom.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AtomTrack_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "MatineeTrackInstAtom" },
				{ "ModuleRelativePath", "Public/MatineeTrackInstAtom.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AtomTrack = { UE4CodeGen_Private::EPropertyClass::Object, "AtomTrack", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002005, 1, nullptr, STRUCT_OFFSET(UMatineeTrackInstAtom, AtomTrack), Z_Construct_UClass_UMatineeTrackAtomSoundBase_NoRegister, METADATA_PARAMS(NewProp_AtomTrack_MetaData, ARRAY_COUNT(NewProp_AtomTrack_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AtomComponent_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "MatineeTrackInstAtom" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/MatineeTrackInstAtom.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AtomComponent = { UE4CodeGen_Private::EPropertyClass::Object, "AtomComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x001200000008200d, 1, nullptr, STRUCT_OFFSET(UMatineeTrackInstAtom, AtomComponent), Z_Construct_UClass_UAtomComponent_NoRegister, METADATA_PARAMS(NewProp_AtomComponent_MetaData, ARRAY_COUNT(NewProp_AtomComponent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastUpdatePosition_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "MatineeTrackInstAtom" },
				{ "ModuleRelativePath", "Public/MatineeTrackInstAtom.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LastUpdatePosition = { UE4CodeGen_Private::EPropertyClass::Float, "LastUpdatePosition", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMatineeTrackInstAtom, LastUpdatePosition), METADATA_PARAMS(NewProp_LastUpdatePosition_MetaData, ARRAY_COUNT(NewProp_LastUpdatePosition_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AtomTrack,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AtomComponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LastUpdatePosition,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMatineeTrackInstAtom>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMatineeTrackInstAtom::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00800080u,
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
	IMPLEMENT_CLASS(UMatineeTrackInstAtom, 1981928188);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMatineeTrackInstAtom(Z_Construct_UClass_UMatineeTrackInstAtom, &UMatineeTrackInstAtom::StaticClass, TEXT("/Script/CriWareRuntime"), TEXT("UMatineeTrackInstAtom"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMatineeTrackInstAtom);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
