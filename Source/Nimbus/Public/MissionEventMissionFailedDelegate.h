#pragma once
#include "CoreMinimal.h"
#include "EMissionCondition_FailureType.h"
#include "MissionEventMissionFailedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMissionEventMissionFailed, EMissionCondition_FailureType, FailureType);

