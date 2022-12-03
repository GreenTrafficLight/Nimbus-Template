#pragma once
#include "CoreMinimal.h"
#include "ERegions.generated.h"

UENUM(BlueprintType)
enum class ERegions : uint8 {
    WorldWide,
    UnitedStates,
    Europe,
    Asia,
    Japan,
    Num,
};

