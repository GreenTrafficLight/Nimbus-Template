#pragma once
#include "CoreMinimal.h"
#include "EMinigameRank.h"
#include "MinigameTimeBonus.generated.h"

USTRUCT(BlueprintType)
struct FMinigameTimeBonus {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Score;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMinigameRank RankEvent;
    
    NIMBUS_API FMinigameTimeBonus();
};

