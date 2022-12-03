#pragma once
#include "CoreMinimal.h"
#include "MenuBaseWidget.h"
#include "OptionsLanguageWidget.generated.h"

class UUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class NIMBUS_API UOptionsLanguageWidget : public UMenuBaseWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UUserWidget* UmgLoadIcon;
    
public:
    UOptionsLanguageWidget();
};

