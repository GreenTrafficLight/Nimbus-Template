#pragma once
#include "CoreMinimal.h"
#include "EGraphicsSettingsWindowsTextureQuality.generated.h"

UENUM(BlueprintType)
enum class EGraphicsSettingsWindowsTextureQuality : uint8 {
    Low,
    Middle,
    High,
    Count,
};

