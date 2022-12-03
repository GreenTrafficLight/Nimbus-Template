#pragma once
#include "CoreMinimal.h"
#include "EBattleSituation.generated.h"

UENUM(BlueprintType)
enum class EBattleSituation : uint8 {
    Default,
    LowAltitude,
    HighAltitude,
    Dying,
    InClouds,
    InCloudsDying,
    NearClouds,
    NearCloudsDying,
    Count,
};

