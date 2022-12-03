#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "VRSelectorUnit.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class NIMBUS_API UVRSelectorUnit : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelaySecondsBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelaySecondsStep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CursorAnimSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CursorAnimCounts;
    
    UVRSelectorUnit();
};

