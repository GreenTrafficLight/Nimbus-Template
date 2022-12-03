#pragma once
#include "CoreMinimal.h"
#include "MissileMovementParameters.h"
#include "SODMovementParameters.generated.h"

UCLASS(Blueprintable)
class USODMovementParameters : public UMissileMovementParameters {
    GENERATED_BODY()
public:
    USODMovementParameters();
};

