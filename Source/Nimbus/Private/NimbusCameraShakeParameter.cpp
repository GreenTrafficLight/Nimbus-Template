#include "NimbusCameraShakeParameter.h"

UNimbusCameraShakeParameter::UNimbusCameraShakeParameter() {
    this->DelayCurve = NULL;
    this->DelayCurve_Large = NULL;
    this->HeliosBombTask_FirstScale = 1.00f;
    this->HeliosBombTask_DecayScale = 0.03f;
    this->HeliosBombTask_PlaybackInterval = 0.03f;
    this->bDefaultControllerShakeSetting = false;
}

