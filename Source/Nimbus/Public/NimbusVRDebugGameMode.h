#pragma once
#include "CoreMinimal.h"
#include "NimbusGameMode.h"
#include "NimbusVRDebugGameMode.generated.h"

UCLASS(Blueprintable, NonTransient)
class NIMBUS_API ANimbusVRDebugGameMode : public ANimbusGameMode {
    GENERATED_BODY()
public:
    ANimbusVRDebugGameMode();
    UFUNCTION(BlueprintCallable)
    void SetNextPlayerPawnClass(const FString& nextPawnClass);
    
};

