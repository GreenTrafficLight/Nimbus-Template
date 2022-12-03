#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AutomationTestManager.generated.h"

class URecordDataObject;

UCLASS(Blueprintable)
class NIMBUS_API UAutomationTestManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URecordDataObject* RecordDataObj;
    
public:
    UAutomationTestManager();
};

