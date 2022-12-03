#pragma once
#include "CoreMinimal.h"
#include "UnitTaskDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUnitTaskDelegate, bool, bInterrupted);

