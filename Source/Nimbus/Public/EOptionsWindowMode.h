#pragma once
#include "CoreMinimal.h"
#include "EOptionsWindowMode.generated.h"

UENUM(BlueprintType)
enum class EOptionsWindowMode : uint8 {
    Fullscreen,
    WindowedFullscreen,
    Windowed,
};

