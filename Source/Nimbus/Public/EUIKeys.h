#pragma once
#include "CoreMinimal.h"
#include "EUIKeys.generated.h"

UENUM(BlueprintType)
enum class EUIKeys : uint8 {
    None,
    Accept,
    Cancel,
    View,
    Options,
    Skip,
    Any,
    Up,
    Down,
    Left,
    Right,
    RSUp,
    RSDown,
    RSLeft,
    RSRight,
    LeftTab,
    RightTab,
    LeftTrigger,
    RightTrigger,
    LeftStick,
    RightStick,
    RemoveKeyAssign,
    CancelKeyAssign,
    All,
    Num,
};

