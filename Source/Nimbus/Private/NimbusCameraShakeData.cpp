#include "NimbusCameraShakeData.h"

FNimbusCameraShakeData::FNimbusCameraShakeData() {
    this->CameraShakeBP = NULL;
    this->PlayRate_Basic = 0.00f;
    this->bIsPlayFPS = false;
    this->bIsPlayTPS = false;
    this->bIsPlayCockpit = false;
    this->bIsVRMode = false;
    this->bIsImpact = false;
    this->bIsReplay = false;
    this->DistanceScaleCurve = NULL;
    this->FovScaleCurve = NULL;
    this->bFovScaleUpdeta = false;
    this->bStopOtherCameraShake = false;
    this->bIgnoreStopOther = false;
}

