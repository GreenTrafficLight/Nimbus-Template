#pragma once
#include "CoreMinimal.h"
#include "WeaponTypeSaveData.generated.h"

USTRUCT(BlueprintType)
struct FWeaponTypeSaveData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 WeaponType;
    
    UPROPERTY(EditAnywhere, SaveGame)
    uint32 DestructionCount;
    
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
    NIMBUS_API FWeaponTypeSaveData();
};

