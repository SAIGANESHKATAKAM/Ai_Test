cmake_minimum_required(VERSION 3.14)
project(pipeline_copilot_example VERSION 0.1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(PROJECT_INCLUDE_DIR ${PROJECT_SOURCE_DIR}/include)

include_directories(${PROJECT_SOURCE_DIR}/src ${PROJECT_INCLUDE_DIR})

add_subdirectory(src)
add_subdirectory(app)

enable_testing()
add_subdirectory(tests)
