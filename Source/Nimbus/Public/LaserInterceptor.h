#pragma once
#include "CoreMinimal.h"
#include "AttachedWeapon.h"
#include "LaserInterceptor.generated.h"

class UCurveFloat;

UCLASS(Blueprintable)
class NIMBUS_API ALaserInterceptor : public AAttachedWeapon {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RayDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RayRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InterceptAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SearchInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InterceptTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInertia;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InertiaTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* SwingRateCurve;
    
public:
    ALaserInterceptor();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLifeTimeExpired();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCreateWeaponEnd();
    
};

