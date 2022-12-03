#pragma once
#include "CoreMinimal.h"
#include "KillStats.h"
#include "RecordReplayEventData.generated.h"

USTRUCT(BlueprintType)
struct FRecordReplayEventData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FKillStats> KillStats;
    
    NIMBUS_API FRecordReplayEventData();
};

