#include "NimbusHangarMeshManager.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SceneComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"



void ANimbusHangarMeshManager::HangarLevelsStreamComplete() {
}

void ANimbusHangarMeshManager::GetHangarSubLevels(FHangarSubLevelSettings& PreviousSublevels, FHangarSubLevelSettings& CurrentSublevels) {
}

ANimbusHangarMeshManager::ANimbusHangarMeshManager() {
    this->SubLevelProcessRunning = false;
    this->bCurrentShowHangarMesh = false;
    this->PlaneBodyMesh = NULL;
    this->PlaneLandingGearMesh = NULL;
    this->PlaneRefuelMesh = NULL;
    this->WeaponRootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("WeaponRootComponent"));
    this->Weapon1BaseComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Weapon1BaseComponent"));
    this->Weapon2BaseComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Weapon2BaseComponent"));
    this->Weapon3BaseComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Weapon3BaseComponent"));
    this->Weapon1RackMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Weapon1RackMesh"));
    this->Weapon2RackMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Weapon2RackMesh"));
    this->Weapon3RackMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Weapon3RackMesh"));
    this->Weapon1Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Weapon1Mesh"));
    this->Weapon2Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Weapon2Mesh"));
    this->Weapon3Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Weapon3Mesh"));
    this->VRWeaponRootComponent = NULL;
    this->SpringArmComponent = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArmComponent"));
    this->CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraComponent"));
    this->PlaneCameras[0] = NULL;
    this->PlaneCameras[1] = NULL;
    this->PlaneCameras[2] = NULL;
    this->PlaneCameras[3] = NULL;
    this->PlaneCameras[4] = NULL;
    this->PlaneCameras[5] = NULL;
    this->PlaneCameras[6] = NULL;
    this->PlaneCameras[7] = NULL;
    this->PlaneCameras[8] = NULL;
    this->PlaneCameras[9] = NULL;
    this->PlaneCameras[10] = NULL;
    this->PlaneCameras[11] = NULL;
    this->ReviewCameras[0] = NULL;
    this->ReviewCameras[1] = NULL;
    this->ReviewCameras[2] = NULL;
    this->ReviewCameras[3] = NULL;
    this->ReviewCameras[4] = NULL;
    this->ReviewCameras[5] = NULL;
    this->ReviewCameras[6] = NULL;
    this->ReviewCameras[7] = NULL;
    this->ReviewCameras[8] = NULL;
    this->ReviewCameras[9] = NULL;
    this->ReviewCameras[10] = NULL;
    this->ReviewCameras[11] = NULL;
    this->SortieCameras[0] = NULL;
    this->SortieCameras[1] = NULL;
    this->SortieCameras[2] = NULL;
    this->SortieCameras[3] = NULL;
    this->SortieCameras[4] = NULL;
    this->SortieCameras[5] = NULL;
    this->SortieCameras[6] = NULL;
    this->SortieCameras[7] = NULL;
    this->SortieCameras[8] = NULL;
    this->SortieCameras[9] = NULL;
    this->SortieCameras[10] = NULL;
    this->SortieCameras[11] = NULL;
    this->EmptySetCamera = NULL;
    this->CameraBlendTimeSeconds = 0.00f;
    this->CurrentLoadingCameraAnimation = NULL;
    this->CurrentCameraAnimation = NULL;
    this->LoadedPlayerPlane = NULL;
    this->CurrentBodySkinMaterial = NULL;
    this->CurrentPartsSkinMaterial = NULL;
}

