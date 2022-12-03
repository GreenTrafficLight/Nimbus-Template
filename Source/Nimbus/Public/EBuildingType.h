#pragma once
#include "CoreMinimal.h"
#include "EBuildingType.generated.h"

UENUM(BlueprintType)
enum class EBuildingType : uint8 {
    Normal,
    LargePlatform,
    OilTank,
    DerelictBuilding,
};

