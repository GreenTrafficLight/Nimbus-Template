#pragma once
#include "CoreMinimal.h"
#include "MissionTransitionStateBase.h"
#include "MiniGameTransitionState.generated.h"

UCLASS(Blueprintable)
class UMiniGameTransitionState : public UMissionTransitionStateBase {
    GENERATED_BODY()
public:
    UMiniGameTransitionState();
};

