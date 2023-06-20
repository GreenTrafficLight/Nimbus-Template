#pragma once
#include "CoreMinimal.h"
#include "NimbusTriggerBase.h"
#include "NimbusTriggerSphere.generated.h"

UCLASS(Blueprintable)
class NIMBUS_API ANimbusTriggerSphere : public ANimbusTriggerBase {
	GENERATED_BODY()
public:
	ANimbusTriggerSphere(const FObjectInitializer & ObjectInitializer);
};

