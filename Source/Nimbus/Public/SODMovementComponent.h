#pragma once
#include "CoreMinimal.h"
#include "MissileMovementComponent.h"
#include "SODMovementComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class NIMBUS_API USODMovementComponent : public UMissileMovementComponent {
    GENERATED_BODY()
public:
    USODMovementComponent();
};

