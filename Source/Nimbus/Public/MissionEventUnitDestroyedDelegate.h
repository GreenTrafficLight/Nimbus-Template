#pragma once
#include "CoreMinimal.h"
#include "MissionEventUnitDestroyedDelegate.generated.h"

class AUnit;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMissionEventUnitDestroyed, const AUnit*, Unit);

