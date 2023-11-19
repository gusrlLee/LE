cmake_minimum_required(VERSION 3.0)

add_library(LE_API
    Application.cpp
)

# find opengl and glfw
find_package(glfw3 3.3 REQUIRED)
find_package(OpenGL REQUIRED)

set(GLFW_LIB glfw3)

set(LE_API_INCLUDE_DIRS)

target_include_directories(LE_API PUBLIC
    ${OpenGL_INCLUDE_DIRS}
    ${GLFW_INCLUDE_DIRS}
)

target_link_libraries(LE_API 
    ${OpenGL_LIBRARIES}
    glfw
)