# Project Definition
CMake_Minimum_Required( VERSION 3.13 )
Project( "Weird" LANGUAGES "C" DESCRIPTION "UTF-8 BOM Checker" VERSION "0.0.0.0" )

# Project Configuration
Set( CONFIG "Release" )
Set( CMAKE_CONFIGURATION_TYPES "${CONFIG}" )
Set( CMAKE_BUILD_TYPE "${CONFIG}" )
Set( CMAKE_SUPPRESS_REGENERATION "ON" )

# Target Compilation
Set( NAME "Dream" )
Set( PATH "./📻" )
Add_Executable( "${NAME}" "${PATH}/xxxx.c" "${PATH}/main.c" )
Target_Compile_Options( "${NAME}" PRIVATE "/TC;/WX;/Wall;/O2;/Ob2;/Oi;/Ot;/GL" )
if( CMAKE_C_COMPILER_ID STREQUAL "MSVC" )
	Target_Compile_Options( "${NAME}" PRIVATE "/wd4668;/wd4710;/wd4711" )
	Target_Compile_Definitions( "${NAME}" PRIVATE "__STDC_LIB_EXT1__" )
else( )
	Target_Compile_Features( "${NAME}" PRIVATE "c_function_prototypes;c_variadic_macros;c_std_11" )
endif( )
Target_Link_Options( "${NAME}" PRIVATE "/LTCG" )
