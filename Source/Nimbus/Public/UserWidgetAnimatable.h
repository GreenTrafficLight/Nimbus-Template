#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "UserWidgetAnimationInfo.h"
#include "UserWidgetAnimatable.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class NIMBUS_API UUserWidgetAnimatable : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUserWidgetAnimationInfo> UmgAnimationList;
    
    UUserWidgetAnimatable();
};

