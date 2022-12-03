#pragma once
#include "CoreMinimal.h"
#include "UserWidgetAnimationInfo.generated.h"

class UWidgetAnimation;

USTRUCT(BlueprintType)
struct FUserWidgetAnimationInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText AnimationName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* UmgAnimation;
    
    NIMBUS_API FUserWidgetAnimationInfo();
};

