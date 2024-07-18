cmake_minimum_required(VERSION 3.15)
set(CMAKE_CXX_STANDARD 17)
project(LE)

add_subdirectory(ThirdParty)

add_executable(${PROJECT_NAME} 
    main.cpp
    Application.cpp
)

target_link_libraries(${PROJECT_NAME} glfw)
