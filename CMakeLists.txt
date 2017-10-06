cmake_minimum_required(VERSION 3.5)
project(learning_c_cplusplus)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
        debug/memory/invalid_memory_access.c)

set(EXECPP
        debug/memory/invalid_memory_access.c)

add_executable(learning_c_cplusplus ${SOURCE_FILES})