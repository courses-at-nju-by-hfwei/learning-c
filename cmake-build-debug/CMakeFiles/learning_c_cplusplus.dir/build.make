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
CMAKE_COMMAND = /home/hengxin/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/173.3188.25/bin/cmake/bin/cmake

# The command to remove a file.
RM = /home/hengxin/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/173.3188.25/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/hengxin/github-projects/learning-c-cplusplus

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/hengxin/github-projects/learning-c-cplusplus/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/learning_c_cplusplus.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/learning_c_cplusplus.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/learning_c_cplusplus.dir/flags.make

CMakeFiles/learning_c_cplusplus.dir/njucs17-ps-tutorial/io/file-copy.c.o: CMakeFiles/learning_c_cplusplus.dir/flags.make
CMakeFiles/learning_c_cplusplus.dir/njucs17-ps-tutorial/io/file-copy.c.o: ../njucs17-ps-tutorial/io/file-copy.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/hengxin/github-projects/learning-c-cplusplus/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/learning_c_cplusplus.dir/njucs17-ps-tutorial/io/file-copy.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/learning_c_cplusplus.dir/njucs17-ps-tutorial/io/file-copy.c.o   -c /home/hengxin/github-projects/learning-c-cplusplus/njucs17-ps-tutorial/io/file-copy.c

CMakeFiles/learning_c_cplusplus.dir/njucs17-ps-tutorial/io/file-copy.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/learning_c_cplusplus.dir/njucs17-ps-tutorial/io/file-copy.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/hengxin/github-projects/learning-c-cplusplus/njucs17-ps-tutorial/io/file-copy.c > CMakeFiles/learning_c_cplusplus.dir/njucs17-ps-tutorial/io/file-copy.c.i

CMakeFiles/learning_c_cplusplus.dir/njucs17-ps-tutorial/io/file-copy.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/learning_c_cplusplus.dir/njucs17-ps-tutorial/io/file-copy.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/hengxin/github-projects/learning-c-cplusplus/njucs17-ps-tutorial/io/file-copy.c -o CMakeFiles/learning_c_cplusplus.dir/njucs17-ps-tutorial/io/file-copy.c.s

CMakeFiles/learning_c_cplusplus.dir/njucs17-ps-tutorial/io/file-copy.c.o.requires:

.PHONY : CMakeFiles/learning_c_cplusplus.dir/njucs17-ps-tutorial/io/file-copy.c.o.requires

CMakeFiles/learning_c_cplusplus.dir/njucs17-ps-tutorial/io/file-copy.c.o.provides: CMakeFiles/learning_c_cplusplus.dir/njucs17-ps-tutorial/io/file-copy.c.o.requires
	$(MAKE) -f CMakeFiles/learning_c_cplusplus.dir/build.make CMakeFiles/learning_c_cplusplus.dir/njucs17-ps-tutorial/io/file-copy.c.o.provides.build
.PHONY : CMakeFiles/learning_c_cplusplus.dir/njucs17-ps-tutorial/io/file-copy.c.o.provides

CMakeFiles/learning_c_cplusplus.dir/njucs17-ps-tutorial/io/file-copy.c.o.provides.build: CMakeFiles/learning_c_cplusplus.dir/njucs17-ps-tutorial/io/file-copy.c.o


# Object files for target learning_c_cplusplus
learning_c_cplusplus_OBJECTS = \
"CMakeFiles/learning_c_cplusplus.dir/njucs17-ps-tutorial/io/file-copy.c.o"

# External object files for target learning_c_cplusplus
learning_c_cplusplus_EXTERNAL_OBJECTS =

learning_c_cplusplus: CMakeFiles/learning_c_cplusplus.dir/njucs17-ps-tutorial/io/file-copy.c.o
learning_c_cplusplus: CMakeFiles/learning_c_cplusplus.dir/build.make
learning_c_cplusplus: CMakeFiles/learning_c_cplusplus.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/hengxin/github-projects/learning-c-cplusplus/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable learning_c_cplusplus"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/learning_c_cplusplus.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/learning_c_cplusplus.dir/build: learning_c_cplusplus

.PHONY : CMakeFiles/learning_c_cplusplus.dir/build

CMakeFiles/learning_c_cplusplus.dir/requires: CMakeFiles/learning_c_cplusplus.dir/njucs17-ps-tutorial/io/file-copy.c.o.requires

.PHONY : CMakeFiles/learning_c_cplusplus.dir/requires

CMakeFiles/learning_c_cplusplus.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/learning_c_cplusplus.dir/cmake_clean.cmake
.PHONY : CMakeFiles/learning_c_cplusplus.dir/clean

CMakeFiles/learning_c_cplusplus.dir/depend:
	cd /home/hengxin/github-projects/learning-c-cplusplus/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/hengxin/github-projects/learning-c-cplusplus /home/hengxin/github-projects/learning-c-cplusplus /home/hengxin/github-projects/learning-c-cplusplus/cmake-build-debug /home/hengxin/github-projects/learning-c-cplusplus/cmake-build-debug /home/hengxin/github-projects/learning-c-cplusplus/cmake-build-debug/CMakeFiles/learning_c_cplusplus.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/learning_c_cplusplus.dir/depend

