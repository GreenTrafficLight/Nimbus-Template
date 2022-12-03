#pragma once
#include "CoreMinimal.h"
#include "EMissionRank.h"
#include "DifficultySaveData.h"
#include "DifficultyClearRecordSaveData.h"
#include "MissionSaveData.generated.h"

USTRUCT(BlueprintType)
struct FMissionSaveData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 MissionID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FDifficultySaveData> DifficultyList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bIsDamaged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bIsUsedMissile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    EMissionRank LastRank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FDifficultyClearRecordSaveData LastRecord;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bIsMiniGameAccomplished;
    
public:
    NIMBUS_API FMissionSaveData();
};

