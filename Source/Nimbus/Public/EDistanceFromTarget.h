#pragma once
#include "CoreMinimal.h"
#include "EDistanceFromTarget.generated.h"

UENUM(BlueprintType)
enum class EDistanceFromTarget : uint8 {
    DistFar,
    DistNear,
    DistVeryNear,
    DistWithinExplosion,
};

