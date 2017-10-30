cmake_minimum_required(VERSION 3.5)
project(learning_c_cplusplus)

set(CMAKE_C_STANDARD 99)
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall")

add_executable(tromino-tiling njucs17-ps-tutorial/tromino-tiling/tromino-tiling.c)
target_link_libraries(tromino-tiling m)

add_executable(tromino-tiling-vla njucs17-ps-tutorial/tromino-tiling/tromino-tiling-vla.c)
target_link_libraries(tromino-tiling-vla m)

add_executable(quick-test c/quick-test.c)

add_executable(hanoi problems/recursion/hanoi.c)

# add_executable(lms problems/dp/longest-monotone-subsequence.c)

# set(SOURCE_FILES problems/josephus.c )
# add_executable(learning_c_cplusplus ${SOURCE_FILES})
