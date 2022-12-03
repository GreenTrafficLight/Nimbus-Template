#pragma once
#include "CoreMinimal.h"
#include "EMADObservationOption.generated.h"

UENUM(BlueprintType)
enum class EMADObservationOption : uint8 {
    CursorLocation,
    PlayerLocation,
    MAX,
};

