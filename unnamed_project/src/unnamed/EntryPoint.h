#pragma once


#ifdef UP_PLATFORM_WINDOWS

extern UNNAMED::Application* UNNAMED::CreateApplication();

int	main(int argc, char *argv[]) {

	UNNAMED::Log::Init();
	UP_CORE_CRITICAL("FUCK");
	UP_CORE_INFO("No Fuck");
	UP_CORE_WARN("ALMOST FUCK");
	UP_CORE_ERROR("ERROR FUCK");
	auto app = UNNAMED::CreateApplication();
	app->Run();
	delete app;
}

#endif // UP_PLATFORM_WINDOWS
