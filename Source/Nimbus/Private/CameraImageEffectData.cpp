#include "CameraImageEffectData.h"

FCameraImageEffectData::FCameraImageEffectData() {
    this->PlayTime = 0.00f;
    this->bCameraScaleUse = false;
    this->ChromaticAberrationCurves = NULL;
    this->VignetteIntensityCurves = NULL;
    this->GrainJitterCurves = NULL;
    this->GrainIntensityCurves = NULL;
}

