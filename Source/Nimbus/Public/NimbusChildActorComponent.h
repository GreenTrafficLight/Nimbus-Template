#pragma once
#include "CoreMinimal.h"
#include "Components/ChildActorComponent.h"
#include "NimbusChildActorComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class NIMBUS_API UNimbusChildActorComponent : public UChildActorComponent {
    GENERATED_BODY()
public:
    UNimbusChildActorComponent();
};

