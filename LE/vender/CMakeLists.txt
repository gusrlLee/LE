cmake_minimum_required(VERSION 3.15)

# GLFW library
set(GLFW_BUILD_DOCS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_TESTS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)
add_subdirectory(glfw)

# GLM Library
add_subdirectory(glm)

# vk-bootstrap
add_subdirectory(vk-bootstrap)

