#pragma once
#include "CoreMinimal.h"
#include "EPlaneCategory.h"
#include "AircraftTypeSaveData.generated.h"

USTRUCT(BlueprintType)
struct FAircraftTypeSaveData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 PlaneID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    EPlaneCategory PlaneCategory;
    
    UPROPERTY(EditAnywhere, SaveGame)
    uint64 FlightDistance;
    
    UPROPERTY(EditAnywhere, SaveGame)
    uint64 FlightTimeMilli;
    
    UPROPERTY(EditAnywhere, SaveGame)
    uint32 SortieCount;
    
    UPROPERTY(EditAnywhere, SaveGame)
    uint32 EnemyPlayerDestroyedCount;
    
    UPROPERTY(EditAnywhere, SaveGame)
    uint32 AerialEnemyDestroyedCount;
    
    UPROPERTY(EditAnywhere, SaveGame)
    uint32 GroundEnemyDestroyedCount;
    
    UPROPERTY(EditAnywhere, SaveGame)
    uint32 UAVEnemyDestroyedCount;
    
    UPROPERTY(EditAnywhere, SaveGame)
    uint32 NavalEnemyDestroyedCount;
    
    UPROPERTY(EditAnywhere, SaveGame)
    uint32 HelicopterEnemyDestroyedCount;
    
    UPROPERTY(EditAnywhere, SaveGame)
    uint32 AirObjectDestroyedCount;
    
public:
    NIMBUS_API FAircraftTypeSaveData();
};

