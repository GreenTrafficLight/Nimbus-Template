#pragma once
#include "CoreMinimal.h"
#include "EAIPlaneSpecialActionTrigger.generated.h"

UENUM(BlueprintType)
enum class EAIPlaneSpecialActionTrigger : uint8 {
    Always,
    OneShot,
    TargetInRange,
    SpecifiedObjectIsAttacked,
};

