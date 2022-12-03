#pragma once
#include "CoreMinimal.h"
#include "EMissionCondition_AzimuthOfClock.generated.h"

UENUM(BlueprintType)
enum class EMissionCondition_AzimuthOfClock : uint8 {
    None,
    Clock_0,
    Clock_1,
    Clock_2,
    Clock_3,
    Clock_4,
    Clock_5,
    Clock_6,
    Clock_7,
    Clock_8,
    Clock_9,
    Clock_10,
    Clock_11,
    EMissionCondition_MAX UMETA(Hidden),
};

