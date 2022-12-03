#pragma once
#include "CoreMinimal.h"
#include "EBulletHitType.generated.h"

UENUM(BlueprintType)
enum class EBulletHitType : uint8 {
    AutoOptimization,
    Everything,
};

