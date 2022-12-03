#pragma once
#include "CoreMinimal.h"
#include "MissionEventUnitActivatedDelegate.generated.h"

class AUnit;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMissionEventUnitActivated, const AUnit*, Unit);

