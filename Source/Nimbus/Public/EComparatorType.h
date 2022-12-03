#pragma once
#include "CoreMinimal.h"
#include "EComparatorType.generated.h"

UENUM(BlueprintType)
enum class EComparatorType : uint8 {
    Less,
    LessOrEqual,
    Equal,
    NotEqual,
    GreaterOrEqual,
    Greater,
};

