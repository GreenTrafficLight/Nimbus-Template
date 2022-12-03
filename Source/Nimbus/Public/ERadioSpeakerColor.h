#pragma once
#include "CoreMinimal.h"
#include "ERadioSpeakerColor.generated.h"

UENUM(BlueprintType)
enum class ERadioSpeakerColor : uint8 {
    SpeakerColor_Ally,
    SpeakerColor_Enemy,
    SpeakerColor_Neutral,
    COUNT,
};

