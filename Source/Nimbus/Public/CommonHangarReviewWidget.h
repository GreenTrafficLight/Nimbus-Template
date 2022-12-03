#pragma once
#include "CoreMinimal.h"
#include "CommonHangarBaseMenuWidget.h"
#include "CommonHangarReviewWidget.generated.h"

class UHangarStatus;

UCLASS(Blueprintable, EditInlineNew)
class NIMBUS_API UCommonHangarReviewWidget : public UCommonHangarBaseMenuWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHangarStatus* HangarStatus;
    
public:
    UCommonHangarReviewWidget();
};

