#pragma once
#include "CoreMinimal.h"
#include "MissionEventSubmarineEventCompletedNoseDownDelegate.generated.h"

class AAIGroundVehicle;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMissionEventSubmarineEventCompletedNoseDown, const AAIGroundVehicle*, Causer);

