#pragma once
#include "CoreMinimal.h"
#include "MissileMovementParameters.h"
#include "SSMissileMovementParameters.generated.h"

UCLASS(Blueprintable)
class USSMissileMovementParameters : public UMissileMovementParameters {
    GENERATED_BODY()
public:
    USSMissileMovementParameters();
};

