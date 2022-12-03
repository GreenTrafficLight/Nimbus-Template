#pragma once
#include "CoreMinimal.h"
#include "MissionStateBase.h"
#include "MissionCooldownStateFailObjective.generated.h"

UCLASS(Blueprintable)
class UMissionCooldownStateFailObjective : public UMissionStateBase {
    GENERATED_BODY()
public:
    UMissionCooldownStateFailObjective();
};

