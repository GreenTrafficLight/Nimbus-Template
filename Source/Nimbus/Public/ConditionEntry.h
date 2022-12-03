#pragma once
#include "CoreMinimal.h"
#include "ECAConditionType.h"
#include "ConditionEntry.generated.h"

USTRUCT(BlueprintType)
struct NIMBUS_API FConditionEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECAConditionType ConditionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Parameters;
    
    FConditionEntry();
};

