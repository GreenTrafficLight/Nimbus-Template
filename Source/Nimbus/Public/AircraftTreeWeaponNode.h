#pragma once
#include "CoreMinimal.h"
#include "AircraftTreeNodeBase.h"
#include "AircraftTreeWeaponNode.generated.h"

class UAircraftTreeGroup;

UCLASS(Blueprintable)
class NIMBUS_API UAircraftTreeWeaponNode : public UAircraftTreeNodeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAircraftTreeGroup* Group;
    
    UAircraftTreeWeaponNode();
};

