#pragma once
#include "CoreMinimal.h"
#include "EMiniGameType.h"
#include "MiniGameCompleteEventDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMiniGameCompleteEventDelegate, EMiniGameType, MiniGameType);

