#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "NimbusReplayDecodeTimeManager.generated.h"

class UNimbusReplayDataManager;
class UNimbusReplayPlayTimeManager;

UCLASS(Blueprintable)
class UNimbusReplayDecodeTimeManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UNimbusReplayDataManager* DataManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UNimbusReplayPlayTimeManager* PlayTimeManager;
    
public:
    UNimbusReplayDecodeTimeManager();
};

