#include "RainLine.h"

FRainLine::FRainLine() {
    this->RainLineParticleSystem = NULL;
    this->IgnoreGravitySpeed = 0.00f;
    this->SpeedRateCurves = NULL;
    this->FreeFallSpeed = 0.00f;
    this->FreeFallThicknessRatio = 0.00f;
    this->MaxDensity = 0.00f;
    this->MaxDustTransparency = 0.00f;
    this->DustTransparencyEndChangeTime = 0.00f;
    this->MaxDensityCloud = 0.00f;
    this->MinThickness = 0.00f;
    this->MaxThickness = 0.00f;
    this->MaxThicknessCloud = 0.00f;
    this->MinLength = 0.00f;
    this->MaxLength = 0.00f;
    this->MinLengthSpeed = 0.00f;
    this->MaxLengthSpeed = 0.00f;
    this->RotationInterpMargin = 0.00f;
    this->OverSpeedMultiplier = 0.00f;
    this->RainLinePSC = NULL;
    this->SandSmokeMaterial = NULL;
}

