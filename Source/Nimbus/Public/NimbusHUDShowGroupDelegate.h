#pragma once
#include "CoreMinimal.h"
#include "NimbusHUDShowGroupDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FNimbusHUDShowGroup, int32, Group);

