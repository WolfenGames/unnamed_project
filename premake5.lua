workspace "UNNAMED_PROJECT"
	architecture "x64"
	startproject "Sandbox"

	configurations
	{
		"Debug",
		"Release",
		"Dist"
	}

	flags
	{
		"MultiProcessorCompile"
	}

outputdir = "%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"

IncludeDir = {}
IncludeDir["GLFW"] = "%{wks.location}/unnamed_project/vendor/GLFW/include"
IncludeDir["Glad"] = "%{wks.location}/unnamed_project/vendor/Glad/include"
IncludeDir["ImGui"] = "%{wks.location}/unnamed_project/vendor/imgui"
IncludeDir["glm"] = "%{wks.location}/unnamed_project/vendor/glm"

group "Dependencies"
	-- include "vendor/premake"
	include "unnamed_project/vendor/GLFW"
	include "unnamed_project/vendor/Glad"
	include "unnamed_project/vendor/imgui"
group ""

include "Unnamed_Project"
include "Sandbox"