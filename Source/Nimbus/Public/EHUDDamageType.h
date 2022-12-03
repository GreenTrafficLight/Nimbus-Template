#pragma once
#include "CoreMinimal.h"
#include "EHUDDamageType.generated.h"

UENUM(BlueprintType)
enum class EHUDDamageType : uint8 {
    GUN,
    MISSILE,
    COLLISION,
};

