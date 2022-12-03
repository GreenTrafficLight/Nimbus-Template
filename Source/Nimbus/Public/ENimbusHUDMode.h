#pragma once
#include "CoreMinimal.h"
#include "ENimbusHUDMode.generated.h"

UENUM(BlueprintType)
enum class ENimbusHUDMode : uint8 {
    Default,
    DefaultDisabled,
    EverythingDisabled,
    RestoreToDefault,
    MiniGame,
    Pause,
    Camera,
};

