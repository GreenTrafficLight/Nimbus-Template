#pragma once
#include "CoreMinimal.h"
#include "EGraphicsSettingsWindowsScreenMode.generated.h"

UENUM(BlueprintType)
enum class EGraphicsSettingsWindowsScreenMode : uint8 {
    Borderless,
    FullScreen,
    Window,
    Count,
};

