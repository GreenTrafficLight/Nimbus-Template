#pragma once
#include "CoreMinimal.h"
#include "ELockonState.generated.h"

UENUM(BlueprintType)
enum class ELockonState : uint8 {
    NoTarget,
    TargetDetecting,
    Started,
    Locked,
    LockedEnteredCloud,
    LockingInCloud,
    Jammed,
};

