# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.9

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /home/hengxin/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/173.3531.13/bin/cmake/bin/cmake

# The command to remove a file.
RM = /home/hengxin/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/173.3531.13/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/hengxin/github-projects/learning-c

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/hengxin/github-projects/learning-c/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/struct-point.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/struct-point.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/struct-point.dir/flags.make

CMakeFiles/struct-point.dir/c/struct/struct-point.c.o: CMakeFiles/struct-point.dir/flags.make
CMakeFiles/struct-point.dir/c/struct/struct-point.c.o: ../c/struct/struct-point.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/hengxin/github-projects/learning-c/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/struct-point.dir/c/struct/struct-point.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/struct-point.dir/c/struct/struct-point.c.o   -c /home/hengxin/github-projects/learning-c/c/struct/struct-point.c

CMakeFiles/struct-point.dir/c/struct/struct-point.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/struct-point.dir/c/struct/struct-point.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/hengxin/github-projects/learning-c/c/struct/struct-point.c > CMakeFiles/struct-point.dir/c/struct/struct-point.c.i

CMakeFiles/struct-point.dir/c/struct/struct-point.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/struct-point.dir/c/struct/struct-point.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/hengxin/github-projects/learning-c/c/struct/struct-point.c -o CMakeFiles/struct-point.dir/c/struct/struct-point.c.s

CMakeFiles/struct-point.dir/c/struct/struct-point.c.o.requires:

.PHONY : CMakeFiles/struct-point.dir/c/struct/struct-point.c.o.requires

CMakeFiles/struct-point.dir/c/struct/struct-point.c.o.provides: CMakeFiles/struct-point.dir/c/struct/struct-point.c.o.requires
	$(MAKE) -f CMakeFiles/struct-point.dir/build.make CMakeFiles/struct-point.dir/c/struct/struct-point.c.o.provides.build
.PHONY : CMakeFiles/struct-point.dir/c/struct/struct-point.c.o.provides

CMakeFiles/struct-point.dir/c/struct/struct-point.c.o.provides.build: CMakeFiles/struct-point.dir/c/struct/struct-point.c.o


# Object files for target struct-point
struct__point_OBJECTS = \
"CMakeFiles/struct-point.dir/c/struct/struct-point.c.o"

# External object files for target struct-point
struct__point_EXTERNAL_OBJECTS =

struct-point: CMakeFiles/struct-point.dir/c/struct/struct-point.c.o
struct-point: CMakeFiles/struct-point.dir/build.make
struct-point: CMakeFiles/struct-point.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/hengxin/github-projects/learning-c/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable struct-point"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/struct-point.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/struct-point.dir/build: struct-point

.PHONY : CMakeFiles/struct-point.dir/build

CMakeFiles/struct-point.dir/requires: CMakeFiles/struct-point.dir/c/struct/struct-point.c.o.requires

.PHONY : CMakeFiles/struct-point.dir/requires

CMakeFiles/struct-point.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/struct-point.dir/cmake_clean.cmake
.PHONY : CMakeFiles/struct-point.dir/clean

CMakeFiles/struct-point.dir/depend:
	cd /home/hengxin/github-projects/learning-c/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/hengxin/github-projects/learning-c /home/hengxin/github-projects/learning-c /home/hengxin/github-projects/learning-c/cmake-build-debug /home/hengxin/github-projects/learning-c/cmake-build-debug /home/hengxin/github-projects/learning-c/cmake-build-debug/CMakeFiles/struct-point.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/struct-point.dir/depend
