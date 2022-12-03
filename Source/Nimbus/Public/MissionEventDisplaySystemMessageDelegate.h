#pragma once
#include "CoreMinimal.h"
#include "EMissionCondition_SystemMessageType.h"
#include "MissionEventDisplaySystemMessageDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMissionEventDisplaySystemMessage, EMissionCondition_SystemMessageType, MessageType);

