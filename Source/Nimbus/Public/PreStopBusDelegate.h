#pragma once
#include "CoreMinimal.h"
#include "ENimbusSoundType.h"
#include "PreStopBusDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPreStopBus, ENimbusSoundType, BusType);

