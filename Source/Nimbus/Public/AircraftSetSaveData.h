#pragma once
#include "CoreMinimal.h"
#include "AircraftSetSaveData.generated.h"

USTRUCT(BlueprintType)
struct FAircraftSetSaveData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, SaveGame)
    uint8 EmblemFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 PlaneID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 WeaponNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 EmblemID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 SkinNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 NicknameID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<int32> EnabledPartIDs;
    
public:
    NIMBUS_API FAircraftSetSaveData();
};

