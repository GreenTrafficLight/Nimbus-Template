#pragma once
#include "CoreMinimal.h"
#include "EHangarPlaneLoadingStage.generated.h"

UENUM(BlueprintType)
enum class EHangarPlaneLoadingStage : uint8 {
    HP_STAGE_IDLE,
    HP_STAGE_LOAD,
    HP_STAGE_SPAWN,
    HP_STAGE_MAX UMETA(Hidden),
};

