#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "HangarInfoBase.generated.h"

class UHangarInfoBase;
class UUserWidget;
class UImage;

UCLASS(Blueprintable)
class UHangarInfoBase : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHangarInfoBase* Parent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UUserWidget* BaseWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* Underlay;
    
public:
    UHangarInfoBase();
};

