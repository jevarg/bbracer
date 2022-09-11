cmake_minimum_required(VERSION 3.15)
project(bbracer)

set(CMAKE_C_STANDARD 11) # Requires C11 standard
set(CMAKE_CXX_STANDARD 20) # Requires C++20 standard

# Raylib
set(OpenGL_GL_PREFERENCE GLVND)
set(BUILD_EXAMPLES OFF CACHE BOOL "" FORCE) # don't build the supplied examples
set(CMAKE_BUILD_TYPE debug)
add_subdirectory(${CMAKE_CURRENT_LIST_DIR}/external/raylib)
include_directories(${CMAKE_CURRENT_LIST_DIR}/external/raylib/src)

add_executable(${PROJECT_NAME}
    src/main.cpp
    src/Window.cpp
)

target_include_directories(${PROJECT_NAME} PRIVATE ${CMAKE_CURRENT_LIST_DIR}/inc)
target_link_libraries(${PROJECT_NAME} raylib)

# Checks if OSX and links appropriate frameworks (Only required on MacOS)
if (APPLE)
    target_link_libraries(${PROJECT_NAME} "-framework IOKit")
    target_link_libraries(${PROJECT_NAME} "-framework Cocoa")
    target_link_libraries(${PROJECT_NAME} "-framework OpenGL")
endif()