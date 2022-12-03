#pragma once
#include "CoreMinimal.h"
#include "ESonobuoyEvent.h"
#include "MissionEventSonobuoyEventOccurredDelegate.generated.h"

class ASystemObjectSonobuoy;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FMissionEventSonobuoyEventOccurred, const ASystemObjectSonobuoy*, Causer, ESonobuoyEvent, Event);

