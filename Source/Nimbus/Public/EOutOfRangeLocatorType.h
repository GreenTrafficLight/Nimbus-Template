#pragma once
#include "CoreMinimal.h"
#include "EOutOfRangeLocatorType.generated.h"

UENUM(BlueprintType)
enum class EOutOfRangeLocatorType : uint8 {
    Enemy,
    Unknown,
    TGT,
    HighlightedAlly,
};

