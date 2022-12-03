#pragma once
#include "CoreMinimal.h"
#include "ENimbusSoundOutputMode.generated.h"

UENUM(BlueprintType)
enum class ENimbusSoundOutputMode : uint8 {
    NONE,
    Non_VR,
    VR,
    VR_AIRSHOW,
    Num,
};

