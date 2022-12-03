#pragma once
#include "CoreMinimal.h"
#include "TransitionToMiniGameDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTransitionToMiniGameDelegate, bool, bIsTransitingIn);

