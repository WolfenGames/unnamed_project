project "Sandbox"
	kind "ConsoleApp"
	language "C++"
	cppdialect "C++17"
	staticruntime "on"

	targetdir ("%{wks.location}/bin/" .. outputdir .. "/%{prj.name}")
	objdir ("%{wks.location}/bin-int/" .. outputdir .. "/%{prj.name}")

	files {
		"src/**.h",
		"src/**.cpp"
	}

	includedirs {
		"%{wks.location}/unnamed_project/vendor/spdlog/include",
		"%{IncludeDir.GLFW}",
		"%{wks.location}/unnamed_project/src",
		"%{wks.location}/unnamed_project/vendor",
	}

	links {
		"Unnamed_Project"
	}

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