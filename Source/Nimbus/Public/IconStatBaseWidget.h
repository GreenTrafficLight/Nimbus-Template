#pragma once
#include "CoreMinimal.h"
#include "NimbusUserWidget.h"
#include "UObject/NoExportTypes.h"
#include "IconStatBaseWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class NIMBUS_API UIconStatBaseWidget : public UNimbusUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor PlaneLightDamageColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor PlaneHeavyDamageColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> WeaponDisplaySequence;
    
public:
    UIconStatBaseWidget();
    UFUNCTION(BlueprintCallable)
    void SetForcedPlaneIconDefaultColor(const FLinearColor& Color);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnWeaponActivatorInitialize();
    
    UFUNCTION(BlueprintCallable)
    void OnSpecialWeaponChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnHUDEnabled();
    
};

