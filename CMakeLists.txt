cmake_minimum_required(VERSION 3.5)
project(learning_c_cplusplus)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
    pointers/dynamic-memory/mem-alloc.cpp)

set(EXECPP
    pointers/const-pointer.cpp)

add_executable(learning_c_cplusplus ${SOURCE_FILES})