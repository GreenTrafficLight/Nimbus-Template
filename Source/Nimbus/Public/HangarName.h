#pragma once
#include "CoreMinimal.h"
#include "HangarInfoBase.h"
#include "HangarName.generated.h"

class UTextBlock;
class UImage;

UCLASS(Blueprintable)
class UHangarName : public UHangarInfoBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTextBlock* Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* Icon;
    
public:
    UHangarName();
};

