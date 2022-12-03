#pragma once
#include "CoreMinimal.h"
#include "ConditionActionEntry.generated.h"

USTRUCT(BlueprintType)
struct NIMBUS_API FConditionActionEntry {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bIsActivated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bIsActivatedNow;
    
    UPROPERTY(EditAnywhere, SaveGame)
    uint32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<bool> ConditionActivatedList;
    
public:
    FConditionActionEntry();
};

