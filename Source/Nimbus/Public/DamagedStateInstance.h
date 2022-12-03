#pragma once
#include "CoreMinimal.h"
#include "DamagedVFXInfo.h"
#include "DamagedStateInstance.generated.h"

USTRUCT(BlueprintType)
struct FDamagedStateInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RemainingHealthPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDamagedVFXInfo> DamagedVFXList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToLive;
    
    NIMBUS_API FDamagedStateInstance();
};

