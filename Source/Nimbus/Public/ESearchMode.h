#pragma once
#include "CoreMinimal.h"
#include "ESearchMode.generated.h"

UENUM(BlueprintType)
enum class ESearchMode : uint8 {
    Search,
    Aproaching,
    Capture,
};

