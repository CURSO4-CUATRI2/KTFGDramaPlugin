# KTFGDramaPlugin

**Plugin modular de relaciones románticas para Unreal Engine 5**  
Trabajo de Fin de Grado — Grado en Ingeniería de Tecnologías para Animación y Videojuegos  
Universidad CEU San Pablo · 2026  
Autora: Carla De La Loma

---

## ¿Qué es esto?

KTFGDramaPlugin es un plugin de Unreal Engine 5 escrito en C++ que implementa un sistema completo de relaciones románticas para narrativa interactiva. El sistema modela el estado emocional de los personajes, calcula la progresión de la relación, gestiona tropos románticos configurables y dispara eventos narrativos automáticamente cuando se cumplen las condiciones definidas por el diseñador.

El diseño del modelo emocional está inspirado en las dinámicas narrativas de los K-Dramas: cinco variables (Affection, Trust, Pride, Jealousy, Vulnerability) interactúan con una fórmula de progresión ponderada y un sistema de tropos que modula el ritmo de cada arco romántico.

---

## Características principales

- **Modelo emocional de cinco variables** en rango [0, 100] con clamping automático
- **RomanticProgressionScore** — función ponderada que determina la fase narrativa
- **Cuatro fases narrativas**: Attraction → Development → Conflict → Resolution (unidireccionales)
- **Sistema de tropos** — DataAssets que definen valores iniciales y multiplicadores de crecimiento por variable
- **Sistema de situaciones** — eventos discretos con deltas emocionales modulados por el tropo activo
- **Sistema de eventos relacionales** — hitos narrativos con condiciones combinadas (fase + score + emociones), con soporte para disparo único (`bFireOnlyOnce`)
- **WorldSubsystem automático** — no requiere modificar el GameMode ni la arquitectura del proyecto huésped
- **Cola PendingPairConfigs** — resuelve el orden de carga de Actors en BeginPlay sin gestión manual
- **100% utilizable desde Blueprint** — todos los puntos de acceso expuestos como nodos con tooltips
- **Validación en editor** — `IsDataValid()` detecta errores de configuración en el momento de la autoría

---

## Estructura del repositorio

```
KTFGDramaPlugin/
├── Source/
│   ├── KTFGBase/          # Enums, structs y tipos compartidos
│   ├── KTFGCharacters/    # AKTFGRomanceCharacterBase
│   ├── KTFGComponents/    # UKTFGEmotionComponent, UKTFGRelationshipComponent
│   ├── KTFGData/          # Todos los DataAssets del plugin
│   └── KTFGSubsystem/     # UKTFGDramaSubsystem, UKTFGBlueprintLibrary
├── Content/               # DataAssets de ejemplo y Blueprints de la demo
│   ├── DA_RelationshipConfig_Demo
│   ├── DA_Trope_EnemiestoLovers
│   ├── DA_Trope_FriendstoLovers
│   └── ...
├── Resources/
│   └── Icon128.png
└── KTFGDramaPlugin.uplugin
```

---

## Requisitos

- Unreal Engine 5.3 o superior
- Visual Studio 2022 (Windows) con soporte para C++17
- Módulo de editor habilitado para usar la validación de DataAssets en el editor

---

## Instalación

1. Clona o descarga este repositorio.
2. Copia la carpeta `KTFGDramaPlugin/` en el directorio `Plugins/` de tu proyecto Unreal.  
   Si no existe la carpeta `Plugins/`, créala en la raíz del proyecto.
3. Abre el proyecto en Unreal Engine. El motor detectará el plugin automáticamente.
4. Actívalo en **Edit → Plugins → busca "KTFG"** y marca el checkbox.
5. Reinicia el editor cuando se solicite.
6. El plugin compila automáticamente al reabrir el proyecto.

---

## Configuración básica (menos de 30 minutos)

### Paso 1 — Crear el DataAsset de configuración

En el Content Browser: clic derecho → **Miscellaneous → Data Asset → KTFGRelationshipConfigData**.  
Añade una entrada en el array `Pairs` con los CharacterIDs de tus personajes y el tropo deseado.

### Paso 2 — Preparar los personajes

Crea tus personajes heredando de `AKTFGRomanceCharacterBase` (C++ o Blueprint).  
Asigna un `CharacterID` único a cada uno en el panel de Detalles.  
Opcionalmente, asigna un `DA_CharacterPersonality` para modular el efecto de las situaciones.

### Paso 3 — Inicializar el subsistema

En el `BeginPlay` de tu GameMode (o Level Blueprint):

```
BeginPlay
  └── InitializeKTFG (nodo de KTFGBlueprintLibrary)
        └── Config: [tu DA_RelationshipConfig]
```

El subsistema se inicializa automáticamente. No es necesario ningún paso adicional.

### Paso 4 — Disparar situaciones

Desde cualquier Blueprint con acceso al RelationshipComponent del personaje:

```
[Botón / Input]
  └── Get Component by Class → KTFGRelationshipComponent
        └── TriggerSituation → [tu DA_Situation]
```

### Paso 5 — Escuchar eventos

Vincula el delegate `OnRelationshipEventFired` del RelationshipComponent para reaccionar a los hitos narrativos:

```
RelationshipComponent → Bind Event to OnRelationshipEventFired
  └── EventData → DisplayName → [mostrar en pantalla / disparar animación / etc.]
```

---

## Prototipo de validación incluido

El repositorio incluye una escena de demo con dos personajes, **Seo Jun** (`SeoJun`) y **Ha Eun** (`HaEun`), configurados con el tropo `DA_Trope_EnemiestoLovers` (Affection=5, Trust=0, Pride=80).

| Tecla | Situación | Condición de acceso |
|-------|-----------|---------------------|
| 1 | Talk | Ninguna |
| 2 | Help | Ninguna |
| 3 | Tease | Ninguna |
| 4 | Argue | Ninguna |
| 5 | OpenUp | Fase ≥ Development |
| 6 | Confess | Fase ≥ Conflict |

El HUD de debug (`WBP_KTFGDebugHUD`) muestra en tiempo real las cinco barras de emoción, el RomanticProgressionScore y la fase narrativa actual.

---

## Tropos incluidos

| DataAsset | Affection | Trust | Pride | Jealousy | Vulnerability | Descripción |
|-----------|-----------|-------|-------|----------|---------------|-------------|
| `DA_Trope_EnemiestoLovers` | 5 | 0 | 80 | 0 | 0 | Partida desde la hostilidad; modificador de Affection alto |
| `DA_Trope_FriendstoLovers` | 60 | 70 | 40 | 0 | 0 | Partida desde la amistad; avances más graduales |

---

## Convención de nombres

Todos los tipos, clases y assets del plugin usan el prefijo `KTFG` para evitar colisiones con otros plugins o con el motor.

---

## Licencia

Este proyecto se distribuye con fines académicos como parte de un Trabajo de Fin de Grado.  
© 2026 Carla De La Loma — Universidad CEU San Pablo.
