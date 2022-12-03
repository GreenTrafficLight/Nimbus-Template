#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RecordReplayEventData.h"
#include "MissionResultData.generated.h"

UCLASS(Blueprintable)
class NIMBUS_API UMissionResultData : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRecordReplayEventData EventData;
    
public:
    UMissionResultData();
};

