#pragma once
#include "CoreMinimal.h"
#include "Plsl_Bullet.h"
#include "BulletUAV.generated.h"

UCLASS(Blueprintable)
class NIMBUS_API ABulletUAV : public APlsl_Bullet {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MultiDamage;
    
public:
    ABulletUAV();
};

