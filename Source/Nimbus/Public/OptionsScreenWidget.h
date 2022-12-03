#pragma once
#include "CoreMinimal.h"
#include "MenuBaseWidget.h"
#include "OptionsScreenWidget.generated.h"

class UCanvasPanel;
class UImage;

UCLASS(Blueprintable, EditInlineNew)
class NIMBUS_API UOptionsScreenWidget : public UMenuBaseWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* UmgTGTColorPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UImage*> UmgTGTColorImage;
    
public:
    UOptionsScreenWidget();
};

