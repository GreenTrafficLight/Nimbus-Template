#pragma once
#include "CoreMinimal.h"
#include "CommonHangarBaseMenuWidget.h"
#include "CommonHangarNameWidget.generated.h"

class UHangarStatus;

UCLASS(Blueprintable, EditInlineNew)
class NIMBUS_API UCommonHangarNameWidget : public UCommonHangarBaseMenuWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHangarStatus* HangarStatus;
    
public:
    UCommonHangarNameWidget();
};

