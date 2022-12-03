#pragma once
#include "CoreMinimal.h"
#include "HangarInfoBase.h"
#include "HangarMultiEmblem.generated.h"

class UImage;

UCLASS(Blueprintable)
class UHangarMultiEmblem : public UHangarInfoBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* Image;
    
public:
    UHangarMultiEmblem();
};

