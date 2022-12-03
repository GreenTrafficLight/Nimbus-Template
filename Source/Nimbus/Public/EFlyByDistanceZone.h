#pragma once
#include "CoreMinimal.h"
#include "EFlyByDistanceZone.generated.h"

UENUM(BlueprintType)
enum class EFlyByDistanceZone : uint8 {
    Z,
    A,
    B,
    C,
    OUTSIDE,
};

