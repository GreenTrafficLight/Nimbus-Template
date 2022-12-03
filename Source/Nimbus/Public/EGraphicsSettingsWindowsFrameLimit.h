#pragma once
#include "CoreMinimal.h"
#include "EGraphicsSettingsWindowsFrameLimit.generated.h"

UENUM(BlueprintType)
enum class EGraphicsSettingsWindowsFrameLimit : uint8 {
    Off,
    Fps144,
    Fps120,
    Fps90,
    Fps75,
    Fps60,
    Count,
};

