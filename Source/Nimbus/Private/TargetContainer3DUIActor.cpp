#include "TargetContainer3DUIActor.h"
#include "Components/MaterialBillboardComponent.h"
#include "Components/TextRenderComponent.h"

ATargetContainer3DUIActor::ATargetContainer3DUIActor() {
    this->ContainerBox = CreateDefaultSubobject<UMaterialBillboardComponent>(TEXT("ContainerBox"));
    this->MultiplayerBillboardImage = CreateDefaultSubobject<UMaterialBillboardComponent>(TEXT("MultiBillboardImage"));
    this->ClientNameBillboardImage = CreateDefaultSubobject<UMaterialBillboardComponent>(TEXT("ClientNameBillboardImage"));
    this->HPGaugeBillboardImage = CreateDefaultSubobject<UMaterialBillboardComponent>(TEXT("HPGaugeBillboardImage"));
    this->HPGaugeSliderBillboardImage = CreateDefaultSubobject<UMaterialBillboardComponent>(TEXT("HPGaugeSliderBillboardImage"));
    this->AllianceText = CreateDefaultSubobject<UTextRenderComponent>(TEXT("AllianceText"));
    this->DistanceText = CreateDefaultSubobject<UTextRenderComponent>(TEXT("DistanceText"));
    this->ObjectTypeText = CreateDefaultSubobject<UTextRenderComponent>(TEXT("ObjectTypeText"));
    this->ObjectCallsignText = CreateDefaultSubobject<UTextRenderComponent>(TEXT("ObjectCallsignText"));
    this->GamerTagText = CreateDefaultSubobject<UTextRenderComponent>(TEXT("GamerTagText"));
    this->NextTargetText = CreateDefaultSubobject<UTextRenderComponent>(TEXT("NextTargetText"));
    this->TextRenderOffsetX = 5.00f;
    this->TextRenderOffsetY = -5.00f;
    this->BaseTextRenderOffsetY = 0.00f;
    this->VRTextRenderOffsetX = 0.00f;
    this->VRTextRenderOffsetY = 0.00f;
    this->VRBaseTextRenderOffsetY = 0.00f;
    this->ContainerImageBorder = 6.00f;
    this->ContainerBoxImageSize = 50.00f;
    this->TextScreenHeight = 28.00f;
    this->ContainerBoxMaterial = NULL;
    this->EmblemImageMaterial = NULL;
    this->ClientNameImageMaterial = NULL;
    this->TargetPinImageMaterial = NULL;
    this->StarStatusImageMaterial = NULL;
    this->HPGaugeMaterial = NULL;
    this->HPGaugeSliderMaterial = NULL;
    this->TextMaterial = NULL;
    this->TextMaterialVR = NULL;
    this->TextFont = NULL;
    this->TextFontVR = NULL;
    this->TextFontSize = 48.00f;
    this->TextFontSizeVR = 28.00f;
    this->TextYSpacing = 0.00f;
    this->ContainerBoxMaterialInst = NULL;
    this->EmblemMaterialInst = NULL;
    this->ClientNameMaterialInst = NULL;
    this->TargetPinsMaterialInst = NULL;
    this->StarStatusMaterialInst = NULL;
    this->HPGaugeMaterialInst = NULL;
    this->HPGaugeSliderMaterialInst = NULL;
    this->AllianceTextMaterialInst = NULL;
    this->DistanceTextMaterialInst = NULL;
    this->ObjectTypeTextMaterialInst = NULL;
    this->ObjectCallsignTextMaterialInst = NULL;
    this->GamerTagTextMaterialInst = NULL;
    this->NextTargetTextMaterialInst = NULL;
}

