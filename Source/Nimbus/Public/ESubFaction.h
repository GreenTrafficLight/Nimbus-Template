#pragma once
#include "CoreMinimal.h"
#include "ESubFaction.generated.h"

UENUM(BlueprintType)
enum class ESubFaction : uint8 {
    EnemyA,
    EnemyB,
    AllyC,
    None,
};

