#include "VulkanRenderer.h"
#include "Platform.h"
#include "Logger.h"
#include "Defines.h"

namespace Viper {

	VulkanRenderer::VulkanRenderer(Platform* platform) {
		_platform = platform;
		Logger::Trace("Initialising Vulkan renderer...");

		VkApplicationInfo appInfo = {VK_STRUCTURE_TYPE_APPLICATION_INFO};
		appInfo.apiVersion = VK_API_VERSION_1_2;
		appInfo.pApplicationName = "Viper";
		appInfo.applicationVersion = VK_MAKE_VERSION(1, 0, 0);
		appInfo.pEngineName = "Viper Engine";
		appInfo.engineVersion = VK_MAKE_VERSION(1, 0, 0);

		VkInstanceCreateInfo instanceCreateInfo = { VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO };
		instanceCreateInfo.pApplicationInfo = &appInfo;

	}

	VulkanRenderer::~VulkanRenderer() {

	}

}