#pragma once

#include "Types.h"

#include <vulkan/vulkan.h>

namespace Viper {

	class VulkanRenderer {

		class Platform;

	public:
		VulkanRenderer(Platform* platform);
		~VulkanRenderer();

	private:
		Platform* _platform;
		VkInstance _instance;
		VkDebugUtilsMessengerEXT _debugMessenger;
		VkPhysicalDevice _physicalDevice;
		VkDevice _device; // Logical device
	};

}
