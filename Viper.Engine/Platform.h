#pragma once

#include <vulkan/vulkan.h>

#include"Types.h"

struct GLFWwindow;

namespace Viper {

	class Engine;

	class Platform {
	public:
		Platform(Engine* engine, const char* applicationName);
		~Platform();

		GLFWwindow* GetWindow() { return _window; }

		void GetRequiredExtensions(U32* extensionCount, const char*** extensionNames);

		void CreateSurface(VkInstance instance, VkSurfaceKHR* surface);

		const bool StartGameLoop();

	private:
		Engine* _engine;
		GLFWwindow* _window;
	};
}