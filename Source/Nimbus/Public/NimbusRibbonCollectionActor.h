#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NimbusRibbonSource.h"
#include "ERibbonCollectionType.h"
#include "NimbusRibbonCollectionActor.generated.h"

class UParticleSystemComponent;

UCLASS(Blueprintable)
class NIMBUS_API ANimbusRibbonCollectionActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERibbonCollectionType RibbonType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* PSComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FNimbusRibbonSource> ActiveSources;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxActiveSources;
    
public:
    ANimbusRibbonCollectionActor();
protected:
    UFUNCTION(BlueprintCallable)
    void OnPreRestartPhaseEvent();
    
    UFUNCTION(BlueprintCallable)
    void OnIGCEnableEvent(bool bEnabled);
    
};

