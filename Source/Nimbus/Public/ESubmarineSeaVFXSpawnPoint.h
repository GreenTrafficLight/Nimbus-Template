#pragma once
#include "CoreMinimal.h"
#include "ESubmarineSeaVFXSpawnPoint.generated.h"

UENUM(BlueprintType)
enum class ESubmarineSeaVFXSpawnPoint : uint8 {
    SeaSurface,
    Socket,
    MAX,
};

