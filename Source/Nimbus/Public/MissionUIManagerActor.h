#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UIManagerActor.h"
#include "GlowParameters.h"
#include "EDebugModeState.h"
#include "MissionUIManagerActor.generated.h"

class ANimbusReplayPawn;
class UReplayCameraInfoWidget;
class UUserWidget;
class ANimbusPlayerController;

UCLASS(Blueprintable)
class NIMBUS_API AMissionUIManagerActor : public AUIManagerActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UReplayCameraInfoWidget> ReplayCameraInfoWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ANimbusReplayPawn> ReplayPawnClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ANimbusPlayerController> ReplayPlayerControllerClass;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGlowParameters HUDGlowParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> TempLoadingScreenWidgetClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UUserWidget* TempLoadingScreenWidget;
    
public:
    AMissionUIManagerActor();
    UFUNCTION(BlueprintCallable)
    static void StartDebug(EDebugModeState InDebugState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupDebugUI(EDebugModeState InDebugState);
    
    UFUNCTION(BlueprintCallable)
    void OnReplay();
    
    UFUNCTION(BlueprintCallable)
    void OnMissionSuccess();
    
    UFUNCTION(BlueprintCallable)
    void OnMissionResupply();
    
    UFUNCTION(BlueprintCallable)
    void OnMissionFail();
    
};

