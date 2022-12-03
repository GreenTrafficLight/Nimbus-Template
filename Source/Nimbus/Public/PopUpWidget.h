#pragma once
#include "CoreMinimal.h"
#include "UIBaseWidget.h"
#include "PopUpWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class NIMBUS_API UPopUpWidget : public UUIBaseWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasLoadingIcon;
    
    UPopUpWidget();
};

