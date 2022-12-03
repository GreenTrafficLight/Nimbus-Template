#pragma once
#include "CoreMinimal.h"
#include "EMissionCategory.h"
#include "ECAActionType.h"
#include "UnlockSaveData.generated.h"

USTRUCT(BlueprintType)
struct FUnlockSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, SaveGame)
    uint32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bIsActivated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    EMissionCategory Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    ECAActionType ActionType;
    
    NIMBUS_API FUnlockSaveData();
};

