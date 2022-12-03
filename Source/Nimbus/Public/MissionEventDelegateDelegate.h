#pragma once
#include "CoreMinimal.h"
#include "EMissionEndReason.h"
#include "MissionEventDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMissionEventDelegate, EMissionEndReason, Reason);

