#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EventStatValue.h"
#include "SystemSaveData.generated.h"

USTRUCT(BlueprintType)
struct FSystemSaveData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bIsEulaAgreed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bIsMusicPlayerUnlocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FDateTime CreationDateTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FDateTime LastSavedDateTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FDateTime CreationDateTimeUTC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FDateTime LastSavedDateTimeUTC;
    
    UPROPERTY(EditAnywhere, SaveGame)
    uint8 TutorialFlagMask;
    
    UPROPERTY(EditAnywhere, SaveGame)
    uint32 WatchedStoreVersion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FEventStatValue> PendingEventStatList;
    
    UPROPERTY(EditAnywhere, SaveGame)
    uint64 TotalOfflinePlayTimeSec;
    
    UPROPERTY(EditAnywhere, SaveGame)
    uint64 TotalOfflineMRPEarned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<int32> SceneViewerUnlocked;
    
public:
    NIMBUS_API FSystemSaveData();
};

