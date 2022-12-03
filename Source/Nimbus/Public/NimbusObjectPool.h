#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "NimbusObjectPool.generated.h"

class UDecalComponent;

UCLASS(Blueprintable)
class NIMBUS_API UNimbusObjectPool : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UDecalComponent*> DecalComponents;
    
public:
    UNimbusObjectPool();
};

