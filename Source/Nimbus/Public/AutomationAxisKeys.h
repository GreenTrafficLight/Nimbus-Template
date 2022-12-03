#pragma once
#include "CoreMinimal.h"
#include "AutomationAxisKeys.generated.h"

USTRUCT(BlueprintType)
struct FAutomationAxisKeys {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 Gamepad_LeftX;
    
    UPROPERTY(EditAnywhere)
    uint8 Gamepad_LeftY;
    
    UPROPERTY(EditAnywhere)
    uint8 Gamepad_LeftTriggerAxis;
    
    UPROPERTY(EditAnywhere)
    uint8 Gamepad_RightTriggerAxis;
    
    UPROPERTY(EditAnywhere)
    uint8 Gamepad_LeftShoulder;
    
    UPROPERTY(EditAnywhere)
    uint8 Gamepad_RightShoulder;
    
    UPROPERTY(EditAnywhere)
    uint8 Gamepad_FaceButton_Top;
    
    UPROPERTY(EditAnywhere)
    uint8 Gamepad_RightY;
    
    UPROPERTY(EditAnywhere)
    uint8 Gamepad_RightX;
    
    UPROPERTY(EditAnywhere)
    uint8 Gamepad_Special_Left_X;
    
    NIMBUS_API FAutomationAxisKeys();
};

