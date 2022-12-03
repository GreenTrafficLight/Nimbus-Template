#pragma once
#include "CoreMinimal.h"
#include "EMissionCategory.generated.h"

UENUM(BlueprintType)
enum class EMissionCategory : uint8 {
    Campaign,
    FreeFlight,
    Online,
    VR,
    AirShowVR,
    FreeFlightVR,
    Test,
};

