#pragma once
#include "CoreMinimal.h"
#include "ESearchTargetMoveState.generated.h"

UENUM(BlueprintType)
enum class ESearchTargetMoveState : uint8 {
    Move_1to2,
    Wait_2,
    Move_2to1,
    Wait_1,
};

