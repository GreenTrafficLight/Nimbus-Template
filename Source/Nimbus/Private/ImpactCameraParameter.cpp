#include "ImpactCameraParameter.h"

UImpactCameraParameter::UImpactCameraParameter() {
    this->HitCheckSphereRadius = 30.00f;
    this->MinDistanceCameraObject = 30.00f;
    this->HitCheckStartHeightDistance = 250.00f;
    this->HitAddHeightDistance = 50.00f;
    this->AirCheckHeight = 200.00f;
    this->GroundCheckHeight = 50.00f;
    this->AirHeightCheckInterval = 0.50f;
    this->EmergencyCameraAnim = NULL;
    this->EmergencyCameraLength = 2300.00f;
    this->EmergencyCameraPreferredAngle = 30.00f;
    this->EmergencyCameraSafeDistance = 7.50f;
    this->EmergencyAvoidableMax = 1;
    this->bCameraMultiEmbedCheck = true;
    this->bMissileTrackingCameraStartRotatoIsPlayer = false;
    this->bMissileCameraLocationFlipHorizontal = true;
    this->bRocketLauncherCameraLocationFlipHorizontal = false;
    this->bSODCameraLocationFlipHorizontal = false;
    this->bBombCameraLocationFlipHorizontal = false;
    this->bUAVCameraLocationFlipHorizontal = false;
    this->bADMMCameraLocationFlipHorizontal = false;
    this->bMSTMCameraLocationFlipHorizontal = false;
}

