#pragma once
#include "CoreMinimal.h"
#include "MinigameRandomStartPosParam.generated.h"

USTRUCT(BlueprintType)
struct FMinigameRandomStartPosParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float YMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float YMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ZMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ZMax;
    
    NIMBUS_API FMinigameRandomStartPosParam();
};

