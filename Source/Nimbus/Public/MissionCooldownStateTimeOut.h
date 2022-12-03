#pragma once
#include "CoreMinimal.h"
#include "MissionStateBase.h"
#include "MissionCooldownStateTimeOut.generated.h"

UCLASS(Blueprintable)
class UMissionCooldownStateTimeOut : public UMissionStateBase {
    GENERATED_BODY()
public:
    UMissionCooldownStateTimeOut();
};

