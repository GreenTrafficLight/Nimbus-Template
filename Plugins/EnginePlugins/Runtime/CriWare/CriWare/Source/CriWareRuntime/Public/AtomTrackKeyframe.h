#pragma once
#include "CoreMinimal.h"
#include "AtomTrackKeyframe.generated.h"

class USoundAtomCue;

USTRUCT(BlueprintType)
struct FAtomTrackKeyframe {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* Cue;
    
    CRIWARERUNTIME_API FAtomTrackKeyframe();
};

