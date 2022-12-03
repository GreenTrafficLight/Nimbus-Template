#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "AnimFlightEngineBoneConfig.generated.h"

USTRUCT(BlueprintType)
struct FAnimFlightEngineBoneConfig : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FlightEngineOuputName;
    
    NIMBUS_API FAnimFlightEngineBoneConfig();
};

