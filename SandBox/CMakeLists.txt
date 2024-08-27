cmake_minimum_required(VERSION 3.15)
set(CMAKE_CXX_STANDARD 20)
project(SandBox)

add_executable( SandBox
    main.cpp
)

target_include_directories(SandBox PUBLIC ${CMAKE_SOURCE_DIR}/LE)
target_link_libraries(SandBox LE)
