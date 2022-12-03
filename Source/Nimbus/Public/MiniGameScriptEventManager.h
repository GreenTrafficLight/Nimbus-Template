#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MiniGameScriptEventManager.generated.h"

class UNimbusLevelSleepManager;

UCLASS(Blueprintable)
class UMiniGameScriptEventManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UNimbusLevelSleepManager* LevelSleepManager;
    
public:
    UMiniGameScriptEventManager();
};

