#pragma once
#include "CoreMinimal.h"
#include "WeaponTypeSaveData.h"
#include "AircraftTypeSaveData.h"
#include "CampaignProgressionSaveData.generated.h"

USTRUCT(BlueprintType)
struct FCampaignProgressionSaveData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FAircraftTypeSaveData> AircraftTypeRecords;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FWeaponTypeSaveData> WeaponTypeRecords;
    
private:
    UPROPERTY(EditAnywhere, SaveGame)
    uint32 CompletionCount;
    
    UPROPERTY(EditAnywhere, SaveGame)
    uint64 MRP;
    
    UPROPERTY(EditAnywhere, SaveGame)
    uint64 AccumulatedMRP;
    
public:
    NIMBUS_API FCampaignProgressionSaveData();
};

