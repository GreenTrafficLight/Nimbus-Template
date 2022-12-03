#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LayerMenuManager.generated.h"

class ALayerMenuLineMeshActor;
class UMenuVerticalBarWidget;
class UUILayerMenuParam;
class UMenuBaseWidget;
class UUILayerMenuSubMenuObject;
class AUIManagerActor;
class AUI3DWidgetActor;
class AUIBackgroundActor;

UCLASS(Blueprintable)
class NIMBUS_API ALayerMenuManager : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUILayerMenuParam* LayerMenuParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AUIManagerActor* UIManagerActor;
    
    UPROPERTY(EditAnywhere, Transient)
    UUILayerMenuSubMenuObject* SubMenuObjects[4];
    
    UPROPERTY(EditAnywhere, Instanced, Transient)
    UMenuVerticalBarWidget* MenuVerticalBarWidget[4];
    
    UPROPERTY(EditAnywhere, Transient)
    AUI3DWidgetActor* MenuVerticalBar3DWidgetActor[4];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ALayerMenuLineMeshActor* LayerMenuLineActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMenuBaseWidget* FocusedMenuWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AUI3DWidgetActor* MenuForeground3DWidgetActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AUIBackgroundActor* MenuBackground3DWidgetActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AUI3DWidgetActor* MenuLeftVerticalBar3DWidgetActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AUI3DWidgetActor* MenuRightVerticalBar3DWidgetActor;
    
public:
    ALayerMenuManager();
};

