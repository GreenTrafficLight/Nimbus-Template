#pragma once
#include "CoreMinimal.h"
#include "UnitActivationType.generated.h"

UENUM(BlueprintType)
enum class UnitActivationType : uint8 {
    PlacementCoordinates,
    AbsoluteCoordinates,
    WorldOffsetCoordinates,
    LocalOffsetCoordinates,
};

