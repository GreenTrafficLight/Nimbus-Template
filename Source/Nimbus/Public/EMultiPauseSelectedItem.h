#pragma once
#include "CoreMinimal.h"
#include "EMultiPauseSelectedItem.generated.h"

UENUM(BlueprintType)
enum class EMultiPauseSelectedItem : uint8 {
    Resume,
    Quit,
    Option,
    Vibration,
    Pause_Count,
};

