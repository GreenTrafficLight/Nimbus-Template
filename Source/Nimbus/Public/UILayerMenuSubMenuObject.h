#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UILayerMenuSubMenuObject.generated.h"

class UMenuIndexWidget;
class AUI3DWidgetActor;

UCLASS(Blueprintable)
class NIMBUS_API UUILayerMenuSubMenuObject : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMenuIndexWidget* MenuWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AUI3DWidgetActor* MenuWidgetActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMenuIndexWidget* MenuGlowWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AUI3DWidgetActor* MenuGlowWidgetActor;
    
public:
    UUILayerMenuSubMenuObject();
};

