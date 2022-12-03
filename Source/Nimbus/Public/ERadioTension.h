#pragma once
#include "CoreMinimal.h"
#include "ERadioTension.generated.h"

UENUM(BlueprintType)
enum class ERadioTension : uint8 {
    NONE,
    NORMAL,
    HIGH,
    LOW,
    COUNT,
};

