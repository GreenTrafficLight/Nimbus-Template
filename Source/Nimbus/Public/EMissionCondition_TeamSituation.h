#pragma once
#include "CoreMinimal.h"
#include "EMissionCondition_TeamSituation.generated.h"

UENUM(BlueprintType)
enum class EMissionCondition_TeamSituation : uint8 {
    None,
    Win,
    Lose,
    Draw,
    EMissionCondition_MAX UMETA(Hidden),
};

