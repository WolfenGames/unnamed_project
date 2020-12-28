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
IncludeDir["GLFW"] = "%{wks.location}/unnamed_project/vendor/GFLW/include"

group "Dependencies"
	-- include "vendor/premake"
	include "unnamed_project/vendor/GFLW/"
group ""

include "Unnamed_Project"
include "Sandbox"