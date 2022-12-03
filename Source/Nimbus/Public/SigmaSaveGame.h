#pragma once
#include "CoreMinimal.h"
#include "CommonSaveData.h"
#include "NimbusSaveGame.h"
#include "SystemSaveData.h"
#include "OptionsSaveData.h"
#include "CampaignSaveData.h"
#include "OnlineSaveData.h"
#include "SigmaSaveGame.generated.h"

UCLASS(Blueprintable)
class NIMBUS_API USigmaSaveGame : public UNimbusSaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FSystemSaveData SystemData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FOptionsSaveData OptionsData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FCommonSaveData CommonData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FCampaignSaveData CampaignData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FCampaignSaveData VRCampaignData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FOnlineSaveData OnlineData;
    
    USigmaSaveGame();
};

