#pragma once
#include "CoreMinimal.h"
#include "EOptionsAntialias.generated.h"

UENUM(BlueprintType)
enum class EOptionsAntialias : uint8 {
    None,
    FXAAx2,
    FXAAx4,
};

