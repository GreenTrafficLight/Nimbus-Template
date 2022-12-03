#pragma once
#include "CoreMinimal.h"
#include "MenuBaseWidget.h"
#include "CampaignBriefingWidget.generated.h"

class UStaticMesh;
class AStaticMeshActor;
class UMaterialInstanceConstant;

UCLASS(Blueprintable, EditInlineNew)
class NIMBUS_API UCampaignBriefingWidget : public UMenuBaseWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* BriefingMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceConstant* BriefingCloudMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AStaticMeshActor* BriefingMeshActor;
    
public:
    UCampaignBriefingWidget();
private:
    UFUNCTION(BlueprintCallable)
    void OnMapMeshLoaded();
    
    UFUNCTION(BlueprintCallable)
    void OnCloudMaterialLoaded();
    
    UFUNCTION(BlueprintCallable)
    void OnBriefingLevelLoaded();
    
};

