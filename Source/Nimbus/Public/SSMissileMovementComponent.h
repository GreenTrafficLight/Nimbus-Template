#pragma once
#include "CoreMinimal.h"
#include "MissileMovementComponent.h"
#include "SSMissileMovementComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class NIMBUS_API USSMissileMovementComponent : public UMissileMovementComponent {
    GENERATED_BODY()
public:
    USSMissileMovementComponent();
};

