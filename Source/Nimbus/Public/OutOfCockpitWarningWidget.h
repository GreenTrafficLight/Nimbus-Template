#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "OutOfCockpitWarningWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class NIMBUS_API UOutOfCockpitWarningWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UOutOfCockpitWarningWidget();
};

