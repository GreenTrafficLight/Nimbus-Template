#pragma once
#include "CoreMinimal.h"
#include "EWeaponNumber.generated.h"

UENUM(BlueprintType)
enum class EWeaponNumber : uint8 {
    WN_WEAPON_1,
    WN_WEAPON_2,
    WN_WEAPON_3,
    WN_WEAPON_MAX UMETA(Hidden),
};

