#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "NimbusReplayDecodeManager.generated.h"

class UNimbusReplayDataManager;
class UNimbusReplayDecodeTimeManager;

UCLASS(Blueprintable)
class UNimbusReplayDecodeManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UNimbusReplayDataManager* DataManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UNimbusReplayDecodeTimeManager* TimeManager;
    
public:
    UNimbusReplayDecodeManager();
};

