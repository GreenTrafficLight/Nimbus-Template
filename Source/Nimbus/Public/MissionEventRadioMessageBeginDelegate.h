#pragma once
#include "CoreMinimal.h"
#include "MissionEventRadioMessageBeginDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FMissionEventRadioMessageBegin, const FString&, RadioGroupID, const FString&, VoiceID);

