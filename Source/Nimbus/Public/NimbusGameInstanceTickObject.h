#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "NimbusGameInstanceTickObject.generated.h"

class UNimbusGameInstance;

UCLASS(Blueprintable)
class NIMBUS_API UNimbusGameInstanceTickObject : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UNimbusGameInstance* GameInstance;
    
public:
    UNimbusGameInstanceTickObject();
};

