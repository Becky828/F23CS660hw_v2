# CMakeList.txt : CMake project for CMakeHw4Q6, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# Enable Hot Reload for MSVC compilers if supported.
if (POLICY CMP0141)
  cmake_policy(SET CMP0141 NEW)
  set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<IF:$<AND:$<C_COMPILER_ID:MSVC>,$<CXX_COMPILER_ID:MSVC>>,$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>,$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>>")
endif()

project ("CMakeHw4Q6")

# Add source to this project's executable.
add_executable (CMakeHw4Q6 "CMakeHw4Q6.cpp" "CMakeHw4Q6.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET CMakeHw4Q6 PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.

# Enable testing for this project
enable_testing()
include(CTest)

# Update the submodules here
include(UpdateSubmodules.cmake)

# Add subdirectories with code
add_subdirectory(tests)
add_subdirectory(external)

