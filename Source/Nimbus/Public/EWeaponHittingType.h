#pragma once
#include "CoreMinimal.h"
#include "EWeaponHittingType.generated.h"

UENUM(BlueprintType)
enum class EWeaponHittingType : uint8 {
    None,
    NeverHitToPlayer_1,
    NeverHitToPlayer_2,
    NeverHitToPlayer_3,
    AlwaysHitToPlayer,
};

