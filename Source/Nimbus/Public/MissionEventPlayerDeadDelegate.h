#pragma once
#include "CoreMinimal.h"
#include "EMissionCondition_PlayerDeadReason.h"
#include "MissionEventPlayerDeadDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMissionEventPlayerDead, EMissionCondition_PlayerDeadReason, DeadReason);

