#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UnitObject.generated.h"

class AAIGameObject;

USTRUCT(BlueprintType)
struct FUnitObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAIGameObject* Instance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AAIGameObject> ClassType;
    
    NIMBUS_API FUnitObject();
};

