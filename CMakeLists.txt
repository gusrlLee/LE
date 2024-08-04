cmake_minimum_required(VERSION 3.15)
set(CMAKE_CXX_STANDARD 20)
project(RF)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON CACHE INTERNAL "")

option(USE_VULKAN "Graphics API: Vulkan" OFF)
option(USE_METAL "Graphics API: Metal" OFF)
option(USE_D3D12 "Graphics API: DirectX 12" OFF)


if(APPLE)
    message(STATUS "Your OS is : MacOS")
    if (USE_VULKAN)
        message(STATUS "Selected Graphics API : Vulkan API")
        add_compile_definitions(USE_VULKAN)
    else ()
        message(STATUS "Selected Graphics API : Metal API")
        add_compile_definitions(USE_METAL)
    endif()
elseif(WIN32)
    message(STATUS "Your OS is : Window")
    if (USE_VULKAN)
        message(STATUS "Selected Graphics API : Vulkan API")
        add_compile_definitions(USE_VULKAN)
    else ()
        message(STATUS "Selected Graphics API : DirectX 12 API")
        add_compile_definitions(USE_D3D12)
    endif()
endif()

add_subdirectory(ThirdParty)
# add_subdirectory(LE)

find_package(spdlog)

add_executable(${PROJECT_NAME} 
    main.cpp
    RF/RFEntryPoint.cpp
    RF/RFApplication.cpp
    RF/RFEngine.cpp
    RF/RFWindow.cpp
    RF/RFLog.cpp
    RF/RFDevice.cpp
    RF/RFSwapChain.cpp
    RF/RFAdapter.mm
)

target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_SOURCE_DIR})
# target_link_libraries(${PROJECT_NAME} LE_CORE)
target_link_libraries(${PROJECT_NAME} glfw)
target_link_libraries(${PROJECT_NAME} spdlog::spdlog)
target_link_libraries(${PROJECT_NAME} METAL_CPP)
target_link_libraries(${PROJECT_NAME} objc)
