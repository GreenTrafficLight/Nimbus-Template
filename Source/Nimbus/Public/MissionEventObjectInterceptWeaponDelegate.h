#pragma once
#include "CoreMinimal.h"
#include "MissionEventObjectInterceptWeaponDelegate.generated.h"

class AGameObject;
class AWeaponBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FMissionEventObjectInterceptWeapon, const AGameObject*, Causer, const AWeaponBase*, Weapon, const AGameObject*, InterceptedShooter, const AWeaponBase*, InterceptedWeapon);

