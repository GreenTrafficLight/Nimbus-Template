#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "FadeWidget.generated.h"

class UImage;

UCLASS(Blueprintable, EditInlineNew)
class NIMBUS_API UFadeWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* background;
    
public:
    UFadeWidget();
};

