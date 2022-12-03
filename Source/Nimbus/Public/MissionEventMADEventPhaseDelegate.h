#pragma once
#include "CoreMinimal.h"
#include "EMAD_SearchType.h"
#include "MissionEventMADEventPhaseDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMissionEventMADEventPhase, EMAD_SearchType, PhaseType);

