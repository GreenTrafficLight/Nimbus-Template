#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AutomationNimbusKeys.h"
#include "RecordDataObject.generated.h"

UCLASS(Blueprintable)
class NIMBUS_API URecordDataObject : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAutomationNimbusKeys> RecordedInputData;
    
    URecordDataObject();
};

