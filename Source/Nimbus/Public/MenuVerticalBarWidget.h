#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MenuVerticalBarWidget.generated.h"

class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class NIMBUS_API UMenuVerticalBarWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* UmgStartAnimation;
    
    UMenuVerticalBarWidget();
};

