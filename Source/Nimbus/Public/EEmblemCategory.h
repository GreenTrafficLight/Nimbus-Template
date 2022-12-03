#pragma once
#include "CoreMinimal.h"
#include "EEmblemCategory.generated.h"

UENUM(BlueprintType)
enum class EEmblemCategory : uint8 {
    Normal,
    Design,
    Collaboration,
    Count,
};

