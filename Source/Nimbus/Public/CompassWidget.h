#pragma once
#include "CoreMinimal.h"
#include "NimbusUserWidget.h"
#include "UObject/NoExportTypes.h"
#include "CompassWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class NIMBUS_API UCompassWidget : public UNimbusUserWidget {
    GENERATED_BODY()
public:
    UCompassWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CurrentHUDAlertColorUpdated(const FLinearColor& NewColor, bool bIsDefaultColor);
    
};

