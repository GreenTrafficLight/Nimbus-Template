#pragma once
#include "CoreMinimal.h"
#include "ESeaExplosionSpawnConditions.generated.h"

UENUM(BlueprintType)
enum class ESeaExplosionSpawnConditions : uint8 {
    Hit,
    Slower,
    Faster,
    MAX,
};

