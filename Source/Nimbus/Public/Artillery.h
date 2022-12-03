#pragma once
#include "CoreMinimal.h"
#include "ExplosiveWeapon.h"
#include "Artillery.generated.h"

UCLASS(Abstract, Blueprintable)
class NIMBUS_API AArtillery : public AExplosiveWeapon {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpreadRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetOffsetZ;
    
public:
    AArtillery();
};

