#pragma once
#include "CoreMinimal.h"
#include "DeathCross.generated.h"

class AStaticMeshActor;

USTRUCT(BlueprintType)
struct FDeathCross {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AStaticMeshActor* Actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Countdown;
    
    NIMBUS_API FDeathCross();
};

