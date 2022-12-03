#include "Texture3DUIActor.h"
#include "Components/MaterialBillboardComponent.h"

ATexture3DUIActor::ATexture3DUIActor() {
    this->TextureBox = CreateDefaultSubobject<UMaterialBillboardComponent>(TEXT("TextureBox"));
    this->TextureBoxMaterial = NULL;
    this->TextureBoxMaterialInst = NULL;
    this->CurrentTexture = NULL;
}

