#include <unnamed.h>

class ExampleLayer : public UNNAMED::Layer
{
public:
	ExampleLayer(): Layer("Example") {}

	void OnUpdate() override
	{
	}

	void OnEvent(UNNAMED::Event& e) override
	{
	}
};

class Sandbox : public UNNAMED::Application
{
public:
	Sandbox()
	{
		UP_CLIENT_INFO("SANDBOX RUNNING");
		PushOverlay(new UNNAMED::ImGuiLayer());
	}

	~Sandbox()
	{

	}
};

UNNAMED::Application* UNNAMED::CreateApplication() {
	return new Sandbox();
}