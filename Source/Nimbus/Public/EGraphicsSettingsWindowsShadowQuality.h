#pragma once
#include "CoreMinimal.h"
#include "EGraphicsSettingsWindowsShadowQuality.generated.h"

UENUM(BlueprintType)
enum class EGraphicsSettingsWindowsShadowQuality : uint8 {
    Low,
    Middle,
    High,
    Count,
};

