#pragma once
#include "CoreMinimal.h"
#include "EOptionsFrameRate.generated.h"

UENUM(BlueprintType)
enum class EOptionsFrameRate : uint8 {
    Off,
    f288,
    f240,
    f144,
    f120,
    f90,
    f75,
    f60,
};

