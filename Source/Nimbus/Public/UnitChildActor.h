#pragma once
#include "CoreMinimal.h"
#include "UnitChildActor.generated.h"

class AAIGameObject;

USTRUCT(BlueprintType)
struct FUnitChildActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAIGameObject* ParentObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ChildActorComponentName;
    
    NIMBUS_API FUnitChildActor();
};

