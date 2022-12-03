#pragma once
#include "CoreMinimal.h"
#include "EGraphicsScreenPercentageSettings.generated.h"

UENUM(BlueprintType)
enum class EGraphicsScreenPercentageSettings : uint8 {
    Gameplay,
    NonGameplay,
    VRNonGameplay,
    VRGameplay,
    VRAirShow,
    MPGameplay,
    NoChange,
    Count,
};

