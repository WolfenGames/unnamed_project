#pragma once


#ifdef UP_PLATFORM_WINDOWS

extern UNNAMED::Application* UNNAMED::CreateApplication();

int	main(int argc, char *argv[]) {

	auto app = UNNAMED::CreateApplication();
	app->Run();
	delete app;
}

#endif // UP_PLATFORM_WINDOWS
