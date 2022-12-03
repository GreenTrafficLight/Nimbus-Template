#pragma once
#include "CoreMinimal.h"
#include "MultiMenuBaseWidget.h"
#include "DialogData.h"
#include "MultiInvitationTransitionWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class NIMBUS_API UMultiInvitationTransitionWidget : public UMultiMenuBaseWidget {
    GENERATED_BODY()
public:
    UMultiInvitationTransitionWidget();
protected:
    UFUNCTION(BlueprintCallable)
    void OnDialogItemAccepted(const FDialogData& DialogData);
    
};

