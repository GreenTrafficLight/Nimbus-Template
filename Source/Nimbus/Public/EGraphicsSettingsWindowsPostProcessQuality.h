#pragma once
#include "CoreMinimal.h"
#include "EGraphicsSettingsWindowsPostProcessQuality.generated.h"

UENUM(BlueprintType)
enum class EGraphicsSettingsWindowsPostProcessQuality : uint8 {
    Low,
    Middle,
    High,
    Count,
};

