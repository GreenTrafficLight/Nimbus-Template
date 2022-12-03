#pragma once
#include "CoreMinimal.h"
#include "MPStageSaveData.generated.h"

USTRUCT(BlueprintType)
struct FMPStageSaveData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, SaveGame)
    uint32 StageID;
    
    UPROPERTY(EditAnywhere, SaveGame)
    uint32 Destroys[2];
    
    UPROPERTY(EditAnywhere, SaveGame)
    uint32 SortieCounts[2];
    
    UPROPERTY(EditAnywhere, SaveGame)
    uint64 TotalScores[2];
    
    UPROPERTY(EditAnywhere, SaveGame)
    uint64 AccumulatedMMR[2];
    
public:
    NIMBUS_API FMPStageSaveData();
};

