#pragma once
#include "CoreMinimal.h"
#include "IGCEnableDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGCEnableDelegate, bool, bEnabled);

