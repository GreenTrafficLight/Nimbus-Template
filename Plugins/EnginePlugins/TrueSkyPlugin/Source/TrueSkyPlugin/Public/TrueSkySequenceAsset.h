#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TrueSkySequenceAsset.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UTrueSkySequenceAsset : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<uint8> SequenceText;
    
    UTrueSkySequenceAsset();
};

