#pragma once
#include "CoreMinimal.h"
#include "EMLBullet.h"
#include "EMLBullet_Mihai.generated.h"

UCLASS(Blueprintable)
class NIMBUS_API AEMLBullet_Mihai : public AEMLBullet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayerOnly_TwoHitWillDie;
    
    AEMLBullet_Mihai();
};

