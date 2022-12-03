#pragma once
#include "CoreMinimal.h"
#include "MissionEventObjectGetBehindDelegate.generated.h"

class AGameObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FMissionEventObjectGetBehind, const AGameObject*, Causer, const AGameObject*, ChaseTarget);

