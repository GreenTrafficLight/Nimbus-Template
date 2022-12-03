#pragma once
#include "CoreMinimal.h"
#include "EMissionHitchLevel.generated.h"

UENUM(BlueprintType)
enum class EMissionHitchLevel : uint8 {
    None,
    Caution,
    Warning,
    Max,
};

