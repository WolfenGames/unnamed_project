#pragma once

#include "unnamed/Core/Window/Window.h"


#include <glad/glad.h>

#include <GLFW/glfw3.h>

namespace UNNAMED {

	class WindowsWindow : public Window
	{
	public:
		WindowsWindow(const WindowProps& props);
		virtual ~WindowsWindow();

		void OnUpdate() override;

		inline unsigned int GetWidth() const override { UP_CLIENT_INFO("GETTING WIDTH {0}", m_Data.Width); return m_Data.Width; }
		inline unsigned int GetHeight() const override { UP_CLIENT_INFO("GETTING HEIGHT {0}", m_Data.Height); return m_Data.Height; }

		inline void SetEventCallback(const EventCallbackFn& callback) override { m_Data.EventCallback = callback; }
		void SetVsync(bool enabled) override;
		bool IsVsync() const override;
	private:
		virtual void Init(const WindowProps& props);
		virtual void Shutdown();

		GLFWwindow* m_Window;

		struct WindowData {
			std::string Title;
			unsigned int Width, Height;
			bool Vsync;
			
			EventCallbackFn EventCallback;
		};

		WindowData m_Data;
	};

}
