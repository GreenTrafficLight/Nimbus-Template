#pragma once
#include "CoreMinimal.h"
#include "EMissionCondition_BattleRoyalSituation.generated.h"

UENUM(BlueprintType)
enum class EMissionCondition_BattleRoyalSituation : uint8 {
    None,
    Booby,
    EMissionCondition_MAX UMETA(Hidden),
};

