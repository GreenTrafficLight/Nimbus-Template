#pragma once
#include "CoreMinimal.h"
#include "EMissileHitType.generated.h"

UENUM(BlueprintType)
enum class EMissileHitType : uint8 {
    AutoOptimization,
    Everything,
};

