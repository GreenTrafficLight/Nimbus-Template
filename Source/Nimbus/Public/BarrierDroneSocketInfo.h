#pragma once
#include "CoreMinimal.h"
#include "BarrierDroneSocketInfo.generated.h"

class AAIHeli;

USTRUCT(BlueprintType)
struct FBarrierDroneSocketInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAIHeli* BarrierDrone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SocketName;
    
    NIMBUS_API FBarrierDroneSocketInfo();
};

