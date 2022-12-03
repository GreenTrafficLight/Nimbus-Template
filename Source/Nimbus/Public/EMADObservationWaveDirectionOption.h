#pragma once
#include "CoreMinimal.h"
#include "EMADObservationWaveDirectionOption.generated.h"

UENUM(BlueprintType)
enum class EMADObservationWaveDirectionOption : uint8 {
    Angle90,
    Angle180,
    MAX,
};

