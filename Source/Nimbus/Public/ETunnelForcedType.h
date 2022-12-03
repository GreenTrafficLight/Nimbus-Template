#pragma once
#include "CoreMinimal.h"
#include "ETunnelForcedType.generated.h"

UENUM(BlueprintType)
enum class ETunnelForcedType : uint8 {
    Normal,
    Near,
    Far,
    MAX,
};

