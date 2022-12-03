#pragma once
#include "CoreMinimal.h"
#include "HangarInfoBase.h"
#include "HangarMultiSetNo.generated.h"

class UTextBlock;

UCLASS(Blueprintable)
class UHangarMultiSetNo : public UHangarInfoBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTextBlock* SetLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTextBlock* SetNo;
    
public:
    UHangarMultiSetNo();
};

