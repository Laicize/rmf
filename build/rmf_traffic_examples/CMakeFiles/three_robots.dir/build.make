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
CMAKE_SOURCE_DIR = /home/wang/rmf_ws/src/rmf/rmf_traffic/rmf_traffic_examples

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/wang/rmf_ws/build/rmf_traffic_examples

# Include any dependencies generated for this target.
include CMakeFiles/three_robots.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/three_robots.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/three_robots.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/three_robots.dir/flags.make

CMakeFiles/three_robots.dir/src/three_robots.cpp.o: CMakeFiles/three_robots.dir/flags.make
CMakeFiles/three_robots.dir/src/three_robots.cpp.o: /home/wang/rmf_ws/src/rmf/rmf_traffic/rmf_traffic_examples/src/three_robots.cpp
CMakeFiles/three_robots.dir/src/three_robots.cpp.o: CMakeFiles/three_robots.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/wang/rmf_ws/build/rmf_traffic_examples/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/three_robots.dir/src/three_robots.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/three_robots.dir/src/three_robots.cpp.o -MF CMakeFiles/three_robots.dir/src/three_robots.cpp.o.d -o CMakeFiles/three_robots.dir/src/three_robots.cpp.o -c /home/wang/rmf_ws/src/rmf/rmf_traffic/rmf_traffic_examples/src/three_robots.cpp

CMakeFiles/three_robots.dir/src/three_robots.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/three_robots.dir/src/three_robots.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/wang/rmf_ws/src/rmf/rmf_traffic/rmf_traffic_examples/src/three_robots.cpp > CMakeFiles/three_robots.dir/src/three_robots.cpp.i

CMakeFiles/three_robots.dir/src/three_robots.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/three_robots.dir/src/three_robots.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/wang/rmf_ws/src/rmf/rmf_traffic/rmf_traffic_examples/src/three_robots.cpp -o CMakeFiles/three_robots.dir/src/three_robots.cpp.s

# Object files for target three_robots
three_robots_OBJECTS = \
"CMakeFiles/three_robots.dir/src/three_robots.cpp.o"

# External object files for target three_robots
three_robots_EXTERNAL_OBJECTS =

three_robots: CMakeFiles/three_robots.dir/src/three_robots.cpp.o
three_robots: CMakeFiles/three_robots.dir/build.make
three_robots: /home/wang/rmf_ws/install/rmf_traffic/lib/librmf_traffic.so
three_robots: /home/wang/rmf_ws/install/rmf_utils/lib/librmf_utils.so
three_robots: CMakeFiles/three_robots.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/wang/rmf_ws/build/rmf_traffic_examples/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable three_robots"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/three_robots.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/three_robots.dir/build: three_robots
.PHONY : CMakeFiles/three_robots.dir/build

CMakeFiles/three_robots.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/three_robots.dir/cmake_clean.cmake
.PHONY : CMakeFiles/three_robots.dir/clean

CMakeFiles/three_robots.dir/depend:
	cd /home/wang/rmf_ws/build/rmf_traffic_examples && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/wang/rmf_ws/src/rmf/rmf_traffic/rmf_traffic_examples /home/wang/rmf_ws/src/rmf/rmf_traffic/rmf_traffic_examples /home/wang/rmf_ws/build/rmf_traffic_examples /home/wang/rmf_ws/build/rmf_traffic_examples /home/wang/rmf_ws/build/rmf_traffic_examples/CMakeFiles/three_robots.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/three_robots.dir/depend

