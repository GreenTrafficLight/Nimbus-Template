#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "NimbusReplayEncodeTimeManager.generated.h"

class UNimbusReplayPlayTimeManager;

UCLASS(Blueprintable)
class UNimbusReplayEncodeTimeManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UNimbusReplayPlayTimeManager* PlayTimeManager;
    
public:
    UNimbusReplayEncodeTimeManager();
};

