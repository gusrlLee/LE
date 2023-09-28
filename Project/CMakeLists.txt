cmake_minimum_required(VERSION 3.2)
set(CMAKE_CXX_STANDARD 11)
add_compile_options(-g)

project(test)

include_directories(${CMAKE_SOURCE_DIR})

add_executable(${PROJECT_NAME} main.cpp)

target_link_libraries(${PROJECT_NAME} LE)