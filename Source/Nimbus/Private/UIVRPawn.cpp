#include "UIVRPawn.h"
#include "GameFramework/FloatingPawnMovement.h"

void AUIVRPawn::TurnAtRate(float Rate) {
}

void AUIVRPawn::MoveUp_World(float Val) {
}

void AUIVRPawn::MoveRight(float Val) {
}

void AUIVRPawn::MoveForward(float Val) {
}

void AUIVRPawn::LookUpAtRate(float Rate) {
}

AUIVRPawn::AUIVRPawn() {
    this->BaseTurnRate = 45.00f;
    this->BaseLookUpRate = 45.00f;
    this->MovementComponent = CreateDefaultSubobject<UFloatingPawnMovement>(TEXT("MovementComponent0"));
    this->bAddDefaultMovementBindings = true;
}

