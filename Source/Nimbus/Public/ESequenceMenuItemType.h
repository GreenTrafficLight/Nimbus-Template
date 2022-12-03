#pragma once
#include "CoreMinimal.h"
#include "ESequenceMenuItemType.generated.h"

UENUM(BlueprintType)
enum class ESequenceMenuItemType : uint8 {
    All,
    OnlyNormal,
    OnlySub,
};

