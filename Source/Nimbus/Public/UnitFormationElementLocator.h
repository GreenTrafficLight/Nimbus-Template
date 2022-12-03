#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UnitFormationElementLocator.generated.h"

class UStaticMeshComponent;

UCLASS(Blueprintable, HideDropdown, NotPlaceable)
class NIMBUS_API AUnitFormationElementLocator : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* StaticMeshComponent;
    
    AUnitFormationElementLocator();
};

