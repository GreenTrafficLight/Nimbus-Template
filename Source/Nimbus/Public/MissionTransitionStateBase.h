#pragma once
#include "CoreMinimal.h"
#include "MissionStateBase.h"
#include "MissionTransitionStateBase.generated.h"

UCLASS(Blueprintable)
class UMissionTransitionStateBase : public UMissionStateBase {
    GENERATED_BODY()
public:
    UMissionTransitionStateBase();
};

