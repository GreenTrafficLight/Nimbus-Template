#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Missile.h"
#include "Missile_FinallySpawnWeapon.generated.h"

class AWeaponBase;

UCLASS(Abstract, Blueprintable)
class NIMBUS_API AMissile_FinallySpawnWeapon : public AMissile {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AWeaponBase> ImpactSpawnWeaponClass;
    
    AMissile_FinallySpawnWeapon();
};

