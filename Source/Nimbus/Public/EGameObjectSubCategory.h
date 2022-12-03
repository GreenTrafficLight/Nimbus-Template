#pragma once
#include "CoreMinimal.h"
#include "EGameObjectSubCategory.generated.h"

UENUM(BlueprintType)
enum class EGameObjectSubCategory : uint8 {
    SubCategory_None,
    SubCategory_Fighter,
    SubCategory_Attacker,
    SubCategory_Multirole,
    SubCategory_LargePlane,
    SubCategory_Heli,
    SubCategory_AAGun,
    SubCategory_SAM,
    SubCategory_Tank,
    SubCategory_Bomber,
    SubCategory_UAV,
    SubCategory_APC,
    SubCategory_FrigateShip,
    SubCategory_Cruiser,
    SubCategory_Facility,
    SubCategory_GunTower,
    SubCategory_MissileSilo,
    SubCategory_RadioExceptionObject,
    SubCategory_FAS,
    SubCategory_BigPropeller,
    SubCategory_Platform,
    SubCategory_CIWS,
    SubCategory_Alicorn,
    SubCategory_MAX UMETA(Hidden),
};

