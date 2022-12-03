#pragma once
#include "CoreMinimal.h"
#include "EOptionsDrawPreset.generated.h"

UENUM(BlueprintType)
enum class EOptionsDrawPreset : uint8 {
    Low,
    Middle,
    High,
    Custom,
};

