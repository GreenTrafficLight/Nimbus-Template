#pragma once
#include "CoreMinimal.h"
#include "AtomCueNameTrackKeyframe.generated.h"

USTRUCT(BlueprintType)
struct FAtomCueNameTrackKeyframe {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CueName;
    
    CRIWARERUNTIME_API FAtomCueNameTrackKeyframe();
};

