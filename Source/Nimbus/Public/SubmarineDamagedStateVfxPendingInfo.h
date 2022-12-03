#pragma once
#include "CoreMinimal.h"
#include "SubmarineDamagedStateVfxPendingInfo.generated.h"

USTRUCT(BlueprintType)
struct FSubmarineDamagedStateVfxPendingInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Timer;
    
    NIMBUS_API FSubmarineDamagedStateVfxPendingInfo();
};

