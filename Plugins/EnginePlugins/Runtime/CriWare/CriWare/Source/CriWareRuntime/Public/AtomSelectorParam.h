#pragma once
#include "CoreMinimal.h"
#include "AtomSelectorParam.generated.h"

USTRUCT(BlueprintType)
struct FAtomSelectorParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString selector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Label;
    
    CRIWARERUNTIME_API FAtomSelectorParam();
};

