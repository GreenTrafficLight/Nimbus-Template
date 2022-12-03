#pragma once
#include "CoreMinimal.h"
#include "MissionStateBase.h"
#include "MissionReplayState.generated.h"

UCLASS(Blueprintable)
class UMissionReplayState : public UMissionStateBase {
    GENERATED_BODY()
public:
    UMissionReplayState();
};

