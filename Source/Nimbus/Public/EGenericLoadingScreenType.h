#pragma once
#include "CoreMinimal.h"
#include "EGenericLoadingScreenType.generated.h"

UENUM(BlueprintType)
enum class EGenericLoadingScreenType : uint8 {
    Plane,
    Tip,
    Weapon,
    Word,
    Count,
};

