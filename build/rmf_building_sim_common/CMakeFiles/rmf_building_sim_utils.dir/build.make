# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.26

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /home/wang/.local/lib/python3.10/site-packages/cmake/data/bin/cmake

# The command to remove a file.
RM = /home/wang/.local/lib/python3.10/site-packages/cmake/data/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/wang/rmf_ws/src/rmf/rmf_simulation/rmf_building_sim_common

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/wang/rmf_ws/build/rmf_building_sim_common

# Include any dependencies generated for this target.
include CMakeFiles/rmf_building_sim_utils.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/rmf_building_sim_utils.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/rmf_building_sim_utils.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/rmf_building_sim_utils.dir/flags.make

CMakeFiles/rmf_building_sim_utils.dir/src/utils.cpp.o: CMakeFiles/rmf_building_sim_utils.dir/flags.make
CMakeFiles/rmf_building_sim_utils.dir/src/utils.cpp.o: /home/wang/rmf_ws/src/rmf/rmf_simulation/rmf_building_sim_common/src/utils.cpp
CMakeFiles/rmf_building_sim_utils.dir/src/utils.cpp.o: CMakeFiles/rmf_building_sim_utils.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/wang/rmf_ws/build/rmf_building_sim_common/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/rmf_building_sim_utils.dir/src/utils.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/rmf_building_sim_utils.dir/src/utils.cpp.o -MF CMakeFiles/rmf_building_sim_utils.dir/src/utils.cpp.o.d -o CMakeFiles/rmf_building_sim_utils.dir/src/utils.cpp.o -c /home/wang/rmf_ws/src/rmf/rmf_simulation/rmf_building_sim_common/src/utils.cpp

CMakeFiles/rmf_building_sim_utils.dir/src/utils.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/rmf_building_sim_utils.dir/src/utils.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/wang/rmf_ws/src/rmf/rmf_simulation/rmf_building_sim_common/src/utils.cpp > CMakeFiles/rmf_building_sim_utils.dir/src/utils.cpp.i

CMakeFiles/rmf_building_sim_utils.dir/src/utils.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/rmf_building_sim_utils.dir/src/utils.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/wang/rmf_ws/src/rmf/rmf_simulation/rmf_building_sim_common/src/utils.cpp -o CMakeFiles/rmf_building_sim_utils.dir/src/utils.cpp.s

# Object files for target rmf_building_sim_utils
rmf_building_sim_utils_OBJECTS = \
"CMakeFiles/rmf_building_sim_utils.dir/src/utils.cpp.o"

# External object files for target rmf_building_sim_utils
rmf_building_sim_utils_EXTERNAL_OBJECTS =

librmf_building_sim_utils.so: CMakeFiles/rmf_building_sim_utils.dir/src/utils.cpp.o
librmf_building_sim_utils.so: CMakeFiles/rmf_building_sim_utils.dir/build.make
librmf_building_sim_utils.so: CMakeFiles/rmf_building_sim_utils.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/wang/rmf_ws/build/rmf_building_sim_common/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX shared library librmf_building_sim_utils.so"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/rmf_building_sim_utils.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/rmf_building_sim_utils.dir/build: librmf_building_sim_utils.so
.PHONY : CMakeFiles/rmf_building_sim_utils.dir/build

CMakeFiles/rmf_building_sim_utils.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/rmf_building_sim_utils.dir/cmake_clean.cmake
.PHONY : CMakeFiles/rmf_building_sim_utils.dir/clean

CMakeFiles/rmf_building_sim_utils.dir/depend:
	cd /home/wang/rmf_ws/build/rmf_building_sim_common && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/wang/rmf_ws/src/rmf/rmf_simulation/rmf_building_sim_common /home/wang/rmf_ws/src/rmf/rmf_simulation/rmf_building_sim_common /home/wang/rmf_ws/build/rmf_building_sim_common /home/wang/rmf_ws/build/rmf_building_sim_common /home/wang/rmf_ws/build/rmf_building_sim_common/CMakeFiles/rmf_building_sim_utils.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/rmf_building_sim_utils.dir/depend

