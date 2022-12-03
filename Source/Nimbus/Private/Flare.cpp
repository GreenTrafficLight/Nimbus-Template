#include "Flare.h"
#include "Components/SphereComponent.h"
#include "FlareMovementComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/PointLightComponent.h"

void AFlare::OnImpact(const FHitResult& HitResult) {
}

AFlare::AFlare() {
    this->FlareMovement = CreateDefaultSubobject<UFlareMovementComponent>(TEXT("Flare Movement"));
    this->SphereCollider = CreateDefaultSubobject<USphereComponent>(TEXT("Flare Sphere Collider"));
    this->FlareParticles = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Flare Particles"));
    this->SmokeParticles = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Smoke Particles"));
    this->bUseFireLight = false;
    this->FireLight = CreateDefaultSubobject<UPointLightComponent>(TEXT("Fire Light"));
    this->FireLightIntensityCurves = NULL;
    this->InitialSpeed = 0.00f;
    this->GravitationalAcceleration = 98.00f;
    this->LifeTime = 0.00f;
    this->VFXLifeTime = 0.00f;
    this->FireSoundEvent = NULL;
    this->bCollided = false;
}

