#pragma once
#include "CoreMinimal.h"
#include "EMissionCondition_ObjectEvent.h"
#include "MissionEventObjectEventOccurredDelegate.generated.h"

class AGameObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FMissionEventObjectEventOccurred, const AGameObject*, Causer, EMissionCondition_ObjectEvent, Event);

