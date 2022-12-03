#pragma once
#include "CoreMinimal.h"
#include "EPrepareState.generated.h"

UENUM(BlueprintType)
enum class EPrepareState : uint8 {
    PLAYERNOTREADY,
    PLAYERPREPARING,
    PLAYERDELAY,
    PLAYERPLAYING,
};

