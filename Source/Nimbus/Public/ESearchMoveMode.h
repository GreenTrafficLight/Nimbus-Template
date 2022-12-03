#pragma once
#include "CoreMinimal.h"
#include "ESearchMoveMode.generated.h"

UENUM(BlueprintType)
enum class ESearchMoveMode : uint8 {
    Move_Yaw,
    Move_Pitch,
    Stop,
};

