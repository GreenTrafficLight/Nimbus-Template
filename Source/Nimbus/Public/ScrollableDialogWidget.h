#pragma once
#include "CoreMinimal.h"
#include "ScrollableDialogWidgetBase.h"
#include "ScrollableDialogWidget.generated.h"

class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class NIMBUS_API UScrollableDialogWidget : public UScrollableDialogWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* UmgTitleTextBlock;
    
public:
    UScrollableDialogWidget();
};

