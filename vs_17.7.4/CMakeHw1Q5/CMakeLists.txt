# CMakeList.txt : CMake project for CMakeHw1Q5, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# Enable Hot Reload for MSVC compilers if supported.
if (POLICY CMP0141)
  cmake_policy(SET CMP0141 NEW)
  set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<IF:$<AND:$<C_COMPILER_ID:MSVC>,$<CXX_COMPILER_ID:MSVC>>,$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>,$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>>")
endif()

project ("CMakeHw1Q5")

# Add source to this project's executable.
add_executable (CMakeHw1Q5 "CMakeHw1Q5.cpp" "CMakeHw1Q5.h" "SortedListsSet.cpp" "EmptyListsSet.cpp" "merge.cpp" "IterativeMerging.cpp" "SortedListsSet.h" "merge.h" "EmptyListsSet.h" "IterativeMerging.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET CMakeHw1Q5 PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
# GoogleTest requires at least C++14
#set(CMAKE_CXX_STANDARD 14)
#set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Enable testing for this project
enable_testing()
include(CTest)

# Update the submodules here
include(UpdateSubmodules.cmake)

# Add subdirectories with code
add_subdirectory(tests)
add_subdirectory(external)

