#pragma once
#include "CoreMinimal.h"
#include "ECameraType.h"
#include "CameraViewChangedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCameraViewChangedDelegate, ECameraType, CameraViewType);

