#pragma once
#include "CoreMinimal.h"
#include "DifficultyClearRecordSaveData.generated.h"

USTRUCT(BlueprintType)
struct FDifficultyClearRecordSaveData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, SaveGame)
    uint32 CompletionTimeMilli;
    
    UPROPERTY(EditAnywhere, SaveGame)
    uint32 CompletionScore;
    
    UPROPERTY(EditAnywhere, SaveGame)
    uint32 CompletionTimeMilliForRank;
    
public:
    NIMBUS_API FDifficultyClearRecordSaveData();
};

