#pragma once
#include "CoreMinimal.h"
#include "ENimbusSoundType.h"
#include "PreUnpauseBusDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPreUnpauseBus, ENimbusSoundType, BusType);

