// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AtomTriggerTableFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomTriggerTableFunctionLibrary() {}
// Cross Module References
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomTriggerTableFunctionLibrary_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomTriggerTableFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_UAtomTriggerTableFunctionLibrary_GetDataTableRowFromName();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomTriggerRow();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
// End Cross Module References
	void UAtomTriggerTableFunctionLibrary::StaticRegisterNativesUAtomTriggerTableFunctionLibrary()
	{
		UClass* Class = UAtomTriggerTableFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDataTableRowFromName", (Native)&UAtomTriggerTableFunctionLibrary::execGetDataTableRowFromName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UAtomTriggerTableFunctionLibrary_GetDataTableRowFromName()
	{
		struct AtomTriggerTableFunctionLibrary_eventGetDataTableRowFromName_Parms
		{
			UDataTable* Table;
			FName RowName;
			FAtomTriggerRow OutRow;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((AtomTriggerTableFunctionLibrary_eventGetDataTableRowFromName_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AtomTriggerTableFunctionLibrary_eventGetDataTableRowFromName_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutRow = { UE4CodeGen_Private::EPropertyClass::Struct, "OutRow", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(AtomTriggerTableFunctionLibrary_eventGetDataTableRowFromName_Parms, OutRow), Z_Construct_UScriptStruct_FAtomTriggerRow, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_RowName = { UE4CodeGen_Private::EPropertyClass::Name, "RowName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AtomTriggerTableFunctionLibrary_eventGetDataTableRowFromName_Parms, RowName), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Table = { UE4CodeGen_Private::EPropertyClass::Object, "Table", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AtomTriggerTableFunctionLibrary_eventGetDataTableRowFromName_Parms, Table), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutRow,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RowName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Table,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AtomTriggerTableFunctionLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomTriggerTableFunctionLibrary, "GetDataTableRowFromName", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(AtomTriggerTableFunctionLibrary_eventGetDataTableRowFromName_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAtomTriggerTableFunctionLibrary_NoRegister()
	{
		return UAtomTriggerTableFunctionLibrary::StaticClass();
	}
	UClass* Z_Construct_UClass_UAtomTriggerTableFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
				(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UAtomTriggerTableFunctionLibrary_GetDataTableRowFromName, "GetDataTableRowFromName" }, // 375729540
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "AtomTriggerTableFunctionLibrary.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/AtomTriggerTableFunctionLibrary.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UAtomTriggerTableFunctionLibrary>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UAtomTriggerTableFunctionLibrary::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAtomTriggerTableFunctionLibrary, 3553617588);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAtomTriggerTableFunctionLibrary(Z_Construct_UClass_UAtomTriggerTableFunctionLibrary, &UAtomTriggerTableFunctionLibrary::StaticClass, TEXT("/Script/CriWareRuntime"), TEXT("UAtomTriggerTableFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomTriggerTableFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
