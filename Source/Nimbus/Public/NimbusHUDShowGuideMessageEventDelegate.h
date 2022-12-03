#pragma once
#include "CoreMinimal.h"
#include "EGuideMessageType.h"
#include "NimbusHUDShowGuideMessageEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FNimbusHUDShowGuideMessageEvent, EGuideMessageType, MessageType);

