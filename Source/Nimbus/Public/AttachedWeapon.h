#pragma once
#include "CoreMinimal.h"
#include "WeaponBase.h"
#include "AttachedWeapon.generated.h"

class USceneComponent;

UCLASS(Abstract, Blueprintable)
class NIMBUS_API AAttachedWeapon : public AWeaponBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsBaseAttached;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* AttachedComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttachedSocketName;
    
public:
    AAttachedWeapon();
};

