#pragma once
#include "CoreMinimal.h"
#include "Components/CanvasPanel.h"
#include "DynamicDrawWidgetInterface.h"
#include "DynamicDrawCanvas.generated.h"

UCLASS(Blueprintable)
class NIMBUS_API UDynamicDrawCanvas : public UCanvasPanel, public IDynamicDrawWidgetInterface {
    GENERATED_BODY()
public:
    UDynamicDrawCanvas();
    
    // Fix for true pure virtual functions not being implemented
};

