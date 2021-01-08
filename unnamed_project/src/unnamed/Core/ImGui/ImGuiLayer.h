#pragma once

#include "unnamed/Core/Layer/Layer.h"
#include "unnamed/Events/MouseEvent.h"
#include "unnamed/Events/KeyEvent.h"
#include "unnamed/Events/ApplicationEvent.h"

namespace UNNAMED {

	class ImGuiLayer : public Layer
	{
	public:
		ImGuiLayer();
		~ImGuiLayer() = default;

		void OnAttach() override;
		void OnDetach() override;
		void OnImGuiRender() override;

		void Begin();
		void End();

		void SetDarkThemeColors();

		void OnEvent(Event& e) override;
		void BlockEvents(bool block) { m_BlockEvents = block; }

	private:
		float m_Time = 0.0f;


		bool m_BlockEvents = true;
	};

}