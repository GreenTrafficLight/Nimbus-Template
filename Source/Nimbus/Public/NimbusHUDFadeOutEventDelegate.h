#pragma once
#include "CoreMinimal.h"
#include "NimbusHUDFadeOutEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FNimbusHUDFadeOutEvent, float, Duration);

