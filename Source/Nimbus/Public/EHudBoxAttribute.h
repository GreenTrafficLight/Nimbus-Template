#pragma once
#include "CoreMinimal.h"
#include "EHudBoxAttribute.generated.h"

UENUM(BlueprintType)
enum class EHudBoxAttribute : uint8 {
    None,
    LockonImpossible,
    Highlight,
    Fake,
    LockonImpossibleAndHighlight,
};

