#pragma once
#include "CoreMinimal.h"
#include "MissionEventSubmarineEventMovedOnWaterDelegate.generated.h"

class AAIGroundVehicle;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMissionEventSubmarineEventMovedOnWater, const AAIGroundVehicle*, Causer);

