#pragma once

#include "unnamed/Core/Layer/Layer.h"

namespace UNNAMED {

	class ImGuiLayer : public Layer
	{
	public:
		ImGuiLayer();
		~ImGuiLayer();

		void OnAttach();
		void OnDetach();
		void OnUpdate();
		void OnEvent(Event& e);
	private:
		float m_Time = 0.0f;
	};

}