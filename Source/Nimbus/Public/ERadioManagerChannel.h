#pragma once
#include "CoreMinimal.h"
#include "ERadioManagerChannel.generated.h"

UENUM(BlueprintType)
enum class ERadioManagerChannel : uint8 {
    Main,
    Sub,
    COUNT,
};

