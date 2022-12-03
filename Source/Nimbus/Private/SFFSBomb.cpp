#include "SFFSBomb.h"
#include "ChildSpawnerComponent.h"

ASFFSBomb::ASFFSBomb() {
    this->ChildSpawner = CreateDefaultSubobject<UChildSpawnerComponent>(TEXT("SFFS Child Spawner"));
    this->ChildClass = NULL;
    this->ScatterStart = 0.00f;
    this->ScatterInterval = 0.00f;
    this->ScatterAngle = 0.00f;
    this->ScatterCount = 0;
    this->ScatteringTtartTimeStartAngle = 0.00f;
    this->ChildInitialSpeed = 0.00f;
    this->bImpactPointPerfectPrediction = true;
}

