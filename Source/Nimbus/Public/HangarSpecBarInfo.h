#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "HangarSpecBarInfo.generated.h"

class UImage;

UCLASS(Blueprintable)
class UHangarSpecBarInfo : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* Image;
    
    UHangarSpecBarInfo();
};

