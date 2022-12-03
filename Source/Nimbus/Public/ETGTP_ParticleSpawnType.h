#pragma once
#include "CoreMinimal.h"
#include "ETGTP_ParticleSpawnType.generated.h"

UENUM(BlueprintType)
enum class ETGTP_ParticleSpawnType : uint8 {
    HitLocation,
    HeightOuterCircumference,
    TagNotHit,
    ETGTP_MAX UMETA(Hidden),
};

