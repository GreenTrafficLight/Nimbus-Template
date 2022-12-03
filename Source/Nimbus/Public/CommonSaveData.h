#pragma once
#include "CoreMinimal.h"
#include "UnlockSaveData.h"
#include "CommonSaveData.generated.h"

USTRUCT(BlueprintType)
struct FCommonSaveData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FUnlockSaveData> UnlockData;
    
    UPROPERTY(EditAnywhere, SaveGame)
    uint64 TotalPlayTimeSec;
    
    UPROPERTY(EditAnywhere, SaveGame)
    TArray<uint32> UnlockedMedalIdList;
    
    UPROPERTY(EditAnywhere)
    TArray<uint32> UnlockedRewardsMedalIdList;
    
    UPROPERTY(EditAnywhere, SaveGame)
    TArray<uint32> NewlyUnlockedMedalIdList;
    
    UPROPERTY(EditAnywhere, SaveGame)
    TArray<uint32> UnlockedSkinIdList;
    
    UPROPERTY(EditAnywhere)
    TArray<uint32> UnlockedRewardsSkinIdList;
    
    UPROPERTY(EditAnywhere, SaveGame)
    TArray<uint32> NewlyUnlockedSkinIdList;
    
    UPROPERTY(EditAnywhere, SaveGame)
    TArray<uint32> UnlockedEmblemIdList;
    
    UPROPERTY(EditAnywhere)
    TArray<uint32> UnlockedRewardsEmblemIdList;
    
    UPROPERTY(EditAnywhere, SaveGame)
    TArray<uint32> NewlyUnlockedEmblemIdList;
    
    UPROPERTY(EditAnywhere, SaveGame)
    TArray<uint32> UnlockedNicknameIdList;
    
    UPROPERTY(EditAnywhere)
    TArray<uint32> UnlockedRewardsNicknameIdList;
    
    UPROPERTY(EditAnywhere, SaveGame)
    TArray<uint32> NewlyUnlockedNicknameIdList;
    
    UPROPERTY(EditAnywhere)
    TArray<uint32> UnlockedRewardsAircrafts;
    
    UPROPERTY(EditAnywhere)
    TArray<uint32> UnlockedRewardsWeapons;
    
    UPROPERTY(EditAnywhere, SaveGame)
    TArray<uint32> UnlockedAircraftTreeNodeIDs;
    
    UPROPERTY(EditAnywhere, SaveGame)
    TArray<uint32> NewlyUnlockedAircraftTreeNodeIDs;
    
    UPROPERTY(EditAnywhere, SaveGame)
    TArray<uint32> NewlyIconUnlockedAircraftTreeNodeIDs;
    
    UPROPERTY(EditAnywhere, SaveGame)
    TArray<uint32> PurchasedAircrafts;
    
    UPROPERTY(EditAnywhere, SaveGame)
    TArray<uint32> NewlyPurchasedAircrafts;
    
    UPROPERTY(EditAnywhere, SaveGame)
    TArray<uint32> PurchasedWeapons;
    
    UPROPERTY(EditAnywhere, SaveGame)
    TArray<uint32> NewlyPurchasedWeapons;
    
    UPROPERTY(EditAnywhere, SaveGame)
    TArray<uint32> PurchasedParts;
    
    UPROPERTY(EditAnywhere, SaveGame)
    TArray<uint32> NewlyPurchasedParts;
    
    UPROPERTY(EditAnywhere, SaveGame)
    TArray<uint32> DefeatedPilotDataIdList;
    
    UPROPERTY(EditAnywhere, SaveGame)
    TArray<uint32> SeenPilotDataIdList;
    
    UPROPERTY(EditAnywhere, SaveGame)
    uint64 CurrentMRP;
    
    UPROPERTY(EditAnywhere, SaveGame)
    uint64 TotalMRP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 LastCameraViewType;
    
public:
    NIMBUS_API FCommonSaveData();
};

