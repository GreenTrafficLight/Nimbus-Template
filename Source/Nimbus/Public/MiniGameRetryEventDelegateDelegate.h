#pragma once
#include "CoreMinimal.h"
#include "EMiniGameType.h"
#include "MiniGameRetryEventDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMiniGameRetryEventDelegate, EMiniGameType, MiniGameType);

