#pragma once
#include "CoreMinimal.h"
#include "DebugRadioItem.generated.h"

USTRUCT(BlueprintType)
struct FDebugRadioItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EndDelay;
    
    NIMBUS_API FDebugRadioItem();
};

