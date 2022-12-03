#pragma once
#include "CoreMinimal.h"
#include "EViewerFlightTrendType.generated.h"

UENUM(BlueprintType)
enum class EViewerFlightTrendType : uint8 {
    FIGHTER,
    MULTI,
    ATTACKER,
    TOTAL,
    NUM,
};

