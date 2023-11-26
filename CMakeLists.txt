cmake_minimum_required(VERSION 3.1.0)
project (Main)

set(CMAKE_BUILD_TYPE Debug) #Release
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_FLAGS_DEBUG_INIT "-Wall")
set(CMAKE_CXX_FLAGS_RELEASE_INIT "-Wall")

set(INCLUDES ${PROJECT_SOURCE_DIR})
include_directories(${INCLUDES})

file(GLOB SOURCES "${PROJECT_SOURCE_DIR}/*.cpp")

add_executable(${PROJECT_NAME} main.cpp ${SOURCES})
