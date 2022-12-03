#pragma once
#include "CoreMinimal.h"
#include "PhaseCompleteEventDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPhaseCompleteEventDelegate, bool, Successful);

