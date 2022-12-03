#pragma once
#include "CoreMinimal.h"
#include "ECAActionType.h"
#include "ActionEntry.generated.h"

USTRUCT(BlueprintType)
struct NIMBUS_API FActionEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECAActionType ActionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Parameters;
    
    FActionEntry();
};

