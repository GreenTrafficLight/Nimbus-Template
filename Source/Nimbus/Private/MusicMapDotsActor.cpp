#include "MusicMapDotsActor.h"

AMusicMapDotsActor::AMusicMapDotsActor() {
    this->UpdateInterval = 5;
    this->X_Size = 50;
    this->Y_Size = 30;
    this->X_Length = 5.50f;
    this->Y_Length = 10.00f;
    this->SpectrumVal = 10.00f;
    this->MaxDSP = 255;
    this->CamTargetDepth = 0.00f;
    this->CamTargetHeight = 0.00f;
    this->CamTargetWidth = 0.00f;
    this->LookPitch = 20.00f;
    this->LookDistance = 450.00f;
    this->CameraFov = 50.00f;
    this->DotsDegRee = 0.00f;
    this->BillboardDot = NULL;
}

