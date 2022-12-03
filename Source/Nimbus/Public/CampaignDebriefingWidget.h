#pragma once
#include "CoreMinimal.h"
#include "MenuBaseWidget.h"
#include "CampaignDebriefingWidget.generated.h"

class ACameraActor;
class ULevelStreaming;
class UCampaignDebriefingDataAsset;
class UDebriefingCameraComponent;
class APlayerController;
class UTexture2D;
class UMovieSubtitleWidget;
class UTextBlock;
class UPanelWidget;

UCLASS(Blueprintable, EditInlineNew)
class NIMBUS_API UCampaignDebriefingWidget : public UMenuBaseWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCampaignDebriefingDataAsset* DebriefingParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ULevelStreaming* DebriefingLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ACameraActor* CameraActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UDebriefingCameraComponent* DebriefingCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APlayerController* PlayerController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTexture2D* MapTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMovieSubtitleWidget* UmgSubtitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, UTextBlock*> UmgTextBlocks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTextBlock* UmgDebriefButtonText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPanelWidget* ResultPanel;
    
public:
    UCampaignDebriefingWidget();
private:
    UFUNCTION(BlueprintCallable)
    void OnMapTextureLoaded();
    
    UFUNCTION(BlueprintCallable)
    void OnLevelLoaded();
    
};

