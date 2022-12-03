#pragma once
#include "CoreMinimal.h"
#include "MissionEventMiniGamePlayingTickDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMissionEventMiniGamePlayingTick, float, DeltaSeconds);

