cmake_minimum_required(VERSION 3.0)
project(LE VERSION 1.0)

set(CMAKE_CXX_STANDARD 17)

# Build Lee's Engine 
add_subdirectory(ThridParty)
add_subdirectory(LE)
add_subdirectory(Box)