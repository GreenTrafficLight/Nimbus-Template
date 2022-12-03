#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "NimbusRibbonSource.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FNimbusRibbonSource {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* OwnerSourceActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector RelativeOffset;
    
    NIMBUS_API FNimbusRibbonSource();
};

