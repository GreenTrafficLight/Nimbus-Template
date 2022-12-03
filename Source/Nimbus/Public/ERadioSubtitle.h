#pragma once
#include "CoreMinimal.h"
#include "ERadioSubtitle.generated.h"

UENUM(BlueprintType)
enum class ERadioSubtitle : uint8 {
    Default,
    ForceTrue,
    ForceFalse,
    Cinema,
};

