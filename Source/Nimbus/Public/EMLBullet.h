#pragma once
#include "CoreMinimal.h"
#include "Bullet.h"
#include "EMLBullet.generated.h"

UCLASS(Blueprintable)
class NIMBUS_API AEMLBullet : public ABullet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NeverHitToPlayer_FrontLengthMeter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DeviationShootingLengthLimitTime;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LoadTimeModifier_MP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageModifier_MP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RayRadius;
    
public:
    AEMLBullet();
};

