#pragma once
#include "CoreMinimal.h"
#include "MenuBaseWidget.h"
#include "UObject/NoExportTypes.h"
#include "ViewerSceneWidget.generated.h"

class UImage;
class UTextBlock;
class USceneDataAsset;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class NIMBUS_API UViewerSceneWidget : public UMenuBaseWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* UmgSceneImageOverlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* UmgSceneImageHolder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UTextBlock*> UmgAdditionalText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USceneDataAsset*> SceneDataArr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoftObjectPath> ThumbnailTextureRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTexture2D*> ThumbnailTextureCache;
    
public:
    UViewerSceneWidget();
};

