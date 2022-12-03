#pragma once
#include "CoreMinimal.h"
#include "EMissionRank.h"
#include "DifficultyClearRecordSaveData.h"
#include "DifficultySaveData.generated.h"

USTRUCT(BlueprintType)
struct FDifficultySaveData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, SaveGame)
    uint8 DifficultyLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    EMissionRank HighestRank;
    
    UPROPERTY(EditAnywhere, SaveGame)
    uint32 SortieCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FDifficultyClearRecordSaveData> RecordList;
    
public:
    NIMBUS_API FDifficultySaveData();
};

