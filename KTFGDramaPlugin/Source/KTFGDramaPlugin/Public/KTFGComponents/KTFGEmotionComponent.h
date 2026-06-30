// KTFGEmotionComponent.h
// Propósito : Almacena y manipula el estado emocional de un personaje romántico.
//
// Responsabilidades:
//   - Mantener cinco valores emocionales en rango [0, 100]: Affection, Trust,
//     Pride, Jealousy y Vulnerability.
//   - Exponer setters, modificadores (delta) y getters para Blueprint y C++.
//   - Proveer un ResetEmotions() que devuelve las emociones a sus valores
//     por defecto (normalmente los fijados por el tropo al inicio).
//
// Notas de diseño:
//   - Intencionalmente no conoce al RelationshipComponent: solo guarda datos.
//     Toda lógica de recálculo del score vive en UKTFGRelationshipComponent.
//   - Pride parte en 50 por defecto porque valores extremos (0 o 100) rompen
//     la fórmula RPS incluso antes de que empiece ninguna interacción.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "KTFGEmotionComponent.generated.h"


UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class KTFGDRAMAPLUGIN_API UKTFGEmotionComponent : public UActorComponent
{
    GENERATED_BODY()

public:
    UKTFGEmotionComponent();

protected:
    virtual void BeginPlay() override;

public:
    virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;


    // ── ESTADO EMOCIONAL ──────────────────────────────────────────────────────

    /** Cuánto afecto siente este personaje hacia el otro de la pareja. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "KTFG|Emotion",
        meta = (ClampMin = "0.0", ClampMax = "100.0"))
    float Affection = 0.0f;

    /** Confianza depositada en el otro personaje. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "KTFG|Emotion",
        meta = (ClampMin = "0.0", ClampMax = "100.0"))
    float Trust = 0.0f;

    /**
     * Orgullo del personaje. Penaliza el RPS linealmente desde 0:
     * a mayor orgullo, mayor resistencia a avanzar en la relación.
     * Inicia en 50 para representar un estado neutro.
     */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "KTFG|Emotion",
        meta = (ClampMin = "0.0", ClampMax = "100.0"))
    float Pride = 50.0f;

    /**
     * Celos hacia el otro personaje. Solo penalizan el RPS por encima de 50;
     * por debajo se consideran dentro de lo tolerable y no tienen efecto.
     */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "KTFG|Emotion",
        meta = (ClampMin = "0.0", ClampMax = "100.0"))
    float Jealousy = 0.0f;

    /**
     * Apertura emocional: cuánto se está exponiendo el personaje.
     * Contribuye positivamente al RPS —la vulnerabilidad compartida
     * acelera el vínculo romántico.
     */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "KTFG|Emotion",
        meta = (ClampMin = "0.0", ClampMax = "100.0"))
    float Vulnerability = 0.0f;


    // ── SETTERS ───────────────────────────────────────────────────────────────

    /** Establece Affection al valor exacto dado, aplicando clamp [0, 100]. */
    UFUNCTION(BlueprintCallable, Category = "KTFG|Emotion")
    void SetAffection(float NewAffection);

    UFUNCTION(BlueprintCallable, Category = "KTFG|Emotion")
    void SetTrust(float NewTrust);

    UFUNCTION(BlueprintCallable, Category = "KTFG|Emotion")
    void SetPride(float NewPride);

    UFUNCTION(BlueprintCallable, Category = "KTFG|Emotion")
    void SetJealousy(float NewJealousy);

    UFUNCTION(BlueprintCallable, Category = "KTFG|Emotion")
    void SetVulnerability(float NewVulnerability);


    // ── MODIFICADORES (delta) ─────────────────────────────────────────────────
    // Suman o restan sobre el valor actual y hacen clamp automático.

    UFUNCTION(BlueprintCallable, Category = "KTFG|Emotion")
    void ModifyAffection(float Delta);

    UFUNCTION(BlueprintCallable, Category = "KTFG|Emotion")
    void ModifyTrust(float Delta);

    UFUNCTION(BlueprintCallable, Category = "KTFG|Emotion")
    void ModifyPride(float Delta);

    UFUNCTION(BlueprintCallable, Category = "KTFG|Emotion")
    void ModifyJealousy(float Delta);

    UFUNCTION(BlueprintCallable, Category = "KTFG|Emotion")
    void ModifyVulnerability(float Delta);


    // ── GETTERS ───────────────────────────────────────────────────────────────

    UFUNCTION(BlueprintCallable, BlueprintPure, Category = "KTFG|Emotion")
    float GetAffection() const { return Affection; }

    UFUNCTION(BlueprintCallable, BlueprintPure, Category = "KTFG|Emotion")
    float GetTrust() const { return Trust; }

    UFUNCTION(BlueprintCallable, BlueprintPure, Category = "KTFG|Emotion")
    float GetPride() const { return Pride; }

    UFUNCTION(BlueprintCallable, BlueprintPure, Category = "KTFG|Emotion")
    float GetJealousy() const { return Jealousy; }

    UFUNCTION(BlueprintCallable, BlueprintPure, Category = "KTFG|Emotion")
    float GetVulnerability() const { return Vulnerability; }

private:
    // Centraliza el clamp para que todos los setters sean consistentes.
    float ClampEmotionValue(float Value) const;
};
