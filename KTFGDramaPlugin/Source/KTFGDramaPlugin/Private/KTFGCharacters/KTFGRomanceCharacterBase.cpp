// KTFGRomanceCharacterBase.cpp
// Actor base para los personajes del sistema de relaciones románticas.
// Integra identidad (CharacterID, DisplayName), personalidad (PersonalityData)
// y los dos componentes operativos: EmotionComponent y RelationshipComponent.
// Los proyectos pueden heredar de esta clase o adjuntar los componentes
// manualmente a cualquier Actor existente.

#include "KTFGCharacters/KTFGRomanceCharacterBase.h"
#include "KTFGComponents/KTFGRelationshipComponent.h"

AKTFGRomanceCharacterBase::AKTFGRomanceCharacterBase()
{
    // Los personajes del sistema no necesitan tick por defecto.
    // La lógica emocional se actualiza por eventos, no por frame.
    PrimaryActorTick.bCanEverTick = false;

    SceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
    RootComponent = SceneRoot;

    EmotionComponent = CreateDefaultSubobject<UKTFGEmotionComponent>(TEXT("EmotionComponent"));
    RelationshipComponent = CreateDefaultSubobject<UKTFGRelationshipComponent>(TEXT("RelationshipComponent"));
}

void AKTFGRomanceCharacterBase::BeginPlay()
{
    Super::BeginPlay();
    // El RelationshipComponent se encarga de registrar al personaje
    // en el Subsistema durante su propio BeginPlay.
}

UKTFGEmotionComponent* AKTFGRomanceCharacterBase::GetEmotionComponent() const
{
    return EmotionComponent;
}

void AKTFGRomanceCharacterBase::ApplyPersonalityBaseLineToEmotions()
{
    // Establece los valores emocionales de base derivados de la personalidad
    // del personaje, independientemente del tropo asignado.
    // Útil para inicializaciones manuales fuera del flujo automático del Subsistema.
    if (!EmotionComponent || !PersonalityData) return;

    EmotionComponent->SetPride(PersonalityData->PrideBaseline);

    // Vulnerability derivada de EmotionalOpenness con un factor conservador (0.5)
    // para que la apertura emocional no sature la variable desde el inicio.
    const float InitialVulnerability = FMath::Clamp(PersonalityData->EmotionalOpenness * 0.5f, 0.0f, 100.0f);
    EmotionComponent->SetVulnerability(InitialVulnerability);
}

void AKTFGRomanceCharacterBase::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}
