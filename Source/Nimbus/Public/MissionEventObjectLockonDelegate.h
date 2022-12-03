#pragma once
#include "CoreMinimal.h"
#include "MissionEventObjectLockonDelegate.generated.h"

class AGameObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FMissionEventObjectLockon, const AGameObject*, Causer, const AGameObject*, LockonTarget);

