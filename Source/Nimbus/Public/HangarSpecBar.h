#pragma once
#include "CoreMinimal.h"
#include "HangarInfoBase.h"
#include "HangarSpecBar.generated.h"

class UTextBlock;
class UImage;
class UHangarSpecBarInfo;

UCLASS(Blueprintable)
class UHangarSpecBar : public UHangarInfoBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTextBlock* SpecName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* HidingImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHangarSpecBarInfo* BaseBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHangarSpecBarInfo* AddOnBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHangarSpecBarInfo* SelectAddOnBar;
    
public:
    UHangarSpecBar();
};

