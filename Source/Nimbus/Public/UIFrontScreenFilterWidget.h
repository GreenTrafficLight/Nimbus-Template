#pragma once
#include "CoreMinimal.h"
#include "UIBaseWidget.h"
#include "UIFrontScreenFilterWidget.generated.h"

class UUIFrontScreenInfoDataAsset;
class UUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class NIMBUS_API UUIFrontScreenFilterWidget : public UUIBaseWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUIFrontScreenInfoDataAsset* InfoData;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UUserWidget* UMGFilter;
    
public:
    UUIFrontScreenFilterWidget();
};

