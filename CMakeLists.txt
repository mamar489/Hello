cmake_minimum_required(VERSION 3.6)
project(Hello)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
#set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}")
set(SOURCE_FILES main.cpp)
add_executable(Hello ${SOURCE_FILES})