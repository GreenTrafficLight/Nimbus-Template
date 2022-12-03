// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AtomSoundObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomSoundObject() {}
// Cross Module References
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomSoundObject_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomSoundObject();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
	void UAtomSoundObject::StaticRegisterNativesUAtomSoundObject()
	{
	}
	UClass* Z_Construct_UClass_UAtomSoundObject_NoRegister()
	{
		return UAtomSoundObject::StaticClass();
	}
	UClass* Z_Construct_UClass_UAtomSoundObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UDataAsset,
				(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "AtomSoundObject.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/AtomSoundObject.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnableCategoryCueLimitScope_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "AtomSoundObject" },
				{ "ModuleRelativePath", "Public/AtomSoundObject.h" },
			};
#endif
			auto NewProp_EnableCategoryCueLimitScope_SetBit = [](void* Obj){ ((UAtomSoundObject*)Obj)->EnableCategoryCueLimitScope = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EnableCategoryCueLimitScope = { UE4CodeGen_Private::EPropertyClass::Bool, "EnableCategoryCueLimitScope", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UAtomSoundObject), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_EnableCategoryCueLimitScope_SetBit)>::SetBit, METADATA_PARAMS(NewProp_EnableCategoryCueLimitScope_MetaData, ARRAY_COUNT(NewProp_EnableCategoryCueLimitScope_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnableVoiceLimitScope_MetaData[] = {
				{ "AllowPrivateAccess", "TRUE" },
				{ "Category", "AtomSoundObject" },
				{ "ModuleRelativePath", "Public/AtomSoundObject.h" },
			};
#endif
			auto NewProp_EnableVoiceLimitScope_SetBit = [](void* Obj){ ((UAtomSoundObject*)Obj)->EnableVoiceLimitScope = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EnableVoiceLimitScope = { UE4CodeGen_Private::EPropertyClass::Bool, "EnableVoiceLimitScope", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UAtomSoundObject), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_EnableVoiceLimitScope_SetBit)>::SetBit, METADATA_PARAMS(NewProp_EnableVoiceLimitScope_MetaData, ARRAY_COUNT(NewProp_EnableVoiceLimitScope_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EnableCategoryCueLimitScope,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EnableVoiceLimitScope,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UAtomSoundObject>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UAtomSoundObject::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00080080u,
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
	IMPLEMENT_CLASS(UAtomSoundObject, 500966423);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAtomSoundObject(Z_Construct_UClass_UAtomSoundObject, &UAtomSoundObject::StaticClass, TEXT("/Script/CriWareRuntime"), TEXT("UAtomSoundObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomSoundObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
