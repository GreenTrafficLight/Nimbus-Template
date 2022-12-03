#pragma once
#include "CoreMinimal.h"
#include "EGraphicsSettingsWindowsAntiAliasing.generated.h"

UENUM(BlueprintType)
enum class EGraphicsSettingsWindowsAntiAliasing : uint8 {
    Off,
    FXAAx2,
    FXAAx4,
    Count,
};

