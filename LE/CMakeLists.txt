cmake_minimum_required(VERSION 3.15)

add_subdirectory(vender)

find_package(Vulkan REQUIRED)

add_library(LE 
    Core/Application.cpp
)

target_link_libraries(LE glfw)
target_link_libraries(LE glm::glm-header-only)
target_link_libraries(LE Vulkan::Vulkan)
target_link_libraries(LE vk-bootstrap)
