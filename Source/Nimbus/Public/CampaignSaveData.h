#pragma once
#include "CoreMinimal.h"
#include "CampaignProgressionSaveData.h"
#include "EGameDifficulty.h"
#include "AircraftSetSaveData.h"
#include "MissionSaveData.h"
#include "CampaignSaveData.generated.h"

USTRUCT(BlueprintType)
struct FCampaignSaveData : public FCampaignProgressionSaveData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 LastCompletedMissionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    EGameDifficulty LastGameDifficulty;
    
    UPROPERTY(EditAnywhere, SaveGame)
    uint64 AccumulatedScore;
    
    UPROPERTY(EditAnywhere, SaveGame)
    TMap<uint32, uint64> AccumulatedScoreByMission;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FMissionSaveData> CompletedMissionList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<int32> UnlockedMissionIdList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<int32> UnlockedFreeMissionIdList;
    
    UPROPERTY(EditAnywhere, SaveGame)
    TArray<uint32> DefeatedPilotDataID;
    
    UPROPERTY(EditAnywhere, SaveGame)
    TArray<uint32> SeenPilotDataID;
    
    UPROPERTY(EditAnywhere, SaveGame)
    TArray<uint32> UnlockedSceneID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FAircraftSetSaveData> AircraftSets;
    
    UPROPERTY(EditAnywhere, SaveGame)
    uint16 FeatureFlagMask;
    
    UPROPERTY(EditAnywhere, SaveGame)
    uint32 FeatureNotificationFlagMask;
    
    UPROPERTY(EditAnywhere, SaveGame)
    uint8 MiscFlagMask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 LastSortingAircraftId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 VeryEasyFlag;
    
public:
    NIMBUS_API FCampaignSaveData();
};

