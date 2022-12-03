#pragma once
#include "CoreMinimal.h"
#include "EGameObjectCategory.h"
#include "EGameObjectSubCategory.h"
#include "EWeaponID.h"
#include "KillStats.generated.h"

USTRUCT(BlueprintType)
struct FKillStats {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString KillName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 KillScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float KillTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAir;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGameObjectCategory KillCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGameObjectSubCategory KillSubCategory;
    
    UPROPERTY(EditAnywhere)
    uint16 KillPilotDataID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWeaponID KillWeaponID;
    
    NIMBUS_API FKillStats();
};

