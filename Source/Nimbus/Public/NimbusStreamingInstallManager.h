#pragma once
#include "CoreMinimal.h"
#include "StreamingInstallManager.h"
#include "NimbusStreamingInstallManager.generated.h"

UCLASS(Blueprintable)
class NIMBUS_API UNimbusStreamingInstallManager : public UStreamingInstallManager {
    GENERATED_BODY()
public:
    UNimbusStreamingInstallManager();
};

