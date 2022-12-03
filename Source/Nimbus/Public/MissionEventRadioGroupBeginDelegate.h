#pragma once
#include "CoreMinimal.h"
#include "MissionEventRadioGroupBeginDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMissionEventRadioGroupBegin, const FString&, RadioGroupID);

