#pragma once
#include "CoreMinimal.h"
#include "ETunnelForcedConditions.generated.h"

UENUM(BlueprintType)
enum class ETunnelForcedConditions : uint8 {
    Overlap,
    Angle,
    AngleYawOnly,
};

