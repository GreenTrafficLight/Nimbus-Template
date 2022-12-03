#pragma once
#include "CoreMinimal.h"
#include "ERectennaBarrierState.generated.h"

UENUM(BlueprintType)
enum class ERectennaBarrierState : uint8 {
    RingSpawn,
    RingMove,
    RingEnd,
    BarrierIn,
    BarrierIn_EndWait,
    BarrierActive,
    BarrierFade,
};

