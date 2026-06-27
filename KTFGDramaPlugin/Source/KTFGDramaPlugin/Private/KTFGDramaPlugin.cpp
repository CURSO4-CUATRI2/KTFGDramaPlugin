// KTFGDramaPlugin.cpp
// Módulo raíz del plugin KTFGDramaPlugin.
// Punto de entrada y salida del módulo; no contiene lógica de juego.
// La lógica central del sistema vive en KTFGDramaSubsystem.

#include "KTFGDramaPlugin.h"

#define LOCTEXT_NAMESPACE "FKTFGDramaPluginModule"

void FKTFGDramaPluginModule::StartupModule()
{
	// El módulo se carga automáticamente al iniciar el motor.
	// No se requiere inicialización manual aquí; el WorldSubsystem
	// se encarga de su propio ciclo de vida.
}

void FKTFGDramaPluginModule::ShutdownModule()
{
	// El módulo soporta recarga dinámica.
	// Los recursos del sistema se liberan en UKTFGDramaSubsystem::Deinitialize().
}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FKTFGDramaPluginModule, KTFGDramaPlugin)
