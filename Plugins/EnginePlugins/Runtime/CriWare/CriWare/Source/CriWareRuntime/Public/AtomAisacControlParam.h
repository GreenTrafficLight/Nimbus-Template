#pragma once
#include "CoreMinimal.h"
#include "AtomAisacControlParam.generated.h"

USTRUCT(BlueprintType)
struct FAtomAisacControlParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    CRIWARERUNTIME_API FAtomAisacControlParam();
};

