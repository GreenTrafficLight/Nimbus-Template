#pragma once
#include "CoreMinimal.h"
#include "EPlatforms.generated.h"

UENUM(BlueprintType)
enum class EPlatforms : uint8 {
    PlayStation4,
    XboxOne,
    Steam,
    Num,
};

