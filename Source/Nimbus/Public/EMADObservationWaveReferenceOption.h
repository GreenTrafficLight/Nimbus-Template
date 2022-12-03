#pragma once
#include "CoreMinimal.h"
#include "EMADObservationWaveReferenceOption.generated.h"

UENUM(BlueprintType)
enum class EMADObservationWaveReferenceOption : uint8 {
    ObservatRate,
    SeaRate,
    Observat_SeaRate,
    Fixed_1,
    Fixed_0,
    MAX,
};

