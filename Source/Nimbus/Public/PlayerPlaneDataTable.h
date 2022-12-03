#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EPlaneIGCSize.h"
#include "EPlaneHangarSize.h"
#include "Engine/DataTable.h"
#include "EGunCaliber.h"
#include "EPlaneCategory.h"
#include "EPlaneTargetMode.h"
#include "PlayerPlaneDataTable.generated.h"

class APlayerPlane;

USTRUCT(BlueprintType)
struct FPlayerPlaneDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlaneID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OriginalPlaneID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlaneStringID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPlaneTargetMode TargetMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<APlayerPlane> Reference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPlaneCategory Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPlaneHangarSize HangarSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPlaneIGCSize IGCSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGunCaliber GunCaliber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GunLoadCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MainWeaponLoadCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SpWeaponID1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SpWeaponLoadCount1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SpWeaponID2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SpWeaponLoadCount2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SpWeaponID3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SpWeaponLoadCount3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FlareLoadCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FlareEffectiveRange_MP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath HangarAcquireCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SortNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AlphabeticalSortNumber;
    
    UPROPERTY(EditAnywhere)
    uint8 GraphAirToAir;
    
    UPROPERTY(EditAnywhere)
    uint8 GraphAirToGround;
    
    UPROPERTY(EditAnywhere)
    uint8 GraphSpeed;
    
    UPROPERTY(EditAnywhere)
    uint8 GraphMobirity;
    
    UPROPERTY(EditAnywhere)
    uint8 GraphStability;
    
    UPROPERTY(EditAnywhere)
    uint8 GraphDefense;
    
    UPROPERTY(EditAnywhere)
    uint8 PartsSlotBody;
    
    UPROPERTY(EditAnywhere)
    uint8 PartsSlotArms;
    
    UPROPERTY(EditAnywhere)
    uint8 PartsSlotMisc;
    
    UPROPERTY(EditAnywhere)
    uint8 StealthLevel;
    
    UPROPERTY(EditAnywhere)
    uint8 MaxHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AircraftCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CanopyEffectChangeDuration_MP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CanopyIceAppearDuration_MP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CanopyIceChangeDuration_MP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CanopyEffectDecayMultiplier_MP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IceTriggerCloudDensity_MP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AirCurrentPositionInfluenceModifier_MP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AirCurrentRotationInfluenceModifier_MP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InAirCurrentMovementDegradePercent_MP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AirCurrentStrengthThreshold_MP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InCloudMovementDegradePercent_MP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InCloudMovementDegradeDuration_MP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InCloudStallSpeed_MP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InCloudBuffetSpeed_MP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CloudEnterDensity_MP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CloudExitDensity_MP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath RefPlaneImagePortrait;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath RefPlaneImageLandscape;
    
    UPROPERTY(EditAnywhere)
    float BeginAerialRefuelling[3];
    
    UPROPERTY(EditAnywhere)
    float BeginLanding[3];
    
    UPROPERTY(EditAnywhere)
    float BeginTakeoffA[3];
    
    UPROPERTY(EditAnywhere)
    float BeginTakeoffB[3];
    
    UPROPERTY(EditAnywhere)
    float BeginTakeoffC[3];
    
    UPROPERTY(EditAnywhere)
    float BeginTakeoffNavyA[3];
    
    UPROPERTY(EditAnywhere)
    float BeginTakeoffNavyB[3];
    
    UPROPERTY(EditAnywhere)
    float BeginTakeoffNavyC[3];
    
    UPROPERTY(EditAnywhere)
    float EndAerialRefuelling[3];
    
    UPROPERTY(EditAnywhere)
    float EndTakeOff[3];
    
    UPROPERTY(EditAnywhere)
    float WeaponChange[3];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsUnlockAircraftTree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DLCID;
    
    NIMBUS_API FPlayerPlaneDataTable();
};

