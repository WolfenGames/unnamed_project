#pragma once

#include "spdlog/spdlog.h"
#include "spdlog/sinks/stdout_color_sinks.h"
#include "spdlog/fmt/ostr.h"


namespace UNNAMED {

	class Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }

	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};

}

#define UP_CORE_WARN(...) UNNAMED::Log::GetCoreLogger()->warn(__VA_ARGS__);
#define UP_CORE_CRITICAL(...) UNNAMED::Log::GetCoreLogger()->critical(__VA_ARGS__);
#define UP_CORE_INFO(...) UNNAMED::Log::GetCoreLogger()->info(__VA_ARGS__);
#define UP_CORE_ERROR(...) UNNAMED::Log::GetCoreLogger()->error(__VA_ARGS__);
#define UP_CORE_TRACE(...) UNNAMED::Log::GetCoreLogger()->trace(__VA_ARGS__);

#define UP_CLIENT_WARN(...) UNNAMED::Log::GetClientLogger()->warn(__VA_ARGS__);
#define UP_CLIENT_CRITICAL(...) UNNAMED::Log::GetClientLogger()->critical(__VA_ARGS__);
#define UP_CLIENT_INFO(...) UNNAMED::Log::GetClientLogger()->info(__VA_ARGS__);
#define UP_CLIENT_ERROR(...) UNNAMED::Log::GetClientLogger()->error(__VA_ARGS__);
#define UP_CLIENT_TRACE(...) UNNAMED::Log::GetClientLogger()->trace(__VA_ARGS__);

