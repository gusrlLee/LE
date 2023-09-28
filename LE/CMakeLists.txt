cmake_minimum_required(VERSION 3.2)
set(CMAKE_CXX_STANDARD 11)


project(LE CXX)

include_directories(${CMAKE_SOURCE_DIR}/ThirdParty/spdlog/include)

add_library(${PROJECT_NAME}
    Application.cpp
    Log.cpp
)



target_link_libraries( ${PROJECT_NAME} PUBLIC spdlog::spdlog_header_only)