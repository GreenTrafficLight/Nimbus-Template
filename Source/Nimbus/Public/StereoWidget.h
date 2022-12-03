#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "DynamicDrawWidgetInterface.h"
#include "StereoWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class NIMBUS_API UStereoWidget : public UUserWidget, public IDynamicDrawWidgetInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CentralDepth;
    
public:
    UStereoWidget();
    
    // Fix for true pure virtual functions not being implemented
};

