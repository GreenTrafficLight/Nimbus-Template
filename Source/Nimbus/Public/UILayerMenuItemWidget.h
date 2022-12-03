#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UILayerMenuItemWidget.generated.h"

class UUserWidget;
class UTextBlock;
class UImage;

UCLASS(Blueprintable)
class UUILayerMenuItemWidget : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UUserWidget* ParentWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTextBlock* UmgTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* UmgImage;
    
public:
    UUILayerMenuItemWidget();
};

