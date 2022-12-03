#pragma once
#include "CoreMinimal.h"
#include "EMiniGameCameraType.generated.h"

UENUM(BlueprintType)
enum class EMiniGameCameraType : uint8 {
    BeginLanding,
    BeginTakeoff,
    EndTakeoff,
    BeginAerialRefuelling,
    EndAerialRefuelling,
    WeaponChange,
    Max,
};

