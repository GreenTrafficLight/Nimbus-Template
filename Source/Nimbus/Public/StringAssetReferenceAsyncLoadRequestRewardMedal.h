#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "StringAssetReferenceAsyncLoadRequestRewardMedal.generated.h"

USTRUCT(BlueprintType)
struct FStringAssetReferenceAsyncLoadRequestRewardMedal {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath Req;
    
    NIMBUS_API FStringAssetReferenceAsyncLoadRequestRewardMedal();
};

