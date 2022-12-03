#pragma once
#include "CoreMinimal.h"
#include "EHUDDamageType.h"
#include "NimbusHUDDamageEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FNimbusHUDDamageEvent, EHUDDamageType, DamageType);

