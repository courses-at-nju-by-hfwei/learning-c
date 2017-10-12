cmake_minimum_required(VERSION 3.5)
project(learning_c_cplusplus)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
        hdu-acm/1-2/vowel.c)

set(EXECPP
        hdu-acm/1-2/vowel.c)

add_executable(learning_c_cplusplus ${SOURCE_FILES})