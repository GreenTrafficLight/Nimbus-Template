#pragma once
#include "CoreMinimal.h"
#include "WeaponMovementComponent.h"
#include "MissileMovementComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class NIMBUS_API UMissileMovementComponent : public UWeaponMovementComponent {
    GENERATED_BODY()
public:
    UMissileMovementComponent();
};

