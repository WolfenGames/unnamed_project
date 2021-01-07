#pragma once
#include "unnamed/Core/Input/Input.h"

namespace UNNAMED {

	class WindowInput : public Input
	{
	protected:
		/*virtual bool IsKeyPressed(KeyCode key);

		static bool IsMouseButtonPressed(MouseCode button);
		static glm::vec2 GetMousePosition();
		static float GetMouseX();
		static float GetMouseY();*/
		virtual bool IsKeyPressedImpl(KeyCode keycode) override;
		virtual bool IsMouseButtonPressedImpl(MouseCode button) override;
		virtual float GetMouseYImpl() override;
		virtual float GetMouseXImpl() override;
		virtual std::pair<float, float> GetMousePosImpl() override;


	};

}