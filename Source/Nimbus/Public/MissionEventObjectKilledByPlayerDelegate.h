#pragma once
#include "CoreMinimal.h"
#include "ESubFaction.h"
#include "MissionEventObjectKilledByPlayerDelegate.generated.h"

class AGameObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FMissionEventObjectKilledByPlayer, const AGameObject*, Causer, ESubFaction, SubFaction);

