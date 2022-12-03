#pragma once
#include "CoreMinimal.h"
#include "MultiMenuBaseWidget.h"
#include "DialogData.h"
#include "MultiSessionWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class NIMBUS_API UMultiSessionWidget : public UMultiMenuBaseWidget {
    GENERATED_BODY()
public:
    UMultiSessionWidget();
protected:
    UFUNCTION(BlueprintCallable)
    void OnDialogItemAccepted(const FDialogData& DialogData);
    
};

