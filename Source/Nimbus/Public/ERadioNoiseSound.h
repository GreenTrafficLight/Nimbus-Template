#pragma once
#include "CoreMinimal.h"
#include "ERadioNoiseSound.generated.h"

UENUM(BlueprintType)
enum class ERadioNoiseSound : uint8 {
    AWACS,
    PLANE,
    GROUND,
    PLANE_DEATH,
    GROUND_DEATH,
    NEWS,
    PLANE_DEATH_HARD,
    COUNT_CRASH_LANDING,
    COUNT,
};

