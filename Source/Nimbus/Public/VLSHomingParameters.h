#pragma once
#include "CoreMinimal.h"
#include "MissileHomingParameters.h"
#include "VLSHomingParameters.generated.h"

UCLASS(Blueprintable)
class UVLSHomingParameters : public UMissileHomingParameters {
    GENERATED_BODY()
public:
    UVLSHomingParameters();
};

