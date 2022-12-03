#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ENimbusPingType.h"
#include "NimbusRadarPing.generated.h"

class AGameObject;

USTRUCT(BlueprintType)
struct FNimbusRadarPing {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGameObject* ObjectToPing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PingPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENimbusPingType PingType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowContainerName;
    
    NIMBUS_API FNimbusRadarPing();
};

