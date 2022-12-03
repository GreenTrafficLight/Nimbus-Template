#pragma once
#include "CoreMinimal.h"
#include "ENimbusSoundType.h"
#include "PrePauseBusDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPrePauseBus, ENimbusSoundType, BusType);

