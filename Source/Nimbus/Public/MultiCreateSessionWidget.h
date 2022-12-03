#pragma once
#include "CoreMinimal.h"
#include "MultiMenuBaseWidget.h"
#include "DialogData.h"
#include "MultiCreateSessionWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class NIMBUS_API UMultiCreateSessionWidget : public UMultiMenuBaseWidget {
    GENERATED_BODY()
public:
    UMultiCreateSessionWidget();
protected:
    UFUNCTION(BlueprintCallable)
    void OnDialogItemAccepted(const FDialogData& DialogData);
    
};

