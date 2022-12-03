#pragma once
#include "CoreMinimal.h"
#include "EOptionsScreenSetting.generated.h"

UENUM(BlueprintType)
enum class EOptionsScreenSetting : uint8 {
    Borderless,
    Fullscreen,
    Window,
};

