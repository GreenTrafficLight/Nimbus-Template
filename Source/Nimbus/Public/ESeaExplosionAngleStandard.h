#pragma once
#include "CoreMinimal.h"
#include "ESeaExplosionAngleStandard.generated.h"

UENUM(BlueprintType)
enum class ESeaExplosionAngleStandard : uint8 {
    World,
    Socket,
    SocketYaw,
    MAX,
};

