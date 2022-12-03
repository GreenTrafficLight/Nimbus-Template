#pragma once
#include "CoreMinimal.h"
#include "Engine/LevelScriptActor.h"
#include "NimbusLevelScriptActor.generated.h"

class ANimbusRibbonCollectionActor;
class UAsyncTaskActivateUnit;

UCLASS(Blueprintable)
class NIMBUS_API ANimbusLevelScriptActor : public ALevelScriptActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ANimbusRibbonCollectionActor* AIWingTipRibbonCollectionActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ANimbusRibbonCollectionActor* MissileRibbonCollectionActor;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UAsyncTaskActivateUnit*> UnitActivateTasks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UAsyncTaskActivateUnit*> AddedUnitActivateTasks;
    
public:
    ANimbusLevelScriptActor();
    UFUNCTION(BlueprintCallable)
    void StopAllLatentTask();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReadyToPlay();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnIntroAnimationStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBattleNavigationComplete(int32 OutBattleNavigationID);
    
};

