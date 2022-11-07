cmake_minimum_required(VERSION 3.23)
project(raylib_template C CXX)

set(CMAKE_CXX_STANDARD 23)

# Setting parameters for raylib
set(BUILD_EXAMPLES OFF CACHE BOOL "" FORCE) # don't build the supplied examples
set(BUILD_GAMES    OFF CACHE BOOL "" FORCE) # or games

add_subdirectory(vendor/raylib)
add_subdirectory(vendor/raylib-cpp)
add_subdirectory(vendor)

add_executable(${PROJECT_NAME} src/main.cpp src/imgui/imgui_impl_raylib.cpp src/imgui/imgui_impl_raylib.h)
target_link_libraries(${PROJECT_NAME} PRIVATE raylib raylib_cpp imgui)
