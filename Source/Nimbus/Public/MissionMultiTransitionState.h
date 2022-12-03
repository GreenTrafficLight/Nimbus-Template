#pragma once
#include "CoreMinimal.h"
#include "MissionTransitionStateBase.h"
#include "MissionMultiTransitionState.generated.h"

UCLASS(Blueprintable)
class UMissionMultiTransitionState : public UMissionTransitionStateBase {
    GENERATED_BODY()
public:
    UMissionMultiTransitionState();
};

