#pragma once
#include "CoreMinimal.h"
#include "CheckPointLoadedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCheckPointLoadedDelegate, const FString&, CheckPointName);

