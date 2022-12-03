#pragma once
#include "CoreMinimal.h"
#include "EManeuverSpeedType.generated.h"

UENUM(BlueprintType)
enum class EManeuverSpeedType : uint8 {
    SPD_CONSTANT,
    SPD_CRUISE,
    SPD_RELATIVE,
    SPD_NO_ADJUSTMENT,
    SPD_MAX UMETA(Hidden),
};

