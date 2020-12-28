project "Unnamed_Project"
	kind "StaticLib"
	language "C++"
	cppdialect "C++17"
	staticruntime "on"

	targetdir ("%{wks.location}/bin/" .. outputdir .. "/%{prj.name}")
	objdir ("%{wks.location}/bin-int/" .. outputdir .. "/%{prj.name}")

	pchheader "upch.h"
	pchsource "src/upch.cpp"

	files {
		"src/**.h",
		"src/**.cpp"
	}

	defines {
		"_CRT_SECURE_NO_WARNINGS",
		"GLFW_INCLUDE_NONE"
	}

	includedirs {
		"src",
		"%{wks.location}/unnamed_project/vendor/spdlog/include",
		"%{IncludeDir.GLFW}",
	}

	links {
		"GLFW",
		"opengl32.lib"
	}

	-- flags { "NoPCH" }

	filter "system:windows"
		systemversion "latest"

		defines {
		}

	filter "configurations:Debug"
		defines "UP_DEBUG"
		runtime "Debug"
		symbols "on"

	filter "configurations:Release"
		defines "UP_RELEASE"
		runtime "Release"
		optimize "on"

	filter "configurations:Dist"
		defines "UP_DIST"
		runtime "Release"
		optimize "on"