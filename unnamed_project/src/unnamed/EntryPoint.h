#pragma once


#ifndef UP_PLATFORM_WINDOWS

extern UNNAMED::Application* UNNAMED::CreateApplication();

int	main(int argc, char *argv[]) {
	UNNAMED::Log::Init();

	auto app = UNNAMED::CreateApplication();
	app->Run();
	delete app;
}

#endif // UP_PLATFORM_WINDOWS
