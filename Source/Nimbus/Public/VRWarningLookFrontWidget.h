#pragma once
#include "CoreMinimal.h"
#include "MenuBaseWidget.h"
#include "VRWarningLookFrontWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class NIMBUS_API UVRWarningLookFrontWidget : public UMenuBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WarningDisplayAngle;
    
public:
    UVRWarningLookFrontWidget();
};

