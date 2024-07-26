cmake_minimum_required(VERSION 3.15)

add_library(LE_CORE 
    Core/Core.cpp
    Core/Application.cpp
    Core/Window.cpp
    Core/Platform.cpp

    Graphics/Metal/MTCore.cpp
    Graphics/Metal/MTSwapChain.cpp

    Graphics/Metal/MTAdapter.mm
)

include_directories(${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(LE_CORE glfw)

if (APPLE)
    target_link_libraries(LE_CORE METAL_CPP)
    target_link_libraries(LE_CORE objc)
endif()

