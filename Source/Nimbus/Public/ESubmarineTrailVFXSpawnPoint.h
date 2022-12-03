#pragma once
#include "CoreMinimal.h"
#include "ESubmarineTrailVFXSpawnPoint.generated.h"

UENUM(BlueprintType)
enum class ESubmarineTrailVFXSpawnPoint : uint8 {
    Socket,
    SeaSurface,
    FitHeightSea,
    MAX,
};

