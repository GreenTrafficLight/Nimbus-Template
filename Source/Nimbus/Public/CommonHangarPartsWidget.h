#pragma once
#include "CoreMinimal.h"
#include "CommonHangarBaseMenuWidget.h"
#include "CommonHangarPartsWidget.generated.h"

class UHangarStatus;

UCLASS(Blueprintable, EditInlineNew)
class NIMBUS_API UCommonHangarPartsWidget : public UCommonHangarBaseMenuWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MenuItemsSizeExtension;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHangarStatus* HangarStatus;
    
public:
    UCommonHangarPartsWidget();
};

