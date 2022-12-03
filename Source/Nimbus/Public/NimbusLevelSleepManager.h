#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "NimbusLevelSleepManager.generated.h"

class UWorld;

UCLASS(Blueprintable)
class UNimbusLevelSleepManager : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWorld* World;
    
public:
    UNimbusLevelSleepManager();
};

