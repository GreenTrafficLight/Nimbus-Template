#pragma once
#include "CoreMinimal.h"
#include "EDescriptionTextState.generated.h"

UENUM(BlueprintType)
enum class EDescriptionTextState : uint8 {
    SHOWDEFAULTONLY,
    SHOWDEFAULTANDSUBITEM,
};

