#pragma once
#include "CoreMinimal.h"
#include "ESelectionAssistType.generated.h"

UENUM(BlueprintType)
enum class ESelectionAssistType : uint8 {
    NONE,
    UNGUIDED_MGP,
    UNGUIDED_RKT,
    SEMI_ACTIVE,
};

