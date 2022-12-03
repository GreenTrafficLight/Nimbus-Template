#include "AiasAvoidsObject.h"
#include "Components/ArrowComponent.h"

AAiasAvoidsObject::AAiasAvoidsObject() {
    this->ApproachAttenuationGravity = 1.00f;
    this->UpperHeight = 2500.00f;
    this->MiddleHeight = -1000.00f;
    this->UpperFallSpeed = 1000.00f;
    this->LowerFallSpeed = -1000.00f;
    this->ArrowComponentUpperHeight = CreateDefaultSubobject<UArrowComponent>(TEXT("ArrowComponentUpperHeight"));
    this->ArrowComponentMiddleHeight = CreateDefaultSubobject<UArrowComponent>(TEXT("ArrowComponentMiddleHeight"));
}

