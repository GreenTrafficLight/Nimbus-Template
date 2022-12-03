#pragma once
#include "CoreMinimal.h"
#include "ETGTP_PhaseType.h"
#include "MissionEventTGTPEventPhaseDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMissionEventTGTPEventPhase, ETGTP_PhaseType, PhaseType);

