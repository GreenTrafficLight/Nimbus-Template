#pragma once
#include "CoreMinimal.h"
#include "ConditionActionEntry.h"
#include "ConditionActionSaveData.generated.h"

USTRUCT(BlueprintType)
struct FConditionActionSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FConditionActionEntry> ConditionActionEntryList;
    
    NIMBUS_API FConditionActionSaveData();
};

