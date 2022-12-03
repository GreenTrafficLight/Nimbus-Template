#include "NimbusRailgunTarget.h"

ANimbusRailgunTarget::ANimbusRailgunTarget() {
    this->bDebugDraw = false;
    this->TargetActor = NULL;
    this->OwningAIGameObject = NULL;
    this->SpeedDelayCurves = NULL;
    this->SpeedDelayDistanceRateCurves = NULL;
    this->ShakeMoveTimeCurves = NULL;
}

