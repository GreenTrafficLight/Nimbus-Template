#pragma once
#include "CoreMinimal.h"
#include "NimbusUserWidget.h"
#include "UObject/NoExportTypes.h"
#include "TargetContainerWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class NIMBUS_API UTargetContainerWidget : public UNimbusUserWidget {
    GENERATED_BODY()
public:
    UTargetContainerWidget();
    UFUNCTION(BlueprintCallable)
    void OnHUDAlertEnd();
    
    UFUNCTION(BlueprintCallable)
    void OnHUDAlertBegin();
    
    UFUNCTION(BlueprintCallable)
    void OnCurrentHUDAlertColorUpdated(const FLinearColor& NewColor, bool bIsDefaultColor);
    
};

