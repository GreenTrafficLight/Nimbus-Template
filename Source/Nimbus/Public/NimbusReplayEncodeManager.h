#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "NimbusReplayEncodeManager.generated.h"

class UNimbusReplayEncodeTimeManager;
class UNimbusReplayDataManager;

UCLASS(Blueprintable)
class UNimbusReplayEncodeManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UNimbusReplayDataManager* DataManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UNimbusReplayEncodeTimeManager* TimeManager;
    
public:
    UNimbusReplayEncodeManager();
};

