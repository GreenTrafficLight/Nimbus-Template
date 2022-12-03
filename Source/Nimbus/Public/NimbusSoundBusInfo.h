#pragma once
#include "CoreMinimal.h"
#include "NimbusSoundBusInfo.generated.h"

USTRUCT(BlueprintType)
struct FNimbusSoundBusInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 BusVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsBusBlocked;
    
    NIMBUS_API FNimbusSoundBusInfo();
};

