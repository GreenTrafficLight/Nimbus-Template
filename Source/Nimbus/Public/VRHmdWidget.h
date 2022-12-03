#pragma once
#include "CoreMinimal.h"
#include "VRMenuBaseWidget.h"
#include "VRHmdWidget.generated.h"

class UTextBlockCustomized;
class UUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class NIMBUS_API UVRHmdWidget : public UVRMenuBaseWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlockCustomized* UmgText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* LoadingWidget;
    
public:
    UVRHmdWidget();
};

