#pragma once
#include "CoreMinimal.h"
#include "EMissionCondition_MiniGameEvent.h"
#include "MissionEventMiniGameEventOccurredDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMissionEventMiniGameEventOccurred, EMissionCondition_MiniGameEvent, Event);

