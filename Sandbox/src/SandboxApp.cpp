#include <unnamed.h>

class ExampleLayer : public UNNAMED::Layer
{
public:
	ExampleLayer(): Layer("Example") {}

	void OnUpdate() override
	{
		UP_CLIENT_INFO("Example Layer::Update")
	}

	void OnEvent(UNNAMED::Event& e) override
	{
		UP_CLIENT_TRACE("{0}", e);
	}
};

class Sandbox : public UNNAMED::Application
{
public:
	Sandbox()
	{
		UP_CLIENT_INFO("SANDBOX RUNNING");
		PushLayer(new ExampleLayer());
		PushOverlay(new UNNAMED::ImGuiLayer());
	}

	~Sandbox()
	{

	}
};

UNNAMED::Application* UNNAMED::CreateApplication() {
	return new Sandbox();
}