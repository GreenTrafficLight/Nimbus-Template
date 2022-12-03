#pragma once
#include "CoreMinimal.h"
#include "MultiMenuBaseWidget.h"
#include "DialogData.h"
#include "MultiQuickMatchWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class NIMBUS_API UMultiQuickMatchWidget : public UMultiMenuBaseWidget {
    GENERATED_BODY()
public:
    UMultiQuickMatchWidget();
protected:
    UFUNCTION(BlueprintCallable)
    void OnDialogItemAccepted(const FDialogData& DialogData);
    
};

