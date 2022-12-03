#pragma once
#include "CoreMinimal.h"
#include "EMissionCondition_CloudEvent.h"
#include "MissionEventCloudStateChangedDelegate.generated.h"

class AGameObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FMissionEventCloudStateChanged, const AGameObject*, Causer, EMissionCondition_CloudEvent, CloudEvent);

