// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/ECustomKeyMouseDevice.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeECustomKeyMouseDevice() {}
// Cross Module References
	CUSTOMKEYMOUSE_API UEnum* Z_Construct_UEnum_CustomKeyMouse_ECustomKeyMouseDevice();
	UPackage* Z_Construct_UPackage__Script_CustomKeyMouse();
// End Cross Module References
	static UEnum* ECustomKeyMouseDevice_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_CustomKeyMouse_ECustomKeyMouseDevice, Z_Construct_UPackage__Script_CustomKeyMouse(), TEXT("ECustomKeyMouseDevice"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECustomKeyMouseDevice(ECustomKeyMouseDevice_StaticEnum, TEXT("/Script/CustomKeyMouse"), TEXT("ECustomKeyMouseDevice"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_CustomKeyMouse_ECustomKeyMouseDevice_CRC() { return 3444643909U; }
	UEnum* Z_Construct_UEnum_CustomKeyMouse_ECustomKeyMouseDevice()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_CustomKeyMouse();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECustomKeyMouseDevice"), 0, Get_Z_Construct_UEnum_CustomKeyMouse_ECustomKeyMouseDevice_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECustomKeyMouseDevice::CKM_DeviceGamepad", (int64)ECustomKeyMouseDevice::CKM_DeviceGamepad },
				{ "ECustomKeyMouseDevice::CKM_DeviceKeyboard", (int64)ECustomKeyMouseDevice::CKM_DeviceKeyboard },
				{ "ECustomKeyMouseDevice::CKM_MAX", (int64)ECustomKeyMouseDevice::CKM_MAX },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CKM_MAX.Hidden", "" },
				{ "ModuleRelativePath", "Public/ECustomKeyMouseDevice.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_CustomKeyMouse,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ECustomKeyMouseDevice",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"ECustomKeyMouseDevice",
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
