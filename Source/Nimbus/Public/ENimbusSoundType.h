#pragma once
#include "CoreMinimal.h"
#include "ENimbusSoundType.generated.h"

UENUM(BlueprintType)
enum class ENimbusSoundType : uint8 {
    SFX,
    Voice,
    BGM,
    Count,
};

