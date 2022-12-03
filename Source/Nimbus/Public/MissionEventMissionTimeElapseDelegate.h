#pragma once
#include "CoreMinimal.h"
#include "MissionEventMissionTimeElapseDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FMissionEventMissionTimeElapse, float, ElapsedTime, float, PrevElapsedTime, float, TimeLeft, float, PrevTimeLeft);

