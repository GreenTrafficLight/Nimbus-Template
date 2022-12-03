#pragma once
#include "CoreMinimal.h"
#include "WeaponMovementComponent.h"
#include "BombMovementComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class NIMBUS_API UBombMovementComponent : public UWeaponMovementComponent {
    GENERATED_BODY()
public:
    UBombMovementComponent();
};

