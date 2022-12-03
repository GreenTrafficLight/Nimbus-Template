#pragma once
#include "CoreMinimal.h"
#include "MissionEventDisplayTargetLocatorDelegate.generated.h"

class AGameObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMissionEventDisplayTargetLocator, const AGameObject*, Target);

