#include "Engine.h"
#include "Platform.h"
#include "VulkanRenderer.h"
#include "Logger.h"

namespace Viper {

	Engine::Engine(const char* applicationName) {
		Viper::Logger::Log("Initialising Viper Engine: %d", 4);
		_platform = new Platform(this, applicationName);
		_renderer = new VulkanRenderer(_platform);
	}

	Engine::~Engine() {

	}

	void Engine::Run() {
		_platform->StartGameLoop();
	}

	void Engine::OnLoop(const F32 deltaTime) {

	}

}