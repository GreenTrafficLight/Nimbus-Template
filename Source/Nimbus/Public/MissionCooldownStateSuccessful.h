#pragma once
#include "CoreMinimal.h"
#include "MissionStateBase.h"
#include "MissionCooldownStateSuccessful.generated.h"

UCLASS(Blueprintable)
class UMissionCooldownStateSuccessful : public UMissionStateBase {
    GENERATED_BODY()
public:
    UMissionCooldownStateSuccessful();
};

