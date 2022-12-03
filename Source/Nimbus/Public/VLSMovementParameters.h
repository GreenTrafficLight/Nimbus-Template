#pragma once
#include "CoreMinimal.h"
#include "MissileMovementParameters.h"
#include "VLSMovementParameters.generated.h"

UCLASS(Blueprintable)
class UVLSMovementParameters : public UMissileMovementParameters {
    GENERATED_BODY()
public:
    UVLSMovementParameters();
};

