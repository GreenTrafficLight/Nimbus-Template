#pragma once
#include "CoreMinimal.h"
#include "EBulletCollisionCheck.generated.h"

UENUM(BlueprintType)
enum class EBulletCollisionCheck : uint8 {
    SweepMultiSingle,
    SweepThreeSteps,
};

