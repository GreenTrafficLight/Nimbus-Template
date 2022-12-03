#pragma once
#include "CoreMinimal.h"
#include "EMiniGameType.h"
#include "MiniGameStartEventDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMiniGameStartEventDelegate, EMiniGameType, MiniGameType);

