#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "PlayerSpecialWeaponConfig.generated.h"

class AWeaponBase;
class UMeshComponent;
class UAkAudioEvent;

USTRUCT(BlueprintType)
struct FPlayerSpecialWeaponConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AWeaponBase> WeaponClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxWeaponCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName WeaponPylonMeshName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMeshComponent* WeaponPylonMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* CoverOpeningSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* CoverClosingSound;
    
    NIMBUS_API FPlayerSpecialWeaponConfig();
};

