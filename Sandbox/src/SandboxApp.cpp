#include <unnamed.h>

class Sandbox : public UNNAMED::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

UNNAMED::Application* UNNAMED::CreateApplication() {
	return new Sandbox();
}