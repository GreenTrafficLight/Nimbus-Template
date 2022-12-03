#pragma once
#include "CoreMinimal.h"
#include "ESubmarineRailgunState.generated.h"

UENUM(BlueprintType)
enum class ESubmarineRailgunState : uint8 {
    StoredState,
    ExtractState,
    AttackState,
    BrokenState,
    DownState,
};

