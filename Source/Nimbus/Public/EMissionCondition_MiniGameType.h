#pragma once
#include "CoreMinimal.h"
#include "EMissionCondition_MiniGameType.generated.h"

UENUM(BlueprintType)
enum class EMissionCondition_MiniGameType : uint8 {
    None,
    TakeOffFromGround,
    TakeOffFromAircraftCarrier,
    LandingToGround,
    LandingToAircraftCarrier,
    AerialRefuelling,
    EMissionCondition_MAX UMETA(Hidden),
};

