#pragma once
#include "CoreMinimal.h"
#include "AircraftTreeNodeBase.h"
#include "AircraftTreeNode.generated.h"

class UImage;

UCLASS(Blueprintable)
class NIMBUS_API UAircraftTreeNode : public UAircraftTreeNodeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* ItemIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* ItemIconLocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* StateIcon;
    
    UAircraftTreeNode();
};

