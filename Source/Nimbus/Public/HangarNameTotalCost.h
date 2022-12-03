#pragma once
#include "CoreMinimal.h"
#include "HangarInfoBase.h"
#include "HangarNameTotalCost.generated.h"

class UTextBlock;

UCLASS(Blueprintable)
class UHangarNameTotalCost : public UHangarInfoBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTextBlock* Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTextBlock* Cost;
    
public:
    UHangarNameTotalCost();
};

