#pragma once
#include "CoreMinimal.h"
#include "DebugRequeueingWaitTimeGroup.generated.h"

USTRUCT(BlueprintType)
struct FDebugRequeueingWaitTimeGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RequeueingWaitTime;
    
    NIMBUS_API FDebugRequeueingWaitTimeGroup();
};

