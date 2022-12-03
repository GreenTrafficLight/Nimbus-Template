#pragma once
#include "CoreMinimal.h"
#include "MissionEventTimeElapseSinceEnteredCloudDelegate.generated.h"

class AGameObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FMissionEventTimeElapseSinceEnteredCloud, const AGameObject*, Causer, float, ElapsedTime, float, PrevElapsedTime);

