// KTFGDramaSubsystem.h
// Motor central del sistema de relaciones románticas.
// Implementa UWorldSubsystem: Unreal lo inicializa automáticamente con el mundo,
// sin que el proyecto huésped deba modificar su GameMode ni ninguna clase global.
//
// Responsabilidades:
//   — Cargar la configuración de parejas desde el DataAsset (LoadConfig)
//   — Registrar y desregistrar personajes conforme hacen BeginPlay / EndPlay
//   — Resolver el orden de carga con la cola PendingPairConfigs
//   — Mantener el mapa de relaciones activas con consultas en O(1)

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "KTFGData/KTFGRelationshipConfigData.h"
#include "KTFGDramaSubsystem.generated.h"

DECLARE_LOG_CATEGORY_EXTERN(LogKTFG, Log, All);

class AKTFGRomanceCharacterBase;
class UKTFGRomanceTropeData;
class UKTFGRelationshipComponent;

// ─────────────────────────────────────────────────────────────────────────────
// STRUCT DE RELACIÓN ACTIVA
// ─────────────────────────────────────────────────────────────────────────────

/** Datos de una relación activa en runtime.
 *  El Subsistema mantiene una instancia de esta estructura por cada personaje
 *  enlazado, lo que permite consultas en O(1) desde cualquiera de los dos extremos. */
USTRUCT(BlueprintType)
struct FKTFGActiveRelationship
{
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly, Category = "KTFG")
    TObjectPtr<AKTFGRomanceCharacterBase> CharacterA = nullptr;

    UPROPERTY(BlueprintReadOnly, Category = "KTFG")
    TObjectPtr<AKTFGRomanceCharacterBase> CharacterB = nullptr;

    UPROPERTY(BlueprintReadOnly, Category = "KTFG")
    TObjectPtr<UKTFGRomanceTropeData> Trope = nullptr;

    bool IsValid() const { return CharacterA != nullptr && CharacterB != nullptr; }
};

// ─────────────────────────────────────────────────────────────────────────────
// SUBSISTEMA
// ─────────────────────────────────────────────────────────────────────────────

UCLASS()
class KTFGDRAMAPLUGIN_API UKTFGDramaSubsystem : public UWorldSubsystem
{
    GENERATED_BODY()

public:

    // ── Ciclo de vida ─────────────────────────────────────────────────────────

    virtual void Initialize(FSubsystemCollectionBase& Collection) override;
    virtual void Deinitialize() override;

    // ── Configuración ─────────────────────────────────────────────────────────

    /** Carga el DataAsset de configuración y encola las parejas activas al inicio.
     *  Las parejas con bActiveAtStart = false quedan en espera hasta ActivatePair().
     *  Llama a esto desde BeginPlay de tu GameMode o Level Blueprint. */
    UFUNCTION(BlueprintCallable, Category = "KTFG|Setup",
        meta = (ToolTip = "Carga la configuración de parejas desde un DataAsset. Llama en BeginPlay del GameMode."))
    void LoadConfig(UKTFGRelationshipConfigData* Config);

    // ── Registro de personajes (llamado internamente por RelationshipComponent) ──

    /** Registra un personaje al hacer BeginPlay e intenta enlazarlo con su pareja
     *  si esta ya está disponible. Si no, queda en la cola PendingCharacters. */
    void RegisterCharacter(AKTFGRomanceCharacterBase* Character);

    /** Desregistra un personaje al hacer EndPlay y notifica a su pareja
     *  que ha quedado sin enlace. */
    void UnregisterCharacter(AKTFGRomanceCharacterBase* Character);

    // ── Gestión manual de parejas ─────────────────────────────────────────────

    /** Registra una pareja en runtime, disolviendo relaciones previas si las hubiera.
     *  Útil cuando el jugador elige su pareja o cuando una relación se desbloquea. */
    UFUNCTION(BlueprintCallable, Category = "KTFG|Runtime",
        meta = (ToolTip = "Registra una pareja manualmente. Disuelve relaciones previas si existen."))
    void RegisterPair(AKTFGRomanceCharacterBase* CharacterA, AKTFGRomanceCharacterBase* CharacterB, UKTFGRomanceTropeData* Trope);

    /** Activa una pareja configurada con bActiveAtStart = false.
     *  Si los personajes aún no están en escena, los encola para enlazarlos al llegar. */
    UFUNCTION(BlueprintCallable, Category = "KTFG|Runtime",
        meta = (ToolTip = "Activa una pareja con bActiveAtStart = false del DataAsset."))
    void ActivatePair(FName CharacterAID, FName CharacterBID);

    /** Disuelve la relación activa de un personaje. Ambos quedan sin pareja. */
    UFUNCTION(BlueprintCallable, Category = "KTFG|Runtime",
        meta = (ToolTip = "Disuelve la relación activa del personaje."))
    void DissolveRelationship(AKTFGRomanceCharacterBase* Character);

    // ── Consultas ────────────────────────────────────────────────────────────

    /** Devuelve la pareja activa del personaje, o nullptr si no tiene. */
    UFUNCTION(BlueprintCallable, BlueprintPure, Category = "KTFG|Query",
        meta = (ToolTip = "Devuelve la pareja romántica activa del personaje."))
    AKTFGRomanceCharacterBase* GetPartnerOf(AKTFGRomanceCharacterBase* Character) const;

    /** Devuelve el tropo activo de la relación del personaje. */
    UFUNCTION(BlueprintCallable, BlueprintPure, Category = "KTFG|Query",
        meta = (ToolTip = "Devuelve el tropo romántico activo de la relación."))
    UKTFGRomanceTropeData* GetActiveTrope(AKTFGRomanceCharacterBase* Character) const;

    /** Devuelve la estructura completa de relación (ambos personajes + tropo).
     *  bFound indica si el personaje tiene una relación activa en este momento. */
    UFUNCTION(BlueprintCallable, BlueprintPure, Category = "KTFG|Query",
        meta = (ToolTip = "Devuelve todos los datos de la relación activa del personaje."))
    FKTFGActiveRelationship GetRelationshipOf(AKTFGRomanceCharacterBase* Character, bool& bFound) const;

    /** Devuelve todas las relaciones activas sin duplicados (útil para sistemas de UI globales). */
    UFUNCTION(BlueprintCallable, BlueprintPure, Category = "KTFG|Query",
        meta = (ToolTip = "Devuelve todas las relaciones románticas activas."))
    TArray<FKTFGActiveRelationship> GetAllActiveRelationships() const;

    /** True si LoadConfig() se ha llamado con un DataAsset válido. */
    UFUNCTION(BlueprintCallable, BlueprintPure, Category = "KTFG|Query")
    bool IsConfigLoaded() const { return bConfigLoaded; }

private:

    // ── Estado interno ────────────────────────────────────────────────────────

    UPROPERTY()
    TObjectPtr<UKTFGRelationshipConfigData> ActiveConfig = nullptr;

    /** Mapa personaje → relación activa. Cada relación se almacena dos veces
     *  (una por personaje) para garantizar consultas en O(1) desde cualquier extremo. */
    TMap<TObjectPtr<AKTFGRomanceCharacterBase>, FKTFGActiveRelationship> RelationshipMap;

    /** Personajes registrados que aún no tienen pareja asignada porque su pareja
     *  no ha completado BeginPlay todavía. */
    TArray<TObjectPtr<AKTFGRomanceCharacterBase>> PendingCharacters;

    /** Configuraciones de parejas pendientes de enlazar porque uno o ambos
     *  personajes aún no han llegado a escena. */
    TArray<FKTFGPairConfig> PendingPairConfigs;

    bool bConfigLoaded = false;

    // ── Métodos privados ──────────────────────────────────────────────────────

    /** Comprueba si el personaje recién llegado completa alguna pareja pendiente
     *  y, si es así, los enlaza inmediatamente. */
    void TryLinkPendingCharacter(AKTFGRomanceCharacterBase* Character);

    /** Enlaza dos personajes a través de sus RelationshipComponents y registra
     *  la relación en el mapa. */
    void LinkPair(AKTFGRomanceCharacterBase* A, AKTFGRomanceCharacterBase* B, UKTFGRomanceTropeData* Trope);

    /** Busca un personaje por CharacterID en pendientes y en el mapa activo. */
    AKTFGRomanceCharacterBase* FindRegisteredCharacter(FName CharacterID) const;
};
