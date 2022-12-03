#pragma once
#include "CoreMinimal.h"
#include "BoneOverrideSequence.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct NIMBUS_API FBoneOverrideSequence {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* OverrideSequence;
    
    FBoneOverrideSequence();
};

