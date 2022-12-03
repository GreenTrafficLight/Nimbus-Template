#pragma once
#include "CoreMinimal.h"
#include "Components/WidgetComponent.h"
#include "NimbusWidgetComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class NIMBUS_API UNimbusWidgetComponent : public UWidgetComponent {
    GENERATED_BODY()
public:
    UNimbusWidgetComponent();
    UFUNCTION(BlueprintCallable)
    void FitToCamera(float FOVAngle);
    
};

