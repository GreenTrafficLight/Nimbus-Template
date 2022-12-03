#pragma once
#include "CoreMinimal.h"
#include "ERadioNoise.generated.h"

UENUM(BlueprintType)
enum class ERadioNoise : uint8 {
    ALL,
    BEFORE,
    AFTER,
    NONE,
    COUNT,
};

