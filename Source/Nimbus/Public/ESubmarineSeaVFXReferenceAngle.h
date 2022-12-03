#pragma once
#include "CoreMinimal.h"
#include "ESubmarineSeaVFXReferenceAngle.generated.h"

UENUM(BlueprintType)
enum class ESubmarineSeaVFXReferenceAngle : uint8 {
    World,
    Socket,
    SocketYaw,
    MAX,
};

