#pragma once
#include "CoreMinimal.h"
#include "EMissionReward.generated.h"

UENUM(BlueprintType)
enum class EMissionReward : uint8 {
    Medal,
    Skin,
    Emblem,
    Nickname,
};

