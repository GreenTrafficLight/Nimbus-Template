#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AircraftTreeGroup.generated.h"

class UAircraftTreeLink;
class UAircraftTreeNode;
class UAircraftTreeWeaponNodeGroup;

UCLASS(Blueprintable)
class NIMBUS_API UAircraftTreeGroup : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UAircraftTreeNode*> Nodes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UAircraftTreeLink*> Links;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAircraftTreeWeaponNodeGroup* WeaponNodes;
    
    UAircraftTreeGroup();
};

