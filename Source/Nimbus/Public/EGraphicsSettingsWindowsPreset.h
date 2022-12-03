#pragma once
#include "CoreMinimal.h"
#include "EGraphicsSettingsWindowsPreset.generated.h"

UENUM(BlueprintType)
enum class EGraphicsSettingsWindowsPreset : uint8 {
    Low,
    Middle,
    High,
    Custom,
    Count,
};

