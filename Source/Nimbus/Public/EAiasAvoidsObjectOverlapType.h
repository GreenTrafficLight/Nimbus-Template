#pragma once
#include "CoreMinimal.h"
#include "EAiasAvoidsObjectOverlapType.generated.h"

UENUM(BlueprintType)
enum class EAiasAvoidsObjectOverlapType : uint8 {
    None,
    Approach,
    Upper,
    Middle,
    Lower,
};

