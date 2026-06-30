// KTFGRomanceCharacterBase.h
// Actor base para los personajes del sistema de relaciones románticas.
// Integra identidad (CharacterID, DisplayName, género, rol), personalidad
// y los dos componentes operativos: EmotionComponent y RelationshipComponent.
// Los proyectos pueden heredar de esta clase o adjuntar los componentes
// manualmente a cualquier Actor existente.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "KTFGComponents/KTFGEmotionComponent.h"
#include "KTFGData/KTFGCharacterPersonalityData.h"
#include "KTFGRomanceCharacterBase.generated.h"

class UKTFGRelationshipComponent;

// ─────────────────────────────────────────────────────────────────────────────
// ENUMS DE IDENTIDAD
// ─────────────────────────────────────────────────────────────────────────────

/** Género narrativo del personaje. Puede usarse para filtros de diálogo o UI. */
UENUM(BlueprintType)
enum class EKTFGRomanceGender : uint8
{
    Male    UMETA(DisplayName = "Male"),
    Female  UMETA(DisplayName = "Female"),
    Neutral UMETA(DisplayName = "Neutral")
};

/** Rol narrativo del personaje dentro del arco romántico. */
UENUM(BlueprintType)
enum class EKTFGRomanceRole : uint8
{
    MainLead      UMETA(DisplayName = "Main Lead"),
    SecondaryLead UMETA(DisplayName = "Secondary Lead")
};

// ─────────────────────────────────────────────────────────────────────────────
// CLASE BASE
// ─────────────────────────────────────────────────────────────────────────────

UCLASS()
class KTFGDRAMAPLUGIN_API AKTFGRomanceCharacterBase : public AActor
{
    GENERATED_BODY()

public:

    // ── Componentes ──────────────────────────────────────────────────────────

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "KTFG|Components")
    USceneComponent* SceneRoot;

    /** Gestiona el estado emocional (Affection, Trust, Pride, Jealousy, Vulnerability). */
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "KTFG|Components")
    UKTFGEmotionComponent* EmotionComponent;

    /** Gestiona la lógica de la relación romántica: score, fase, tropo y eventos. */
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "KTFG|Components")
    UKTFGRelationshipComponent* RelationshipComponent;

    // ── Identidad ────────────────────────────────────────────────────────────

    /** ID único del personaje. Debe coincidir con el CharacterAID o CharacterBID
     *  definido en el DataAsset KTFGRelationshipConfigData para que el Subsistema
     *  pueda enlazarlo automáticamente con su pareja. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "KTFG|Identity",
        meta = (ToolTip = "ID único del personaje. Debe coincidir con el ID en KTFGRelationshipConfigData."))
    FName CharacterID;

    /** Nombre visible en UI y logs. No se usa internamente para el enlace. */
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "KTFG|Identity")
    FText DisplayName;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "KTFG|Identity")
    EKTFGRomanceGender CharacterGender = EKTFGRomanceGender::Neutral;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "KTFG|Identity")
    EKTFGRomanceRole CharacterRole = EKTFGRomanceRole::MainLead;

    /** Rasgos de personalidad que modulan cómo las situaciones afectan a este personaje. */
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "KTFG|Identity")
    UKTFGCharacterPersonalityData* PersonalityData = nullptr;

    // ── Funciones ────────────────────────────────────────────────────────────

    /** Acceso rápido al EmotionComponent. Equivalente a FindComponentByClass pero tipado. */
    UFUNCTION(BlueprintCallable, Category = "KTFG|Character")
    UKTFGEmotionComponent* GetEmotionComponent() const;

    /** Aplica los valores emocionales base derivados de PersonalityData.
     *  Útil para inicializaciones manuales fuera del flujo automático del Subsistema. */
    UFUNCTION(BlueprintCallable, Category = "KTFG|Character")
    void ApplyPersonalityBaseLineToEmotions();

public:
    AKTFGRomanceCharacterBase();

protected:
    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;
};
