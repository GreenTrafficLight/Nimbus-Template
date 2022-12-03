#pragma once
#include "CoreMinimal.h"
#include "MissionEventSubmarineEventMovedUnderWaterDelegate.generated.h"

class AAIGroundVehicle;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMissionEventSubmarineEventMovedUnderWater, const AAIGroundVehicle*, Causer);

