#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "NimbusGameMode.h"
#include "DialogData.h"
#include "MultiPlayerGameMode.generated.h"

class UMultiIGCHudKillerWidget;
class UMultiIGCHudTDWidget;
class APlayerPlane;
class UTargetContainerWidget;
class UMultiPlayerInGameWidget;
class UMultiIGCHudMVPWidget;
class UDataTable;

UCLASS(Blueprintable, NonTransient)
class NIMBUS_API AMultiPlayerGameMode : public ANimbusGameMode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint64 FinishingCountDownDuration;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerPlane* LocalPlayerPlane;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HotJoinGodPlayerInSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinimumBattleTimeToHotJoinInSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMultiPlayerInGameWidget> InGameWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMultiIGCHudTDWidget> IgcHudTDClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMultiIGCHudMVPWidget> IgcHudMvpClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMultiIGCHudKillerWidget> IgcHudKillerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTargetContainerWidget> TargetContainClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMultiPlayerInGameWidget* InGameHudWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMultiIGCHudTDWidget* IgcHudTDWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMultiIGCHudMVPWidget* IgcHudMvpWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMultiIGCHudKillerWidget* IgcHudKillerWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MaximumMedalDataTable;
    
public:
    AMultiPlayerGameMode();
    UFUNCTION(BlueprintCallable)
    void ToggleManuallyRequestGameResults();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnDialogItemAccepted(const FDialogData& DialogData);
    
};

