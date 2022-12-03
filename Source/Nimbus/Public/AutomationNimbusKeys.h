#pragma once
#include "CoreMinimal.h"
#include "AutomationActionKeys.h"
#include "AutomationAxisKeys.h"
#include "AutomationNimbusKeys.generated.h"

USTRUCT(BlueprintType)
struct FAutomationNimbusKeys {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAutomationAxisKeys AxisKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAutomationActionKeys ActionKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DebugConsoleCommand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeLogged;
    
    NIMBUS_API FAutomationNimbusKeys();
};

