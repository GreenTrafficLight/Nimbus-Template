#pragma once
#include "CoreMinimal.h"
#include "MissileHomingParameters.h"
#include "SODHomingParameters.generated.h"

UCLASS(Blueprintable)
class USODHomingParameters : public UMissileHomingParameters {
    GENERATED_BODY()
public:
    USODHomingParameters();
};

