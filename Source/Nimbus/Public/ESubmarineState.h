#pragma once
#include "CoreMinimal.h"
#include "ESubmarineState.generated.h"

UENUM(BlueprintType)
enum class ESubmarineState : uint8 {
    OnWater,
    Diving,
    UnderWater,
    Surface,
};

