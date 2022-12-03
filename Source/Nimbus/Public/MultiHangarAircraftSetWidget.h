#pragma once
#include "CoreMinimal.h"
#include "CommonHangarBaseMenuWidget.h"
#include "MultiHangarAircraftSetWidget.generated.h"

class UHangarStatus;

UCLASS(Blueprintable, EditInlineNew)
class NIMBUS_API UMultiHangarAircraftSetWidget : public UCommonHangarBaseMenuWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHangarStatus* HangarStatus;
    
public:
    UMultiHangarAircraftSetWidget();
};

