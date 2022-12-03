#pragma once
#include "CoreMinimal.h"
#include "EMultiNonUISFX.generated.h"

UENUM(BlueprintType)
enum class EMultiNonUISFX : uint8 {
    MultiChatReceived,
    MultiRadarPing,
    MultiOvertake1st,
};

