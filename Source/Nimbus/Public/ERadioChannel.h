#pragma once
#include "CoreMinimal.h"
#include "ERadioChannel.generated.h"

UENUM(BlueprintType)
enum class ERadioChannel : uint8 {
    DEFAULT,
    MAIN,
    SUB,
    BOTH,
};

