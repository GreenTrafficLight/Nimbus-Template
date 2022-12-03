#pragma once
#include "CoreMinimal.h"
#include "VRSelectorItem.generated.h"

class UTextBlock;
class UBorder;

USTRUCT(BlueprintType)
struct FVRSelectorItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* NameNormal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* NameSelect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBorder* Border;
    
    NIMBUS_API FVRSelectorItem();
};

