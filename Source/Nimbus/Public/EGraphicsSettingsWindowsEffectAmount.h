#pragma once
#include "CoreMinimal.h"
#include "EGraphicsSettingsWindowsEffectAmount.generated.h"

UENUM(BlueprintType)
enum class EGraphicsSettingsWindowsEffectAmount : uint8 {
    Low,
    Middle,
    High,
    Count,
};

