#include "upch.h"
#include "Application.h"

#include "unnamed/Core/Log/Log.h"
#include "unnamed/Events/ApplicationEvent.h"

namespace UNNAMED {
	Application::Application() {};
	Application::~Application() {};


	void Application::Run() {

		WindowResizeEvent e(1280, 720);
		UP_CORE_TRACE(e);

		while (true);
	}
}