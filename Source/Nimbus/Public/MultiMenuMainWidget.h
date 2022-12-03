#pragma once
#include "CoreMinimal.h"
#include "MultiMenuBaseWidget.h"
#include "DialogData.h"
#include "MultiMenuMainWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class NIMBUS_API UMultiMenuMainWidget : public UMultiMenuBaseWidget {
    GENERATED_BODY()
public:
    UMultiMenuMainWidget();
protected:
    UFUNCTION(BlueprintCallable)
    void OnDialogItemAccepted(const FDialogData& DialogData);
    
};

