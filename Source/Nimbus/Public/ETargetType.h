#pragma once
#include "CoreMinimal.h"
#include "ETargetType.generated.h"

UENUM(BlueprintType)
enum class ETargetType : uint8 {
    AIR_AND_GROUND,
    AIR_ONLY,
    GROUND_ONLY,
    SPECIAL_ONLY,
};

