#pragma once
#include "CoreMinimal.h"
#include "EGameObjectCategory.generated.h"

UENUM(BlueprintType)
enum class EGameObjectCategory : uint8 {
    Category_None,
    Category_Plane,
    Category_Heli,
    Category_Vehicle,
    Category_Building,
    Category_Battery,
    Category_CarrierBattery,
    Category_Ship,
    Category_MAX UMETA(Hidden),
};

