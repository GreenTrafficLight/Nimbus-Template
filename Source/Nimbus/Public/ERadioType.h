#pragma once
#include "CoreMinimal.h"
#include "ERadioType.generated.h"

UENUM(BlueprintType)
enum class ERadioType : uint8 {
    SCENARIO = 0x1,
    PLAY_BY_PLAY,
    CHATTER = 0x4,
};

