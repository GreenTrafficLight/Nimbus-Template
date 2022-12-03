#include "TunnelMoveForcedVolume.h"
#include "Components/SphereComponent.h"
#include "Components/ArrowComponent.h"

ATunnelMoveForcedVolume::ATunnelMoveForcedVolume() {
    this->MoveTargetLocation = CreateDefaultSubobject<USphereComponent>(TEXT("TargetArrowComponent"));
    this->ArrowComponent = CreateDefaultSubobject<UArrowComponent>(TEXT("ArrowComponent"));
    this->AngleArrowComponentL = CreateDefaultSubobject<UArrowComponent>(TEXT("AngleArrowComponentL"));
    this->AngleArrowComponentR = CreateDefaultSubobject<UArrowComponent>(TEXT("AngleArrowComponentR"));
    this->AngleArrowComponentU = CreateDefaultSubobject<UArrowComponent>(TEXT("AngleArrowComponentU"));
    this->AngleArrowComponentD = CreateDefaultSubobject<UArrowComponent>(TEXT("AngleArrowComponentD"));
}

