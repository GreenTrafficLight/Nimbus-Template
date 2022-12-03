#pragma once
#include "CoreMinimal.h"
#include "MissionEventMissileLostTargetDelegate.generated.h"

class AGameObject;
class AWeaponBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FMissionEventMissileLostTarget, const AGameObject*, Causer, const AGameObject*, MissileTarget, const AWeaponBase*, Weapon);

