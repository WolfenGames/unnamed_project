#include <unnamed.h>

class Sandbox : public UNNAMED::Application
{
public:
	Sandbox()
	{
		UP_CLIENT_INFO("SANDBOX RUNNING");
	}

	~Sandbox()
	{

	}
};

UNNAMED::Application* UNNAMED::CreateApplication() {
	return new Sandbox();
}