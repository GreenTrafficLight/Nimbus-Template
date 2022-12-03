#pragma once
#include "CoreMinimal.h"
#include "MapLoadedEventDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMapLoadedEventDelegate, FName, PackageName);

