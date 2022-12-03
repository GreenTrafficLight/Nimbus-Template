#pragma once
#include "CoreMinimal.h"
#include "MissionEventObjectDestroyedDelegate.generated.h"

class AGameObject;
class AWeaponBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FMissionEventObjectDestroyed, const AGameObject*, Causer, const AGameObject*, DestroyedTarget, const AGameObject*, TargetLockonTarget, const AWeaponBase*, HitWeapon, const AWeaponBase*, HitWeaponTypeCDO);

