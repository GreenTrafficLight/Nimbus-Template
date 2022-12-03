#include "AerialRefuel3DUIActor.h"
#include "Components/TextRenderComponent.h"

AAerialRefuel3DUIActor::AAerialRefuel3DUIActor() {
    this->TextMaterial = NULL;
    this->TextMaterialVR = NULL;
    this->TextFont = NULL;
    this->TextFontVR = NULL;
    this->WidthAlignmentMaterialInst = NULL;
    this->HeightAlignmentMaterialInst = NULL;
    this->WidthAlignmentText = CreateDefaultSubobject<UTextRenderComponent>(TEXT("WidthAllignmentText"));
    this->HeightAlignmentText = CreateDefaultSubobject<UTextRenderComponent>(TEXT("HeightAllignmentText"));
    this->TextScreenHeight = 48.00f;
    this->VRTextScreenHeight = 28.00f;
    this->WidthAlignmentYOffsetScale = 0.56f;
    this->WidthAlignmentXOffset = 5.00f;
    this->AerialRefuelDiamondTexture = NULL;
    this->AerialRefuelDottedTexture = NULL;
    this->AerialRefuelSolidTexture = NULL;
    this->AerialRefuelMaterial = NULL;
    this->AerialRefuelPlayerInst = NULL;
    this->AerialRefuelTargetInst = NULL;
    this->AerialRefuelDottedInst = NULL;
    this->AerialRefuelSolidInst = NULL;
    this->AerialRefuelTextureScale = 1.00f;
    this->AerialRefuelVRTextureScale = 0.50f;
    this->AerialRefuelMinScaleLimit = 0.75f;
    this->AerialRefuelMinDistanceSquaredLimit = 2500.00f;
    this->AerialRefuelMaxDistanceSquaredLimit = 360000.00f;
    this->AerialRefuelTargetCentralizedBuffer = 25.00f;
    this->AerialRefuelTargetSensitivity = 1.50f;
    this->LimitCornerScale = 1.50f;
}

