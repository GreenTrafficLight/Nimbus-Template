#pragma once
#include "CoreMinimal.h"
#include "MissionEventRadioMessageEndDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FMissionEventRadioMessageEnd, const FString&, RadioGroupID, const FString&, VoiceID, bool, bGroupEnd);

