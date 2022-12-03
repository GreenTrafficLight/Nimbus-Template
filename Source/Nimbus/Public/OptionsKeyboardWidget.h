#pragma once
#include "CoreMinimal.h"
#include "MenuBaseWidget.h"
#include "UObject/NoExportTypes.h"
#include "OptionsKeyboardWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class NIMBUS_API UOptionsKeyboardWidget : public UMenuBaseWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D SelectorTranslation;
    
public:
    UOptionsKeyboardWidget();
};

