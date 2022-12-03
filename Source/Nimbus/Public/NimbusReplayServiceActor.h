#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NimbusReplayServiceActor.generated.h"

class UNimbusReplayDecodeManager;
class UNimbusReplayPlayTimeManager;
class ANimbusWorldSettings;
class UNimbusReplayDataManager;
class UNimbusReplayEncodeManager;

UCLASS(Blueprintable)
class ANimbusReplayServiceActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UNimbusReplayDataManager* DataManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UNimbusReplayPlayTimeManager* PlayTimeManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UNimbusReplayEncodeManager* EncodeManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UNimbusReplayDecodeManager* DecodeManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ANimbusWorldSettings* WorldSettings;
    
public:
    ANimbusReplayServiceActor();
};

