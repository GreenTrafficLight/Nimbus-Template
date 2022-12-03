#pragma once
#include "CoreMinimal.h"
#include "MissionEventSubmarineEventCompletedNoseLiftDelegate.generated.h"

class AAIGroundVehicle;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMissionEventSubmarineEventCompletedNoseLift, const AAIGroundVehicle*, Causer);

