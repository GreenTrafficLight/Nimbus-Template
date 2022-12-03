#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "StringAssetReferenceAsyncLoadRequest.generated.h"

USTRUCT(BlueprintType)
struct FStringAssetReferenceAsyncLoadRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath Req;
    
    NIMBUS_API FStringAssetReferenceAsyncLoadRequest();
};

