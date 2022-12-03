#pragma once
#include "CoreMinimal.h"
#include "ConditionEntry.h"
#include "ActionEntry.h"
#include "CAConfigurationEntry.generated.h"

USTRUCT(BlueprintType)
struct NIMBUS_API FCAConfigurationEntry {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FConditionEntry> ConditionEntryList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FActionEntry> ActionEntryList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Meta;
    
    FCAConfigurationEntry();
};

