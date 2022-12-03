#pragma once
#include "CoreMinimal.h"
#include "BombMovementComponent.h"
#include "SFFSBombMovementComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class NIMBUS_API USFFSBombMovementComponent : public UBombMovementComponent {
    GENERATED_BODY()
public:
    USFFSBombMovementComponent();
};

