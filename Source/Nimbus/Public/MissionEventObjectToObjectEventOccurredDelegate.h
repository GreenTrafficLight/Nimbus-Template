#pragma once
#include "CoreMinimal.h"
#include "EMissionCondition_ObjectToObjectEvent.h"
#include "MissionEventObjectToObjectEventOccurredDelegate.generated.h"

class AGameObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FMissionEventObjectToObjectEventOccurred, const AGameObject*, Causer, const AGameObject*, Target, EMissionCondition_ObjectToObjectEvent, Event);

