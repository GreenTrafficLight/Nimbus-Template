#pragma once
#include "CoreMinimal.h"
#include "VRMenuBaseWidget.h"
#include "VRUnlockWidget.generated.h"

class UTextBlockCustomized;

UCLASS(Blueprintable, EditInlineNew)
class NIMBUS_API UVRUnlockWidget : public UVRMenuBaseWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeOutSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float KeepingBlackSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RewardIntervalSeconds;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlockCustomized* UmgRewardText;
    
public:
    UVRUnlockWidget();
};

