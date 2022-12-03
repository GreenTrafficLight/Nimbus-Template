#pragma once
#include "CoreMinimal.h"
#include "EControllerVibrationSimulationMode.generated.h"

UENUM(BlueprintType)
enum class EControllerVibrationSimulationMode : uint8 {
    NotSimulating,
    PS4,
    XBoxOne,
};

