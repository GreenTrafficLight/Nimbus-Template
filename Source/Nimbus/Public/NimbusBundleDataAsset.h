#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "NimbusBundleDataAsset.generated.h"

class UObject;

UCLASS(Blueprintable)
class NIMBUS_API UNimbusBundleDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> Objects;
    
    UNimbusBundleDataAsset();
};

