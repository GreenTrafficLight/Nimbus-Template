#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AircraftTreeWeaponNodeGroup.generated.h"

class UAircraftTreeNode;
class UAircraftTreeWeaponNode;

UCLASS(Blueprintable)
class NIMBUS_API UAircraftTreeWeaponNodeGroup : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAircraftTreeNode* AircraftNode;
    
    UPROPERTY(EditAnywhere, Transient)
    UAircraftTreeWeaponNode* Nodes[3];
    
    UAircraftTreeWeaponNodeGroup();
};

