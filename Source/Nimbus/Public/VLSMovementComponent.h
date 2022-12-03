#pragma once
#include "CoreMinimal.h"
#include "MissileMovementComponent.h"
#include "VLSMovementComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class NIMBUS_API UVLSMovementComponent : public UMissileMovementComponent {
    GENERATED_BODY()
public:
    UVLSMovementComponent();
};

