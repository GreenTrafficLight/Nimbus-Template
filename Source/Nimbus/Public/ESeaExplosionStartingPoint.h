#pragma once
#include "CoreMinimal.h"
#include "ESeaExplosionStartingPoint.generated.h"

UENUM(BlueprintType)
enum class ESeaExplosionStartingPoint : uint8 {
    SeaSurface,
    Socket,
    MAX,
};

