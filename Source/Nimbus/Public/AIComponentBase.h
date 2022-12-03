#pragma once
#include "CoreMinimal.h"
#include "NimbusGameObjectComponent.h"
#include "AIComponentBase.generated.h"

class AAIGameObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class NIMBUS_API UAIComponentBase : public UNimbusGameObjectComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AAIGameObject* OwningAIGameObject;
    
public:
    UAIComponentBase();
};

