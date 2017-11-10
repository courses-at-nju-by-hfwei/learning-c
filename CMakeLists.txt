cmake_minimum_required(VERSION 3.5)
project(learning_c_cplusplus)

##### For C #####
set(CMAKE_C_STANDARD 99)
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall")
##### For C #####

##### For C++ #####
# set(CMAKE_CXX_STANDARD 11)
# set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++1y -Wall")
#
# add_executable(io-cin cplusplus/io/io-cin.cpp)
##### For C++ #####

add_executable(josephus-cll njucs17-ps-tutorial/josephus-linkedlist/josephus-linkedlist.c)
# add_executable(linkedlisth njucs17-ps-tutorial/josephus-linkedlist/linkedlist.h)

add_executable(struct-point c/struct/struct-point.c)

add_executable(josephus-ll problems/josephus/josephus-linkedlist/josephus-linkedlist.c)
add_executable(ll-test c/data-structure/linkedlist/linkedlist-test.c)

add_executable(scanf-c c/io/scanf-c.c)

add_executable(array-2d c/array/array-2d.c)
add_executable(array-1d c/array/array-1d.c)
add_executable(vla c/array/vla.c)

add_executable(tromino-tiling problems/recursion/tromino-tiling/tromino-tiling.c)
target_link_libraries(tromino-tiling m)

add_executable(tromino-tiling-vla problems/recursion/tromino-tiling/tromino-tiling-vla.c)
target_link_libraries(tromino-tiling-vla m)

add_executable(quick-test c/quick-test.c)

add_executable(hanoi problems/recursion/hanoi.c)

# add_executable(lms problems/dp/longest-monotone-subsequence.c)

# set(SOURCE_FILES problems/josephus.c )
# add_executable(learning_c_cplusplus ${SOURCE_FILES})
