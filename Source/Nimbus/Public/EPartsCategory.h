#pragma once
#include "CoreMinimal.h"
#include "EPartsCategory.generated.h"

UENUM(BlueprintType)
enum class EPartsCategory : uint8 {
    Body,
    Arms,
    Misc,
    Count,
};

