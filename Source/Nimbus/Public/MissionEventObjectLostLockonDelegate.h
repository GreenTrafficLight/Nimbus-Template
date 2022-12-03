#pragma once
#include "CoreMinimal.h"
#include "EMissionCondition_LostLockonCause.h"
#include "MissionEventObjectLostLockonDelegate.generated.h"

class AGameObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FMissionEventObjectLostLockon, const AGameObject*, Causer, const AGameObject*, LockonTarget, EMissionCondition_LostLockonCause, Cause);

