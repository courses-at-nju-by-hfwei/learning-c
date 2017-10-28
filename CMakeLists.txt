cmake_minimum_required(VERSION 3.5)
project(learning_c_cplusplus)

set(CMAKE_C_STANDARD 99)
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall")

# set(SOURCE_FILES problems/josephus.c )

# add_executable(learning_c_cplusplus ${SOURCE_FILES})
add_executable(josephus njucs17-ps-tutorial/josephus/josephus.c)
# add_executable(lms problems/dp/longest-monotone-subsequence.c)
# add_executable(file-copy njucs17-ps-tutorial/io/file-copy.c)
