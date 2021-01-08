#pragma once

#include "unnamed/Events/Event.h"
#include "unnamed/Core/Window/Window.h"
#include "unnamed/Events/ApplicationEvent.h"
#include "unnamed/Core/Layer/LayerStack.h"
#include "unnamed/Core/Input/Input.h"
#include <unnamed/Core/ImGui/ImGuiLayer.h>

namespace UNNAMED {
	
	class Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
		void OnEvent(Event& e);

		void PushLayer(Layer* layer);
		void PushOverlay(Layer* overlay);

		inline static Application& Get() { return *s_Instance; }
		inline Window& GetWindow() { return *m_Window; }

	private:
		bool OnWindowClose(WindowCloseEvent& e); 
		bool OnWindowResize(WindowResizeEvent& e);
		std::unique_ptr<Window> m_Window;
		
		bool m_Running = true;
		ImGuiLayer* m_ImGuiLayer;

		LayerStack m_LayerStack;

		static Application* s_Instance;
	};

	Application* CreateApplication();
}



