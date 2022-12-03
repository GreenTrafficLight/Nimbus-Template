#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "NimbusMapChangeTravelCache.h"
#include "NimbusMapChangeTravelLoader.generated.h"

class UNimbusGameInstance;

UCLASS(Blueprintable)
class UNimbusMapChangeTravelLoader : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UNimbusGameInstance* GameInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FNimbusMapChangeTravelCache Cache;
    
public:
    UNimbusMapChangeTravelLoader();
};

