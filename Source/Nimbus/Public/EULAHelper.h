#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DialogData.h"
#include "EULAHelper.generated.h"

UCLASS(Blueprintable)
class NIMBUS_API UEULAHelper : public UObject {
    GENERATED_BODY()
public:
    UEULAHelper();
private:
    UFUNCTION(BlueprintCallable)
    void OnDialogItemAccepted(const FDialogData& DialogData);
    
};

