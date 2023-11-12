cmake_minimum_required(VERSION 3.3)
project(LE VERSION 1.0)

set(CMAKE_CXX_STANDARD 17)

# 1. find vulkan
find_package(Vulkan REQUIRED)
if (NOT Vulkan_FOUND)
    message(FATAL_ERROR "Could not find Vulkan library! Please check Vulkan API again!")
else()
    message(STATUS "[CMAKE] Found Vulkan PATH: $ENV{Vulkan_LIBRARIES}")
endif()

# 2. find GLFW library
find_package(glfw3 3.3 REQUIRED)
set(GLFW_LIB glfw)
message(STATUS "Found GLFW")

if (NOT GLFW_LIB)
    message(FATAL_ERROR "Could not find glfw library!")
else()
    message(STATUS "Using glfw lib at: ${GLFW_LIB}")
endif()

add_executable(${PROJECT_NAME} main.cpp Application.cpp)

include_directories(${CMAKE_SOURCE_DIR} ${Vulkan_INCLUDE_DIRS} ${GLFW_INCLUDE_DIRS} ${GLM_PATH})
target_link_libraries(${PROJECT_NAME} glfw ${Vulkan_LIBRARIES})