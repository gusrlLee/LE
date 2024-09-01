cmake_minimum_required(VERSION 3.15)
set(CMAKE_CXX_STANDARD 20)
project(LE)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON CACHE INTERNAL "")

add_subdirectory(LE)
# add_subdirectory(SandBox)
add_subdirectory(Breakout)
