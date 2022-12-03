#pragma once
#include "CoreMinimal.h"
#include "DamagedStateInstance.h"
#include "SubmarineDamagedStateVfxPendingInfo.h"
#include "SubmarineDamagedStateInstance.generated.h"

USTRUCT(BlueprintType)
struct FSubmarineDamagedStateInstance : public FDamagedStateInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSubmarineDamagedStateVfxPendingInfo> PendingVfxList;
    
    NIMBUS_API FSubmarineDamagedStateInstance();
};

