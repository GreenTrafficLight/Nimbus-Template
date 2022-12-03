#pragma once
#include "CoreMinimal.h"
#include "ESubmarineRailgunEvent.h"
#include "MissionEventSubmarineEventRailgunStateDelegate.generated.h"

class AAIGroundVehicle;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FMissionEventSubmarineEventRailgunState, const AAIGroundVehicle*, Causer, ESubmarineRailgunEvent, Event);

