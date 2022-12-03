#pragma once
#include "CoreMinimal.h"
#include "HangarInfoBase.h"
#include "HangarSpecGroup.generated.h"

class UTextBlock;
class UHangarSpecBar;

UCLASS(Blueprintable)
class UHangarSpecGroup : public UHangarInfoBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTextBlock* SpecGroupName;
    
    UPROPERTY(EditAnywhere, Transient)
    UHangarSpecBar* SpecItems[6];
    
public:
    UHangarSpecGroup();
};

