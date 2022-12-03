#pragma once
#include "CoreMinimal.h"
#include "EMissionCondition_MultiplayerEvent.h"
#include "MissionEventChangedMultiplayerStateDelegate.generated.h"

class AGameObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FMissionEventChangedMultiplayerState, const AGameObject*, Causer, EMissionCondition_MultiplayerEvent, Event);

