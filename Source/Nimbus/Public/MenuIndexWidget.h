#pragma once
#include "CoreMinimal.h"
#include "UIBaseWidget.h"
#include "MenuIndexWidget.generated.h"

class UUILayerMenuItemWidget;

UCLASS(Blueprintable, EditInlineNew)
class NIMBUS_API UMenuIndexWidget : public UUIBaseWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UUILayerMenuItemWidget*> MenuItemWidgetList;
    
public:
    UMenuIndexWidget();
};

