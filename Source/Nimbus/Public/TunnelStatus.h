#pragma once
#include "CoreMinimal.h"
#include "TunnelStatus.generated.h"

class APlayerPlane;

USTRUCT(BlueprintType)
struct FTunnelStatus {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerPlane* Owner;
    
public:
    NIMBUS_API FTunnelStatus();
};

