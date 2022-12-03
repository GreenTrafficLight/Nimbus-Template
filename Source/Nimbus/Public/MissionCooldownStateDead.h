#pragma once
#include "CoreMinimal.h"
#include "MissionCooldownStateDeadBase.h"
#include "MissionCooldownStateDead.generated.h"

UCLASS(Blueprintable)
class UMissionCooldownStateDead : public UMissionCooldownStateDeadBase {
    GENERATED_BODY()
public:
    UMissionCooldownStateDead();
};

