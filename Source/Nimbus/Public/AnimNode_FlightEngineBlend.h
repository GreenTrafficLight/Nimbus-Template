#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNodeBase.h"
#include "BoneOverrideSequence.h"
#include "FlightEngineMainSequence.h"
#include "AnimNode_FlightEngineBlend.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct NIMBUS_API FAnimNode_FlightEngineBlend : public FAnimNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsCockpitAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* BoneConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFlightEngineMainSequence SequenceConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBoneOverrideSequence> OverrideSequences;
    
    FAnimNode_FlightEngineBlend();
};

