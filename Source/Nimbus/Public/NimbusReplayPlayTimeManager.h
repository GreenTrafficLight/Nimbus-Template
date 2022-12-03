#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "NimbusReplayPlayTimeManager.generated.h"

class UNimbusPauseManager;
class ANimbusWorldSettings;

UCLASS(Blueprintable)
class UNimbusReplayPlayTimeManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UNimbusPauseManager* PauseManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ANimbusWorldSettings* WorldSettings;
    
public:
    UNimbusReplayPlayTimeManager();
private:
    UFUNCTION(BlueprintCallable)
    void OnSystemStartFrameHandler(float DeltaTime);
    
};

