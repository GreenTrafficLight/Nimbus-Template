#include "AIPath.h"

AAIPath::AAIPath() {
	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
	SetRootComponent(RootComponent);
    this->SplineComponent = NULL;
    this->ControlType = EAIPathControlType::UsePathPoint;
}

