#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NimbusEventParser.generated.h"

UCLASS(Blueprintable)
class NIMBUS_API ANimbusEventParser : public AActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FMultiAbort);
    
    ANimbusEventParser();
private:
    UFUNCTION(BlueprintCallable)
    void OnPreRestartPhaseEvent();
    
    UFUNCTION(BlueprintCallable)
    void OnIGCEnableEvent(bool bEnabled);
    
};

