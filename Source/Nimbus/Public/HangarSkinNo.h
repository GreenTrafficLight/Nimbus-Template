#pragma once
#include "CoreMinimal.h"
#include "HangarInfoBase.h"
#include "HangarSkinNo.generated.h"

class UTextBlock;
class UImage;

UCLASS(Blueprintable)
class UHangarSkinNo : public UHangarInfoBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTextBlock* SkinLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTextBlock* SkinNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTextBlock* Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* Icon;
    
public:
    UHangarSkinNo();
};

