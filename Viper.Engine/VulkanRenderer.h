#pragma once

#include "Types.h"
#include "Platform.h"

#include <vulkan/vulkan.h>

namespace Viper {

	class Platform;

	class VulkanRenderer {


	public:
		VulkanRenderer(Platform* platform);
		~VulkanRenderer();

	private:
		VkPhysicalDevice SelectPhysicalDevice();
		const bool physicalDeviceMeetsRequirements(VkPhysicalDevice physicalDevice);
	private:
		Platform* _platform;
		VkInstance _instance;
		VkDebugUtilsMessengerEXT _debugMessenger;
		VkPhysicalDevice _physicalDevice;
		VkDevice _device; // Logical device
		VkSurfaceKHR _surface;
	};

}
