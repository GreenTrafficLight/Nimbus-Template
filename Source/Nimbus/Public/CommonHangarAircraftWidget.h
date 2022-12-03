#pragma once
#include "CoreMinimal.h"
#include "CommonHangarBaseMenuWidget.h"
#include "CommonHangarAircraftWidget.generated.h"

class UHangarStatus;

UCLASS(Blueprintable, EditInlineNew)
class NIMBUS_API UCommonHangarAircraftWidget : public UCommonHangarBaseMenuWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeInDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeInDelay;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHangarStatus* HangarStatus;
    
public:
    UCommonHangarAircraftWidget();
};

