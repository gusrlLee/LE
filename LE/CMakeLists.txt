cmake_minimum_required(VERSION 3.15)
set(CMAKE_CXX_STANDARD 20)
add_subdirectory(vender)

find_package(Vulkan REQUIRED)

set(CORE_SRC
    Core/Types.h
    Core/Config.h
    Core/Application.cpp
    Core/Application.h
)

set(RENDERING_SRC
    Rendering/Renderer.h
    Rendering/Renderer.cpp
    Rendering/GraphicsDevice.h
    Rendering/GraphicsDevice.cpp
)

source_group(TREE ${CMAKE_CURRENT_SOURCE_DIR}/Core PREFIX Core FILES ${CORE_SRC})
source_group(TREE ${CMAKE_CURRENT_SOURCE_DIR}/Rendering PREFIX Rendering FILES ${RENDERING_SRC})

add_library(LE
    ${CORE_SRC}
    ${RENDERING_SRC}
)

target_include_directories(LE PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

target_link_libraries(LE glfw)
target_link_libraries(LE glm::glm-header-only)
target_link_libraries(LE Vulkan::Vulkan)
target_link_libraries(LE vk-bootstrap)
