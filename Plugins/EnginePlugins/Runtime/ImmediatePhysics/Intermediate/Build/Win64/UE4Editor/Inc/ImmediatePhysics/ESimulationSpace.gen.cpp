// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/ESimulationSpace.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESimulationSpace() {}
// Cross Module References
	IMMEDIATEPHYSICS_API UEnum* Z_Construct_UEnum_ImmediatePhysics_ESimulationSpace();
	UPackage* Z_Construct_UPackage__Script_ImmediatePhysics();
// End Cross Module References
	static UEnum* ESimulationSpace_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ImmediatePhysics_ESimulationSpace, Z_Construct_UPackage__Script_ImmediatePhysics(), TEXT("ESimulationSpace"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESimulationSpace(ESimulationSpace_StaticEnum, TEXT("/Script/ImmediatePhysics"), TEXT("ESimulationSpace"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ImmediatePhysics_ESimulationSpace_CRC() { return 2097284773U; }
	UEnum* Z_Construct_UEnum_ImmediatePhysics_ESimulationSpace()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ImmediatePhysics();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESimulationSpace"), 0, Get_Z_Construct_UEnum_ImmediatePhysics_ESimulationSpace_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESimulationSpace::ComponentSpace", (int64)ESimulationSpace::ComponentSpace },
				{ "ESimulationSpace::WorldSpace", (int64)ESimulationSpace::WorldSpace },
				{ "ESimulationSpace::RootBoneSpace", (int64)ESimulationSpace::RootBoneSpace },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/ESimulationSpace.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ImmediatePhysics,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ESimulationSpace",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"ESimulationSpace",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
