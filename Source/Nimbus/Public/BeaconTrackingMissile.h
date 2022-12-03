#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Missile.h"
#include "BeaconTrackingMissile.generated.h"

class AWeaponBase;
class AGameObject;

UCLASS(Blueprintable)
class NIMBUS_API ABeaconTrackingMissile : public AMissile {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AWeaponBase> SpawnWeaponClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HitRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NoLockExplosionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsBeaconSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FallDelaySeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeliosRadioForeWarnTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeliosRadioFadeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeliosRadioMaxWaitTime;
    
private:
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<AGameObject> FirstTarget;
    
public:
    ABeaconTrackingMissile();
};

