#pragma once
#include "CoreMinimal.h"
#include "AtomSelectorTrackKeyframe.generated.h"

USTRUCT(BlueprintType)
struct FAtomSelectorTrackKeyframe {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SelectorLabel;
    
    CRIWARERUNTIME_API FAtomSelectorTrackKeyframe();
};

