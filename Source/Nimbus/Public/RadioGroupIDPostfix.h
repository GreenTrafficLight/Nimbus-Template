#pragma once
#include "CoreMinimal.h"
#include "RadioGroupIDPostfix.generated.h"

USTRUCT(BlueprintType)
struct FRadioGroupIDPostfix {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString KeySpeakerID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RadioGroupIDPostfix;
    
    NIMBUS_API FRadioGroupIDPostfix();
};

