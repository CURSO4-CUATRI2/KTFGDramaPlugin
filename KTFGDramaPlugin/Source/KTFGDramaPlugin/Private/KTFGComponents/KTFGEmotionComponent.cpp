// KTFGEmotionComponent.cpp
// Componente de estado emocional de un personaje.
// Gestiona cinco variables flotantes en [0, 100]: Affection, Trust, Pride, Jealousy, Vulnerability.
// Todas las modificaciones pasan por ClampEmotionValue(), que garantiza que ningún
// valor salga del rango sin necesidad de validaciones externas.

#include "KTFGComponents/KTFGEmotionComponent.h"
#include "Math/UnrealMathUtility.h"

UKTFGEmotionComponent::UKTFGEmotionComponent()
{
	// El componente no necesita tick; las emociones solo cambian
	// cuando se dispara una situación o un evento relacional.
	PrimaryComponentTick.bCanEverTick = false;
}

void UKTFGEmotionComponent::BeginPlay()
{
	Super::BeginPlay();

	// Clampear los valores iniciales por si se asignaron valores fuera de rango
	// directamente en el editor (p. ej. por error tipográfico en el DataAsset).
	Affection = ClampEmotionValue(Affection);
	Trust = ClampEmotionValue(Trust);
	Pride = ClampEmotionValue(Pride);
	Jealousy = ClampEmotionValue(Jealousy);
	Vulnerability = ClampEmotionValue(Vulnerability);
}

void UKTFGEmotionComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

// ─────────────────────────────────────────────────────────────────────────────
// SETTERS — asignación absoluta
// ─────────────────────────────────────────────────────────────────────────────

void UKTFGEmotionComponent::SetAffection(float NewAffection)
{
	Affection = ClampEmotionValue(NewAffection);
}

void UKTFGEmotionComponent::SetTrust(float NewTrust)
{
	Trust = ClampEmotionValue(NewTrust);
}

void UKTFGEmotionComponent::SetPride(float NewPride)
{
	Pride = ClampEmotionValue(NewPride);
}

void UKTFGEmotionComponent::SetJealousy(float NewJealousy)
{
	Jealousy = ClampEmotionValue(NewJealousy);
}

void UKTFGEmotionComponent::SetVulnerability(float NewVulnerability)
{
	Vulnerability = ClampEmotionValue(NewVulnerability);
}

// ─────────────────────────────────────────────────────────────────────────────
// MODIFICADORES — cambio relativo (delta positivo o negativo)
// ─────────────────────────────────────────────────────────────────────────────

void UKTFGEmotionComponent::ModifyAffection(float Delta)
{
	Affection = ClampEmotionValue(Affection + Delta);
}

void UKTFGEmotionComponent::ModifyTrust(float Delta)
{
	Trust = ClampEmotionValue(Trust + Delta);
}

void UKTFGEmotionComponent::ModifyPride(float Delta)
{
	Pride = ClampEmotionValue(Pride + Delta);
}

void UKTFGEmotionComponent::ModifyJealousy(float Delta)
{
	Jealousy = ClampEmotionValue(Jealousy + Delta);
}

void UKTFGEmotionComponent::ModifyVulnerability(float Delta)
{
	Vulnerability = ClampEmotionValue(Vulnerability + Delta);
}

// ─────────────────────────────────────────────────────────────────────────────
// UTILIDADES
// ─────────────────────────────────────────────────────────────────────────────

float UKTFGEmotionComponent::ClampEmotionValue(float Value) const
{
	return FMath::Clamp(Value, 0.0f, 100.0f);
}
