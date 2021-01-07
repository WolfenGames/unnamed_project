#pragma once

//#include <glm/glm.hpp>

#include "unnamed/Core/Codes/KeyCodes.h"
#include "unnamed/Core/Codes/MouseCodes.h"

namespace UNNAMED {

	class Input
	{
	public:
		//static bool IsKeyPressed(KeyCode key);

		//static bool IsMouseButtonPressed(MouseCode button);
		//static glm::vec2 GetMousePosition();
		//static float GetMouseX();
		//static float GetMouseY();

		inline static bool IsKeyPressed(KeyCode keycode) { return s_Instance->IsKeyPressedImpl(keycode); }
		inline static bool IsMouseButtonPressed(MouseCode button) { return s_Instance->IsMouseButtonPressedImpl(button); }
		inline static float GetMouseY() { return s_Instance->GetMouseYImpl(); }
		inline static float GetMouseX() { return s_Instance->GetMouseXImpl(); }
		inline static std::pair<float, float> GetMousePos() { return s_Instance->GetMousePosImpl(); }

	protected:
		virtual bool IsKeyPressedImpl(KeyCode keycode) = 0;
		virtual bool IsMouseButtonPressedImpl(MouseCode button) = 0;
		virtual float GetMouseYImpl() = 0;
		virtual float GetMouseXImpl() = 0;
		virtual std::pair<float, float> GetMousePosImpl() = 0;
	private:
		static Input* s_Instance;
	};
}