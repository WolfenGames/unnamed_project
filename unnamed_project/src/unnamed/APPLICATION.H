#pragma once

#include "Core.h"

namespace UNNAMED {
	
	class UP_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	Application* CreateApplication();
}



