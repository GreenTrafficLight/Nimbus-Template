#pragma once
#include "CoreMinimal.h"
#include "AtomCueIdTrackKeyframe.generated.h"

USTRUCT(BlueprintType)
struct FAtomCueIdTrackKeyframe {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CueId;
    
    CRIWARERUNTIME_API FAtomCueIdTrackKeyframe();
};

