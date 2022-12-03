#pragma once
#include "CoreMinimal.h"
#include "EMenuBGMState.generated.h"

UENUM(BlueprintType)
enum class EMenuBGMState : uint8 {
    Normal,
    Online,
    OnlineHangar,
    OnlineLobby,
    Campaign,
    VRHangar,
    VRHangarPhase2,
    VRHangarPhase3,
    VRHangarPhase4,
};

