#include "SystemObjectSonobuoy.h"

class AGameObject;

void ASystemObjectSonobuoy::Scan() {
}

void ASystemObjectSonobuoy::Drop(AGameObject* Dropper) {
}

ASystemObjectSonobuoy::ASystemObjectSonobuoy() {
    this->SplashVFX = NULL;
    this->WaterSurface = 0.00f;
    this->WaterDepth = -300.00f;
    this->Gravity = 9.80f;
    this->MaxFallingSpeed = 300.00f;
    this->SinkSpeed = 100.00f;
    this->Radius = 1000.00f;
    this->SearchInterval = 10.00f;
    this->DropOffset = 0.00f;
    this->bDrawSonobuoyIcon = false;
    this->SkeletalMeshComp = NULL;
}

