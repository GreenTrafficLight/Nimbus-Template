#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CampaignDebriefingUnitActor.generated.h"

class ACampaignDebriefingKillMarkManager;
class UCampaignDebriefingUnitSettings;
class UStaticMeshComponent;
class UTextRenderComponent;
class ACampaignDebriefingDecoder;
class ACampaignDebriefingRibbonManager;

UCLASS(Blueprintable)
class ACampaignDebriefingUnitActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* MeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCampaignDebriefingUnitSettings* Settings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ACampaignDebriefingDecoder* Decoder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ACampaignDebriefingRibbonManager* RibbonManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ACampaignDebriefingKillMarkManager* KillMarkManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTextRenderComponent* UnitNameText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTextRenderComponent* UnitNameGlowText;
    
public:
    ACampaignDebriefingUnitActor();
};

