#pragma once
#include "CoreMinimal.h"
#include "NormalDialogWidget.h"
#include "ScrollableDialogWidgetBase.generated.h"

class UCanvasPanel;
class UUIScrollBarWidget;

UCLASS(Blueprintable, EditInlineNew)
class NIMBUS_API UScrollableDialogWidgetBase : public UNormalDialogWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCanvasPanel* UmgScrollBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UUIScrollBarWidget* UmgUIScrollBar;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScrollDist;
    
public:
    UScrollableDialogWidgetBase();
};

