cmake_minimum_required(VERSION 3.20)

project(cpp_hello LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(cpp_hello
    src/main.cpp
    src/sensor_processor.cpp
)

target_include_directories(cpp_hello PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)

target_compile_options(cpp_hello PRIVATE
    -Wall
    -Wextra
    -Wpedantic
)