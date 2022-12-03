#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "VRDescriptionTextWidget.generated.h"

class UTextBlockCustomized;

UCLASS(Blueprintable, EditInlineNew)
class NIMBUS_API UVRDescriptionTextWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelaySeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlockCustomized* DescriptionText;
    
    UVRDescriptionTextWidget();
    UFUNCTION(BlueprintCallable)
    void InitializeAnimate();
    
};

