#pragma once
#include "CoreMinimal.h"
#include "EEngagement.generated.h"

UENUM(BlueprintType)
enum class EEngagement : uint8 {
    None,
    Attack,
    AttackOnly,
    ProvokeEvadeOnly,
    EvadeOnly,
    TransitAttackOnly,
    TransitAttackAndEvade,
};

