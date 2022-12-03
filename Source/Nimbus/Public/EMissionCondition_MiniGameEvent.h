#pragma once
#include "CoreMinimal.h"
#include "EMissionCondition_MiniGameEvent.generated.h"

UENUM(BlueprintType)
enum class EMissionCondition_MiniGameEvent : uint8 {
    None,
    Begin,
    Success_RankS,
    Success_RankA,
    Success_RankB,
    Success_RankC,
    Success_RankD,
    Failure_Crashed,
    Failure_DestroyedByGameObject,
    Failure_TimeOver,
    Failure_OutOfArea,
    StartRefuelingProbeStart,
    StartRefuelingProbeEnd,
    EMissionCondition_MAX UMETA(Hidden),
};

