#pragma once
#include "CoreMinimal.h"
#include "AIComponentBase.h"
#include "AIMihaiComponent.generated.h"

class APlayerPlane;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class NIMBUS_API UAIMihaiComponent : public UAIComponentBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APlayerPlane* PlayerPlane;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AimingSoundHalfAngleMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AimingSoundHalfAngleMin;
    
public:
    UAIMihaiComponent();
    UFUNCTION(BlueprintCallable)
    void StopRailgunCharge();
    
    UFUNCTION(BlueprintCallable)
    void StopRailgunAiming();
    
    UFUNCTION(BlueprintCallable)
    void StartRailgunCharge(float ChargeTime);
    
    UFUNCTION(BlueprintCallable)
    void StartRailgunAiming(float AimingTime);
    
};

