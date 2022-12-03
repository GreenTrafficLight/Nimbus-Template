#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Controller.h"
#include "NetworkDummyController.generated.h"

UCLASS(Blueprintable)
class NIMBUS_API ANetworkDummyController : public AController {
    GENERATED_BODY()
public:
    ANetworkDummyController();
};

