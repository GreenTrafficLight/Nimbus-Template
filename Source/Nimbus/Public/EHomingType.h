#pragma once
#include "CoreMinimal.h"
#include "EHomingType.generated.h"

UENUM(BlueprintType)
enum class EHomingType : uint8 {
    ACTIVE_RADAR,
    INFRARED,
    SEMI_ACTIVE,
};

