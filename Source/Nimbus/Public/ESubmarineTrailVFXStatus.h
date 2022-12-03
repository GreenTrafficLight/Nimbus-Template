#pragma once
#include "CoreMinimal.h"
#include "ESubmarineTrailVFXStatus.generated.h"

UENUM(BlueprintType)
enum class ESubmarineTrailVFXStatus : uint8 {
    Normal,
    NoseLift,
    Move,
    Stop,
    All,
    MAX,
};

