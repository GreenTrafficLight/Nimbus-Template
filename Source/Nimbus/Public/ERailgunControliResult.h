#pragma once
#include "CoreMinimal.h"
#include "ERailgunControliResult.generated.h"

UENUM(BlueprintType)
enum class ERailgunControliResult : uint8 {
    Hit,
    NotHit,
    OutRange,
    Stop,
    HitMapCollision,
    MAX,
};

