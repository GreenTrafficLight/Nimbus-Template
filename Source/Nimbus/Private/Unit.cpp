#include "Unit.h"
#include "Templates/SubclassOf.h"

class AGameObject;
class AUnit;
class AActor;
class AAIGameObject;
class APawn;

void AUnit::UndockChildActorUAVs() {
}

void AUnit::SkipOutOfWoldCheck(bool bSkip) {
}

void AUnit::SetWeaponSpecialBehavior(EWeaponNumber WeaponNumber, EWeaponSpecialBehaviorType BehaviorType) {
}

void AUnit::SetWeaponSettings(bool bInCanDamageTGT, bool bInCanFireNoCollisionWeapon) {
}

void AUnit::SetShowHudBox(bool bShowHUDBox) {
}

void AUnit::SetRadiusMeters(float RadiusInMeters) {
}

void AUnit::SetPathParameter(float InSpeedKmph, float InAccelerationMpss, float InRotationSpeedDegree) {
}

void AUnit::SetMinHealth(float InHealth) {
}

void AUnit::SetMinAltitudeMeters(float MinAltitudeMeters) {
}

void AUnit::SetMaxAltitudeMeters(float MaxAltitudeMeters) {
}

void AUnit::SetIsTGT(bool bIsTarget) {
}

void AUnit::SetIsInvincible(bool bInvincible) {
}

void AUnit::SetIsCosmetic() {
}

void AUnit::SetIsAttackTargetsException(bool bAttackTargetsException) {
}

void AUnit::SetHudBoxVisibilityRange(float RadiusMeters) {
}

void AUnit::SetHudBoxAttribute(EHudBoxAttribute Attribute) {
}

void AUnit::SetGameObjectCurrentSpeed(float SpeedKmph) {
}

void AUnit::SetFaction(EFaction NewFaction) {
}

void AUnit::SetExceptionTarget(AGameObject* ExceptionTarget) {
}

void AUnit::SetEnemySearchType(ETargetType InType) {
}

void AUnit::SetCommonAttributes(bool bShowHUDBox, bool bIsInvincible, bool bIsTGT) {
}

void AUnit::RestoreUnit() {
}

void AUnit::RequestSpecialAction(const FAISpecialActionRequestInfo& SpecialActionRequestInfo) {
}

void AUnit::RepositionUnit(UnitActivationType RepositionType, FVector Position, FRotator Rotation, AActor* TransformReferenceActor, bool bAddHeightOfGroundToZ) {
}

void AUnit::RemoveAIGameObject(AAIGameObject* Object) {
}

void AUnit::OnRestored_Implementation() {
}



void AUnit::ModifyHealth(EHPModifier ModType, float InValue, APawn* DamageCauser, bool bCauseDamageEvent) {
}

void AUnit::K2_DestroyActor() {
}

bool AUnit::IsDestroyed() const {
    return false;
}

bool AUnit::IsActivated() const {
    return false;
}

bool AUnit::HasAliveGameObject(bool bIncludeChild) const {
    return false;
}

float AUnit::GetUnitDamagePercentage() const {
    return 0.0f;
}

int32 AUnit::GetTotalGameObjectNum(bool bIncludeChild) const {
    return 0;
}

ESubFaction AUnit::GetSubFaction() const {
    return ESubFaction::EnemyA;
}

float AUnit::GetRadiusMeters() {
    return 0.0f;
}

EFaction AUnit::GetFaction() const {
    return EFaction::Enemy;
}

int32 AUnit::GetDeadGameObjectNum(bool bIncludeChild) const {
    return 0;
}

int32 AUnit::GetAliveGameObjectNum(bool bIncludeChild) const {
    return 0;
}

TArray<AAIGameObject*> AUnit::GetAIGameObjectsCopy(TSubclassOf<AAIGameObject> SubClass) {
    return TArray<AAIGameObject*>();
}

void AUnit::EngagementOrder(EEngagement Order, AActor* TargetEnemy, EEnemySearchPriority SearchPriority, EEnemySearchPriorityExtension SearchPriorityExtension, bool bIgnoreUnidentifiedObject, bool IgnoreAttackQuota, bool CanFireWeapon1, bool CanFireWeapon2, bool CanFireWeapon3) {
}

void AUnit::EnableKDSMode(bool bInEnabled) {
}

void AUnit::DockUAVsToActor(AGameObject* ParentObject, const FString& DockSocketName, int32 FirstSlot, int32 LastSlot) {
}

void AUnit::DockChildActorUAVs() {
}

void AUnit::DeactivateUnit() {
}

bool AUnit::AreAllUnitsUAVDocked(TArray<AUnit*> Units) {
    return false;
}

bool AUnit::AreAllUAVDocked() {
    return false;
}

void AUnit::AddAIGameObject(AAIGameObject* Object) {
}

void AUnit::Activate(bool bActivate) {
}

AUnit::AUnit() {
    this->bIsMoving = false;
    this->bUsingSpecifiedFormation = false;
    this->bActivateFromStart = true;
    this->Faction = EFaction::Enemy;
    this->SubFaction = ESubFaction::None;
    this->MinAltitude = 8000.00f;
    this->MaxAltitude = 120000.00f;
    this->Radius = 80000.00f;
    this->HostileSearchDuration = 0.50f;
    this->bIsNotActivateDeadObjectOnRestart = false;
    this->UnitAsyncTask = NULL;
    this->AIPathComp = NULL;
    this->bNotUnitIconCandidate = false;
}

