#pragma once
#include "CoreMinimal.h"
#include "MissionEventMissionPhaseStartDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMissionEventMissionPhaseStart, int32, PhaseNo);

