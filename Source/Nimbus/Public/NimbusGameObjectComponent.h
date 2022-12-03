#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "NimbusGameObjectComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class NIMBUS_API UNimbusGameObjectComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UNimbusGameObjectComponent();
};

