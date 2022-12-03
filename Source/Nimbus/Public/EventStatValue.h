#pragma once
#include "CoreMinimal.h"
#include "EventStatValue.generated.h"

USTRUCT(BlueprintType)
struct FEventStatValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FString EventName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TMap<FName, float> OnlineEventParms;
    
    NIMBUS_API FEventStatValue();
};

