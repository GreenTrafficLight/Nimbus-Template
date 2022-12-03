#pragma once
#include "CoreMinimal.h"
#include "MissionEventObjectFireFlareDelegate.generated.h"

class AGameObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FMissionEventObjectFireFlare, const AGameObject*, Causer, int32, RemainingCount);

