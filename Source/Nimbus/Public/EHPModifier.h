#pragma once
#include "CoreMinimal.h"
#include "EHPModifier.generated.h"

UENUM(BlueprintType)
enum class EHPModifier : uint8 {
    AbsoluteValue,
    PercentOfMax,
    PercentOfCurrent,
};

