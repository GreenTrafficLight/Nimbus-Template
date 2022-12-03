#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "WeaponConceptWidget.generated.h"

class AUIManagerActor;
class UImage;
class UManaTexture;

UCLASS(Blueprintable, EditInlineNew)
class NIMBUS_API UWeaponConceptWidget : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AUIManagerActor* UIManagerActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* UmgVideoImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UManaTexture* ManaTexture;
    
public:
    UWeaponConceptWidget();
};

