#pragma once
#include "CoreMinimal.h"
#include "UIBaseWidget.h"
#include "UIFrontScreenWidget.generated.h"

class UBackgroundBlur;
class UUIFrontScreenInfoDataAsset;
class UImage;

UCLASS(Blueprintable, EditInlineNew)
class NIMBUS_API UUIFrontScreenWidget : public UUIBaseWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUIFrontScreenInfoDataAsset* InfoData;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UBackgroundBlur* UMGBackgroundBlur;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* UMGBackgroundColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* UMGFrontWindow;
    
public:
    UUIFrontScreenWidget();
};

