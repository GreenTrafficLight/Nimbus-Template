#pragma once
#include "CoreMinimal.h"
#include "Bullet.h"
#include "Plsl_Bullet.generated.h"

class UParticleSystem;

UCLASS(Blueprintable)
class NIMBUS_API APlsl_Bullet : public ABullet {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCloudCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* CloudHitParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SurvivalGuaranteeTime;
    
public:
    APlsl_Bullet();
};

