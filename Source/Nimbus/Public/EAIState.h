#pragma once
#include "CoreMinimal.h"
#include "EAIState.generated.h"

UENUM(BlueprintType)
enum class EAIState : uint8 {
    ReturnToWorld,
    AvoidObstacle,
    ReturnToUnit,
    SpecialAction,
    AttackAvoidance,
    EscapeFromPursuer,
    Provoke,
    MoveAwayFromTarget,
    PursueTarget,
    FollowFormation,
    Patrol,
    Idle,
};

