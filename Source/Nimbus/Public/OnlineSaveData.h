#pragma once
#include "CoreMinimal.h"
#include "CampaignProgressionSaveData.h"
#include "AircraftSetSaveData.h"
#include "MPStageSaveData.h"
#include "UObject/NoExportTypes.h"
#include "OnlineSaveData.generated.h"

USTRUCT(BlueprintType)
struct FOnlineSaveData : public FCampaignProgressionSaveData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FAircraftSetSaveData> AircraftSets;
    
    UPROPERTY(EditAnywhere, SaveGame)
    TArray<uint8> SortieAircraftHistory;
    
    UPROPERTY(EditAnywhere, SaveGame)
    int8 AircraftSetInLastBattle;
    
    UPROPERTY(EditAnywhere, SaveGame)
    uint32 FirstPlacingCountInBattleRoyal;
    
    UPROPERTY(EditAnywhere, SaveGame)
    uint32 MVPCountInTeamDeathMatch;
    
    UPROPERTY(EditAnywhere, SaveGame)
    uint32 VictoryCountInTeamDeathMatch;
    
    UPROPERTY(EditAnywhere, SaveGame)
    TArray<uint32> MedalEvaluationCount;
    
    UPROPERTY(EditAnywhere, SaveGame)
    uint32 MatchMakingRanking;
    
    UPROPERTY(EditAnywhere, SaveGame)
    uint32 RankingPoint;
    
    UPROPERTY(EditAnywhere, SaveGame)
    uint8 RankID;
    
    UPROPERTY(EditAnywhere, SaveGame)
    uint32 AceLevel;
    
    UPROPERTY(EditAnywhere, SaveGame)
    TArray<uint16> InstantRadioSetup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<int32> ChatHistoryID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FMPStageSaveData> StageRecords;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FDateTime CreationDateTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FDateTime LastSavedDateTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FDateTime CreationDateTimeUTC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FDateTime LastSavedDateTimeUTC;
    
public:
    NIMBUS_API FOnlineSaveData();
};

