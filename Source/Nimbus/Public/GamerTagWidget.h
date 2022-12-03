#pragma once
#include "CoreMinimal.h"
#include "UIBaseWidget.h"
#include "GamerTagWidget.generated.h"

class UTextBlock;
class UImage;

UCLASS(Blueprintable, EditInlineNew)
class NIMBUS_API UGamerTagWidget : public UUIBaseWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* UmgGamerTagIDText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* UmgGamerIconImage;
    
public:
    UGamerTagWidget();
};

