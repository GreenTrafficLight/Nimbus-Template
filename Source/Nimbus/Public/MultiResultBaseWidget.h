#pragma once
#include "CoreMinimal.h"
#include "MultiMissionMenuBaseWidget.h"
#include "MultiResultBaseWidget.generated.h"

class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class NIMBUS_API UMultiResultBaseWidget : public UMultiMissionMenuBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AnimationAtoBTransition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AnimationBtoATransition;
    
public:
    UMultiResultBaseWidget();
private:
    UFUNCTION(BlueprintCallable)
    void ChangeScreen();
    
};

