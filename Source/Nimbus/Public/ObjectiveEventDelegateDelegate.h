#pragma once
#include "CoreMinimal.h"
#include "ObjectiveEventDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FObjectiveEventDelegate, int32, PhaseIndex, const FString&, Name, bool, Successful);

