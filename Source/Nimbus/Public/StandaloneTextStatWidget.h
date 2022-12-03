#pragma once
#include "CoreMinimal.h"
#include "NimbusUserWidget.h"
#include "StandaloneTextStatWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class NIMBUS_API UStandaloneTextStatWidget : public UNimbusUserWidget {
    GENERATED_BODY()
public:
    UStandaloneTextStatWidget();
protected:
    UFUNCTION(BlueprintCallable)
    void OnWeaponActivatorInitialize();
    
};

