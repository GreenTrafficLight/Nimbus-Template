#pragma once
#include "CoreMinimal.h"
#include "ESystemLineType.generated.h"

UENUM(BlueprintType)
enum class ESystemLineType : uint8 {
    ReturnLine,
    PulloutLine,
};

