#pragma once
#include "CoreMinimal.h"
#include "EOptionsAnisotropicFilter.generated.h"

UENUM(BlueprintType)
enum class EOptionsAnisotropicFilter : uint8 {
    None,
    X2,
    X4,
    X8,
    X16,
};

