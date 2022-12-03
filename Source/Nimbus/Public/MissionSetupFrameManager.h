#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MissionSetupFrameManager.generated.h"

class UNimbusFadeManager;
class UNimbusPauseManager;

UCLASS(Blueprintable)
class UMissionSetupFrameManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UNimbusPauseManager* PauseManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UNimbusFadeManager* FadeManager;
    
public:
    UMissionSetupFrameManager();
private:
    UFUNCTION(BlueprintCallable)
    void OnPostGarbageCollectHandler();
    
};

