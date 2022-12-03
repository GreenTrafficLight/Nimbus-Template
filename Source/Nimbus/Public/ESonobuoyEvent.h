#pragma once
#include "CoreMinimal.h"
#include "ESonobuoyEvent.generated.h"

UENUM(BlueprintType)
enum class ESonobuoyEvent : uint8 {
    Drop,
    WarterLanding,
    SettleIn,
};

