#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ProgressBarWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class NIMBUS_API UProgressBarWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UProgressBarWidget();
};

