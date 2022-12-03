#pragma once
#include "CoreMinimal.h"
#include "EAIPathMovingActorSnap.generated.h"

UENUM(BlueprintType)
enum class EAIPathMovingActorSnap : uint8 {
    ObjectSetting,
    NotSnap,
    Snap,
};

