#pragma once
#include "CoreMinimal.h"
#include "NimbusUserWidget.h"
#include "UObject/NoExportTypes.h"
#include "PersistentUserWidget.generated.h"

class UTexture2D;
class UPlayerWeaponActivator;
class UTargetSelectionComponent;

UCLASS(Blueprintable, EditInlineNew)
class NIMBUS_API UPersistentUserWidget : public UNimbusUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MissionPhaseSecondsLeftToStartBlinking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimerBlinkRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PitchMeterAngleInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* PitchMeterPositiveTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* PitchMeterHalfPositiveTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* PitchMeterNegativeTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* PitchMeterHalfNegativeTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* PitchMeterNeutralTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TimeScoreTargetInfoShowGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlaneIconInfoShowGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlaneTextInfoShowGroup;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPlayerWeaponActivator* PlayerWeaponActivator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor PlaneLightDamageColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor PlaneHeavyDamageColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> WeaponDisplaySequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTargetSelectionComponent* TargetSelectionComp;
    
public:
    UPersistentUserWidget();
private:
    UFUNCTION(BlueprintCallable)
    void OnWeaponActivatorInitialize();
    
    UFUNCTION(BlueprintCallable)
    void OnSpecialWeaponChanged();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnHUDEnabled();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnCurrentHUDAlertColorUpdated(const FLinearColor& NewColor, bool bIsDefaultColor);
    
};

