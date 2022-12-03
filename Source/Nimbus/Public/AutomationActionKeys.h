#pragma once
#include "CoreMinimal.h"
#include "AutomationActionKeys.generated.h"

USTRUCT(BlueprintType)
struct FAutomationActionKeys {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 Gamepad_ThumbStick_Direction;
    
    UPROPERTY(EditAnywhere)
    uint8 Gamepad_DPad_FaceButton;
    
    UPROPERTY(EditAnywhere)
    uint8 Gamepad_STST;
    
    NIMBUS_API FAutomationActionKeys();
};

