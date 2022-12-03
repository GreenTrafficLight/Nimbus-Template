#pragma once
#include "CoreMinimal.h"
#include "MissionEventObjectFoundTargetDelegate.generated.h"

class AGameObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FMissionEventObjectFoundTarget, const AGameObject*, Causer, const AGameObject*, TrackingTarget);

