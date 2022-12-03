#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MissionVariables.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class NIMBUS_API UMissionVariables : public UObject {
    GENERATED_BODY()
public:
    UMissionVariables();
};

