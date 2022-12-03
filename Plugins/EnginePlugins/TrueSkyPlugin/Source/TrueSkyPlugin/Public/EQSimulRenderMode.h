#pragma once
#include "CoreMinimal.h"
#include "EQSimulRenderMode.generated.h"

UENUM(BlueprintType)
enum class EQSimulRenderMode : uint8 {
    Default,
    Reproject,
    Checkerboard,
    VRMultiRes,
};

