#pragma once
#include "CoreMinimal.h"
#include "EPartsSize.generated.h"

UENUM(BlueprintType)
enum class EPartsSize : uint8 {
    PS_None,
    PS_S,
    PS_M,
    PS_L,
    PS_MAX UMETA(Hidden),
};

