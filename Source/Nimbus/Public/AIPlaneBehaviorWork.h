#pragma once
#include "CoreMinimal.h"
#include "AIPlaneBehaviorManeuverPitchWork.h"
#include "UObject/Object.h"
#include "AIPlaneBehaviorManeuverCloudReactionWork.h"
#include "AIPlaneBehaviorManeuverBarrelRollWork.h"
#include "AIPlaneBehaviorManeuverAileronRollWork.h"
#include "AIPlaneBehaviorManeuverFlatSpinWork.h"
#include "AIPlaneBehaviorManeuverCobraTurnWork.h"
#include "AIPlaneBehaviorManeuverFlyStraightWork.h"
#include "AIPlaneBehaviorManeuverKulbitWork.h"
#include "AIPlaneBehaviorManeuverLevelWork.h"
#include "AIPlaneBehaviorManeuverPugachevsCobraWork.h"
#include "AIPlaneBehaviorManeuverRollWork.h"
#include "AIPlaneBehaviorManeuverSlalomWork.h"
#include "AIPlaneBehaviorManeuverStateUninterruptibleWork.h"
#include "AIPlaneBehaviorManeuverTurnAdvancedWork.h"
#include "AIPlaneBehaviorManeuverTurnNormalWork.h"
#include "AIPlaneBehaviorManeuverTurnQuickWork.h"
#include "AIPlaneBehaviorManeuverTurnToPointWork.h"
#include "AIPlaneBehaviorManeuverYawWork.h"
#include "AIPlaneBehaviorShieldWork.h"
#include "AIPlaneBehaviorReturnToUnitCircleWork.h"
#include "AIPlaneBehaviorPursueTargetWork.h"
#include "AIPlaneBehaviorOutOfWorldReactionWork.h"
#include "AIPlaneBehaviorMoveToTargetWork.h"
#include "AIPlaneBehaviorMoveAwayFromTargetWork.h"
#include "AIPlaneBehaviorLevelPlaneWork.h"
#include "AIPlaneBehaviorGoFormationWork.h"
#include "AIPlaneBehaviorFlyToClearAltitudeWork.h"
#include "AIPlaneBehaviorAvoidObstacleWork.h"
#include "AIPlaneBehaviorAutoDestructWork.h"
#include "AIPlaneBehaviorAreaPatrolWork.h"
#include "AIPlaneBehaviorActivateFlaresWork.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "AIPlaneBehaviorWork.generated.h"

class UBlackboardComponent;

UCLASS(Blueprintable)
class UAIPlaneBehaviorWork : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UBlackboardComponent* OwningBlackboard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAIPlaneBehaviorManeuverAileronRollWork ManeuverAileronRollWork;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAIPlaneBehaviorManeuverBarrelRollWork ManeuverBarrelRollWork;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAIPlaneBehaviorManeuverCloudReactionWork ManeuverCloudReactionWork;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAIPlaneBehaviorManeuverCobraTurnWork ManeuverCobraTurnWork;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAIPlaneBehaviorManeuverFlatSpinWork ManeuverFlatSpinWork;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAIPlaneBehaviorManeuverFlyStraightWork ManeuverFlyStraightWork;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAIPlaneBehaviorManeuverKulbitWork ManeuverKulbitWork;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAIPlaneBehaviorManeuverLevelWork ManeuverLevelWork;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAIPlaneBehaviorManeuverPitchWork ManeuverPitchWork;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAIPlaneBehaviorManeuverPugachevsCobraWork ManeuverPugachevsCobraWork;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAIPlaneBehaviorManeuverRollWork ManeuverRollWork;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAIPlaneBehaviorManeuverSlalomWork ManeuverSlalomWork;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAIPlaneBehaviorManeuverStateUninterruptibleWork ManeuverStateUninterruptibleWork;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAIPlaneBehaviorManeuverTurnAdvancedWork ManeuverTurnAdvancedWork;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAIPlaneBehaviorManeuverTurnNormalWork ManeuverTurnNormalWork;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAIPlaneBehaviorManeuverTurnQuickWork ManeuverTurnQuickWork;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAIPlaneBehaviorManeuverTurnToPointWork ManeuverTurnToPointWork;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAIPlaneBehaviorManeuverYawWork ManeuverYawWork;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAIPlaneBehaviorShieldWork ShieldWork;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAIPlaneBehaviorReturnToUnitCircleWork ReturnToUnitCircleWork;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAIPlaneBehaviorPursueTargetWork PursueTargetWork;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAIPlaneBehaviorOutOfWorldReactionWork OutOfWorldReactionWork;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAIPlaneBehaviorMoveToTargetWork MoveToTargetWork;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAIPlaneBehaviorMoveAwayFromTargetWork MoveAwayFromTargetWork;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAIPlaneBehaviorLevelPlaneWork LevelPlaneWork;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAIPlaneBehaviorGoFormationWork GoFormationWork;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAIPlaneBehaviorFlyToClearAltitudeWork FlyToClearAltitudeWork;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAIPlaneBehaviorAvoidObstacleWork AvoidObstacleWork;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAIPlaneBehaviorAutoDestructWork AutoDestructWork;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAIPlaneBehaviorAreaPatrolWork AreaPatrolWork;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAIPlaneBehaviorActivateFlaresWork ActivateFlaresWork;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, FBlackboardKeySelector> BlackboardKeyMap;
    
public:
    UAIPlaneBehaviorWork();
};

