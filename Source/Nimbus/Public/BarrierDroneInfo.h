#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BarrierDroneInfo.generated.h"

class AAIHeli;

USTRUCT(BlueprintType)
struct FBarrierDroneInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAIHeli* BarrierDrone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector BaseLocationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SocketIndex;
    
    NIMBUS_API FBarrierDroneInfo();
};

